using System.Collections.Generic;

namespace Bear
{
    public interface IBNode
    {
        //crud node data
        public void AddNodeData(IBNodeData data);
        public void RemoveNodeData(IBNodeData data);
        public bool FindNodeData<T>(out T data) where T : IBNodeData;
        public void Detached();
        


    }

    public interface IBNodeData 
    {
        
        public void Init(IBNode root);

        public void Detached();
    }

   
    //implementation of IBNode
   public class BNode : IBNode
    {
        //dictionary to store node data
        public Dictionary<string, IBNodeData> Nodedata { get; set; } = new Dictionary<string, IBNodeData>();
        //crud node data
        public void AddNodeData(IBNodeData data)
        {
            var key = data.GetType().ToString();
            if (Nodedata.TryGetValue(key, out var oldData))
            {
                Nodedata.Remove(key);
                oldData.Detached();
            }
            Nodedata.Add(key, data);
            data.Init(this);
        }
        public void RemoveNodeData(IBNodeData data)
        {
            Nodedata.Remove(data.GetType().ToString());
            data.Detached();
        }
        public bool FindNodeData<T>(out T data) where T : IBNodeData
        {
            var key = typeof(T).ToString();
            if (Nodedata.TryGetValue(key, out var d))
            {
                data = (T)d;
                return true;
            }
            data = default;
            return false;
        }
        public void Detached()
        {
            foreach (var nd in Nodedata.Values)
            {
                nd.Detached();
            }
            Nodedata.Clear();
        }
    }
    //implementation of IBNodeData
    public class BNodeData:IBNodeData
    {
        public IBNode Root { get; set; }
        public void Init(IBNode root)
        {
            Root = root;
        }
        public void Detached(){}
    }
    

        
            

    




}