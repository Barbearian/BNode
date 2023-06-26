using System;

namespace Bear
{
    public class DisposeNodeData : IBNodeData
    {
        public Action DOnDispose;

        public void Detached()
        {
            DOnDispose?.Invoke();
        }

        public void Init(IBNode root)
        {
        }
    }

    public static class DisposeNodeDataExtension 
    {
        public static Action OnDisposed(this IBNode node, Action action) { 
            var dondispose = node.GetOrAddNodeData<DisposeNodeData>();
            dondispose.DOnDispose += action;
            return () => dondispose.DOnDispose -= action;
        }
    }
}