using UnityEngine;

namespace Bear
{

    public class ViewNodeData : IBNodeData
    {
        private IBNode m_node;  
        
        public string ViewAddress;

        private ObjectHolderNodeData m_object;

        private GameObject m_view;
        private GameObject View {
            set { 
                m_view = value;
             
            }
            get {
                return m_view;
            } 
        }
        public void Detached()
        {
        }

        public void Init(IBNode root)
        {
            m_node = root;
            
        }

        public ViewNodeData Reveal() {
            Request((x) => {
                x.gameObject.SetActive(true);
            });

            return this; 


        }

        public ViewNodeData MoveTo(Transform anchor) {
            Request((x) => {
                x.transform.MoveTo(anchor);
            });

            return this;

        }

        public ViewNodeData ResetLocalTransform() {
            Request((x) => {
                x.transform.localPosition = Vector3.zero;
                x.transform.localRotation = Quaternion.identity;
               
            });

            return this;
        }

        public ViewNodeData SetParentTo(Transform parentT) {
            Request((x) => {
                x.transform.parent = parentT;
            });

            return this;
        }

        private void Request(System.Action<BNodeView> request) {
            if (m_object == null) {
                m_object = SingletonNodeSystem.Root.RequestObject(ViewAddress);
            }

            m_object.OnLoadComplete((x) => {
                if (x.Object is BNodeView view)
                {
                    request(view);
                }
            });
        }

        public void Hide()
        {
            if (View != null)
            {
                View.SetActive(true);
                return;
            }
        }
    }
}


