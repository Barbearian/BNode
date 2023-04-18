using System;
using UnityEngine;

namespace Bear
{
    public class PickUpNodeData : IBNodeData
    {
        GameObject m_object;
        public Action<IBNode> DOnPickedUp;
        public void Detached()
        {
        }

        public void Init(IBNode root)
        {
            if (root is BNodeView view) { 
                m_object = view.gameObject;
            }
            root.RegisterNodeSignalReceiver<OnTriggerEnterNodeSignal>((x) => { 
               m_object.SetActive(false);
               DOnPickedUp(x.other);
            });
        }
    }
}