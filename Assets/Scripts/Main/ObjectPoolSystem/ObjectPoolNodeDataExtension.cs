using System;
using Unity.VisualScripting;

namespace Bear
{
    public static class ObjectPoolNodeDataExtension
    {
        public static Func<IBNode,string, Func<IBNode>> CreateAsset { get; set; } = CreateHolder;
        public static Func< string, Func<IBNode>> CreateGlobalAsset { get; set; } = CreateHolder;


        public static ObjectHolderNodeData RequestObject(this IBNode node, string resourceKey) {
            //create an object pool if not exist
            var pool = node.GetOrAddNodeData<ObjectPoolNodeData>();
            return pool.GetPool(resourceKey).Get().GetOrAddNodeData<ObjectHolderNodeData>();

        }

        public static ObjectHolderNodeData RequestObject(this IBNode node, string resourceKey,Action<ObjectHolderNodeData> oncomplete)
        {
            var request = node.RequestObject(resourceKey);
            request.OnLoadComplete(oncomplete);
            return request;
        }


        public static Func<IBNode> CreateHolder(IBNode root,string resourceKey) {
            return () =>
            {
                var objectNode = new BNode();
                var objectholder = objectNode.AddNodeData<ObjectHolderNodeData>();

                var resourceNode = new BNode();
                root.RequestResource<UnityEngine.Object>(resourceNode, resourceKey).OnLoadComplete((x) => {
                    if (x.Resource is UnityEngine.Object view)
                    {
                        objectholder.Object = UnityEngine.Object.Instantiate(view).GetOrAddComponent<BNodeView>();
                    }
                    
                });
                return objectNode;
            };
        }

        public static Func<IBNode> CreateHolder(string resourceKey) {
            return CreateHolder(SingletonNodeSystem.Root,resourceKey);
        }


    }


}


