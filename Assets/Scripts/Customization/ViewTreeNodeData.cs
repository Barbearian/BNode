

using System;
using System.Collections.Generic;
using System.Text.RegularExpressions;

namespace Bear
{
    //single layered only
    public class ViewTreeNodeData : IBNodeData
    {
        IBNode root;
        
        public void Detached()
        {

        }

        public void Init(IBNode root)
        {
            this.root = root;
            root.GetOrAddNodeData<EdgeNodeData>();
            root.RegisterNodeSignalReceiverAdditively<ICreateViewSignal>(CreateView);

        }

        public void CreateView(ICreateViewSignal signal) {


            var path = signal.ResourcePath.ToViewPath();
            SingletonNodeSystem.Root.RequestObject(path).OnLoadComplete(x => {
                root.ReceiveNodeSignal(new OnCreateViewSignal() { 
                    ViewType = signal.ViewType.ToString(),
                    TypeKey = signal.TypeKey,
                    Root = root,
                    holder = x
                });

                signal.OnComplete?.Invoke(x);
            });
            
        }



    }

    [System.Serializable]
    public struct CreateViewSignal: ICreateViewSignal
    {
        public EViewType eViewType;
        public string sTypeKey;
        public string path;

        public Action<ObjectHolderNodeData> onComplete;

        public string ResourcePath => path;

        public string TypeKey => sTypeKey;

        public string ViewType => eViewType.ToString();

        public Action<ObjectHolderNodeData> OnComplete => onComplete;

        Action<ObjectHolderNodeData> ICreateViewSignal.OnComplete { get => onComplete; set => onComplete = value; }
    }

    public interface ICreateViewSignal : IBNodeSignal
    { 
        public string TypeKey { get;}
        public string ResourcePath { get;}
        public string ViewType { get;}

        public Action<ObjectHolderNodeData> OnComplete { get; set; }

    }

    public struct OnCreateViewSignal : IBNodeSignal {
        public IBNode Root;
        public string ViewType;
        public string TypeKey;
        public ObjectHolderNodeData holder;
    }

    [System.Serializable]
    public struct DelinkViewSignal : IBNodeSignal
    {
        public string TypeKey;
    }

    public struct OnViewDelinkedSignal : IBNodeSignal
    {
        public IBNode Root;
    }

    [System.Serializable]
    public enum EViewType
    {
        MeshRenderer,
        SkinnedMeshRenderer,
        Bone,
    }

    public static class ViewTreeNodeDataExtension
    {
        public static string pattern = @"\[(.*)\]";
        

        public static string[] ToViewPath(this string key)
        {
            List<string> arr = new List<string>();
            Regex reg = new Regex(pattern);
            var match = reg.Match(key);
            if (match.Success)
            {
                var group1 = match.Groups[0].ToString();
                var group2 = match.Groups[1].ToString();
                arr.Add(key.Replace(group1, ""));
                var splited = group2.Split("/", System.StringSplitOptions.RemoveEmptyEntries);
                arr.AddRange(splited);
            }
            else
            {
                arr.Add(key);
            }

            return arr.ToArray();
        }

    }
}