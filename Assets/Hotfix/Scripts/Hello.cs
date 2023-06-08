
using Bear;
using UnityEngine;

public class Hello
{
    public static void Run() {
        Debug.Log("Hello");
    }

    public static void ReceiveNodeSignal(IBNodeSignal signal) { 
        IBNode node = new BNode();
        node.AddNodeData<StarterNodeData>();
        node.ReceiveNodeSignal(signal);
    }

    public static IBNode GetRoot() {
        IBNode node = new BNode();
        node.AddNodeData<StarterNodeData>();
        return node;
    }

    

    
}

public class StarterNodeData : IBNodeData
{
    public void Detached()
    {
    }

    public void Init(IBNode root)
    {
        root.RegisterNodeSignalReceiver<StartSignal>((x) => { 
            Debug.Log(x.message);
        });
    }
}