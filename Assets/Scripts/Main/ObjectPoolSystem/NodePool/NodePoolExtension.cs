
namespace Bear
{
    public static class NodePoolExtension 
    {
        public static IBNode RequestNode(this IBNode root, string key)
        {
            var pool = root.GetOrAddNodeData<NodePoolNodeData>().GetPool(key);
            var node = pool.Get();
            node.GetOrAddNodeData<NodePoolInstanceNodeData>().fromPool = pool;
            return node;
        }

    }
}