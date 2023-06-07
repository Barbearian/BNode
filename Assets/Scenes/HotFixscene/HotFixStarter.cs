using System;
using System.Linq;
using System.Reflection;
using UnityEngine;

namespace Bear
{
    public class HotFixStarter : MonoBehaviour
    {
        void Start()
        {
            // Editor环境下，HotUpdate.dll.bytes已经被自动加载，不需要加载，重复加载反而会出问题。
#if !UNITY_EDITOR
        Assembly hotUpdateAss = Assembly.Load(File.ReadAllBytes($"{Application.streamingAssetsPath}/Hotfix.dll.bytes"));
#else
            // Editor下无需加载，直接查找获得HotUpdate程序集
           
            Assembly hotUpdateAss = System.AppDomain.CurrentDomain.GetAssemblies().First(a => a.GetName().Name == "Hotfix");
#endif

            Type type = hotUpdateAss.GetType("Hello");
            type.GetMethod("ReceiveNodeSignal").Invoke(null, new object[]{ new StartSignal() { message = "Hello world" } });

            IBNode node = type.GetMethod("GetRoot").Invoke(null, null) as IBNode;
            node.ReceiveNodeSignal(new StartSignal() { 
                message = "Hello Bear",
            });
        }
    }

    public struct StartSignal : IBNodeSignal {
        public string message;
    }
}