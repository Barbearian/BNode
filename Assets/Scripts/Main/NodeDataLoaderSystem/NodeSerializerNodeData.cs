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