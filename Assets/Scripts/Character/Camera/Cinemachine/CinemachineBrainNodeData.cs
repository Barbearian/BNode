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
                brain.m_UpdateMethod = CinemachineBrain.UpdateMethod.FixedUpdate;
                brain.m_BlendUpdateMethod = CinemachineBrain.BrainUpdateMethod.FixedUpdate;
            }
        }

        public static CinemachineBrainNodeData GetMainCameraCinemachineBrainNodeData()
        {
            return CameraNodeData.GetMainCamView().Root.GetOrAddNodeData<CinemachineBrainNodeData>();
        }
    }
}