using UnityEngine;
namespace Bear
{
    public class MovementInputNodeData : IBNodeData
    {
        [SerializeField]private Vector3 m_MoveDir;
        [SerializeField]private Vector3 m_RotationDir;
        //getter and setter for MoveDir and RotateDir
        public Vector3 MoveDir
        {
            get
            {
                return m_MoveDir;
            }
            set
            {
                m_MoveDir = value;
            }
        }


        public Vector3 RotateDir {
            get {
                return m_RotationDir;
            }
            set
            {
                m_RotationDir = value;
            }
        }
        public void Detached()
        {
        }

        public void Init(IBNode root)
        {
        }
    }
}