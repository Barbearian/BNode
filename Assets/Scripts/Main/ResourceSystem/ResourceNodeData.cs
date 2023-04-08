using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

namespace Bear
{

    public class ResourceNodeData : IBNodeData
    {
        public Dictionary<string, IBNode> resources = new Dictionary<string, IBNode>();
        public void Detached()
        {
        }

        
        public void Init(IBNode root)
        {
        }

        public ResourceHolderNodeData Load<T>(string Key, IBNode resourceHolder) { 
                        
            if (resources.ContainsKey(Key))
            {
                return resources[Key].GetOrAddNodeData<ResourceHolderNodeData>();
            }
            else
            {
                var holder = CreateHolder<T>(Key, resourceHolder);
                resources.Add(Key, resourceHolder);
                return holder;
            }

        }

        private ResourceHolderNodeData CreateHolder<T>(string key, IBNode resourceHolder)
        {
            var holder = resourceHolder.GetOrAddNodeData<ResourceHolderNodeData>();
            //if T is Object then add BNodeView
            if (typeof(T) == typeof(Object))
            {
                holder.Resource = Resources.Load(key).AddComponent<BNodeView>();
            }
            else
            {
                holder.Resource = new ResourceNode()
                {
                    Resource = Resources.Load(key)
                };
            }
            return holder;
        }
        
        



    }


}