using System.IO;
using UnityEngine;

namespace Bear
{
    public class NodeSerializerNodeData : IBNodeData
    {
        public void Detached()
        {
        }

        public void Init(IBNode root)
        {
        }

        //read from text file and deserialize to node
        public ResourceHolderNodeData Load(IBNode node, string path)
        {
            var rs = new BNode().GetOrAddNodeData<ResourceHolderNodeData>();
            var holder = new BNode().RequestResource<TextAsset>(path);
            holder.OnLoadComplete((x) => {
                if (x.Resource is ResourceNode rnode) {
                    if (rnode.Resource is TextAsset asset) {
                        var json = asset.text;
                        rs.Resource = json.ToBNode();
                    }
                }
            });

            return rs;


        }

        public IBNode Load(string path)
        {
            string filePath = Path.Combine(Application.persistentDataPath+"/", path);

            if (File.Exists(filePath))
            {
                string text = File.ReadAllText(filePath);
                UnityEngine.Debug.Log("Loaded text: " + text);

                return text.ToBNode();
            }
            else
            {
                UnityEngine.Debug.LogError("Text asset not found at path: " + filePath);
                return null;
            }
        }

        //write node to text file
        public void Save(IBNode node, string path)
        {
            var json = node.ToData();
            //write json to file at Path
            path = Application.persistentDataPath+"/" + path;

            using StreamWriter writer = new(path);
            writer.Write(json);

            UnityEngine.Debug.Log(path);    
        }
    }

}