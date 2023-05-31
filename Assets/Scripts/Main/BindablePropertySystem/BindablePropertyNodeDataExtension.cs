
using System;

namespace Bear
{
    public static class BindablePropertyNodeDataExtension
    {
        public static void SetValue<T>(this IBNode node, string key, T value)
        {
            var data = node.GetOrAddNodeData<BindablePropertyNodeData>();
            data.SetValue(key, value);
        }

        public static void SetValue<T>(this IBNode node, T value)
        {
            var key = typeof(T).ToString();
            var data = node.GetOrAddNodeData<BindablePropertyNodeData>();
            data.SetValue(key, value);
        }

        public static void DeleteValue(this IBNode node, string key)
        {
            var data = node.GetOrAddNodeData<BindablePropertyNodeData>();
            data.RemoveValue(key);
        }

        public static T GetValue<T>(this IBNode node, string key)
        {
            var data = node.GetOrAddNodeData<BindablePropertyNodeData>();
            return data.GetValue<T>(key);
        }

        public static T GetValue<T>(this IBNode node)
        {
            var key = typeof(T).ToString();
            var data = node.GetOrAddNodeData<BindablePropertyNodeData>();
            return data.GetValue<T>(key);
        }

        public static bool TryGetNodeByPath(this IBNode node, out IBNode target, params string[] keys) {
            var root = node;
            foreach (var item in keys)
            {
                if (root.TryGetValue(item, out target))
                {
                    root = target;
                }
                else {
                    
                    return false;
                }
            }

            target = root;
            return true;
        }

        public static IBNode GetOrAddNodeAtPath(this IBNode node, params string[] keys) {
            var root = node;
            foreach (var item in keys)
            {
                if (!root.TryGetValue(item, out IBNode kid))
                {
                    kid = new BNode();
                    root.SetValue(item, kid);
                }
                root = kid;
            }

            return root;
        }

        public static bool TryGetValue<T>(this IBNode node,string key,out T value) {
            var data = node.GetOrAddNodeData<BindablePropertyNodeData>();
            return data.TryGetValue(key,out value);
        }

        public static bool TryGetValue<T>(this IBNode node,  out T value)
        {
            var key = typeof(T).ToString();
            var data = node.GetOrAddNodeData<BindablePropertyNodeData>();
            return data.TryGetValue(key, out value);
        }

        public static Action ListenToValue<T>(this IBNode node, string key, Action<T> action)
        {
            var data = node.GetOrAddNodeData<BindablePropertyNodeData>();
            return data.Register(key, action);
        }

        public static Action ListenToValue<T>(this IBNode node, Action<T> action)
        {

            var key = typeof(T).ToString();
            var data = node.GetOrAddNodeData<BindablePropertyNodeData>();
            return data.Register(key, action);
        }
    }
}