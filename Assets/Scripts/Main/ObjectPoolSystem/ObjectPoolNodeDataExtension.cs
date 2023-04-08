using System;
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


        public static Func<IBNode> CreateHolder(IBNode root,string resourceKey) {
            return () =>
            {
                var objectNode = new BNode();
                var objectholder = objectNode.AddNodeData<ObjectHolderNodeData>();

                var resourceNode = new BNode();
                root.RequestResource<Object>(resourceNode, resourceKey).OnLoadComplete((x) => {
                    if (x.Resource is BNodeView view)
                    {
                        objectholder.Object = UnityEngine.Object.Instantiate(view);
                    }
                    else {
                        objectholder.Object = x.Resource;
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


