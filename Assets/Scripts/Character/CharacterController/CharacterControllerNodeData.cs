using System;
using Unity.VisualScripting;
using UnityEngine;

namespace Bear
{
    public class CharacterControllerNodeData : IBNodeData
    {
        private CharacterController cc;
        public Vector3 force;
        public float decay = 0.9f;
        public Vector3 gravity = 9.8f * Vector3.down;
        private Vector3 gravityAccumulation;
        private CharacterRotationLerp lerp;
        
        //animation input;
        public Vector3 rootPosition;

        //movement controll
        public bool CanMoving;
        public bool CanRotating;




        //input
        private MovementInputNodeData mid;

        public Vector3 RotationTarget {
            get {
                return mid.RotateDir;
            }
        }
        public Vector3 MoveDir {
            get {
                return mid.MoveDir;
            }
        }
        public float MoveSpeed;

        //initation
        UpdateOperator moveUpdate;
        public void Detached()
        {
            moveUpdate.Stop();
        }

        public void Init(IBNode root)
        {
            if (root is BNodeView trans) { 
                cc = trans.GetComponent<CharacterController>();

                lerp = new CharacterRotationLerp() {
                    rotationTarget = cc.transform,
                    RotationSpeed = 10f,

                };

                mid = root.GetOrCreateNodeData<MovementInputNodeData>();

                var updater = cc.GetOrAddComponent<UpdaterObserver>();
                moveUpdate = new UpdateOperator() { 
                    action = FixedUpdate,
                }.AddToList(updater.DFixedUpdate);

            }

        }


        public void FixedUpdate() {
            //rotate
            if (CanRotating)
            {
                lerp.SetTargetRotation(RotationTarget);
                cc.transform.rotation = lerp.GetRotation();
            }

            //calculate gravity
            gravityAccumulation += gravity * Time.fixedDeltaTime;
            if (cc.isGrounded)
            {
                gravityAccumulation = gravity;
            }

            var moveDir = Vector3.zero;

            if (CanMoving) moveDir += this.MoveDir * MoveSpeed;
            moveDir += force;
            moveDir += gravityAccumulation;

            moveDir *= Time.fixedDeltaTime;
            moveDir += rootPosition;

            force *= decay;
            if (force.sqrMagnitude <= 0.01f)
            {
                force = Vector3.zero;
            }

            cc.Move(moveDir);

            rootPosition = Vector3.zero;
        }

    }

}