using UnityEngine;

namespace Bear
{ 
    public class AvatarNodeAuthor : MonoBehaviour
    {
        public ObjectRequestNodeData resources;
        public MovementStatusNodeData movementStatusNodeData;
        private void Start()
        {
            var avatarNode = GetAvatarNode();
            InstantiateAvatar(avatarNode);
        
        }

        //it will generate a node that represent character status however it is only data and has no view

        public IBNode GetAvatarNode() {
            var root = new BNode();

            //movement data
            root.AddNodeData(movementStatusNodeData);

            

            return root;
        }

        //this function will turn avatar data into controllable character
        public IBNode InstantiateAvatar(IBNode node) {
            var avatarNodeData = new AvatarNodeData();


            node.AddNodeData(movementStatusNodeData);
            node.AddNodeData(resources);
            node.AddNodeData(avatarNodeData);
            avatarNodeData.SpawnPoint = transform;

            avatarNodeData.Run();
            return node;
        }

    }
}