using UnityEngine;

namespace Bear
{
    public class AnimatorSpeedUpdateNodeData : IBNodeData
    {
        private MovementObserverNodeData _movementObserverNodeData;

        private Animator animator;
        private bool Inited;
        public void Detached()
        {
        }

        public void Init(IBNode root)
        {
            _movementObserverNodeData = root.GetOrAddNodeData<MovementObserverNodeData>();
            root.RegisterNodeSignalReceiverAdditively<AnimatorLinkSignal>( Init);
            root.RegisterFixedUpdater<AnimatorSpeedUpdateNodeData>(Update);
        }

        public void Update()
        {
            if (!Inited)
            {
                return;
            }
            var speed = _movementObserverNodeData.Speed;
            var speedMagnitude = speed.magnitude;
            animator.SetFloat("Speed", speedMagnitude);
        }

        private void Init(AnimatorLinkSignal signal) {
            if (signal.LinkTarget is BNodeView view) {
                animator = view.GetComponent<Animator>();
                Inited = true;
            }
        }
       
    }
}