
using System;
using System.Collections;
using YooAsset;
namespace Bear
{
    public class YooAssetResourceNodeData : IBNodeData
    {
        ResourcePackage package;
        public string packagePath;
        public string packageName = "Default";
        public Action DOnInited;
        public void Detached()
        {
        }

        public void Init(IBNode root)
        {
            var resourceNode = root.GetOrAddNodeData<ResourceNodeData>();
            YooAssets.Initialize();
            package = YooAssets.CreatePackage(packageName);
            resourceNode.ResourceLoader = () => { return new YooAssetLoader() { package = package }; };
            
        }

        public IEnumerator InitEditor() 
        {
            var initParameters = new EditorSimulateModeParameters();
            initParameters.SimulateManifestFilePath = EditorSimulateModeHelper.SimulateBuild(packagePath);
            yield return package.InitializeAsync(initParameters);
            OnInited();

        }

        public IEnumerator InitOffline() 
        {
            var initParameters = new OfflinePlayModeParameters();
            yield return package.InitializeAsync(initParameters);
            OnInited();

        }

        private void OnInited()
        {
            DOnInited?.Invoke();
        }

        public void InitOnline() 
        {
        }
    }

    public struct YooAssetLoader : IResourceLoader
    {
        public UnityEngine.Object Resource { get; set; }
        public ResourcePackage package { get; set; }
        AssetOperationHandle operationHandle;
        public void LoadAsync<T>(string path, Action<T> DOnComplete) where T : UnityEngine.Object
        {
            operationHandle = package.LoadAssetAsync<T>(path);
            operationHandle.Completed += (x) => {
                 DOnComplete.Invoke(x.AssetObject as T);
             };
        }

        public void Release()
        {
            operationHandle?.Release();
        }
    }
}