
namespace Bear
{


    public class BoneViewCreateNodeData : ViewCreateNodeDataBase
    {

        public override void OnViewCreate(OnCreateViewSignal signal)
        {
            if (signal.ViewType != EViewType.Bone.ToString()) return;


            var targetNode = root.GetOrAddNodeAtPath(EViewType.Bone.ToString());
            var data = targetNode.GetOrAddNodeData<BoneViewNodeData>();
            data.UpdateView(signal);
        }
        
    }

    public class BoneViewNodeData : ViewNodeDataBase
    {


        public override void UpdateView(OnCreateViewSignal signal) {
            Recycle();



            if (signal.holder.Object is BNodeView view)
            {
                if (!view.TryGetComponent<BoneCollector>(out var collector))
                {
                    collector = view.gameObject.AddComponent<BoneCollector>();
                    collector.Collect();
                }

                root.SetValue(collector);

                holder = signal.holder;
                InitRecycle(holder);

            }
        }



    }
}