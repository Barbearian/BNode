
using System.Collections.Generic;

namespace Bear
{
    public interface IGraphData {
        public IBNode GetNode(int index);
    }
    public interface IGraph { 
        public List<List<(int,int)>> Edges { get; set; }
        public List<(int, int)> GetNewNode();

    }
    public class GraphData :IGraphData
    {
        public List<IBNode> nodes = new();

        public IBNode GetNode(int index)
        {
            return nodes[index];    
        }
    }

    public class Graph: IGraph
    {
        private List<List<(int, int)>> graph;
        public Graph() {
            graph = new List<List<(int, int)>>();
        }

        public Graph(List<List<(int, int)>> graph)
        {
            this.graph = graph;
        }

        public List<List<(int, int)>> Edges { get => graph; set => graph = value; }

        public List<(int, int)> GetNewNode()
        {
            var rs = new List<(int, int)>(); 
            graph.Add(rs);
            return rs;
        }
    }
    public static class GraphSystem
    {
        public static List<(int, int)> GetNode(this IGraph graph, int index) {

            while (graph.Edges.Count > index) { 
                graph.GetNewNode();
            }

            return graph.Edges[index];
        }
        public static void Link(this IGraph graph,int nodeA,int nodeB,int edgeType = 0) {
            graph.GetNode(nodeA).Add((nodeB,edgeType));
        }

        public static void Delink(this IGraph graph, int nodeA, int nodeB, int edgeType = 0)
        {
            graph.GetNode(nodeA).Remove((nodeB, edgeType));
        }
    }

    
}