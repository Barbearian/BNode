using UnityEngine;
namespace Bear
{
    
    public class TriggerObserver : MonoBehaviour
    {
        public BNodeView view;

        //if view is null on awake, add one on itself
        private void Awake()
        {
            if (view == null)
            {
                view = gameObject.GetOrAddComponent<BNodeView>();
            }
        }

        //If on trigger enter an IBNode send OnTriggerEnterNodeSignal
        private void OnTriggerEnter(Collider other)
        {
            if (other.TryGetComponent<BNodeView>(out var target)) {
                view.ReceiveNodeSignal(new OnTriggerEnterNodeSignal() { 
                    other = target
                });
            }
        }

        //If on trigger exit an IBNode send OnTriggerExitNodeSignal
        private void OnTriggerExit(Collider other)
        {
            if (other.TryGetComponent<BNodeView>(out var target))
                view.ReceiveNodeSignal(new OnTriggerExitNodeSignal()
                {
                    other = target
                });
        }


    }

    public struct OnTriggerEnterNodeSignal : IBNodeSignal
    {
        public IBNode other;
    }

    public struct OnTriggerExitNodeSignal : IBNodeSignal
    {
        public IBNode other;
    }
}