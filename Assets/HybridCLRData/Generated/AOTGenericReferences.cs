public class AOTGenericReferences : UnityEngine.MonoBehaviour
{

	// {{ AOT assemblies
	// Main.dll
	// mscorlib.dll
	// }}

	// {{ constraint implement type
	// }} 

	// {{ AOT generic types
	// System.Action<Bear.StartSignal>
	// }}

	public void RefMethods()
	{
		// System.Action Bear.ActionNodeSignalExtension.RegisterNodeSignalReceiver<Bear.StartSignal>(Bear.IBNode,System.Action<Bear.StartSignal>)
		// object Bear.BNodeExtension.AddNodeData<object>(Bear.IBNode)
	}
}