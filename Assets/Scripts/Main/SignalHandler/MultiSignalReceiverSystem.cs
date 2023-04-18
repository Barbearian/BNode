using System.Collections.Generic;

namespace Bear
{
    public interface IMultiSignalReceiver: IBNodeSignalReceiver
    {
        public void Add(IBNodeSignalReceiver receiver);
        public void Remove(IBNodeSignalReceiver receiver);
    }

    public class MultiSignalReceiver : IMultiSignalReceiver
    {
        public List<IBNodeSignalReceiver> receivers = new List<IBNodeSignalReceiver>();
        public void ReceiveSignal(IBNodeSignal signal)
        {
            foreach (IBNodeSignalReceiver receiver in receivers) { receiver.ReceiveSignal(signal); }
        }
        public void Add(IBNodeSignalReceiver receiver) {
            receivers.Add(receiver);
        }
        public void Remove(IBNodeSignalReceiver receiver) { 
            receivers.Remove(receiver);
        }

    }
    public static class MultiSignalReceiverSystem 
    {
        public static void RegisterNodeSignalReceiverAdditively(this IBNode root,string key,IBNodeSignalReceiver receiver) {
            var actionNodeData = root.GetOrAddNodeData<IBNodeSignalReceiverContainer>();
            if (!actionNodeData.TryGetReceiver(key, out var myReceiver))
            {
                myReceiver = new MultiSignalReceiver();
                root.RegisterNodeSignalReceiver(key, myReceiver);
            }
            else {
                if (myReceiver is IMultiSignalReceiver mReceiver)
                {
                    mReceiver.Add(receiver);
                }
                else {
                    var newReceiver = new MultiSignalReceiver();
                    newReceiver.Add(myReceiver);
                    newReceiver.Add(receiver);
                    root.RegisterNodeSignalReceiver(key, newReceiver);

                }
            }

        }

        public static void UnregisterNodeSignalReceiver(this IBNode root, string key, IBNodeSignalReceiver receiver) {
            var actionNodeData = root.GetOrAddNodeData<IBNodeSignalReceiverContainer>();
            if (actionNodeData.TryGetReceiver(key, out var myReceiver))
            {
                if (myReceiver is IMultiSignalReceiver mReceiver)
                {
                    mReceiver.Remove(receiver);
                }
                else if(myReceiver.Equals(receiver)){
                    root.UnregisterNodeSignalReceiver(key);
                }
                
            }
           
        }

     
    }
}