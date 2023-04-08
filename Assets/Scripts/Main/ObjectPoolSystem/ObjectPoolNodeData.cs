
using Newtonsoft.Json;
using System.Collections.Generic;
using UnityEngine.Pool;

namespace Bear
{
    public class ObjectPoolNodeData : IBNodeData
    {
        [JsonIgnore]
        public Dictionary<string, ObjectPool<IBNode>> pools = new Dictionary<string, ObjectPool<IBNode>>();
        private IBNode root;
        public void Detached()
        {
        }

        public void Init(IBNode root)
        {
            this.root = root;
        }

        public ObjectPool<IBNode> GetPool(string key)
        {
            if (pools.ContainsKey(key))
            {
                return pools[key];
            }
            else
            {
                var pool = CreatePool(key);
                pools.Add(key, pool);
                return pool;
            }
        }

        //Create a new Object Pool

        private ObjectPool<IBNode> CreatePool(string key) {

            
            var rs = new ObjectPool<IBNode>(ObjectPoolNodeDataExtension.CreateAsset(root,key));
            return rs;
        }


        


    }
}