using System;

namespace Bear
{
    public class ObjectHolderNodeData : IBNodeData
    {
        public IBNode m_Object;
        public IBNode Object { 
            get { return m_Object; }
            set { 
                m_Object = value;
                DOnObjectUpdate?.Invoke(this);
            }
        }

        private Action<ObjectHolderNodeData> DOnObjectUpdate;
        public void Detached()
        {
        }

        public void Init(IBNode root)
        {
        }

        public void OnLoadComplete(Action<ObjectHolderNodeData> action) {
            DOnObjectUpdate += action;
            if(m_Object != null) {
                action?.Invoke(this); 
            }
        }
    }
}