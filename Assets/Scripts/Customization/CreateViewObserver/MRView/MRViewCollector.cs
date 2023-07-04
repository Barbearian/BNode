
using System.Collections.Generic;
using UnityEngine;

namespace Bear
{
    public class MRViewCollector : MonoBehaviour
    {
        public List<Renderer> Renderers = new List<Renderer>();
        public List<Material> Materials = new List<Material>();
        public Dictionary<string,List<Material>> MaterialByName = new Dictionary<string, List<Material>>();
        public void Collect(bool ForceScan = false) {
            if (ForceScan)
            {
                Renderers = new List<Renderer>();

                var renderers = gameObject.GetComponentsInChildren<Renderer>();
                Renderers.AddRange(renderers);

            }

            CollectMaterial();
        }

        public void CollectMaterial() {
            //Add all material into materials
            Materials = new List<Material>();
            MaterialByName = new Dictionary<string, List<Material>>();
            Renderers.ForEach(
                r => { 
                    Materials.AddRange(r.materials);
                    
                    foreach ( Material mat in r.materials )
                    {
                        if (!MaterialByName.TryGetValue(mat.name,out var matList))
                        {
                            matList = new List<Material>();
                            MaterialByName[mat.name] = matList;
                        }

                        matList.Add(mat);
                    }

                });
        }


    }
}