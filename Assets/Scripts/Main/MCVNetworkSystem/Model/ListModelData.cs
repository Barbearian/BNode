

using System.Collections.Generic;

namespace Bear
{
    public class ListModelNodeData : IBNodeData
    {
        private List<IBNode> data = new List<IBNode>();
        public IBNode root;
        public void Detached()
        {
        }

        public void Init(IBNode root)
        {
            this.root = root;
        }

        public void Update(List<IBNode> data)
        {
            this.data = new List<IBNode>();
            for (int i = 0; i < data.Count; i++)
            {
                Insert(data[i], i);
            }
        }

        public void Insert(IBNode node, int index = -1)
        {
            if (index == -1 || index >= data.Count)
            {
                index = data.Count;
                data.Add(node);

            }
            else
            {
                data.Insert(index, node);
            }


            //remove from old owner
            var oldOwner = node.GetValue<ListModel>().owner;
            if (oldOwner != null)
            {
                oldOwner.Remove(node);
            }

            //add to new owner
            node.SetValue(new ListModel()
            {
                Index = index,
                owner = this
            });

            //invoke signal
            root.ReceiveNodeSignal(new OnListInsertedSignal()
            {
                element = node,
                index = index
            });

            //list update
            root.SetValue(this);
        }



        public void Remove(IBNode node)
        {
            data.Remove(node);
            node.SetValue(new ListModel()
            {
                Index = -1,
                owner = null
            });

            //list update
            root.SetValue(this);
        }
    }

    public struct ListModel
    {
        public int Index;
        public ListModelNodeData owner;
    }

    public struct OnListInsertedSignal : IBNodeSignal
    {
        public IBNode element;
        public int index;
    }

}