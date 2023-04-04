using Unity.VisualScripting;
using UnityEngine;

namespace Bear {
    public class CameraNodeData : IBNodeData
    {
        private static CameraNodeData instance;
        private Camera cam;
        public BNodeView Root { get; set; }
        public void Detached()
        {
        }

        public void Init(IBNode root)
        {
            if (root is BNodeView view) {
                if (view.gameObject.TryGetComponent(out cam)) {
                    Root = view;
                }
            }
        }

        public Vector3 GetCameraForward()
        {
            var dir = cam.transform.forward;
            dir.y = 0f;
            dir = dir.normalized;
            return dir;
        }

        public static CameraNodeData GetMainCamView() {
            instance ??= Camera.main.GetOrAddComponent<BNodeView>().GetOrCreateNodeData<CameraNodeData>();
            return instance;

        }
    }
}