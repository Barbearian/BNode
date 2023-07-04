
using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Pool;

namespace Bear
{
    public class NodePoolNodeData : IBNodeData
    {
        public Dictionary<string, ObjectPool<IBNode>> pools = new Dictionary<string, ObjectPool<IBNode>>();
        public Func<IBNode, string, ObjectPool<IBNode>> DCreatePool { get; set; } = CreatePool;
        private IBNode root;
        private static ObjectPool<IBNode> CreatePool(IBNode node, string arg2)
        {
            return new ObjectPool<IBNode>(() => {
                IBNode node = new BNode();
                return node;
            },
            actionOnDestroy: (node) => {
                node.Detached();
            });
        }

        public void Detached()
        {
            foreach (var item in pools)
            {
                item.Value.Dispose();
            }

            pools = null;
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
                var pool = DCreatePool(root, key);
                pools.Add(key, pool);
                return pool;
            }
        }
    }

    public class NodePoolInstanceNodeData : IBNodeData
    {
        public ObjectPool<IBNode> fromPool;
        public void Detached()
        {
        }

        public void Init(IBNode root)
        {
            root.RegisterNodeSignalReceiver<ObjectPoolReycleSignal>((x) => {
                fromPool.Release(root);
                Debug.Log("I am recycled");
            });
        }
    }

    public struct ObjectPoolReycleSignal : IBNodeSignal { }
}