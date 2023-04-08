using System.Collections.Generic;
using UnityEngine;
namespace Bear
{
    public static class UpdaterNodeDataExtension
    {
        public static UpdateOperator RegisterUpdater<T>(this IBNode root, System.Action updator) {
            var data = root.GetOrAddNodeData<UpdaterManagerNodeData>();
            var updatorOp = new UpdateOperator() { 
                action = updator,
            };
            data.RegisterUpdater(new RegisterUpdaterSignal() { 
                key = typeof(T).ToString(),
                uoperator = updatorOp
            });

            return updatorOp;
        }

        public static UpdateOperator RegisterFixedUpdater<T>(this IBNode root, System.Action updator)
        {
            var data = root.GetOrAddNodeData<UpdaterManagerNodeData>();
            var updatorOp = new UpdateOperator()
            {
                action = updator,
            };
            data.RegisterFixedUpdater(new RegisterFixedUpdaterSignal()
            {
                key = typeof(T).ToString(),
                uoperator = updatorOp
            });

            return updatorOp;
        }
    }
}