
using System;
using System.Collections.Generic;
using UnityEngine;

namespace Bear
{
    public class BoneCollector : MonoBehaviour
    {
        public Dictionary<string, Transform> bones = new Dictionary<string, Transform>();
        public void Collect() {
            bones = new Dictionary<string, Transform>();
            foreach (var item in transform.GetComponentsInChildren<Transform>())
            {
                bones[item.name] = item;
            }
        }

        internal Transform GetBone(string boneName)
        {
            return bones[boneName];
        }
    }
}