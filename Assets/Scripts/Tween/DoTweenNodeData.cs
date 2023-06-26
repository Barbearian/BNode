
using DG.Tweening;
using System;
using System.Collections.Generic;

namespace Bear
{
    public class FloatValueTweener
    {
        Tweener Tweener { get; set; }
        public float Value { get; set; }
        public float Current { get; set; }
        public Action<float> callback;
        public void SetValue(float newValue,float duration = 0.5f) {
            if (Tweener != null)
            { 
                Tweener.Kill();
            }
            Tweener = DOTween.To(
                () => Value, 
                (x) => { 
                    Value = x; 
                    callback?.Invoke(x);
                }, newValue, duration);
           
            
        }

        public void ListenToTweenValue(Action<float> action) {
            callback += action;
        }

        public void RemoveListener(Action<float> action) {
            callback -= action;
        }

        public void Stop() {
            Tweener.Kill();
        }
    }

    public class FloatValueTweenerNodeData : IBNodeData
    {
        public Dictionary<string, FloatValueTweener> tweeners = new();
        public void Detached()
        {
            foreach (var item in tweeners.Values)
            {
                item.Stop();
            }

            tweeners.Clear();
        }

        public void Init(IBNode root)
        {
        }

        public void SetValue(string key, float value, float time = 0.5f) {
            if (!tweeners.TryGetValue(key, out var tween))
            {
                tween = new FloatValueTweener();
                tweeners[key] = tween;
            }

            tween.SetValue(value, time);
        }

        public void ListenToTweenValue(string key, Action<float> action) {
            if (!tweeners.TryGetValue(key,out var value)) {
                value = new FloatValueTweener();
                tweeners[key] = value;
            }

            value.ListenToTweenValue(action);
        }

        public void RemoveListener(string key, Action<float> action)
        {
            if (tweeners.TryGetValue(key, out var value))
            {
                value.RemoveListener(action);
            }

            
        }

        public bool TryGetValue(string key, out float value) {
            if (tweeners.TryGetValue(key,out var tweener)) {
                value = tweener.Value;
                return true;
            }

            value = 0f;
            return false;
        }
    }

    public static class FloatValueTweenerNodeDataExtension
    {
        public static void SetTweenValue(this IBNode node,string key,float value,float time = 0.5f) { 
            node.GetOrAddNodeData<FloatValueTweenerNodeData>().SetValue(key,value,time);
        }

        public static void ListenToTweenValue(this IBNode node, string key, Action<float> action)
        {
            node.GetOrAddNodeData<FloatValueTweenerNodeData>().ListenToTweenValue(key, action);
        }

        public static void RemoveTweenValueListener(this IBNode node, string key, Action<float> action)
        {
            node.GetOrAddNodeData<FloatValueTweenerNodeData>().RemoveListener(key, action);
        }

        public static bool TryGetTweenValue(this IBNode node, string key,out float value)
        {
            return node.GetOrAddNodeData<FloatValueTweenerNodeData>().TryGetValue(key,out value);

        }

    }
}