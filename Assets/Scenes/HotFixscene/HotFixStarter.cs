using IngameDebugConsole;
using QFSW.QC;
using System;
using System.Collections;
using System.IO;
using System.Linq;
using System.Reflection;
using UnityEngine;
using YooAsset;

namespace Bear
{
    public class HotFixStarter : MonoBehaviour
    {
        Assembly hotUpdateAss;
        ResourcePackage package;



        private void Awake()
        {
            DontDestroyOnLoad(gameObject);

            DebugLogConsole.AddCommand("Reload", "Reload Scene", ReloadAsset);
            DebugLogConsole.AddCommand<string, string[]>("Instantiate", "Instantiate Asset", InstantiateObject);
        }

        [ConsoleMethod("Reload", "Reload Asset")]
        [Command("Reload")]
        public void ReloadAsset() {




            // Editor环境下，Hotfix.dll.bytes已经被自动加载，不需要加载，重复加载反而会出问题。
#if !UNITY_EDITOR
        hotUpdateAss = Assembly.Load(File.ReadAllBytes($"{Application.streamingAssetsPath}/Hotfix.dll.bytes"));
        
#else
            // Editor下无需加载，直接查找获得HotUpdate程序集

            hotUpdateAss = System.AppDomain.CurrentDomain.GetAssemblies().First(a => a.GetName().Name == "Hotfix");
           
            //StartCoroutine("InitializeYooAssetEditor");
#endif

            Type type = hotUpdateAss.GetType("Hello");
            type.GetMethod("Run").Invoke(null, null);


        }

        public void InstantiateObject(string mainkey ,string[] paths) {
            SingletonNodeSystem.Root.RequestObject(mainkey,paths);
          
        }

        public void OnInited()
        {
            Debug.Log("Start Loading scene");

            package?.LoadSceneAsync("HotFixScene");
            
        }


    }

    public struct StartSignal : IBNodeSignal {
        public string message;
    }


}

//q: Do I need to unload assembly after not using it?
//a: No, you don't need to unload assemblies. They are unloaded automatically when you load a new scene.

//q: How to unload assembly?
//a: Assembly.Unload() is not supported in Unity. You can use AppDomain to unload assemblies, but it's not recommended.
