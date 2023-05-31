

namespace Bear
{
    public class ItemManagerNodeData : IBNodeData
    {
        private IBNode ActiveItems = new BNode();
        public void Detached()
        {

        }

        public void Init(IBNode root)
        {
            
        }

        public void AttachItem(string key,IBNode item) { 
            ActiveItems.SetValue(key, item);
        }

        public void RemoveItem(string key)
        {
            ActiveItems.DeleteValue(key);
        }

        public void Act(ItemInputActSignal signal) {
            ActiveItems.GetValue<IBNode>(signal.key)?.ReceiveNodeSignal(signal.signal);
        }

      

    }

    public struct ItemInputActSignal {
        public string key;
        public IBNodeSignal signal;
    }
}