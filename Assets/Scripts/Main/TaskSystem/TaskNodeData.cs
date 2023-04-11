
using Newtonsoft.Json;
using System.Collections.Generic;

namespace Bear
{
    public class TaskNodeData : IBNodeData
    {
        [JsonIgnore]
        public List<ITask> Tasks { get; set; } = new List<ITask>();
        private System.Action DOnComplete;
        public void Detached()
        {
            foreach (var task in Tasks)
            {
                task.Stop();
            }
        }

        public void Init(IBNode root)
        {
        }

        public void AddTask(params ITask[] tasks) {
            foreach (var task in tasks)
            {
                if (!task.IsEnd())
                {
                    task.DOnPhaseChange += Check;
                    Tasks.Add(task);
                }
            }
            
        }

        public void OnAllTaskComplete(System.Action action) {
            DOnComplete = action;
            CheckAll();
        }

        public void CheckAll() {
            for (int i = Tasks.Count-1; i >=0; i--)
            {
                if (Tasks[i].IsEnd()) { 
                    Tasks.RemoveAt(i);
                }
            }

            CheckComplete();
        }


        private void Check(ITask task) {
            if (
                task.IsEnd() &&
                Tasks.Contains(task)
                ) 
            {
                Tasks.Remove(task);     
            }

            CheckComplete();
        }

        public void CheckComplete() {
            if (Tasks.Count == 0) {
                DOnComplete?.Invoke();
                DOnComplete = null;
            }
        }


    }
}
