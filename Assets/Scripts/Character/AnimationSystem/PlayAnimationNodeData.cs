
using System;
using UnityEngine;

namespace Bear
{
    public class PlayAnimationNodeData : IBNodeData
    {
        public Animator animator;
        Action detached;
        public void Detached()
        {
            detached?.Invoke();
        }

        public void Init(IBNode root)
        {
            //Play Animation
            detached = 
            root.RegisterNodeSignalReceiver<PlayAnimationSignal>((signal) =>
            {
                animator.Play(signal.stateName, signal.layer, signal.normalzedTime);
            });
        }
    }

    public struct PlayAnimationSignal : IBNodeSignal
    {
        public int layer;
        public float normalzedTime;
        public string stateName;
    }
}