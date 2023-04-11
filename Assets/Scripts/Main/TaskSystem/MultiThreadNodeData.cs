using System.Collections.Generic;
using System.Threading.Tasks;

namespace Bear
{
    public class MultiThreadNodeData : IBNodeData
    {
        public List<Task> tasks = new List<Task>();
        public void Detached()
        {
            foreach (var task in tasks)
            {
                task.Dispose();
            }
        }

        public void Init(IBNode root)
        {
        }


        public Task Start(System.Action task)
        {
            var myTask = Task.Run(task);
            myTask.AddToList(tasks);
            return myTask;
        }
       
    }
}