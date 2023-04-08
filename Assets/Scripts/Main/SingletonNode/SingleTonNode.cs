using UnityEngine;

namespace Bear
{
    public static class SingletonNodeSystem
    {
        private static bool inited = false;
        private static IBNode _root;
        public static IBNode Root { 
            get {
                if (inited)
                    return _root;

                Init();
                return _root; 
            }
        }

        private static void Init() {
            _root = new BNode();

            _root.AddNodeData(new ResourceNodeData());

            inited = true;
        }

       
    }
}