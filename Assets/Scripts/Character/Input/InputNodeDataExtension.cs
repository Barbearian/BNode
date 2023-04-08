using UnityEngine;
using UnityEngine.InputSystem;

namespace Bear
{
    public static class InputNodeDataExtension
    {
        public static void RequestPlayerInput<T>(this IBNode root,System.Action<PlayerInput> DOnSuccess)
        {
            root.GetOrAddNodeData<InputNodeData>();
            root.ReceiveNodeSignal(new RequestPlayerInputSignal() { 
                DOnSuccess = DOnSuccess,
                key = typeof(T).ToString()
            });
        }


    }
}