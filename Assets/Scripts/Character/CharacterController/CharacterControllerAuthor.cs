using UnityEngine;

namespace Bear
{
    [RequireComponent(typeof(CharacterController),typeof(BNodeView))]
    public class CharacterControllerAuthor : MonoBehaviour
    {
        private void Start()
        {
            var view = GetComponent<BNodeView>();
            view.AddNodeData(new CharacterControllerNodeData());
        }
    }
}