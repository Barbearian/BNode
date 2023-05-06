using System;
using System.Collections.Generic;
using System.Security.Claims;
using UnityEngine.InputSystem;

namespace Bear
{
    public class InputNodeData : IBNodeData
    {
        public PlayerInput input;
        private Dictionary<string, RequestPlayerInputSignal> map = new Dictionary<string, RequestPlayerInputSignal>();
        public Dictionary<string,Action<InputAction.CallbackContext>> registeredActions = new Dictionary<string, Action<InputAction.CallbackContext>>();
        public void Detached()
        {
        }

        public void Init(IBNode root)
        {
            if (root is BNodeView view && view.TryGetComponent<PlayerInput>(out var input)) { 
                InitInput(input);
            }

            root.RegisterNodeSignalReceiver<InitInputSignal>((x) => {
                InitInput(x.input);
            });

            //register a signal receiver for the request player input signal
            root.RegisterNodeSignalReceiver<RequestPlayerInputSignal>((x) => {
                if (this.input != null)
                {
                    x.DOnSuccess?.Invoke(this);
                }

                map[x.key] = x;
            });


        }

        public void InitInput(PlayerInput input) {
            this.input = input;

            //invoke all the signals that were waiting for the input to be initialized
            foreach (var item in map)
            {
                item.Value.DOnSuccess?.Invoke(this);
            }
        }
    }

    public struct InitInputSignal : IBNodeSignal
    {
        public PlayerInput input;
    }

    public struct RequestPlayerInputSignal : IBNodeSignal {
        public Action<InputNodeData> DOnSuccess;
        public string key;
    }
}