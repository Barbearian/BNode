
using UnityEngine;
using UnityEngine.Android;

namespace Bear
{
    public class SerializerTestor:MonoBehaviour
    {
        public string path;
        //load node from path
        [ContextMenu("Load")]
        public void LoadNode()
        {
            var node = path.PathToNode();
            Debug.Log(node.FindNodeData<SignalHandlerNodeData>(out var data));

        }

        [ContextMenu("Save")]
        public void Save() {
            if (!Permission.HasUserAuthorizedPermission(Permission.ExternalStorageWrite))
            {
                // The user authorized ExternalStorageWrite.
                Permission.RequestUserPermission(Permission.ExternalStorageWrite);
            }
            
            var node = new BNode();
            node.AddNodeData<SignalHandlerNodeData>();
            node.SaveTo(path);
        }
    }
}