
using System;

namespace Bear
{
    public class ParticleCreateNodeData : ViewCreateNodeDataBase
    {
        public override void OnViewCreate(OnCreateViewSignal signal)
        {
            if (signal.ViewType != EVFXType.ParticleSystem.ToString()) return;


            var targetNode = root.GetOrAddNodeAtPath(EViewType.Bone.ToString());
            var data = targetNode.GetOrAddNodeData<ParticleSystemViewNodeData>();
            data.UpdateView(signal);
        }

    }

    public class ParticleSystemViewNodeData : ViewNodeDataBase
    {
        public override void UpdateView(OnCreateViewSignal signal)
        {
            Recycle();



            if (signal.holder.Object is BNodeView view)
            {
                if (!view.TryGetComponent<ParticleSystemCollector>(out var collector))
                {
                    collector = view.gameObject.AddComponent<ParticleSystemCollector>();
                    collector.Collect();
                }

                root.SetValue(collector);

                holder = signal.holder;
                InitRecycle(holder);

            }
        }
    }

    [System.Serializable]
    public struct CreateParticleSystemViewSignal : ICreateViewSignal
    {
        public EVFXType eVFXType;
        public string sTypeKey;
        public string path;

        public Action<ObjectHolderNodeData> onComplete;

        public string ResourcePath => path;

        public string TypeKey => sTypeKey;

        public string ViewType => eVFXType.ToString();

        public Action<ObjectHolderNodeData> OnComplete => onComplete;

        Action<ObjectHolderNodeData> ICreateViewSignal.OnComplete { get => onComplete; set => onComplete = value; }
    }

    public enum EVFXType
    { 
        ParticleSystem
    }
}