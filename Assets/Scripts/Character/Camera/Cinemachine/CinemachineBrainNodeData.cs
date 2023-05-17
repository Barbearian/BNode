using Cinemachine;
using Unity.VisualScripting;

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
                brain = view.GetOrAddComponent<CinemachineBrain>();

            }
        }

        public static CinemachineBrainNodeData GetMainCameraCinemachineBrainNodeData()
        {
            return CameraNodeData.GetMainCamView().Root.GetOrAddNodeData<CinemachineBrainNodeData>();
        }
    }
}