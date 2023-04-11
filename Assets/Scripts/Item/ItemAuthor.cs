using UnityEngine;

namespace Bear
{
    public class ItemAuthor : MonoBehaviour
    {
        public string path;
        private void Awake()
        {
            var holder = new BNode().RequestObject(path);
            holder.OnLoadComplete((x) =>
            {
                if (x.Object is BNodeView view)
                {
                    view.MoveTo(transform);
                }
            });
        }


        //create three task print hello world
        //wait for all three to be finished



    }
}
