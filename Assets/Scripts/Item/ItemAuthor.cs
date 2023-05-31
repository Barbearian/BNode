using UnityEngine;

namespace Bear
{
    
    public class ItemAuthor : MonoBehaviour
    {
        public string path;
        public string equipPath;
        private void Awake()
        {
            var root = GetItemNode();
            Instantiate(root);
        }

        public IBNode GetItemNode() { 
            IBNode bNode = new BNode();
            var view = bNode.AddNodeData<ViewNodeData>();
            view.ViewAddress = path;

            return bNode;
        }

        public IBNode Instantiate(IBNode node) {
            var view = node.GetOrAddNodeData<ViewNodeData>();   
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

                item.ReceiveNodeSignal(new OnEquippedNodeSignal()
                {
                    root = x,
                    tag = equipPath
                });

            };
            return bnode;
        }


    }
}
