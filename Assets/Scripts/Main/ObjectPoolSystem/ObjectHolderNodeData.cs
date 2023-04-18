using System;

namespace Bear
{
    public class ObjectHolderNodeData : IBNodeData,ITask
    {
        public IBNode m_Object;
        public IBNode Object { 
            get { return m_Object; }
            set { 
                m_Object = value;
                DOnObjectUpdate?.Invoke(this);

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
        public void Detached()
        {
        }

        public void Init(IBNode root)
        {
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
        }

    }
}