
using UnityEngine;

namespace Bear
{
    public static class CustomizationExtension
    {
        public static BNodeView ToCustomizeView(this GameObject obj)
        {
            var root = obj.GetOrAddComponent<BNodeView>();

            root.GetOrAddNodeData<ViewTreeNodeData>();
            root.GetOrAddNodeData<MRViewCreateNodeData>();
            root.GetOrAddNodeData<ModifyViewCreateNodeData>();
            root.GetOrAddNodeData<ViewParentCreateNodeData>();
            root.GetOrAddNodeData<BoneViewCreateNodeData>();
            root.GetOrAddNodeData<SMRViewCreateNodeData>();
            return root;
        }

        public static BNodeView ToCustomizeView(this GameObject obj, bool isLocal)
        {
            var root = obj.ToCustomizeView();
            if (isLocal && root.FindNodeData<ViewTreeNodeData>(out var data))
            {
                data.ObjectPool = root;
            }

            return root;
        }

        public static BNodeView ToCustomizeView(this GameObject obj, IBNode objectPool)
        {
            var root = obj.ToCustomizeView();
            if (root.FindNodeData<ViewTreeNodeData>(out var data))
            {
                data.ObjectPool = objectPool;
            }

            return root;
        }

    }
}