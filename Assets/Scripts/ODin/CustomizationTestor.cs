
using System.Collections.Generic;
using UnityEngine;
using QFSW.QC;
using System;

namespace Bear
{
    [RequireComponent(typeof(BNodeView))]
    public class CustomizationTestor : MonoBehaviour
    {
        BNodeView root;
        public List<CreateViewSignal> signals;
        public List<ModifyViewColorSignal> cSignals;
        public List<DelinkViewSignal> Delinks;
        public List<TransformViewModifySignal> updateTransforms;
        private void Awake()
        {
            root = gameObject.ToCustomizeView(true);

        }

        [Command]
        public void Make() { 
            signals.ForEach(s =>
            {
                root.ReceiveNodeSignal<ICreateViewSignal>(s);
            });
        }

        [Command]
        public void ModifyColor() {
            cSignals.ForEach(s =>
            {
                root.ReceiveNodeSignal<IViewModifySignal>(s);
            });
        }

        [Command]
        public void Dispose()
        {
            Delinks.ForEach(s => {
                root.ReceiveNodeSignal(s);
            });
        }

        [Command]
        public void UpdateTransforms()
        {
            updateTransforms.ForEach(s => {
                root.ReceiveNodeSignal<IViewModifySignal>(s);
            });

        }
    }

    [System.Serializable]
    public struct TransformViewModifySignal : IViewModifySignal
    {
        public string SelfTypeKey { get => selfTypeKey; set => selfTypeKey = value; }
        public string TargetTypeKey { get => targetTypeKey; set => targetTypeKey = value; }

        public string targetTypeKey;
        public string selfTypeKey;

        public Transform anchor;
        public Action ListenToChange(IBNode node, Action DOnUpdate)
        {
            return node.ListenToValue<MRViewCollector>((x) => {
                DOnUpdate?.Invoke();
            });
        }

        public void Modify(IBNode target)
        {
            if (target.TryGetValue<MRViewCollector>(out var collector)) {
                collector.transform.position = anchor.position; 
            }
        }
    }
}