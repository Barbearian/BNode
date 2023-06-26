
using Newtonsoft.Json;
using System.Collections.Generic;
using System.Text;
using UnityEngine;
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

        public ObjectPool<IBNode> GetPool(string key, params string[] subkeys)
        {
            StringBuilder builder = new StringBuilder();
            builder.Append(key);
            builder.Append("[");
            for (int i = 0; i < subkeys.Length; i++) {
                builder.Append(subkeys[i]);
                if (i != subkeys.Length-1) { 
                    builder.Append("/");    
                }
            }
            builder.Append("]");
            string newKey = builder.ToString();

            if (pools.ContainsKey(newKey))
            {
                return pools[newKey];
            }
            else
            {
                var pool = CreatePool(key, subkeys);
                pools.Add(newKey, pool);
                return pool;
            }
        }
        //Create a new Object Pool

        private ObjectPool<IBNode> CreatePool(string key) {

            var rs = new ObjectPool<IBNode>(
                () => {
                    var holder = new BNode();
                    var holderData = holder.GetOrAddNodeData<ObjectHolderNodeData>();
                    

                    var resourceNode = new BNode();
                    root.RequestResource<GameObject>(resourceNode, key).OnLoadComplete((x) => {
                        holder.SetValue(new ObjectHolderReference()
                        {
                            reference = x.Resource as GameObject
                        }) ;
                    });
                    return holder;
                },
                actionOnDestroy: (x) => {
                    
                    x.ReceiveNodeSignal(new ObjectHolderDisposeSignal() { isFromPool = true});
                },
                actionOnRelease: (x) =>
                {
                    if (x.FindNodeData<ObjectHolderNodeData>(out var data) && data.Object is BNodeView view) { 
                        view.transform.SetParent(ObjectPoolNodeDataExtension.ObjectPoolView.transform);
                    }
                }

            );

            return rs;
        }

        private ObjectPool<IBNode> CreatePool(string key,params string[] subkeys)
        {
            var rs = new ObjectPool<IBNode>(
                () => {
                    var holder = new BNode();
                    var holderData = holder.GetOrAddNodeData<ObjectHolderNodeData>();

                    var resourceNode = new BNode();
                    root.RequestResource<GameObject>(resourceNode, key).OnLoadComplete((x) => {
                        if (x.Resource is GameObject obj && obj.transform.TryFindKidAtPath(out var kid, subkeys)) {
                            holder.SetValue(new ObjectHolderReference()
                            {
                                reference = kid.gameObject
                            });
                        }
                    });
                    return holder;
                },
                actionOnDestroy: (x) => {
                    x.ReceiveNodeSignal(new ObjectHolderDisposeSignal() { isFromPool = true });
                },
                actionOnRelease: (x) =>
                {
                    if (x.FindNodeData<ObjectHolderNodeData>(out var data) && data.Object is BNodeView view)
                    {
                        view.transform.SetParent(ObjectPoolNodeDataExtension.ObjectPoolView.transform);
                    }
                }

            );

           
            return rs;
        }


    }

    
}

