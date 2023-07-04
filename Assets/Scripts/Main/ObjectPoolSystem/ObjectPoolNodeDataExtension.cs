using System;
using UnityEngine;

namespace Bear
{
    public static class ObjectPoolNodeDataExtension
    {

        public static ObjectHolderNodeData RequestObject(this IBNode node, string resourceKey) {
            //create an object pool if not exist
            var pool = node.GetOrAddNodeData<ObjectPoolNodeData>();
            var objPool = pool.GetPool(resourceKey);
            var data = objPool.Get().GetOrAddNodeData<ObjectHolderNodeData>();
            data.pool = objPool;

            return data;
        }

        public static ObjectHolderNodeData RequestObject(this IBNode node, string resourceKey, params string[] subkeys)
        {
            //create an object pool if not exist
            var pool = node.GetOrAddNodeData<ObjectPoolNodeData>();

            var objPool = pool.GetPool(resourceKey, subkeys);
            var data = objPool.Get().GetOrAddNodeData<ObjectHolderNodeData>();

            data.pool = objPool;
            return data;
        }

        public static ObjectHolderNodeData RequestObject(this IBNode node, string[] subkeys)
        {
            if (subkeys.Length == 1) {
                return node.RequestObject(subkeys[0]);
            } else if (subkeys.Length > 1) {
                string[] newsubkeys = new string[subkeys.Length - 1];
                Array.Copy(subkeys, 1, newsubkeys, 0, subkeys.Length - 1);
                return node.RequestObject(subkeys[0], newsubkeys);
            }

            return null;
        }

        private static BNodeView _ObjectView;
        private static bool hasObjectView;
        public static BNodeView ObjectPoolView {
            get {
                if (!hasObjectView) { 
                    _ObjectView = new GameObject("ObjectPool").AddComponent<BNodeView>();
                    GameObject.DontDestroyOnLoad(_ObjectView);
                    hasObjectView= true;
                }

                return _ObjectView;
            }
        }

       
    }


}


