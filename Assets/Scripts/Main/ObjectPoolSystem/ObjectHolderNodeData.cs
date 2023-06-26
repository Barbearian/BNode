
using System;
using UnityEngine;
using UnityEngine.Pool;

namespace Bear
{
    public class ObjectHolderNodeData : IBNodeData,ITask
    {
        public IBNode m_Object;
        public ObjectPool<IBNode> pool;
        public IBNode root;
        public IBNode Object { 
            get { return m_Object; }
            set { 
                m_Object = value;

                Phase = ETaskPhase.End;
            }
        }

        private ETaskPhase m_Phase = ETaskPhase.Running;
        public ETaskPhase Phase { 
            get { return m_Phase; } 
            set {
                m_Phase = value;
                InternalComplete();
            } 
        
        }

        public Action<ITask> DOnPhaseChange { get; set; }

        private Action<ObjectHolderNodeData> DOnObjectUpdate;
        public void Detached(){ }

        public void Init(IBNode root)
        {
            this.root = root;
            root.ListenToValue<ObjectHolderReference>((x) => {
                Object = UnityEngine.Object.Instantiate(x.reference).GetOrAddComponent<BNodeView>();
            });
            root.ListenToValue<ObjectHolderDisposeSignal>((x) => {
                if (x.isFromPool) Object.SetValue(ObjectPoolState.PreDisposed);
                Dispose();
            });
        }

        public ObjectHolderNodeData OnLoadComplete(Action<ObjectHolderNodeData> action) {
            DOnObjectUpdate += action;
            if(m_Object != null) {
                InternalComplete();

            }

            return this;
        }

        private void InternalComplete()
        {

            DOnObjectUpdate?.Invoke(this);
            DOnObjectUpdate = null;


            Object.SetValue(this);
            Object.SetValue(ObjectPoolState.Active);
        }

        public void Recycle() {
            Object.SetValue(ObjectPoolState.Recycled);
            pool.Release(root);

            Debug.Log("Released");
        }

        public void Dispose() {
            if(Object.TryGetValue<ObjectPoolState>(out var state) && state == ObjectPoolState.Recycled) {
                return; 
            }

            Object.SetValue(ObjectPoolState.Disposed);
            if (Object is BNodeView view)
            {
                UnityEngine.Object.Destroy(view.gameObject);
            }
        }



    }

    public class ObjectPoolInstanceNodeData : IBNodeData
    {
        protected IBNode root;
        protected Action OnDeregister;
        protected ObjectHolderNodeData holder;
        public void Detached()
        {
            OnDeregister?.Invoke();
        }

        public virtual void Init(IBNode root)
        {
            this .root = root;
            OnDeregister+= root.ListenToValue<ObjectPoolState>(Listener);

            root.ListenToValue<ObjectHolderNodeData>((x) => {
                holder = x;
            });
        }

        public void Listener(ObjectPoolState state) {
            switch (state)
            {
                case ObjectPoolState.Recycled:
                    OnRecycle();
                    break;

                case ObjectPoolState.Active:
                    OnSpawn();
                    break;
            }
        }

        public virtual void OnSpawn() { 
        
        }

        public virtual void OnRecycle() { 
        
        }
    }

    public struct ObjectHolderDisposeSignal : IBNodeSignal
    {
        public bool isFromPool;
    }

    public struct ObjectHolderReference
    {
        public GameObject reference;
    }

    public enum ObjectPoolState 
    { 

        Recycled,
        Active,
        PreDisposed,
        Disposed,
    }
}