using UnityEngine;

namespace Bear
{
    public class AvatarNodeAuthor : MonoBehaviour
    {
        public ObjectRequestNodeData resources;
        public MovementStatusNodeData movementStatusNodeData;
        private void Start()
        {
            var avatarNodeData = new AvatarNodeData();
            var node = new BNode();
            node.AddNodeData(movementStatusNodeData);
            node.AddNodeData(resources);
            node.AddNodeData(avatarNodeData);
            avatarNodeData.SpawnPoint = transform;

            avatarNodeData.Run();


        }
    }
}