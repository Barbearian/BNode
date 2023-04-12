using UnityEngine;
using UnityEngine.Events;

namespace Bear
{
    public class MovementTracker : MonoBehaviour
    {
        public float Threshold;
        private Vector3 _lastPosition;
        public UnityEvent<Vector3> DOnMove;
        public bool Detecting;
        public void FixedUpdate()
        {
            var curr = transform.position;
            var delta = curr - _lastPosition;
            if (delta.magnitude > Threshold)
            {
                if (Detecting)
                {
                    DOnMove.Invoke(delta);
                    Detecting = false;
                }
            }
                
            _lastPosition = curr;
        }

        public void StartTracking() { 
            Detecting = true;
        }

    }
}