
using System;

namespace Bear
{
    public class SignalTransferNodeData : IBNodeData
    {

        public Action ActionDelinker;
        public void Detached()
        {
            ActionDelinker?.Invoke();
        }

        public void Init(IBNode root)
        {
        }

        
    }

    public static class SignalTranserExtension {
        public static void RegisterTransferSignal<T>(this IBNode root,IBNode target) 
            where T:IBNodeSignal
        {
            SignalTransferNodeData transfer = root.GetOrAddNodeData<SignalTransferNodeData>();

            Action<T> signalHandler = (x) =>
            {
                target.ReceiveNodeSignal(x);
            };

            var handler = root.RegisterNodeSignalReceiverAdditively(signalHandler);

            Action Delinker = handler;
            transfer.ActionDelinker = handler;


        }
    }
}