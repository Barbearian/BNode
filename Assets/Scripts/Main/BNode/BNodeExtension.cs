
namespace Bear
{
    public static class BNodeExtension
    {
        //get or add if not exist a nodedata from a node
        public static T GetOrAddNodeData<T>(this IBNode node) where T : class,IBNodeData, new()
        {
            if (node.FindNodeData(out T data)) return data;
            data = new T();
            node.AddNodeData(data);
            return data;
        }

        public static T AddNodeData<T> (this IBNode node) where T : class,IBNodeData, new()
        {
            var data = new T();
            node.AddNodeData(data);
            return data;
        }
    }
}