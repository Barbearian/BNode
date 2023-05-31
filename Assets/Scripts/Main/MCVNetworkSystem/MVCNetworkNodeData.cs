

using System.Collections.Generic;

namespace Bear
{
    public class MVCNetworkNodeData : IBNodeData
    {
        public IBNode Model;
        public IBNode Controller;
        public IBNode View;

        public IBNode CMBinder;
        public IBNode MVBinder;

        public List<IBNode> extensions = new List<IBNode>();
        public void Detached()
        {
        }

        public void Init(IBNode root)
        {
            Model.Weave(root);
            Controller.Weave(root);
            View.Weave(root);

            CMBinder.Weave(root);
            MVBinder.Weave(root);   

            extensions.ForEach((extension) =>{extension.Weave(root);});
        }

        
    }
}