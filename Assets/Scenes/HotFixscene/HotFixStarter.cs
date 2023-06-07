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
            // Editor�����£�HotUpdate.dll.bytes�Ѿ����Զ����أ�����Ҫ���أ��ظ����ط���������⡣
#if !UNITY_EDITOR
        Assembly hotUpdateAss = Assembly.Load(File.ReadAllBytes($"{Application.streamingAssetsPath}/Hotfix.dll.bytes"));
#else
            // Editor��������أ�ֱ�Ӳ��һ��HotUpdate����
           
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