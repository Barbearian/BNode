using Newtonsoft.Json;
using Newtonsoft.Json.Bson;
using System.IO;
using Unity.VisualScripting;

namespace Bear
{
    public static class BNodeSerializationSystem
    {
        public static string ToData(this IBNodeData node)
        {

            var settings = new JsonSerializerSettings
            {
                TypeNameHandling = TypeNameHandling.All
            };

            var rs = JsonConvert.SerializeObject(node, settings);
            return rs;
        }

        public static IBNodeData ToBNode(this string data)
        {
            var settings = new JsonSerializerSettings
            {
                TypeNameHandling = TypeNameHandling.All
            };

            return JsonConvert.DeserializeObject<IBNodeData>(data, settings);
        }

        //serialize BNode to bson
        public static byte[] ToBson(this IBNodeData node)
        {
            var settings = new JsonSerializerSettings
            {
                TypeNameHandling = TypeNameHandling.All
            };
            var ms = new System.IO.MemoryStream();
#pragma warning disable CS0618 // member is obsolete 
            using (var writer = new BsonWriter(ms))
            {
                var serializer = JsonSerializer.Create(settings);
                serializer.Serialize(writer, node);
            }
#pragma warning restore CS0618 // member is obsolete 
            return ms.ToArray();
        }

        //deserialize Bson
        public static IBNodeData ToBNode(this byte[] data)
        {
            var settings = new JsonSerializerSettings
            {
                TypeNameHandling = TypeNameHandling.All
            };
            var ms = new System.IO.MemoryStream(data);

#pragma warning disable CS0618 // member is obsolete 

            using (var reader = new BsonReader(ms))
            {
                var serializer = JsonSerializer.Create(settings);

                var bson = serializer.Deserialize<IBNodeData>(reader);
                return bson;
                // Do something with the BsonDocument
            }
#pragma warning restore CS0618 // member is obsolete 

        }
    }
}
