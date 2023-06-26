
using UnityEngine;

namespace Bear
{
    [RequireComponent(typeof(BNodeView))]
    public class ParticleObjectPoolInstanceView : MonoBehaviour
    {
        BNodeView view;
        public ParticleSystem system;
        private void Awake()
        {
            view = GetComponent<BNodeView>();
            view.AddNodeData(new ParticleObjectPoolNodeData() { 
                particles = system
            });
        }

    }
}