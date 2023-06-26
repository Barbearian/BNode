
using UnityEngine;

namespace Bear
{
    public static class CustomizationExtension
    {
        public static BNodeView ToCustomizeView(this GameObject obj) { 
            var root = obj.GetOrAddComponent<BNodeView>();
            root.AddNodeData(new ViewTreeNodeData());
            root.AddNodeData(new MRViewCreateNodeData());
            root.AddNodeData(new ModifyViewCreateNodeData());
            root.AddNodeData(new ViewParentCreateNodeData());
            root.AddNodeData(new BoneViewCreateNodeData());
            root.AddNodeData(new SMRViewCreateNodeData());
            return root;
        }
    }
}