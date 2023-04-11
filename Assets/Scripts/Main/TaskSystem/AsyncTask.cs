using System;
using System.Threading.Tasks;

namespace Bear
{
    public class AsyncTask : ITask
    {

        public AsyncTask(Action toDo) { 
            this.toDo = toDo;
            DOnPhaseChange += OnStop;
        }

        private ETaskPhase phase;
        public ETaskPhase Phase {
            get { 
                return phase;
            }
            set {
                if (phase == value) return;
                phase = value;
                DOnPhaseChange.Invoke(this);
            }
        }

        public Action<ITask> DOnPhaseChange { get; set; }

        public Action toDo;
        public Task Task { get; set; }

        public Task Run() {
            Phase = ETaskPhase.Running;
            Task = Task.Run(toDo);
            Task.GetAwaiter().OnCompleted(() => {
                Complete();
            });
            return Task;
        }

        private void Complete() {
            Phase = ETaskPhase.End;
        }

        private void OnStop(ITask task) {
            if (task.Phase == ETaskPhase.End && task is AsyncTask atask) {
                atask.Task?.Dispose();
            }
        }
    }
}