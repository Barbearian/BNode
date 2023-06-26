
using System.Collections.Generic;
using UnityEngine;

namespace Bear
{
    public class SMRCollector : MonoBehaviour
    {
        public List<SMRData> Smrs;

        public void Collect(Transform prefab) { 
            Smrs = Collect(prefab,transform);
        }
        public List<SMRData> Collect(Transform prefab,Transform root)
        {
            List<SMRData> rs = new List<SMRData>();
            if (prefab.TryGetComponent<SkinnedMeshRenderer>(out var psmr) && root.TryGetComponent<SkinnedMeshRenderer>(out var rsmr))
            {
                SMRData data = new SMRData();
                data.instance = rsmr;
                data.BoneNames = new List<string>();
                data.rootBoneName = psmr.rootBone.name;

                foreach (var item in psmr.bones)
                {
                    data.BoneNames.Add(item.name);
                }

                rs.Add(data);
            }

            for (int i = 0; i < prefab.childCount; i++)
            {
                var pkid = prefab.GetChild(i);
                var rkid = root.GetChild(i);


                rs.AddRange(Collect(pkid, rkid));
            }

            return rs;

        }

    }

    [System.Serializable]
    public struct SMRData
    {
        public SkinnedMeshRenderer instance;
        public List<string> BoneNames;
        public string rootBoneName;
    }
}