using Cinemachine;
using UnityEngine;

namespace Bear
{
    public class CinemachineNodeData : BNodeViewData
    {
        CinemachineVirtualCamera vcam;
        public override void Init(IBNode root)
        {
            base.Init(root);

            vcam = this.root.GetComponent<CinemachineVirtualCamera>();

            root.RegisterNodeSignalReceiver<LookAtTargetSignal>((x) => { 
                vcam.m_LookAt = x.Target;
                vcam.m_Follow = x.Target;
            });

        
        }

        

       


    }

    public struct LookAtTargetSignal : IBNodeSignal { 
        public Transform Target;
    }
}