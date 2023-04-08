using System.Collections;
using System.Collections.Generic;
using UnityEngine;
namespace Bear
{
    public interface IBNodeSignal 
    {
        
    }

    public interface IBNodeSignalReceiver {
        public void ReceiveSignal(IBNodeSignal signal);
    }

    public class IBNodeSignalReceiverContainer:IBNodeData
    {
        readonly Dictionary<string, IBNodeSignalReceiver> receivers = new();

        //given a string as key and one IBNodeSignal as input,
        //send signal to corresponding signal receiver in a dictionary
        public void ReceiveSignal(string key, IBNodeSignal signal)
        {
            IBNodeSignalReceiver receiver;
            if (receivers.TryGetValue(key, out receiver))
            {
                receiver.ReceiveSignal(signal);
            }
        }
        //add a signal receiver to the dictionary
        public void AddReceiver(string key, IBNodeSignalReceiver receiver)
        {
            receivers.Add(key, receiver);
        }
        //remove a signal receiver from the dictionary
        public void RemoveReceiver(string key)
        {
            receivers.Remove(key);
        }
        //clear the dictionary
        public void Clear()
        {
            receivers.Clear();
        }

        public void Init(IBNode root){}

        public void Detached()
        {
            receivers.Clear();
        }

        //try get receiver
        public bool TryGetReceiver(string key, out IBNodeSignalReceiver receiver)
        {
            return receivers.TryGetValue(key, out receiver);
        }

        //update receiver
        public void UpdateReceiver(string key, IBNodeSignalReceiver receiver)
        {
            receivers[key] = receiver;
        }


    }
}