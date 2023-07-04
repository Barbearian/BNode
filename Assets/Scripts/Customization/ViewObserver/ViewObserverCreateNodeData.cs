
using System;
using System.Collections.Generic;


namespace Bear
{
    public class ViewObserverCreateNodeData : IBNodeData
    {
        IBNode root;
        Dictionary<string, IViewObserverSignal> records = new Dictionary<string, IViewObserverSignal>();

        public void Detached()
        {
        }

        public void Init(IBNode root)
        {
            this.root = root;
            root.RegisterNodeSignalReceiverAdditively<IViewObserverSignal>(OnViewUpdated);
        }

        public void OnViewUpdated(IViewObserverSignal signal) {
            var observer = root.GetOrAddNodeAtPath(signal.SelfKey);
            var data = observer.GetOrAddNodeData<ViewObserverNodeData>();
            data.ObserveView(root,signal);
            Record(signal);
        }

        public void Record(IViewObserverSignal signal)
        {
            records[signal.SelfKey] = signal;
        }
    }

    public class ViewObserverNodeData : IBNodeData
    {
        Action DOnUpdate;
        public void Detached()
        {
            OnUpdate();

        }

        public void Init(IBNode root)
        {
        }

        public void ObserveView(IBNode viewRoot,IViewObserverSignal signal)
        {
            OnUpdate();
            signal.OnViewUpdate(viewRoot);

            foreach (var item in signal.Targets)
            {
                var target = viewRoot.GetOrAddNodeAtPath(item);
                DOnUpdate+= target.RegisterNodeSignalReceiverAdditively<OnViewUpdatedSignal>((x) => {
                    signal.OnViewUpdate(viewRoot);
                });
            }
        }

        private void OnUpdate()
        {
            DOnUpdate?.Invoke();
            DOnUpdate = null;
        }
    }

    public interface IViewObserverSignal:IBNodeSignal
    { 
        public string[] Targets { get; set; }
        public string SelfKey { get; set; }
        public void OnViewUpdate(IBNode root);
    }
}