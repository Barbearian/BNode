using UnityEngine;

namespace Bear
{
    public static class ActionNodeSignalExtension
    {
        //Register actionnodedata to Bnode with type as generic input
        public static ActionSignalReceiver RegisterNodeSignalReceiver<T>(this IBNode node, System.Action<T> action) where T : IBNodeSignal
        {
            var rs = new ActionSignalReceiver()
            {
                DAction = (signal) =>
                {
                    if (signal is T tsignal)
                    {
                        action.Invoke(tsignal);
                    }
                }
            };
            node.RegisterNodeSignalReceiver<T>(rs);
            return rs;

            
        }

        public static ActionSignalReceiver RegisterNodeSignalReceiverAdditively(this IBNode node,string key, System.Action<IBNodeSignal> action)
        {
            var container = node.GetOrAddNodeData<IBNodeSignalReceiverContainer>();
            //if container has the key, add action to the action list
            if (container.TryGetReceiver(key, out var receiver))
            {
                if (receiver is ActionSignalReceiver actionReceiver)
                {
                    actionReceiver.AddAction(action);
                }
                else {
                    actionReceiver = new ActionSignalReceiver()
                    {
                        DAction = action
                    };
                    container.UpdateReceiver(key, actionReceiver);
                }
                return actionReceiver;
            }
            else
            {
                //if container does not have the key, add a new action list
                var rs = new ActionSignalReceiver()
                {
                    DAction = action
                };
                container.AddReceiver(key, rs);
                return rs;
            }

        }

        public static void RegisterNodeSignalReceiverAdditively<T>(this IBNode node, System.Action<T> action) where T : IBNodeSignal
        {
            //RegisterNodeSignalReceiverAdditively with T as key
            var key = typeof(T).ToString();

        }
    }
}

//how to compare whether two action 

