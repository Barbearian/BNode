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
                DOnPhaseChange?.Invoke(this);
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
                action?.Invoke(this); 
            }

            return this;
        }

    }
}