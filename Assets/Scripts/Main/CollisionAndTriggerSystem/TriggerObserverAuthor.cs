using Unity.VisualScripting;
using UnityEngine;

namespace Bear
{
    public class TriggerObserverAuthor : MonoBehaviour
    {
        // Start is called before the first frame update
        void Start()
        {
            this.AddComponent<TriggerObserver>();
            this.GetOrAddComponent<BNodeView>().RegisterNodeSignalReceiver<OnTriggerEnterNodeSignal>((x) => {
                Debug.Log("I am entered");
            });
        }

    }
}