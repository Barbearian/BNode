using System;
namespace Bear
{
    public class BindableProperty 
    {
        public object _value;
        public Action<object> DOnUpdate;
        public bool HasValue;
        public void SetValue<T>(T value) { 
            _value = value;
            HasValue = true;
            DOnUpdate?.Invoke(value);
        }        

        public T GetValue<T>() {
            return (T)_value;
        }

        public Action RegisterAction<T>(Action<T> DOnUpdate) {
            void action(object x)
            {
                if (x is T tX)
                {
                    DOnUpdate(tX);
                }
            }

            this.DOnUpdate += action;

            void Delink()
            {
                this.DOnUpdate -= action;
            }

            return Delink;
        }
    }
}

