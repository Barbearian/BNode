using UnityEngine;

namespace Bear
{
    public static class BodyAnchorExtension 
    {
        public static Transform FindAnchorWithTag(this IBNode node,string tag) { 
            var anchors = node.GetOrAddNodeData<BodyAnchorNodeData>();
            return anchors.FindByTag(tag);
        }
    }
}