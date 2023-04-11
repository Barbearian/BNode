using Bear;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UIElements;

public class TaskTestor : MonoBehaviour
{
    public List<string> keys;
    private List<IBNode> resources = new List<IBNode>(); 
    // Start is called before the first frame update
    void Start()
    {
        var taskHolder = new BNode();
        foreach (var key in keys)
        {
            var request = new BNode().RequestObject(key);
            taskHolder.TrackTask(request);
            request.OnLoadComplete((x) => {
                resources.Add(x.Object) ;
            });


        }

        taskHolder.OnTaskComplete(() => {
            Debug.Log(resources.Count);
        });


    }

  
}
