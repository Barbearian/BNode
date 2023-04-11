using Newtonsoft.Json;
using System;
using UnityEngine;

namespace Bear
{
    public class ResourceHolderNodeData : IBNodeData
    {
        private UnityEngine.Object m_resource;
        public UnityEngine.Object Resource { 
            get { return m_resource; }
            set { 
                m_resource = value;
                DOnResourceUpdate?.Invoke(this);
            }
        }
        public Action DOnResourceLoadFailed;
        private Action<ResourceHolderNodeData> DOnResourceUpdate;

        public void Detached()
        {
        }

        public void Init(IBNode root)
        {
        }

        public void OnLoadComplete(Action<ResourceHolderNodeData> action) {
            DOnResourceUpdate += action;
            if (m_resource != null) {
                action?.Invoke(this);
            }
        }

        
    }

    public class ResourceNode : BNode {
        [JsonIgnore]
        public UnityEngine.Object Resource { get; set; }
    }
}