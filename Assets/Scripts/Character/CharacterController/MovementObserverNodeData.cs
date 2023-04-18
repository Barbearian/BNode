using UnityEngine;

namespace Bear
{
    public class MovementObserverNodeData : IBNodeData
    {
        public Vector3 Speed { get; set; }
        public void Detached()
        {
        }

        public void Init(IBNode root)
        {
        }
    }
}