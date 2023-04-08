using System;
using System.Collections.Generic;
using UnityEngine.InputSystem;

namespace Bear
{
    public class InputNodeData : IBNodeData
    {
        private PlayerInput input;
        private Dictionary<string, RequestPlayerInputSignal> map = new Dictionary<string, RequestPlayerInputSignal>();
        
        public void Detached()
        {
        }

        public void Init(IBNode root)
        {
            root.RegisterNodeSignalReceiver<InitInputSignal>((x) => {
                InitInput(x.input);
            });

            //register a signal receiver for the request player input signal
            root.RegisterNodeSignalReceiver<RequestPlayerInputSignal>((x) => {
                if (this.input != null)
                {
                    x.DOnSuccess?.Invoke(this.input);
                }

                map[x.key] = x;
            });


        }

        public void InitInput(PlayerInput input) {
            this.input = input;

            //invoke all the signals that were waiting for the input to be initialized
            foreach (var item in map)
            {
                item.Value.DOnSuccess?.Invoke(this.input);
            }
        }
    }

    public struct InitInputSignal : IBNodeSignal
    {
        public PlayerInput input;
    }

    public struct RequestPlayerInputSignal : IBNodeSignal {
        public Action<PlayerInput> DOnSuccess;
        public string key;
    }
}