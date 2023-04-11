using System;
using UnityEngine;
namespace Bear
{
    public enum ETaskPhase {
        Running,
        End
    }
    public interface ITask {
        public ETaskPhase Phase { get; set; }
        public System.Action<ITask> DOnPhaseChange { get; set; }


    }

    public class ActionTask : ITask
    { 
        Action action { get; set; }

        public ETaskPhase Phase { get; set; }

        public Action<ITask> DOnPhaseChange { get; set; }

        public ActionTask(Action action)
        {
            this.action = action;
        }

    }

    public static class ITaskSystem{
        public static bool IsEnd(this ITask task) { 
            return task.Phase == ETaskPhase.End;
        }

        public static void Stop(this ITask task) {
            task.Phase = ETaskPhase.End;
        }
    }
    public static class TaskNodeDataExtension
    {
        public static IBNode TrackTask(this IBNode root, params ITask[] task) {
            root.GetOrAddNodeData<TaskNodeData>().AddTask(task);
            return root;
        }

        public static IBNode OnTaskComplete(this IBNode root,Action action)
        {
            root.GetOrAddNodeData<TaskNodeData>().OnAllTaskComplete(action);
            return root;
        }


    }
}