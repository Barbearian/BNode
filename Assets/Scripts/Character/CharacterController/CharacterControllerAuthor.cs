using UnityEngine;

namespace Bear
{
    [RequireComponent(typeof(CharacterController),typeof(BNodeView))]
    public class CharacterControllerAuthor : MonoBehaviour
    {
        public float speed = 4.0f; 
        private void Start()
        {
            var view = GetComponent<BNodeView>();
            view.AddNodeData(new CharacterControllerNodeData());
            view.GetOrAddNodeData<MovementStatusNodeData>().MoveSpeed = speed;
        }
    }
}