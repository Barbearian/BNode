
using System;

namespace Bear
{
    public static class BindablePropertyNodeDataExtension 
    {
        public static void SetValue<T>(this IBNode node,string key,T value) {
            var data = node.GetOrAddNodeData<BindablePropertyNodeData>();
            data.SetValue(key, value); 
        }

        public static T GetValue<T>(this IBNode node, string key)
        {
            var data = node.GetOrAddNodeData<BindablePropertyNodeData>();
            return data.GetValue<T>(key);
        }

        public static Action ListenToValue<T>(this IBNode node, string key,Action<T> action) {
            var data = node.GetOrAddNodeData<BindablePropertyNodeData>();
            return data.Register(key, action);
        }
    }
}