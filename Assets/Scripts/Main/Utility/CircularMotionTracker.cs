using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

namespace Bear
{
    public class CircularMotionTracker : MonoBehaviour
    {
        public float MinimumDelta;
        public int maxSampleSize = 10;
        private List<Vector3> buffer = new List<Vector3>();
        private Vector3 last;

        public UnityEvent<Vector3> DOnCenter;
        private void Awake()
        {
            last = transform.position;
        }
        private void FixedUpdate()
        {
            var delta = (transform.position - last).magnitude;
            if (delta > MinimumDelta)
            {
                buffer.Add(transform.position);
                if (buffer.Count > maxSampleSize)
                {
                    buffer.RemoveAt(0);
                }
                Check();
                last = transform.position;
            }
        }

        private void Check() {
            if (buffer.Count >= maxSampleSize) {
                //invoke DOnCenter with the center of the buffer
                DOnCenter.Invoke(CalculateCenter());
            }
        }

        private Vector3 CalculateCenter()
        {
            var center = Vector3.zero;
            foreach (var point in buffer)
            {
                center += point;
            }
            center /= buffer.Count;
            return center;
        }

        //draw gimos of points
        private void OnDrawGizmos()
        {
            Gizmos.color = Color.red;
            foreach (var point in buffer)
            {
                Gizmos.DrawSphere(point, 0.1f);
            }
        }
    }
}