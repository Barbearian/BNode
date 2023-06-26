
using UnityEngine;

namespace Bear
{
    public class WaveCollapseNodeData : IBNodeData
    {
        public bool isOccupied;
        public Vector3 index;

        public void Init(IBNode root)
        {
        }

        public void Detached()
        {
        }

    }
}