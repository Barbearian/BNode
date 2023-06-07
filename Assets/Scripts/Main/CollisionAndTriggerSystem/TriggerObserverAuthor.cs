using UnityEngine;

namespace Bear
{
    public class TriggerObserverAuthor : MonoBehaviour
    {
        // Start is called before the first frame update
        void Start()
        {
            this.gameObject.AddComponent<TriggerObserver>();
            this.gameObject.GetOrAddComponent<BNodeView>().RegisterNodeSignalReceiver<OnTriggerEnterNodeSignal>((x) => {
                Debug.Log("I am entered");
            });
        }

    }
}