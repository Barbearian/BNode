using System.Collections;
using System.Collections.Generic;
using UnityEngine;

namespace Bear
{
    public static class NodeSerializerNodeDataExtension
    {
        public static void SaveTo(this IBNode node,string path) {
            new NodeSerializerNodeData().Save(node,path);

        }

        public static IBNode PathToNode(this string path) {
            return new NodeSerializerNodeData().Load(path);
        }
    }
}