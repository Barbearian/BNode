using System.ComponentModel.Design.Serialization;
using UnityEngine;

namespace Bear
{
    public class UpdaterManagerNodeData : IBNodeData
    {
        static UpdaterObserver updater;
        private IBNode root;

        public void Detached() { 
            root.UnregisterNodeSignalReceiver<RegisterUpdaterSignal>();
            root.UnregisterNodeSignalReceiver<RegisterFixedUpdaterSignal>();
        }

        public void Init(IBNode root) {
            this.root = root;

            if (updater == null)
            {
                updater = new GameObject("Updater").AddComponent<UpdaterObserver>();
                Object.DontDestroyOnLoad(updater);
            }

            //register RegisterUpdater and RegisterFixedUpdater
            root.RegisterNodeSignalReceiver<RegisterUpdaterSignal>(RegisterUpdater);
            root.RegisterNodeSignalReceiver<RegisterFixedUpdaterSignal>(RegisterFixedUpdater);

        }

        public void RegisterUpdater(RegisterUpdaterSignal uoperator) {
            updater.DUpdate.Add(uoperator.uoperator);
        }

        public void RegisterFixedUpdater(RegisterFixedUpdaterSignal updateOperator) {
            updater.DFixedUpdate.Add(updateOperator.uoperator);
        }


        //register functions to node using corresponding Register Updater signals



    }

    public struct RegisterUpdaterSignal:IBNodeSignal
    {
        public UpdateOperator uoperator;
    }

    public struct RegisterFixedUpdaterSignal : IBNodeSignal
    {
        public UpdateOperator uoperator;
    }





}