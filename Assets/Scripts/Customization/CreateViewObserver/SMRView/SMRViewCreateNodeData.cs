

using System.Collections.Generic;
using UnityEngine;

namespace Bear
{
    public class SMRViewCreateNodeData : ViewCreateNodeDataBase
    {
        public override void OnViewCreate(OnCreateViewSignal signal)
        {
            if (signal.ViewType != EViewType.SkinnedMeshRenderer.ToString()) return;

            var targetNode = root.GetOrAddNodeAtPath(signal.TypeKey);
            var data = targetNode.GetOrAddNodeData<SMRViewNodeData>();
            data.target = root.GetOrAddNodeAtPath(EViewType.Bone.ToString());
            data.UpdateView(signal);

            signal.ViewType = EViewType.MeshRenderer.ToString();
            signal.IsUsed = true;
            signal.Root.ReceiveNodeSignal(signal);
        }

    }

    public class SMRViewNodeData : ViewNodeDataBase
    {
        public IBNode target;   
        public override void UpdateView(OnCreateViewSignal signal)
        {


            Recycle();



            if (signal.holder.Object is BNodeView view)
            {
                if (!view.TryGetComponent<SMRCollector>(out var collector))
                {
                    collector = view.gameObject.AddComponent<SMRCollector>();
                    collector.Collect(signal.holder.root.GetValue<ObjectHolderReference>().reference.transform);
                }

                root.SetValue(collector);

                if (target.TryGetValue<BoneCollector>(out var bcollector)) {
                    Bind(collector, bcollector);
                }

                DOnUpdate += target.ListenToValue<BoneCollector>((bones) =>
                {
                    Bind(collector,bones);
                });


                
                //Init holder
                holder = signal.holder;
                InitRecycle(holder);

            }


        }

        

        private void Bind(SMRCollector smrCollector,BoneCollector collector) {
            foreach (var item in smrCollector.Smrs)
            {
                var bones = new List<Transform>();
                for (int i = 0; i < item.BoneNames.Count; i++)
                {
                    string boneName = item.BoneNames[i];
                    Transform bone = collector.GetBone(boneName);
                    bones.Add(bone);
                }

                item.instance.bones = bones.ToArray();
                item.instance.rootBone = collector.GetBone(item.rootBoneName);
            }
        }

        
        
    }
}