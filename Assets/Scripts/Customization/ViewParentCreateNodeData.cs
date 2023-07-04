

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
            root.RegisterNodeSignalReceiverAdditively<OnCreateViewSignal>(TrackingRoot);

        }

        public void OnViewCreated(OnCreateViewSignal signal) {
            if ((!signal.IsUsed) && signal.holder.Object is BNodeView view) {
                var worldposition = view.transform.position;
                var worldRotaiton = view.transform.rotation;
                view.transform.SetParentTo(root.transform);
                view.transform.localPosition = worldposition;
                view.transform.localRotation = worldRotaiton;
            }
        }

        public void TrackingRoot(OnCreateViewSignal signal) {
            var targetNode = signal.Root.GetOrAddNodeAtPath(signal.TypeKey);
            targetNode.SetValue(new ViewRoot() { 
                root = signal.Root
            });
        }
    }

    public struct ViewRoot{
        public IBNode root;
    }
}