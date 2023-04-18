using UnityEditor.AnimatedValues;
using UnityEngine;
using UnityEngine.InputSystem;

namespace Bear
{
    [System.Serializable]
    public class AvatarNodeData : IBNodeData
    {
        public Transform SpawnPoint;
        private ObjectRequestNodeData ObjectRequestNodeData { get; set; }
        private MovementStatusNodeData movementStatusNodeData { get; set; }

        public void Detached()
        {
        }

        public void Init(IBNode root)
        {
            ObjectRequestNodeData = root.GetOrAddNodeData<ObjectRequestNodeData>();
            ObjectRequestNodeData.OnLoadComplete(OnResourcePrepared);
            movementStatusNodeData = root.GetOrAddNodeData<MovementStatusNodeData>();
        }

        public void Run() {
            ObjectRequestNodeData.Run();
        }

        private void OnResourcePrepared(ObjectRequestNodeData obj)
        {
            var anim = obj.resources["Animator"];
            var animView = anim as BNodeView;
            var cam = obj.resources["VirtualCameraBase"];
            var input = obj.resources["PlayerInput"];
            var inputView = (input as BNodeView).GetComponent<PlayerInput>();
            var controller = obj.resources["CharacterController"];
            var controllerView = controller as BNodeView;
            var moveStatus = movementStatusNodeData;

            //controller
            controllerView.transform.position = SpawnPoint.position;
            controller.AddNodeData(moveStatus);
            controller.GetOrAddNodeData<CharacterControllerNodeData>();

            //animation
            animView.SetParentTo(controllerView.transform);

            //camera
            CinemachineBrainNodeData.GetMainCameraCinemachineBrainNodeData();
            cam.AddNodeData<CinemachineNodeData>();

            //input
            controller.GetOrAddNodeData<MovementInputProviderNodeData>();
            controller.ReceiveNodeSignal(new InitInputSignal()
            {
                input = inputView
            });


            //camera->animation
            cam.ReceiveNodeSignal(new LookAtTargetSignal()
            {
                Target = animView.transform
            });

            //controller->animator
            controllerView.AddNodeData(new AnimatorSpeedUpdateNodeData());
            controllerView.ReceiveNodeSignal(new AnimatorLinkSignal()
            {
                LinkTarget = animView,
            });

        }



        
    }
}