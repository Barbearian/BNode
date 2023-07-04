
using UnityEngine;

namespace Bear
{
    public static class ResourceNodeDataExtension
    {



        public static ResourceHolderNodeData RequestResource<T>(this IBNode root, IBNode holder, string key) where T:Object
        {
            var resourceNodeData = root.GetOrAddNodeData<ResourceNodeData>();
            return resourceNodeData.Load<T>(key,holder);
            
            

        }


    }
}

