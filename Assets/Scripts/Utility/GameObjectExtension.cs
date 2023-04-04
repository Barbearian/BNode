using UnityEngine;
namespace Bear
{
    public static class GameObjectExtension
    {
        public static T GetOrCreateComponent<T>(this GameObject obj)
        where T : Component
        {
            if (obj.TryGetComponent<T>(out var rs))
            {
                return rs;
            }
            else { 
                return obj.AddComponent<T>();
            }
        }
    }
}