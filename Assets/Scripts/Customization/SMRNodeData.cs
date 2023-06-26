

using System.Collections.Generic;
using UnityEngine;

namespace Bear
{
    public class SMRNodeData : RendererNodeData
    {
        SkinnedMeshRenderer smrenderer;
        public List<string> boneNames;

        public void UpdateBoneNames(SkinnedMeshRenderer smrenderer) {
            boneNames = new List<string>();
            foreach (var item in smrenderer.bones)
            {
                boneNames.Add(item.name);
            }
        }

        public void BindBone(BindBoneSignal signal) {
            for (int i = 0; i < boneNames.Count; i++) {
                var bone = signal.bones[boneNames[i]];
                smrenderer.bones[i] = bone;
            }
        }

        public void ChangeBlendShape(ChangeBlendShapeSignal signal) {
            foreach (var item in signal.blends)
            {
                smrenderer.SetBlendShapeWeight(item.Key,item.Value);
            }
        }

        public override void SetMeshRenderer(Renderer mrenderer)
        {
            base.SetMeshRenderer(mrenderer);
            if (mrenderer is SkinnedMeshRenderer renderer) {
                smrenderer = renderer;
            }
        }


    }

    public struct BindBoneSignal{
        public Dictionary<string,Transform> bones;
    }

    public struct ChangeBlendShapeSignal {
        public Dictionary<int, float> blends;
    }
}