
using System.Collections;
using UnityEngine;
using UnityEngine.Events;
using YooAsset;

namespace Bear
{
    public class YooAssetInitializer : MonoBehaviour
    {
        public EPlayMode mode;
        public EYooAssetInjectMode injectMode;
        public UnityEvent DOnInitialized;
        private void Awake()
        {
            var data = new YooAssetResourceNodeData();
            data.packageName = "Default";
            data.packagePath = "Default";

            if (!SingletonNodeSystem.Root.FindNodeData<YooAssetResourceNodeData>(out var asset))
            {
                YooAssets.Initialize();
                SingletonNodeSystem.Root.AddNodeData(data);
                StartCoroutine("Init", data);
            }

            if (injectMode == EYooAssetInjectMode.Local)
            {
                gameObject.GetOrAddComponent<BNodeView>().AddNodeData(data);
            }


        }

        public IEnumerator Init(YooAssetResourceNodeData data) {
            switch (mode) {
                case EPlayMode.OfflinePlayMode:
                    yield return data.InitOffline();
                    DOnInitialized.Invoke();
                    break;

                case EPlayMode.EditorSimulateMode:
                    yield return data.InitEditor();
                    DOnInitialized.Invoke();
                    break;

            }

        }
    }

    public enum EYooAssetInjectMode
    {
        Local,
        Global,
    }
}