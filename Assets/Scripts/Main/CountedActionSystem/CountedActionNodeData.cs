using System;
namespace Bear
{
    public class CountedAction {
        public Action action;
        public void Act() { 
            action?.Invoke();
        }
    }

    public class CountedAction<T> { 
        public Action<T> action;
        public void Act(T t)
        {
            action?.Invoke(t);
        }
    }

    public class CountedAction<T,K>
    {
        public Action<T,K> action;
        public void Act(T t,K k)
        {
            action?.Invoke(t,k);
        }
    }
}
