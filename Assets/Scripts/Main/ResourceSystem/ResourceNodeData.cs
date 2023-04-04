
using System;
using System.Collections.Generic;
using UnityEngine;

namespace Bear
{

    public class ResourceNodeData : IBNodeData
    {
        public void Detached()
        {
        }

        
        public void Init(IBNode root)
        {
            FetchSignalAction = this.GetResourceDefault;
        }

        public Action<RequestResourceSignal> FetchSignalAction { get; set; }

        //register add remove get functions to BNode
        public void Register(IBNode root)
        {
            root.RegisterNodeSignalReceiver<AddResourceSignal>(
                (x)=> {
                    AddResource(x.key,x.value);
                }
            );
            root.RegisterNodeSignalReceiver<RemoveResourceSignal>(
                (x) => {
                    RemoveResource(x.key);
                }
              );
            root.RegisterNodeSignalReceiver<RequestResourceSignal>(
                (x) => {

                    FetchSignalAction(x);
                }
                
                );
        }

        //create dictionary with string as key and gameobject as value,
        //then provide methods to CURD it
        public Dictionary<string, object> resourceDict = new();
        public void AddResource(string key, object value)
        {
            resourceDict.Add(key, value);
        }
        public void RemoveResource(string key)
        {
            resourceDict.Remove(key);
        }
       
       




    }

    public static class ResourceNodeDataExtension
    {
        //take request resource signal and send resource fetched signal to sender
        //if found send the value, if not send null
        public static void GetResourceDefault(this ResourceNodeData data,RequestResourceSignal signal)
        {
            var resourceDict = data.resourceDict;
            string key = signal.key;
            IBNode sender = signal.sender;
            if (resourceDict.ContainsKey(key))
            {
                sender.ReceiveNodeSignal(new ResourceFetchedSignal() { key = key, value = resourceDict[key] });
            }
            else
            {
                sender.ReceiveNodeSignal(new ResourceFetchedSignal() { key = key, value = null });
            }
        }
    }

    public struct AddResourceSignal:IBNodeSignal
    {
        public string key;
        public object value;
    }

    public struct RemoveResourceSignal:IBNodeSignal
    {
        public string key;
    }

    public struct RequestResourceSignal:IBNodeSignal
    { 
        public string key; 
        public IBNode sender; 
    }

    public struct ResourceFetchedSignal : IBNodeSignal { 
        public string key;
        public object value;
    }
}