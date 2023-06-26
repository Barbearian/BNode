

namespace Bear
{
    public class ViewParentCreateNodeData : IBNodeData
    {
        BNodeView root;
        public void Detached()
        {
        }

        public void Init(IBNode root)
        {
            if (root is BNodeView view) { 
                this.root = view;
                root.RegisterNodeSignalReceiverAdditively<OnCreateViewSignal>(OnViewCreated);
            }
        }

        public void OnViewCreated(OnCreateViewSignal signal) {
            if (signal.holder.Object is BNodeView view) {
                view.transform.SetParentTo(root.transform,true);
            }
        }
    }
}