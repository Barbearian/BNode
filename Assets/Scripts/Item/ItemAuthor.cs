using UnityEngine;

namespace Bear
{
    public class ItemAuthor : MonoBehaviour
    {
        public string path;
        private void Awake()
        {
            new BNode().RequestObject(path).OnLoadComplete((x) => {
                if (x.Object is BNodeView view) {
                    view.MoveTo(transform);
                }
            });
        }



    }
}