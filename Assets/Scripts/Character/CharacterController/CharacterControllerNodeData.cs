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
        public bool CanMoving = true;
        public bool CanRotating = true;

        //Movement Status
        MovementStatusNodeData msn;

        //Movement Observer 
        MovementObserverNodeData mon;
        public float MoveSpeed {
            get {
                return msn.MoveSpeed;            
            }        
        }

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

        //initation
        UpdateOperator moveUpdate;
        public void Detached()
        {
            moveUpdate.Stop();
        }

        public void Init(IBNode root)
        {
            if (root is BNodeView trans) { 
                //get components
                cc = trans.GetComponent<CharacterController>();
                mid = root.GetOrAddNodeData<MovementInputNodeData>();
                msn = root.GetOrAddNodeData<MovementStatusNodeData>();
                mon = root.GetOrAddNodeData<MovementObserverNodeData>();

                lerp = new CharacterRotationLerp() {
                    rotationTarget = cc.transform,
                    RotationSpeed = 10f,

                };


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

            if (CanMoving) moveDir += MoveDir * MoveSpeed;
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
            mon.Speed = cc.velocity;

            rootPosition = Vector3.zero;
        }

    }

}