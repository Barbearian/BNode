using System.Collections.Generic;
using System;

namespace Bear
{
    public class EdgeNodeData : IBNodeData
    {
        public List<IBNode> links = new List<IBNode>();

        bool IsActive = true;
        IBNode root;
        public void Detached()
        {
            if (IsActive) {
                IsActive = false;
                for (int i = links.Count-1; i>=0 ; i--)
                {
                    var node = links[i];
                    Delink(new DelinkSignal()
                    {
                        target = node
                    }) ;
                }
            }

        }

        public void Init(IBNode root)
        {
            Action onDisposed =
            root.RegisterNodeSignalReceiver<LinkSignal>(Link)+
            root.RegisterNodeSignalReceiver<DelinkSignal>(Delink);

            root.OnDisposed(onDisposed);  
        }

        public void Link(LinkSignal signal) {
            if (!links.Contains(signal.target)) {
                links.Add(signal.target);
                signal.target.ReceiveNodeSignal(new OnLinkSignal {
                    Target = signal.target,
                    Root = root
                });


                //foreach (var node in links)
                //{
                //    node.ReceiveNodeSignal(new OnLinkSignal() { 
                //        Root = root,
                //        Target = signal.target
                //    });


                //}
            }

            
        }

        public void Delink(DelinkSignal signal) {
            //links.ForEach(n => {
            //    n.ReceiveNodeSignal(new OnDelinkSignal()
            //    {
            //        Root = root,
            //        Target = signal.target
            //    });
            //});

            links.Remove(signal.target);
            signal.target.ReceiveNodeSignal(new OnDelinkSignal { 
                Target = signal.target,
                Root = root
            });

        }


    }

    //Shoud not happen too frequently
    public struct LinkSignal:IBNodeSignal {
        public IBNode target;
    }

    public struct OnLinkSignal : IBNodeSignal {
        public IBNode Root;
        public IBNode Target;
    }

    public struct DelinkSignal : IBNodeSignal
    {
        public IBNode target;
    }

    public struct OnDelinkSignal : IBNodeSignal
    {
        public IBNode Root;
        public IBNode Target;
    }

}