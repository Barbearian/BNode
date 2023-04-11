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


            inited = true;
        }

       
    }

    public static class SingletonNodeViewSystem
    {
        private static bool inited = false;
        private static BNodeView _root;

        public static BNodeView Root
        {
            get
            {
                if (inited)
                    return _root;

                Init();
                return _root;
            }
        }

        private static void Init()
        {
            _root = new GameObject().AddComponent<BNodeView>();
            GameObject.DontDestroyOnLoad(_root);

            inited = true;
        }


    }
}