using System;
using System.Collections.Generic;

namespace Bear
{
    public class BindablePropertyNodeData : IBNodeData
    {
        public Dictionary<string, BindableProperty> BProperties = new Dictionary<string, BindableProperty>();
        public void Detached()
        {
            BProperties.Clear();
        }

        public void Init(IBNode root)
        {
        }

        public void SetValue<T>(string key, T value) {
            if (!BProperties.TryGetValue(key, out var bProperty))
            {
                bProperty = new BindableProperty();
                BProperties[key] = bProperty;
            }

            bProperty.SetValue(value);
        }

        public T GetValue<T>(string key) {
            if (!BProperties.TryGetValue(key, out var bProperty) ){
                return default;
            }
            else {
                return bProperty.GetValue<T>();
            }
        }

        public Action Register<T>(string key,Action<T> listener) {
            if (!BProperties.TryGetValue(key, out var bProperty))
            {
                bProperty = new BindableProperty();
                BProperties[key] = bProperty;
            }
            return bProperty.RegisterAction(listener);
        }


    }
}