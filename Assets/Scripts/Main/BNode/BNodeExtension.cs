
namespace Bear
{
    public static class BNodeExtension
    {
        //get or create if not exist a nodedata from a node
        public static T GetOrCreateNodeData<T>(this IBNode node) where T : class,IBNodeData, new()
        {
            if (node.FindNodeData(out T data)) return data;
            data = new T();
            node.AddNodeData(data);
            return data;
        }
    }
}