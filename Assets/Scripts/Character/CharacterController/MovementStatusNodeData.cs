
using UnityEngine;

namespace Bear
{
    [System.Serializable]
    public class MovementStatusNodeData : IBNodeData
    {
        public float MoveSpeed = 1f;
        public void Detached()
        {
        }

        public void Init(IBNode root)
        {
        }
    }
}