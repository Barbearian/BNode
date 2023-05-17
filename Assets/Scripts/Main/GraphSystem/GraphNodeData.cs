using System.Collections.Generic;

namespace Bear
{
    public class GraphNodeData : IGraph, IGraphData,IBNodeData
    {
        public GraphData data = new();
        public Graph graph = new();

        public List<List<(int, int)>> Edges { get => graph.Edges; set => graph.Edges=value; }

        public void Detached()
        {
        }

        public List<(int, int)> GetNewNode()
        {
            data.nodes.Add(new BNode());
            return graph.GetNewNode();
        }

        public IBNode GetNode(int index)
        {
            return data.GetNode(index);
        }

        public List<(int, int)> GetNodeEdges(int index)
        {
            return graph.GetNode(index);

        }

        public void Init(IBNode root)
        {
        }
    }
}