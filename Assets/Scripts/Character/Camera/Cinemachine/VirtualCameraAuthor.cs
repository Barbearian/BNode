using Cinemachine;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

namespace Bear
{
    public class VirtualCameraAuthor : MonoBehaviour
    {
        public CinemachineVirtualCamera camPref;
        private void Awake()
        {
            camPref = Instantiate(camPref);
            CinemachineBrainNodeData.GetMainCameraCinemachineBrainNodeData();
            var node = camPref.gameObject.GetOrAddComponent<BNodeView>();
            node.GetOrAddNodeData<CinemachineNodeData>();
            node.ReceiveNodeSignal(new LookAtTargetSignal() { 
                Target = transform,
                
            });
            
        }
    }
}