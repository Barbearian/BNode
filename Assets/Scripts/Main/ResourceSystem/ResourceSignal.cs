using UnityEngine;

namespace Bear
{
    //a sturct to store the address of resource
    //would be used to load resource from resource system
    public struct ResourceAddress
    {
        public string address;
        
    }

    [System.Serializable]
    public struct ResourceInjectSignal : IBNodeSignal
    {
        public string Key;
        public string Path;
    }
}
