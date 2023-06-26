
using System.Collections.Generic;
using UnityEngine;

namespace Bear
{
    public class MRViewCollector : MonoBehaviour
    {
        public List<Renderer> Renderers = new List<Renderer>();
        public List<Material> Materials = new List<Material>();
        public void Collect() {
            Renderers = new List<Renderer>();

            var renderers = gameObject.GetComponentsInChildren<Renderer>();
            Renderers.AddRange(renderers);
            //Add all material into materials
            Materials = new List<Material>();
            Renderers.ForEach(r => Materials.AddRange(r.materials));
        }
    }
}