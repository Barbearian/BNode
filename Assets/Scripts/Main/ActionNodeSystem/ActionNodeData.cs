
using System.Collections.Generic;

namespace Bear
{
    public class ActionSignalReceiver : IBNodeSignalReceiver
    {
        public System.Action<IBNodeSignal> DAction;

        public void ReceiveSignal(IBNodeSignal signal)
        {
            DAction(signal);
        }

        public void RemoveAction(System.Action<IBNodeSignal> action) { 
            DAction -= action;
        }

        public void AddAction(System.Action<IBNodeSignal> action)
        {
            DAction += action;
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