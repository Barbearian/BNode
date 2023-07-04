using System.Collections.Generic;
using UnityEngine;
namespace Bear
{
    public class CustomizeView : MonoBehaviour
    {
        public List<CreateViewSignal> CreateViewSignals;
        private BNodeView view;
        public bool MakeOnAwake;
        private void Awake()
        {
            view = gameObject.ToCustomizeView(true);
            if (MakeOnAwake) Make();
        }

        public void Make()
        {
            CreateViewSignals.ForEach(s => {
                view.ReceiveNodeSignal<ICreateViewSignal>(s);
            });
        }
    }
}