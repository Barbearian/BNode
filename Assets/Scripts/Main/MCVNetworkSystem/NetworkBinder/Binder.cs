

namespace Bear
{
    public interface IBinder
    {
        public void Bind(IBNode root);
        public void Unbind();
    }

    public abstract class BinderNodeData:IBNodeData,IBinder
    {
        public abstract void Bind(IBNode root);

        public virtual void Detached()
        {
        }
        public virtual void Init(IBNode root)
        {
            
        }

        public abstract void Unbind();
    }
}