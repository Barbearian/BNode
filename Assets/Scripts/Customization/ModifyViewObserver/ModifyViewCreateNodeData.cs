
using System;
using System.Collections.Generic;
using UnityEngine;

namespace Bear
{
    public class ModifyViewCreateNodeData : IBNodeData
    {
        IBNode root;
        Dictionary<string,IViewModifySignal> records = new Dictionary<string, IViewModifySignal>();
        public void Detached()
        {
        }

        public void Init(IBNode root)
        {
            this.root = root;
            root.RegisterNodeSignalReceiverAdditively<IViewModifySignal>( ModifyView);
        }

        public void ModifyView(IBNodeSignal signal)
        {
            if (signal is not IViewModifySignal msignal) { return; }

            var targetNode = root.GetOrAddNodeAtPath(msignal.TargetTypeKey);
            var selfNode = root.GetOrAddNodeAtPath(msignal.SelfTypeKey);
            var data = selfNode.GetOrAddNodeData<ModifyViewNodeData>();
            data.targetNode = targetNode;
            data.ModifyView(msignal);


            Record(msignal);

        }

        public void Record(IViewModifySignal signal) {
            records[signal.SelfTypeKey] = signal;
        }

    }

    public class ModifyViewNodeData : IBNodeData
    {
        Action DOnUpdate;
        public IBNode targetNode;

        public void Detached()
        {
            OnUpdate();
            
        }

        public void Init(IBNode root)
        {
        }

        public void ModifyView(IViewModifySignal signal)
        {
            OnUpdate();
            signal.Modify(targetNode);
            DOnUpdate += signal.ListenToChange(targetNode, () => {
                signal.Modify(targetNode);
            });
        }

        private void OnUpdate()
        {
            DOnUpdate?.Invoke();
            DOnUpdate = null;
        }
    }

    public class ViewMaterialObserverNodeData : IBNodeData
    {
        IBNode root;

        public void Detached()
        {
        }

        public void Init(IBNode root)
        {
            this.root = root;
        }
    }

    public interface IViewModifySignal: IBNodeSignal
    {

        public string SelfTypeKey { get; set ; }
        public string TargetTypeKey { get ; set ; }



        public Action ListenToChange(IBNode node, Action DOnUpdate);
        public void Modify(IBNode target);
    }
    [System.Serializable]
    public struct ModifyViewColorSignal : IBNodeSignal, IViewModifySignal
    {
        public string SelfTypeKey { get => selfTypeKey; set => selfTypeKey = value; }
        public string TargetTypeKey { get => targetTypeKey; set=> targetTypeKey = value; }
        
        public string targetTypeKey;
        public string selfTypeKey;


        public Color color;
        public string propertyName;
        public readonly void Modify(IBNode target)
        {
            if (target.TryGetValue<MRViewCollector>(out var collector))
            {
                foreach (var item in collector.Materials)
                {
                    item.SetColor(propertyName, color);
                    Debug.Log("Modified ");

                }
            }

        }

        public readonly Action ListenToChange(IBNode node,Action DOnUpdate)
        {
            return node.ListenToValue<MRViewCollector>((x) => {
                DOnUpdate?.Invoke();
            });
        }
    }
}