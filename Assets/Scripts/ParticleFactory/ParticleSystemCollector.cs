
using System.Collections.Generic;
using UnityEngine;

namespace Bear
{
    public class ParticleSystemCollector : MonoBehaviour
    {
        public List<ParticleSystem> paricles = new List<ParticleSystem>();

        public void Collect()
        {
                paricles.Clear();
                GetComponentsInChildren(true, paricles);
            
        }   
    }
}