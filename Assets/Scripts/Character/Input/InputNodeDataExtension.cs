using System;
using UnityEngine;
using UnityEngine.InputSystem;

namespace Bear
{
    public static class InputNodeDataExtension
    {
        public static void RequestPlayerInput<T>(this IBNode root,Action<InputNodeData> DOnSuccess)
        {
            root.GetOrAddNodeData<InputNodeData>();
            root.ReceiveNodeSignal(new RequestPlayerInputSignal() { 
                DOnSuccess = DOnSuccess,
                key = typeof(T).ToString()
            });
        }

        public static void RegisterPlayerInput(this IBNode root, string key, Action<InputAction.CallbackContext> InputAction, InputActionPhase phase= InputActionPhase.Performed) {

            var inputdata = root.GetOrAddNodeData<InputNodeData>();
            if (inputdata.registeredActions.TryGetValue(key,out var oldAction)) {
                DeregisterPlayerInput(root,key,oldAction);
            }

            inputdata.registeredActions[key] = InputAction;


        }

        public static void DeregisterPlayerInput(this IBNode root, string key, Action<InputAction.CallbackContext> InputAction) {
            var inputdata = root.GetOrAddNodeData<InputNodeData>();

        }


    }
}