using System;

namespace Bear
{
    public class ViewCreateNodeDataBase : IBNodeData
    {
        protected IBNode root;

        public void Detached()
        {
        }


        public void Init(IBNode root)
        {
            this.root = root;
            root.RegisterNodeSignalReceiverAdditively<OnCreateViewSignal>(OnViewCreate);
            root.RegisterNodeSignalReceiverAdditively<DelinkViewSignal>(DelinkView);

        }

        public virtual void OnViewCreate(OnCreateViewSignal signal)
        {

        }

        public virtual void DelinkView(DelinkViewSignal signal)
        {
            var target = root.GetOrAddNodeAtPath(signal.TypeKey);
            target.ReceiveNodeSignal(new OnViewDelinkedSignal()
            {
                Root = root,
            });
        }
    }

    public class ViewNodeDataBase : IBNodeData
    {
        protected IBNode root;
        public ObjectHolderNodeData holder;
        protected Action DOnUpdate;
        public void Detached()
        {
        }

        public virtual void UpdateView(OnCreateViewSignal signal)
        {
            Recycle();
        }

        public void Init(IBNode root)
        {
            this.root = root;
            root.RegisterNodeSignalReceiverAdditively<OnViewDelinkedSignal>(DelinkView);
        }
        public void DelinkView(OnViewDelinkedSignal signal)
        {
            holder.Dispose();
            holder = null;
        }

        protected void Recycle()
        {
            if (holder != null)
            {
                holder.Recycle();
                DOnUpdate?.Invoke();
                DOnUpdate = null;
            }

        }

        protected void InitRecycle(ObjectHolderNodeData holder)
        {

            if (holder.Object is BNodeView view)
            {
                view.gameObject.SetActive(true);
            }

            DOnUpdate += holder.Object.ListenToValue<ObjectPoolState>((x) => {
                if (x == ObjectPoolState.Recycled && holder.Object is BNodeView view)
                {
                    view.gameObject.SetActive(false);
                }
            });
        }
    }
}