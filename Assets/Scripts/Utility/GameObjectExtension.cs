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

        public static T MoveTo<T>(this T obj,Transform target)
        where T : Component
        { 
            obj.transform.position = target.position;
            return obj;
        }

        public static T SetParentTo<T>(this T obj, Transform target,bool resetPosition = true)
        where T : Component
        {
            obj.transform.parent = target;
            if(resetPosition)
            {
                obj.transform.position = target.position;
            }
            return obj;
        }
    }


}