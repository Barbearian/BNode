
using System.Collections.Generic;

namespace Bear
{
    public class AvatarModelNodeDataWeaver : WeaverNodeData
    {
        public Dictionary<string, IBNodeSignal> Modification = new Dictionary<string, IBNodeSignal>();
        public Dictionary<string, IBNode> Parts = new Dictionary<string, IBNode>();
        public override void Weave(IBNode node)
        {
        }

        public void ApplyModification(string key, ModifyModelSignal modification) {
            if (!Parts.TryGetValue(key, out var node))
            {
                node = new BNode();
            }

            node.ReceiveNodeSignal(modification.signal);

            Modification[key] = modification.signal;
            Parts[key] = node;

        }
    }

    public class AvatarControllerNodeDataWeaver : WeaverNodeData
    {
        public override void Weave(IBNode node)
        {
        }

       
    }

    public struct ModifyModelSignal : IBNodeSignal
    { 
        public string key;
        public IBNodeSignal signal;
    }

}