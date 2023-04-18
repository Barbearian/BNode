
namespace Bear
{

    public class WeaponNodeData : IBNodeData
    {
        public ViewNodeData view;
        public void Detached()
        {
        }

        public void Init(IBNode root)
        {
            view = root.GetOrAddNodeData<ViewNodeData>();
            root.RegisterNodeSignalReceiver<OnWeaponEquipNodeSignal>((x) => {
                x.root.FindAnchorWithTag(x.tag);

            });
        }

        public void Reveal() { 
            
        }
    }

    public class OnWeaponEquipNodeSignal : OnEquippedNodeSignal
    {

    }
}