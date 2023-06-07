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

        public Quaternion CameraRotation => cam.transform.rotation;

        public static CameraNodeData GetMainCamView() {
            instance ??= Camera.main.gameObject.GetOrAddComponent<BNodeView>().GetOrAddNodeData<CameraNodeData>();
            return instance;

        }


    }

    public static class CameraNodeDataExtension
    {
        public static Vector3 GetInputDir(this CameraNodeData camNodeData, Vector2 inputDir)
        {

            float inputx = inputDir.x;
            float inputy = inputDir.y;

            Vector3 dir = camNodeData.CameraRotation * Vector3.forward * inputy + camNodeData.CameraRotation * Vector3.right * inputx;
            dir.y = 0;
            return dir.normalized;
        }
    }
}