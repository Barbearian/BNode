using Cinemachine;

namespace Bear {
    public class CinemachineBrainNodeData : IBNodeData
    {
        CinemachineBrain brain;
        public void Detached()
        {
        }

        public void Init(IBNode root)
        {
            if (root is BNodeView view) { 
                brain = view.gameObject.GetOrAddComponent<CinemachineBrain>();

            }
        }

        public static CinemachineBrainNodeData GetMainCameraCinemachineBrainNodeData()
        {
            return CameraNodeData.GetMainCamView().Root.GetOrAddNodeData<CinemachineBrainNodeData>();
        }
    }
}