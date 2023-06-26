
using System.Collections;
using UnityEngine;
using YooAsset;

namespace Bear
{
    public class YooAssetInitializer : MonoBehaviour
    {
        public EPlayMode mode;
        private void Awake()
        {
            var data = new YooAssetResourceNodeData();
            data.packageName = "Default";
            data.packagePath = "Default";
            SingletonNodeSystem.Root.AddNodeData(data);

            StartCoroutine("Init",data);

        }

        public IEnumerator Init(YooAssetResourceNodeData data) {
            switch (mode) {
                case EPlayMode.OfflinePlayMode:
                    yield return data.InitOffline();
                    break;

                case EPlayMode.EditorSimulateMode:
                    yield return data.InitEditor();
                    break;

            }

        }
    }
}