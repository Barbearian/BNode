using Newtonsoft.Json;
using System;
using System.Collections.Generic;
using System.Linq;

namespace Bear
{
    [System.Serializable]
    public class ObjectRequestNodeData : IBNodeData,ITask
    {
        public List<ResourceInjectSignal> resourceSignals;
        [JsonIgnore]
        public Action<ObjectRequestNodeData> DOnResourcePrepared;

        [JsonIgnore]
        public Dictionary<string, IBNode> resources = new Dictionary<string, IBNode>();

        private ETaskPhase m_phase = ETaskPhase.Running;
        public ETaskPhase Phase {
            get { 
                return m_phase;
            }
            set {
                if (m_phase.Equals(value)) return;

                m_phase = value;
                DOnPhaseChange?.Invoke(this);
            }
        }

        public Action<ITask> DOnPhaseChange { get; set; }

        public void Detached()
        {
        }

        public void Init(IBNode root)
        {
        }

        public void Run() {
            //conver resourceSignals to Task List using Linq
            var tasks = resourceSignals.Select(x => InjectResource(x.Key, x.Path)).ToList();


            var holder = new BNode().TrackTask
            (
               tasks.ToArray()
            ).OnTaskComplete(LoadComplete);
        }

        private ITask InjectResource(string key, string path)
        {
            var task = SingletonNodeSystem.Root.RequestObject(path);
            task.OnLoadComplete((x) => { resources[key] = x.Object; });
            return task;
        }

        public void OnLoadComplete(Action<ObjectRequestNodeData>  onLoadComplete) {
            DOnResourcePrepared += onLoadComplete;
            if (this.IsEnd()) {
                LoadComplete();
            }
        }

        private void LoadComplete() {
            Phase = ETaskPhase.End;
            DOnResourcePrepared?.Invoke(this);  
        }


    }
}