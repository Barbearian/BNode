using System.Collections.Generic;
namespace Bear
{
    public class UpdaterObserver : BNodeView
    {
        public List<UpdateOperator> DUpdate = new();
        public List<UpdateOperator> DFixedUpdate = new();

        //update the input Update Operator list
        public void UpdateList(List<UpdateOperator> list)
        {
            for (int i = 0; i < list.Count; i++)
            {
                if (list[i].stage == OperatorStage.Stop)
                {
                    list.RemoveAt(i);
                    i--;
                }
                else
                {
                    list[i].action.Invoke();
                }
            }
        }

        private void Update()
        {
            UpdateList(DUpdate);
        }

        private void FixedUpdate()
        {
            UpdateList(DFixedUpdate);
        }

        


    }

    public struct UpdateOperator {
        public System.Action action;
        public OperatorStage stage;

        public void Stop() { 
            stage = OperatorStage.Stop;
        }

    }


    public enum OperatorStage 
    { 
        Working = 0,
        Stop
    }
}