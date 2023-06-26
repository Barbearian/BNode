using System;
using System.Collections.Generic;
using UnityEngine;
using Object = UnityEngine.Object;

namespace Bear
{

    public class ResourceNodeData : IBNodeData
    {
        public Dictionary<string, IBNode> resources = new Dictionary<string, IBNode>();
        public Func<IResourceLoader> ResourceLoader = ResourceFileLoader.Make;
        public void Detached()
        {
        }

        
        public void Init(IBNode root)
        {
        }

        public ResourceHolderNodeData Load<T>(string Key, IBNode resourceHolder) where T:Object{ 
                        
            if (resources.ContainsKey(Key))
            {
                return resources[Key].GetOrAddNodeData<ResourceHolderNodeData>();
            }
            else
            {
                var holder = CreateHolder<T>(Key, resourceHolder);
                resources.Add(Key, resourceHolder);
                return holder;
            }

        }

        private ResourceHolderNodeData CreateHolder<T>(string key, IBNode resourceHolder) where T : Object 
        {
            var holder = resourceHolder.GetOrAddNodeData<ResourceHolderNodeData>();

            ResourceLoader().LoadAsync<T> (key, (resource) =>
            {
                holder.Resource = resource;
            });

            return holder;
        }
        
        



    }

    public interface IResourceLoader
    {
        public void LoadAsync<T>(string path,Action<T> DOnComplete) where T: Object;
        public void Release();
        public Object Resource { get; }
    }

    public struct ResourceFileLoader : IResourceLoader
    {

        public static Func<IResourceLoader> Make = () => { return new ResourceFileLoader(); };
        public Object Resource { get; set; }

        void IResourceLoader.LoadAsync<T>(string path, Action<T> DOnComplete)
        {
            
            Resource = Resources.Load<T>(path);
            DOnComplete.Invoke(Resource as T);
        }

        public void Release()
        {
            Resources.UnloadAsset(Resource);
        }
    }
}