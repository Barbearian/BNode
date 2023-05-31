


namespace Bear
{
    public static class NetworkWeaverExtension 
    {
        public static void Weave(this IBNode weaver, IBNode root) {
            weaver.ReceiveNodeSignal(new WeaveSignal() { 
                root = root
            });
        }        
    }

    public struct WeaveSignal : IBNodeSignal
    {
        public IBNode root;
    }

    public abstract class WeaverNodeData : IBNodeData
    {
        public virtual void Detached(){}

        public virtual void Init(IBNode root)
        {
            root.RegisterNodeSignalReceiverAdditively<WeaveSignal>((x) => {
                Weave(x.root);
            });
        }

        public abstract void Weave(IBNode node);
    }
}