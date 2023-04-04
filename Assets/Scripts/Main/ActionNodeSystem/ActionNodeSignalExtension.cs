using UnityEngine;

namespace Bear
{
    public static class ActionNodeSignalExtension
    {
        //Register actionnodedata to Bnode with type as generic input
        public static string RegisterNodeSignalReceiver<T>(this IBNode node, System.Action<T> action) where T : IBNodeSignal
        {
            
            return node.RegisterNodeSignalReceiver<T>(new ActionNodeData() { 
                DAction = (signal) => {
                    if (signal is T tsignal) {
                        action.Invoke(tsignal); 
                    }
                }
            });

            
        }
    }
}

//how to compare whether two action 

