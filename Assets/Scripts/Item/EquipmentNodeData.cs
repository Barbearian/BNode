using UnityEngine;

namespace Bear
{
    public class EquipmentNodeData : IBNodeData
    {
        public ViewNodeData view;


        public void Detached()
        {
        }


        public void Init(IBNode root)
        {
            view = root.GetOrAddNodeData<ViewNodeData>();
            root.RegisterNodeSignalReceiver<OnEquippedNodeSignal>((x) => {
                var anchor = x.root.FindAnchorWithTag(x.tag);
                view.Reveal().MoveTo(anchor).SetParentTo(anchor).ResetLocalTransform();
            });
        }
    }

    public class OnEquippedNodeSignal : IBNodeSignal
    {
        public IBNode root;
        public string tag; 
    }
}