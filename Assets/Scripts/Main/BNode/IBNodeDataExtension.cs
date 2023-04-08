using UnityEngine;

namespace Bear
{
    public static class IBNodeDataExtension {
        public interface IDataInjector 
        { 
            void Inject(IBNodeData data);  
        }


        public static void Copy(this IBNodeData data, IBNodeData target) {
            if (target is IDataInjector injector) { 
                injector.Inject(data);
            }
        }

    }
}