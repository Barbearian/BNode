
using Unity.VisualScripting;
using UnityEngine;

namespace Bear
{
    [RequireComponent(typeof(BNodeView))]
    public class ViewNetworkRoot : MonoBehaviour
    {
        BNodeView view;
        private void Start()
        {
            view = GetComponent<BNodeView>();   
            foreach (BNodeView variable in GetComponentsInChildren<BNodeView>()) {
                if(variable!=view)view.RegisterTransferSignal<WeaveSignal>(variable);
            }


        }
    }
}