using UnityEngine;

namespace Bear
{
    public class ItemNodeData : IBNodeData
    {
        public void Detached()
        {
        }

        public void Init(IBNode root)
        {
        }
    }
}

//q: will instantiate a class generate gc?
//a: yes, but it's not a big deal, because it's only a few bytes.

//q: why not use struct?
//a: because it's not a good idea to use struct in this case.

//q: how to achieve no gc?
//a: use a pool to reuse the object.

