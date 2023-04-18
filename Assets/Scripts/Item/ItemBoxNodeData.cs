
using System.Collections.Generic;

namespace Bear
{
    public class ItemBoxNodeData : IBNodeData
    {
        public List<IBNode> items = new List<IBNode>();
        public IBNode Owner;
        public void Detached()
        {
        }

        public void Init(IBNode root)
        {
            Owner = root;
        }

       
    }
}
