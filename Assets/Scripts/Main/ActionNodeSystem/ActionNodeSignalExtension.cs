using System;
using UnityEngine;

namespace Bear
{
    public static class ActionNodeSignalExtension
    {
        //Register actionnodedata to Bnode with type as generic input
        public static Action RegisterNodeSignalReceiver<T>(this IBNode node, Action<T> action) where T : IBNodeSignal
        {
            Action<IBNodeSignal> Action = (signal) =>
            {
                if (signal is T tsignal)
                {
                    action.Invoke(tsignal);
                }
            };
            var rs = new ActionSignalReceiver()
            {
                DAction = Action
            };

            node.RegisterNodeSignalReceiver<T>(rs);

            Action Delinker = () =>
            {
                rs.RemoveAction(Action);
            };
            return Delinker;

            
        }

        public static Action RegisterNodeSignalReceiverAdditively(this IBNode node,string key, Action<IBNodeSignal> action)
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

                Action Delinker = () =>
                {
                    actionReceiver.RemoveAction(action);
                };
                return Delinker;
            }
            else
            {
                //if container does not have the key, add a new action list
                var rs = new ActionSignalReceiver()
                {
                    DAction = action
                };
                container.AddReceiver(key, rs);

                Action Delinker = () =>
                {
                    rs.RemoveAction(action);
                };
                return Delinker;
            }

        }

        public static Action RegisterNodeSignalReceiverAdditively<T>(this IBNode node, Action<T> action) where T : IBNodeSignal
        {
            //RegisterNodeSignalReceiverAdditively with T as key
            var key = typeof(T).ToString();
            Action<IBNodeSignal> newAction = (x) =>
            {
                if (x is T tx)
                {
                    action.Invoke(tx);
                }
            };
            return node.RegisterNodeSignalReceiverAdditively(key, newAction);

        }
    }
}

//how to compare whether two action 

