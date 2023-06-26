using UnityEngine;
namespace Bear
{

    public class BNodeView : MonoBehaviour,IBNode
    {
        private BNode node = new();
        //implement IBNode interface using node
       public void AddNodeData(IBNodeData data)
       {
            var Nodedata = node.Nodedata;
            var key = data.GetType().ToString();
            if (Nodedata.TryGetValue(key, out var oldData))
            {
                Nodedata.Remove(key);
                oldData.Detached();
            }
            Nodedata.Add(key, data);
            data.Init(this);
        }

        public void Bind(IBNode node) {
            this.node = node as BNode;
        }

        public T AddNodeData<T>() where T : IBNodeData,new()
        {
            var rs = new T();
            AddNodeData(rs);
            return rs;
        }
        public void RemoveNodeData(IBNodeData data)
        {
            node.RemoveNodeData(data);
        }
        public bool FindNodeData<T>(out T data) where T : IBNodeData
        {
            return node.FindNodeData(out data);
        }
        public void Detached()
        {
            node.Detached();
        }

        public void OnDestroy()
        {
            Detached();
        }
    }
}