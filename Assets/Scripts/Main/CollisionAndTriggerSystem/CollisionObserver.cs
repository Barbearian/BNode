//Collision Observer is same as Trigger Observer
using UnityEngine;

namespace Bear
{
    public class CollisionObserver: MonoBehaviour{

        public BNodeView view;
        //if view is null on awake, add one on itself
        private void Awake()
        {
            if (view == null)
            {
                view = gameObject.GetOrAddComponent<BNodeView>();
            }
        }
        public void OnCollisionEnter(Collision collision)
        {
            if (collision.body.TryGetComponent<BNodeView>(out var target))
            {
                view.ReceiveNodeSignal(new OnCollisionEnterNodeSignal()
                {
                    collision = collision,
                    other = target
                });
            }
        }

        public void OnCollisionExit(Collision collision)
        {
            if (collision.body.TryGetComponent<BNodeView>(out var target))
            {
                view.ReceiveNodeSignal(new OnCollisionExitNodeSignal()
                {
                    collision = collision,
                    other = target
                });
            }
        }
    }

    //Collision Enter signal
    public struct OnCollisionEnterNodeSignal : IBNodeSignal
    {
        public Collision collision;
        public IBNode other;
    }

    public struct OnCollisionExitNodeSignal : IBNodeSignal
    {
        public Collision collision;

        public IBNode other;

    }

}
