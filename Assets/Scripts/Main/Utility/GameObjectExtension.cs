using UnityEngine;
namespace Bear
{
    public static class GameObjectExtension
    {
        public static T GetOrAddComponent<T>(this GameObject obj)
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

        public static bool FindKidWithTag(this Transform transform,string tag,out Transform rs) {
            foreach (var item in transform.GetComponentsInChildren<Transform>())
            {
                if (item.CompareTag(tag)) {
                    rs = item;
                    return true;
                }
            }
            rs = null;
            return false;
        
        }

        public static bool TryFindKidAtPath(this Transform transform,out Transform kid, params string[] kids) {
            foreach (var item in kids)
            {
                transform = transform.Find(item);
                if (!transform) {
                    kid = transform;
                    return false;
                }
            }

            kid = transform;
            return true;
            
        }
    }


}