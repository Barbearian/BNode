
using UnityEngine;

namespace Bear
{
    public static class BNodeSignalReceiverSystem
    {
        public static void ReceiveNodeSignal(this IBNode node, IBNodeSignal signal) {
            if (!node.FindNodeData<IBNodeSignalReceiverContainer>(out var receiver)) {
                receiver = new IBNodeSignalReceiverContainer();
                node.AddNodeData(receiver);
            }

            var key = signal.GetType().ToString();
            receiver.ReceiveSignal(key, signal);
        }

        //register an signal receiver to node, with a string key and signal receiver as input
        //if there is no signal receiver container in the node, create one
        //add the signal receiver to the container with the key
        public static void RegisterNodeSignalReceiver(this IBNode node, string key, IBNodeSignalReceiver receiver)
        {
            if (!node.FindNodeData<IBNodeSignalReceiverContainer>(out var receiverContainer)) {
                receiverContainer = new IBNodeSignalReceiverContainer();
                node.AddNodeData(receiverContainer);
            }
            receiverContainer.AddReceiver(key, receiver);
        }
        //unregister an signal receiver from node, with a string key and signal receiver as input
        //if there is no signal receiver container in the node, do nothing
        //remove the signal receiver from the container with the key
        public static void UnregisterNodeSignalReceiver(this IBNode node, string key, IBNodeSignalReceiver receiver) {
            if (!node.FindNodeData<IBNodeSignalReceiverContainer>(out var receiverContainer))
                return;
        
            receiverContainer.RemoveReceiver(key);        
        }

        //register using generic type T as key
        public static void RegisterNodeSignalReceiver<T>(this IBNode node, IBNodeSignalReceiver receiver)
        {
            RegisterNodeSignalReceiver(node, typeof(T).ToString(), receiver);
        }
        //unregister using generic type T as key
        public static void UnregisterNodeSignalReceiver<T>(this IBNode node, IBNodeSignalReceiver receiver)
        {
            UnregisterNodeSignalReceiver(node, typeof(T).ToString(), receiver);
        }
    }
}