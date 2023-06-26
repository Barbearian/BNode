using System;
using UnityEngine;

namespace Bear
{
    public class RendererNodeData : IBNodeData
    {
        Renderer mrenderer;
        public void Detached()
        {
        }

        public void Init(IBNode root)
        {

        }

        public virtual void SetMeshRenderer(Renderer mrenderer) { 
            this.mrenderer = mrenderer;
        }

        public void FetchMaterial(FetchMaterialSignal signal) {
            signal.DOnFetchedMaterial.Invoke(mrenderer.materials[signal.index]);
        }

    }

    public struct FetchMaterialSignal : IBNodeSignal
    {
        public int index;
        public Action<Material> DOnFetchedMaterial;
    }
}