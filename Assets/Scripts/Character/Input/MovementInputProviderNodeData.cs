
using System;
using UnityEngine;
using UnityEngine.InputSystem;
using static PlayerControllerInput;

namespace Bear
{
    public class MovementInputProviderNodeData : IBNodeData, IMovementActions
    {
        //read directional input from new input system and log it
        public Vector2 inputDir;
        public Func<Vector2,Vector3> GetMainCamViewDir = MovementInputProviderNodeDataExtension.GetMainCamViewDir;
        private MovementInputNodeData mi;
        private PlayerInput input;
        private UpdateOperator updateOperator;

        public void Detached()
        {
            //unregister OnMove from input
            UnInitInput();

            //unregister UpdateMoveDir from updater
            updateOperator.Stop();
        }

        public void Init(IBNode root)
        {
            mi = root.GetOrAddNodeData<MovementInputNodeData>();

            root.RequestPlayerInput<MovementInputProviderNodeData>(InitInput);

            //Update Move Dir in fixed update
            root.RegisterUpdater<MovementInputProviderNodeData>(UpdateMoveDir);
        }

        public void OnMove(InputAction.CallbackContext context)
        {
            if (context.phase == InputActionPhase.Performed)
            {
                inputDir = context.ReadValue<Vector2>();
            }

            if (context.phase == InputActionPhase.Canceled)
            {
                inputDir = Vector2.zero;
            }

        }

        public void UpdateMoveDir() {
            mi.MoveDir = GetMainCamViewDir(inputDir);
            mi.RotateDir = mi.MoveDir;
        }

        public void InitInput(PlayerInput input)
        {
            Debug.Log("movement Input inited");

            UnInitInput();
            this.input = input;
            //register OnMove to input
            input.actions["Move"].performed += OnMove;
            input.actions["Move"].canceled += OnMove;
        }

        public void UnInitInput()
        {
            if (input == null) return;
            input.actions["Move"].performed -= OnMove;
            input.actions["Move"].canceled -= OnMove;
        }

    }

    public static class MovementInputProviderNodeDataExtension {
        public static Vector3 GetForward() {
            return CameraNodeData.GetMainCamView().GetCameraForward();            
        }

        public static Vector3 GetMainCamViewDir(Vector2 dir)
        {
            return CameraNodeData.GetMainCamView().GetInputDir(dir);

        }
    }


}