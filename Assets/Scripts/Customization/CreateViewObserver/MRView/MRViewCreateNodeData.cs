

namespace Bear
{
    public class MRViewCreateNodeData : ViewCreateNodeDataBase
    {


        public override void OnViewCreate(OnCreateViewSignal signal) {
            if (signal.ViewType != EViewType.MeshRenderer.ToString()) return;

            var targetNode = root.GetOrAddNodeAtPath(signal.TypeKey);
            var data = targetNode.GetOrAddNodeData<MRViewNodeData>();
            data.UpdateView(signal);
        }



    }

    public class MRViewNodeData : ViewNodeDataBase
    {


        public override void UpdateView(OnCreateViewSignal signal) {
           

            Recycle();



            if (signal.holder.Object is BNodeView view)
            {
                if (!view.TryGetComponent<MRViewCollector>(out var collector))
                {
                    collector = view.gameObject.AddComponent<MRViewCollector>();
                    collector.Collect(true);
                }
                else {
                    collector.Collect();
                }

                root.SetValue(collector);

                holder = signal.holder;
                InitRecycle(holder);

            }


        }
    }
}