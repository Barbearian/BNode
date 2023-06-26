

using UnityEngine;

namespace Bear
{
    public class ParticleObjectPoolNodeData : ObjectPoolInstanceNodeData
    {

        public ParticleSystem particles;
        public override void Init(IBNode root)
        {
            base.Init(root);
            //When particle system is ended execute OnEnd
            particles.gameObject.GetOrAddComponent<ParticleObserver>().OnParticleSystemEnd=OnEnd;

        }
        public override void OnSpawn()
        {
            base.OnSpawn();
            particles.gameObject.SetActive(true);
            particles.Play();
        }

        public override void OnRecycle()
        {
            base.OnRecycle();
            particles.Stop();
            particles.gameObject.SetActive(false);
        }

        public void OnEnd() { 
            holder.Recycle();
        }
    }
}