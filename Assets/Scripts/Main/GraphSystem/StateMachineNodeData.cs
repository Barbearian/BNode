

namespace Bear
{
    public class StateMachineNodeData : IBNodeData
    {
        public IBNode root;
        public IBNode CurrentState {
            get {
                return graphData.GetNode(CurrentIndex);
            }
        }
        public int CurrentIndex;
        GraphNodeData graphData { set; get; }
        public void Detached()
        {
        }

        public void Init(IBNode root)
        {
            this.root = root;   
            graphData = root.GetOrAddNodeData<GraphNodeData>();
            
        }
        
        public void EnterState(int index) {
            CurrentState.ReceiveNodeSignal(new StateExitSignal() { sm = this});
            CurrentIndex = index;
            CurrentState.ReceiveNodeSignal(new StateEnterSignal() { sm = this});
            
        }

        public int Transit(int index) {

            var edges = graphData.GetNodeEdges(CurrentIndex);
            foreach (var item in edges)
            {
                if (item.Item2 == index) {
                    return item.Item1;
                } 
            }
            return -1;
        }

        

        
    }

    public struct StateEnterSignal : IBNodeSignal 
    {
        public StateMachineNodeData sm;
    }

    public struct StateExitSignal : IBNodeSignal
    {
        public StateMachineNodeData sm;
    }
}