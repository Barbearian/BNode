using UnityEngine;
namespace Bear
{
    public class MovementInputNodeData : IBNodeData
    {

        public Vector3 MoveDir;
        public Vector3 RotateDir;
        public void Detached()
        {
        }

        public void Init(IBNode root)
        {
        }
    }
}