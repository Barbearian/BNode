
using System.Collections.Generic;

namespace Bear
{
    public struct ActionNodeData : IBNodeData,IBNodeSignalReceiver
    {
        public System.Action<IBNodeSignal> DAction;
        public void Detached(){}

        public void Init(IBNode root){}

        public void ReceiveSignal(IBNodeSignal signal)
        {
            DAction(signal);
        }
    }

    public class SignalHandlerNodeData : IBNodeData
    {
        protected IBNode root;
        protected List<string> keys = new List<string>();
        public virtual void Detached()
        {
            root.UnregisterNodeSignalReceiver(keys.ToArray());
        }

        public virtual void Init(IBNode root)
        {
            this.root = root;
        }
    }
}