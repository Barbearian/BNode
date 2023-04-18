using UnityEngine;

namespace Bear
{
    
    public class ItemAuthor : MonoBehaviour
    {
        public string path;
        public string equipPath;
        private void Awake()
        {
            var root = new BNode();
            var view = root.AddNodeData<ViewNodeData>();
            view.ViewAddress = path;
            view.Reveal().MoveTo(transform).SetParentTo(transform);

            //add trigger 
            gameObject.GetOrAddComponent<TriggerObserver>();

            var bnode = gameObject.GetOrAddComponent<BNodeView>();
            var pickUp = bnode.AddNodeData<PickUpNodeData>();
            pickUp.DOnPickedUp += (x) => {
                var item = new BNode();
                var view = item.AddNodeData<ViewNodeData>();
                view.ViewAddress = path;
                item.AddNodeData<EquipmentNodeData>();  
                x.AddItem(item);

                item.ReceiveNodeSignal(new OnEquippedNodeSignal() { 
                    root= x,
                    tag = equipPath
                });

            };


        }


    }
}
