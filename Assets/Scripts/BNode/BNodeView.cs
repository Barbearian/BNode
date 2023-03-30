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
            node.AddNodeData(data);
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