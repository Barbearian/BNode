using UnityEditorInternal.VR;

namespace Bear
{
    public static class ItemBoxNodeDataExtension 
    {
        public static void AddItem(this IBNode box, IBNode item) {
            var boxNodeData = box.GetOrAddNodeData<ItemBoxNodeData>();
            boxNodeData.items.Add(item);
        }

        public static void RemoveItem(this IBNode box, IBNode item)
        {
            var boxNodeData = box.GetOrAddNodeData<ItemBoxNodeData>();
            boxNodeData.items.Remove(item);
        }
    }
}