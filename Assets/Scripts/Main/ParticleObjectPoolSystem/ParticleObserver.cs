
using System;
using UnityEngine;

namespace Bear
{
    [RequireComponent(typeof(ParticleSystem))]
    public class ParticleObserver : MonoBehaviour
    {
        ParticleSystem myparticleSystem;
        private void Awake()
        {
            myparticleSystem = GetComponent<ParticleSystem>();
            var main = GetComponent<ParticleSystem>().main;
            main.stopAction = ParticleSystemStopAction.Callback;

        }
        public Action OnParticleSystemEnd;
        private void OnParticleSystemStopped()
        {
            OnParticleSystemEnd?.Invoke();
        }
    }
}