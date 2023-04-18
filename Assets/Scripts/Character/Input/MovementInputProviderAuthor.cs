
using UnityEngine;
using UnityEngine.InputSystem;

namespace Bear
{
    [RequireComponent(typeof(PlayerInput))]
    public class MovementInputProviderAuthor : MonoBehaviour
    {
        // Start is called before the first frame update
        
        void Start()
        {
            var root = gameObject.GetOrAddComponent<BNodeView>();
            root.AddNodeData(new MovementInputProviderNodeData());

            //get PlayerInput from PlayerControllerInput
            var input = GetComponent<PlayerInput>();
            root.ReceiveNodeSignal(new InitInputSignal() { 
                input = input
            });

            
        }

       
    }
}