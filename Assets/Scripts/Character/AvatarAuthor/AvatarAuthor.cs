using Cinemachine;
using UnityEngine;
using UnityEngine.InputSystem;

namespace Bear
{

    public class AvatarAuthor : MonoBehaviour
    {
        public PlayerInput input;
        public CharacterController controller;
        public Animator anim;
        public CinemachineVirtualCameraBase camBase;
        public MovementStatusNodeData data;


        private void Awake()
        {
            //controller
            var rootInstance = Instantiate(controller);
            rootInstance.transform.position = transform.position;
            var root = rootInstance.gameObject.GetOrAddComponent<BNodeView>();
            root.AddNodeData(data);
            root.GetOrAddNodeData<CharacterControllerNodeData>();
            
            //animation
            var animRoot = Instantiate(anim).SetParentTo(rootInstance.transform);

            //camera
            CinemachineBrainNodeData.GetMainCameraCinemachineBrainNodeData();
            var camRoot = Instantiate(camBase).gameObject.GetOrAddComponent<BNodeView>();
            camRoot.AddNodeData<CinemachineNodeData>();

            //input
            var InputInstance = Instantiate(input);
            root.GetOrAddNodeData<MovementInputProviderNodeData>();
            root.ReceiveNodeSignal(new InitInputSignal() { 
                input = InputInstance,
            });


            //camera->animation
            camRoot.ReceiveNodeSignal(new LookAtTargetSignal()
            {
                Target = animRoot.transform
            });


        }
    }
}