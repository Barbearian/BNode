using Newtonsoft.Json;
using System.Collections.Generic;
using UnityEngine;

namespace Bear
{
    public class BodyAnchorNodeData : IBNodeData
    {
        private BNodeView myView;
        [JsonIgnore]
        public Dictionary<string,Transform> body = new Dictionary<string,Transform>();
        public void Detached()
        {
        }

        public void Init(IBNode root)
        {
            if (root is BNodeView view) { 
                myView = view;
            }
            
        }

        public Transform FindByTag(string tag) {
            if (!body.TryGetValue(tag,out var rs)) {
                //find transform by the tag of it, and add to dictionary
                if (myView.transform.FindKidWithTag(tag,out rs)) {
                    body[tag] = rs;
                }
            }

            return rs;
        }
    }
}