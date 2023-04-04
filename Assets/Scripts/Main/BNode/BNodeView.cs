using System.Collections;
using System.Collections.Generic;
using UnityEngine;
namespace Bear
{

    public class BNodeView : MonoBehaviour,IBNode
    {
        private readonly BNode node = new();
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
       

    }
}