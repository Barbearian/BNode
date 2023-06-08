#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<YooAsset.AsyncOperationBase>
struct Action_1_t2B402C842742EFCB5D9827C1981184ECC4F57FDF;
// System.Action`1<YooAsset.SceneOperationHandle>
struct Action_1_tC9A2B8C23FB07361EFAFDD3FC34948FC12C263AB;
// System.Collections.Generic.List`1<YooAsset.ResourcePackage>
struct List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.Reflection.Assembly
struct Assembly_t;
// YooAsset.AssetInfo
struct AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456;
// YooAsset.AssetSystemImpl
struct AssetSystemImpl_t81D235BF692751145D6B2C3F3431BC7D8290BD38;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// YooAsset.EditorSimulateModeParameters
struct EditorSimulateModeParameters_tEF0187193F6D5A6AB7CBE8574D365D4E04D821AF;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Bear.HotFixStarter
struct HotFixStarter_t80178BC019E3A3F4423BBE556BBE41B43E7658CC;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// YooAsset.IBundleServices
struct IBundleServices_t83ED8DA733B42205E9C88F694E45ADB313530B86;
// YooAsset.IDecryptionServices
struct IDecryptionServices_t72A8C817CBF8635B47CA0CEFA6700D0ADE92AA8B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// YooAsset.ILogger
struct ILogger_tDF24C2D094417567E0429274CBA0896EF501517C;
// YooAsset.IPlayModeServices
struct IPlayModeServices_tAA52527E1B8B45CA174AECC67517825F92790C7A;
// YooAsset.InitializationOperation
struct InitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F;
// YooAsset.InitializeParameters
struct InitializeParameters_t5939A049B34CFA3C4AE9ECF25678FD4C58F4D5B1;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// YooAsset.OfflinePlayModeParameters
struct OfflinePlayModeParameters_t8BC588D438F1F9FAB046D71BC602A010CC6570E9;
// YooAsset.ProviderBase
struct ProviderBase_t07CDF30CF91BB924A36026623C4136B7E1D0F758;
// YooAsset.ResourcePackage
struct ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// YooAsset.SceneOperationHandle
struct SceneOperationHandle_t9850DA88031CC19F7DAAC54D967383CA96D4F12F;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Bear.HotFixStarter/<InitializeYooAssetEditor>d__5
struct U3CInitializeYooAssetEditorU3Ed__5_t460EA8010268F8E82071FC68EAD2BA1471196697;
// Bear.HotFixStarter/<InitializeYooAssetOffline>d__6
struct U3CInitializeYooAssetOfflineU3Ed__6_tF7C6F1E4F37893C1EBB0C44125F1D0030BF99A4A;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DebugLogConsole_tD4575289A02D94FC8841D22AE24DE8216C32A707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EditorSimulateModeParameters_tEF0187193F6D5A6AB7CBE8574D365D4E04D821AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OfflinePlayModeParameters_t8BC588D438F1F9FAB046D71BC602A010CC6570E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CInitializeYooAssetEditorU3Ed__5_t460EA8010268F8E82071FC68EAD2BA1471196697_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CInitializeYooAssetOfflineU3Ed__6_tF7C6F1E4F37893C1EBB0C44125F1D0030BF99A4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral052C17E9D6BC1FE3DB31F3277AED6D12A2C6BDAC;
IL2CPP_EXTERN_C String_t* _stringLiteral1BE39B53FE0807C0C41B8BB0590EAA8409394D77;
IL2CPP_EXTERN_C String_t* _stringLiteral90CA6E941E193F34EB9EA8A9881CFBD2CF8D3376;
IL2CPP_EXTERN_C String_t* _stringLiteral90EADB0790BD21B574F857041D2A06953C92550B;
IL2CPP_EXTERN_C String_t* _stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E;
IL2CPP_EXTERN_C String_t* _stringLiteralC312F88FB3C35D22BE7CDEB894CC152447D26A16;
IL2CPP_EXTERN_C String_t* _stringLiteralC6FD433EDD30A94214802E735EA234E48ED75A9D;
IL2CPP_EXTERN_C String_t* _stringLiteralCC32B81F26C173D727C06D2108233A4E18B30691;
IL2CPP_EXTERN_C String_t* _stringLiteralD2EFCBBA102ED3339947E85F4141EB08926E40E9;
IL2CPP_EXTERN_C const RuntimeMethod* HotFixStarter_ReloadAsset_mDE50267D293764FE2486CF40060746F727155047_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInitializeYooAssetEditorU3Ed__5_System_Collections_IEnumerator_Reset_mD11EC36A2BBAFF6377B74E626A91047096AFA8E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInitializeYooAssetOfflineU3Ed__6_System_Collections_IEnumerator_Reset_m35A7F318A3C58D2FEDD8D22779025AF7F3B4C2DC_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tA38BDED4BE00D3434C8ECE34004F07F07A4C67EF 
{
};

// System.Reflection.Assembly
struct Assembly_t  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Reflection.Assembly
struct Assembly_t_marshaled_com
{
};

// YooAsset.AsyncOperationBase
struct AsyncOperationBase_t3324BDEE0DD12D5653A50876950C3E50AE795032  : public RuntimeObject
{
	// System.Action`1<YooAsset.AsyncOperationBase> YooAsset.AsyncOperationBase::_callback
	Action_1_t2B402C842742EFCB5D9827C1981184ECC4F57FDF* ____callback_0;
	// YooAsset.EOperationStatus YooAsset.AsyncOperationBase::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_1;
	// System.String YooAsset.AsyncOperationBase::<Error>k__BackingField
	String_t* ___U3CErrorU3Ek__BackingField_2;
	// System.Single YooAsset.AsyncOperationBase::<Progress>k__BackingField
	float ___U3CProgressU3Ek__BackingField_3;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Object> YooAsset.AsyncOperationBase::_taskCompletionSource
	TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ____taskCompletionSource_4;
};

// YooAsset.InitializeParameters
struct InitializeParameters_t5939A049B34CFA3C4AE9ECF25678FD4C58F4D5B1  : public RuntimeObject
{
	// System.Boolean YooAsset.InitializeParameters::LocationToLower
	bool ___LocationToLower_0;
	// YooAsset.IDecryptionServices YooAsset.InitializeParameters::DecryptionServices
	RuntimeObject* ___DecryptionServices_1;
	// System.Int64 YooAsset.InitializeParameters::LoadingMaxTimeSlice
	int64_t ___LoadingMaxTimeSlice_2;
	// System.Int32 YooAsset.InitializeParameters::DownloadFailedTryAgain
	int32_t ___DownloadFailedTryAgain_3;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// YooAsset.OperationHandleBase
struct OperationHandleBase_tADAF436129FFA906751706F53E79482B8201377C  : public RuntimeObject
{
	// YooAsset.AssetInfo YooAsset.OperationHandleBase::_assetInfo
	AssetInfo_t6646B3A8F405CC4B9221FB0F9F3E3DCDB98F1456* ____assetInfo_0;
	// YooAsset.ProviderBase YooAsset.OperationHandleBase::<Provider>k__BackingField
	ProviderBase_t07CDF30CF91BB924A36026623C4136B7E1D0F758* ___U3CProviderU3Ek__BackingField_1;
};

// YooAsset.ResourcePackage
struct ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022  : public RuntimeObject
{
	// System.Boolean YooAsset.ResourcePackage::_isInitialize
	bool ____isInitialize_0;
	// System.String YooAsset.ResourcePackage::_initializeError
	String_t* ____initializeError_1;
	// YooAsset.EOperationStatus YooAsset.ResourcePackage::_initializeStatus
	int32_t ____initializeStatus_2;
	// YooAsset.EPlayMode YooAsset.ResourcePackage::_playMode
	int32_t ____playMode_3;
	// YooAsset.IBundleServices YooAsset.ResourcePackage::_bundleServices
	RuntimeObject* ____bundleServices_4;
	// YooAsset.IPlayModeServices YooAsset.ResourcePackage::_playModeServices
	RuntimeObject* ____playModeServices_5;
	// YooAsset.AssetSystemImpl YooAsset.ResourcePackage::_assetSystemImpl
	AssetSystemImpl_t81D235BF692751145D6B2C3F3431BC7D8290BD38* ____assetSystemImpl_6;
	// System.String YooAsset.ResourcePackage::<PackageName>k__BackingField
	String_t* ___U3CPackageNameU3Ek__BackingField_7;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// YooAsset.YooAssets
struct YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56  : public RuntimeObject
{
};

// Bear.HotFixStarter/<InitializeYooAssetEditor>d__5
struct U3CInitializeYooAssetEditorU3Ed__5_t460EA8010268F8E82071FC68EAD2BA1471196697  : public RuntimeObject
{
	// System.Int32 Bear.HotFixStarter/<InitializeYooAssetEditor>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Bear.HotFixStarter/<InitializeYooAssetEditor>d__5::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Bear.HotFixStarter Bear.HotFixStarter/<InitializeYooAssetEditor>d__5::<>4__this
	HotFixStarter_t80178BC019E3A3F4423BBE556BBE41B43E7658CC* ___U3CU3E4__this_2;
};

// Bear.HotFixStarter/<InitializeYooAssetOffline>d__6
struct U3CInitializeYooAssetOfflineU3Ed__6_tF7C6F1E4F37893C1EBB0C44125F1D0030BF99A4A  : public RuntimeObject
{
	// System.Int32 Bear.HotFixStarter/<InitializeYooAssetOffline>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Bear.HotFixStarter/<InitializeYooAssetOffline>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Bear.HotFixStarter Bear.HotFixStarter/<InitializeYooAssetOffline>d__6::<>4__this
	HotFixStarter_t80178BC019E3A3F4423BBE556BBE41B43E7658CC* ___U3CU3E4__this_2;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// YooAsset.EditorSimulateModeParameters
struct EditorSimulateModeParameters_tEF0187193F6D5A6AB7CBE8574D365D4E04D821AF  : public InitializeParameters_t5939A049B34CFA3C4AE9ECF25678FD4C58F4D5B1
{
	// System.String YooAsset.EditorSimulateModeParameters::SimulateManifestFilePath
	String_t* ___SimulateManifestFilePath_4;
};

// YooAsset.InitializationOperation
struct InitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F  : public AsyncOperationBase_t3324BDEE0DD12D5653A50876950C3E50AE795032
{
	// System.String YooAsset.InitializationOperation::<PackageVersion>k__BackingField
	String_t* ___U3CPackageVersionU3Ek__BackingField_5;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Reflection.MethodBase
struct MethodBase_t  : public MemberInfo_t
{
};

// YooAsset.OfflinePlayModeParameters
struct OfflinePlayModeParameters_t8BC588D438F1F9FAB046D71BC602A010CC6570E9  : public InitializeParameters_t5939A049B34CFA3C4AE9ECF25678FD4C58F4D5B1
{
};

// YooAsset.SceneOperationHandle
struct SceneOperationHandle_t9850DA88031CC19F7DAAC54D967383CA96D4F12F  : public OperationHandleBase_tADAF436129FFA906751706F53E79482B8201377C
{
	// System.Action`1<YooAsset.SceneOperationHandle> YooAsset.SceneOperationHandle::_callback
	Action_1_tC9A2B8C23FB07361EFAFDD3FC34948FC12C263AB* ____callback_2;
	// System.String YooAsset.SceneOperationHandle::<PackageName>k__BackingField
	String_t* ___U3CPackageNameU3Ek__BackingField_3;
};

// Bear.StartSignal
struct StartSignal_tEF5719EFCBE678F3B1EA769BB98E3D07EC7663CA 
{
	// System.String Bear.StartSignal::message
	String_t* ___message_0;
};
// Native definition for P/Invoke marshalling of Bear.StartSignal
struct StartSignal_tEF5719EFCBE678F3B1EA769BB98E3D07EC7663CA_marshaled_pinvoke
{
	char* ___message_0;
};
// Native definition for COM marshalling of Bear.StartSignal
struct StartSignal_tEF5719EFCBE678F3B1EA769BB98E3D07EC7663CA_marshaled_com
{
	Il2CppChar* ___message_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Reflection.MethodInfo
struct MethodInfo_t  : public MethodBase_t
{
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Bear.HotFixStarter
struct HotFixStarter_t80178BC019E3A3F4423BBE556BBE41B43E7658CC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Reflection.Assembly Bear.HotFixStarter::hotUpdateAss
	Assembly_t* ___hotUpdateAss_4;
	// YooAsset.ResourcePackage Bear.HotFixStarter::package
	ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* ___package_5;
};

// <Module>

// <Module>

// System.Reflection.Assembly

// System.Reflection.Assembly

// YooAsset.InitializeParameters

// YooAsset.InitializeParameters

// YooAsset.ResourcePackage

// YooAsset.ResourcePackage

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// YooAsset.YooAssets
struct YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields
{
	// System.Boolean YooAsset.YooAssets::_isInitialize
	bool ____isInitialize_0;
	// UnityEngine.GameObject YooAsset.YooAssets::_driver
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____driver_1;
	// System.Collections.Generic.List`1<YooAsset.ResourcePackage> YooAsset.YooAssets::_packages
	List_1_t34A5F992A0C261FD9E072E04F6EB044CC633B43A* ____packages_2;
	// YooAsset.ResourcePackage YooAsset.YooAssets::_defaultPackage
	ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* ____defaultPackage_3;
};

// YooAsset.YooAssets

// Bear.HotFixStarter/<InitializeYooAssetEditor>d__5

// Bear.HotFixStarter/<InitializeYooAssetEditor>d__5

// Bear.HotFixStarter/<InitializeYooAssetOffline>d__6

// Bear.HotFixStarter/<InitializeYooAssetOffline>d__6

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// YooAsset.EditorSimulateModeParameters

// YooAsset.EditorSimulateModeParameters

// YooAsset.InitializationOperation

// YooAsset.InitializationOperation

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// System.Reflection.MethodBase

// System.Reflection.MethodBase

// YooAsset.OfflinePlayModeParameters

// YooAsset.OfflinePlayModeParameters

// YooAsset.SceneOperationHandle

// YooAsset.SceneOperationHandle

// Bear.StartSignal

// Bear.StartSignal

// System.Void

// System.Void

// UnityEngine.Coroutine

// UnityEngine.Coroutine

// System.Reflection.MethodInfo

// System.Reflection.MethodInfo

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.Component

// UnityEngine.Component

// UnityEngine.GameObject

// UnityEngine.GameObject

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// System.Action

// System.Action

// System.NotSupportedException

// System.NotSupportedException

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// Bear.HotFixStarter

// Bear.HotFixStarter
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};



// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_target, const RuntimeMethod* method) ;
// System.Void YooAsset.YooAssets::Initialize(YooAsset.ILogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YooAssets_Initialize_mB0A84BF8A5A714A29327289CC2D8FB194DAF56F3 (RuntimeObject* ___0_logger, const RuntimeMethod* method) ;
// YooAsset.ResourcePackage YooAsset.YooAssets::CreatePackage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* YooAssets_CreatePackage_m15B5FE1965291E05B81890B9B15636A7C2D1B873 (String_t* ___0_packageName, const RuntimeMethod* method) ;
// System.Void YooAsset.YooAssets::SetDefaultPackage(YooAsset.ResourcePackage)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void YooAssets_SetDefaultPackage_mB83D34E411C4AB0C42DD9E9CB1992E836BA06328_inline (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* ___0_package, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void IngameDebugConsole.DebugLogConsole::AddCommand(System.String,System.String,System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugLogConsole_AddCommand_m44EA1C3BC10905406AAED2B25AC713C0E076A70F (String_t* ___0_command, String_t* ___1_description, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___2_method, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_streamingAssetsPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_streamingAssetsPath_mB904BCD9A7A4F18A52C175DE4A81F5DC3010CDB5 (const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Byte[] System.IO.File::ReadAllBytes(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24 (String_t* ___0_path, const RuntimeMethod* method) ;
// System.Reflection.Assembly System.Reflection.Assembly::Load(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Assembly_t* Assembly_Load_mD9E9CED2EFF8BBE97ACDE83FB8ED492D1E42E975 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_rawAssembly, const RuntimeMethod* method) ;
// System.Reflection.MethodInfo System.Type::GetMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231 (Type_t* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826 (MethodBase_t* __this, RuntimeObject* ___0_obj, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___1_parameters, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___0_methodName, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// YooAsset.SceneOperationHandle YooAsset.ResourcePackage::LoadSceneAsync(System.String,UnityEngine.SceneManagement.LoadSceneMode,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SceneOperationHandle_t9850DA88031CC19F7DAAC54D967383CA96D4F12F* ResourcePackage_LoadSceneAsync_mEF2571DC2069BC7A8152A9C56AEA8B57C301E213 (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, String_t* ___0_location, int32_t ___1_sceneMode, bool ___2_activateOnLoad, int32_t ___3_priority, const RuntimeMethod* method) ;
// System.Void Bear.HotFixStarter/<InitializeYooAssetEditor>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeYooAssetEditorU3Ed__5__ctor_m10514BABE08C1E54E5C5748C2711B322304C89C0 (U3CInitializeYooAssetEditorU3Ed__5_t460EA8010268F8E82071FC68EAD2BA1471196697* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void Bear.HotFixStarter/<InitializeYooAssetOffline>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeYooAssetOfflineU3Ed__6__ctor_m4BED8858718A1CCD84AF18D07DA496AF017503ED (U3CInitializeYooAssetOfflineU3Ed__6_tF7C6F1E4F37893C1EBB0C44125F1D0030BF99A4A* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void YooAsset.EditorSimulateModeParameters::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EditorSimulateModeParameters__ctor_m7C97CBECF9586650FC265B658B7D58A2F106EDD8 (EditorSimulateModeParameters_tEF0187193F6D5A6AB7CBE8574D365D4E04D821AF* __this, const RuntimeMethod* method) ;
// System.String YooAsset.EditorSimulateModeHelper::SimulateBuild(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EditorSimulateModeHelper_SimulateBuild_m6BFEA7AE009EBC4736041FF11B18F86063572298 (String_t* ___0_packageName, const RuntimeMethod* method) ;
// YooAsset.InitializationOperation YooAsset.ResourcePackage::InitializeAsync(YooAsset.InitializeParameters)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F* ResourcePackage_InitializeAsync_mE765719D9916BC40D7DFA0AE5B3243C47F3AC9F4 (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* __this, InitializeParameters_t5939A049B34CFA3C4AE9ECF25678FD4C58F4D5B1* ___0_parameters, const RuntimeMethod* method) ;
// System.Void Bear.HotFixStarter::OnInited()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HotFixStarter_OnInited_mE4F460133FB8430B372A91F07A0EE81CB9A766CC (HotFixStarter_t80178BC019E3A3F4423BBE556BBE41B43E7658CC* __this, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void YooAsset.OfflinePlayModeParameters::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OfflinePlayModeParameters__ctor_m916B527C5A8FDF1631F083C206D9E813916E9C78 (OfflinePlayModeParameters_t8BC588D438F1F9FAB046D71BC602A010CC6570E9* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Bear.HotFixStarter::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HotFixStarter_Awake_mC5593A4B7149B127217C835B3B3D3258D5893913 (HotFixStarter_t80178BC019E3A3F4423BBE556BBE41B43E7658CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DebugLogConsole_tD4575289A02D94FC8841D22AE24DE8216C32A707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HotFixStarter_ReloadAsset_mDE50267D293764FE2486CF40060746F727155047_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC312F88FB3C35D22BE7CDEB894CC152447D26A16);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6FD433EDD30A94214802E735EA234E48ED75A9D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m4B70C3AEF886C176543D1295507B6455C9DCAEA7(L_0, NULL);
		// YooAssets.Initialize();
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		YooAssets_Initialize_mB0A84BF8A5A714A29327289CC2D8FB194DAF56F3((RuntimeObject*)NULL, NULL);
		// package = YooAssets.CreatePackage("Default");
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_1;
		L_1 = YooAssets_CreatePackage_m15B5FE1965291E05B81890B9B15636A7C2D1B873(_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E, NULL);
		__this->___package_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___package_5), (void*)L_1);
		// YooAssets.SetDefaultPackage(package);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_2 = __this->___package_5;
		YooAssets_SetDefaultPackage_mB83D34E411C4AB0C42DD9E9CB1992E836BA06328_inline(L_2, NULL);
		// DebugLogConsole.AddCommand("Reload", "Reload Scene", ReloadAsset);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_3, __this, (intptr_t)((void*)HotFixStarter_ReloadAsset_mDE50267D293764FE2486CF40060746F727155047_RuntimeMethod_var), NULL);
		il2cpp_codegen_runtime_class_init_inline(DebugLogConsole_tD4575289A02D94FC8841D22AE24DE8216C32A707_il2cpp_TypeInfo_var);
		DebugLogConsole_AddCommand_m44EA1C3BC10905406AAED2B25AC713C0E076A70F(_stringLiteralC312F88FB3C35D22BE7CDEB894CC152447D26A16, _stringLiteralC6FD433EDD30A94214802E735EA234E48ED75A9D, L_3, NULL);
		// }
		return;
	}
}
// System.Void Bear.HotFixStarter::ReloadAsset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HotFixStarter_ReloadAsset_mDE50267D293764FE2486CF40060746F727155047 (HotFixStarter_t80178BC019E3A3F4423BBE556BBE41B43E7658CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral052C17E9D6BC1FE3DB31F3277AED6D12A2C6BDAC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BE39B53FE0807C0C41B8BB0590EAA8409394D77);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90EADB0790BD21B574F857041D2A06953C92550B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2EFCBBA102ED3339947E85F4141EB08926E40E9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// hotUpdateAss = Assembly.Load(File.ReadAllBytes($"{Application.streamingAssetsPath}/Hotfix.dll.bytes"));
		String_t* L_0;
		L_0 = Application_get_streamingAssetsPath_mB904BCD9A7A4F18A52C175DE4A81F5DC3010CDB5(NULL);
		String_t* L_1;
		L_1 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, _stringLiteral90EADB0790BD21B574F857041D2A06953C92550B, NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2;
		L_2 = File_ReadAllBytes_m704CBBA3F130C94F5A3E0BE2A93D9E9D79DC3E24(L_1, NULL);
		Assembly_t* L_3;
		L_3 = Assembly_Load_mD9E9CED2EFF8BBE97ACDE83FB8ED492D1E42E975(L_2, NULL);
		__this->___hotUpdateAss_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___hotUpdateAss_4), (void*)L_3);
		// Type type = hotUpdateAss.GetType("Hello");
		Assembly_t* L_4 = __this->___hotUpdateAss_4;
		NullCheck(L_4);
		Type_t* L_5;
		L_5 = VirtualFuncInvoker1< Type_t*, String_t* >::Invoke(21 /* System.Type System.Reflection.Assembly::GetType(System.String) */, L_4, _stringLiteralD2EFCBBA102ED3339947E85F4141EB08926E40E9);
		// type.GetMethod("Run").Invoke(null, null);
		NullCheck(L_5);
		MethodInfo_t* L_6;
		L_6 = Type_GetMethod_m66AD062187F19497DBCA900823B0C268322DC231(L_5, _stringLiteral052C17E9D6BC1FE3DB31F3277AED6D12A2C6BDAC, NULL);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = MethodBase_Invoke_mEEF3218648F111A8C338001A7804091A0747C826(L_6, NULL, (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)NULL, NULL);
		// StartCoroutine("InitializeYooAssetOffline");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_8;
		L_8 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral1BE39B53FE0807C0C41B8BB0590EAA8409394D77, NULL);
		// }
		return;
	}
}
// System.Void Bear.HotFixStarter::OnInited()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HotFixStarter_OnInited_mE4F460133FB8430B372A91F07A0EE81CB9A766CC (HotFixStarter_t80178BC019E3A3F4423BBE556BBE41B43E7658CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90CA6E941E193F34EB9EA8A9881CFBD2CF8D3376);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC32B81F26C173D727C06D2108233A4E18B30691);
		s_Il2CppMethodInitialized = true;
	}
	ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* G_B2_0 = NULL;
	ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* G_B1_0 = NULL;
	{
		// Debug.Log("Start Loading scene");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralCC32B81F26C173D727C06D2108233A4E18B30691, NULL);
		// package?.LoadSceneAsync("HotFixScene");
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = __this->___package_5;
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0015;
		}
	}
	{
		return;
	}

IL_0015:
	{
		NullCheck(G_B2_0);
		SceneOperationHandle_t9850DA88031CC19F7DAAC54D967383CA96D4F12F* L_2;
		L_2 = ResourcePackage_LoadSceneAsync_mEF2571DC2069BC7A8152A9C56AEA8B57C301E213(G_B2_0, _stringLiteral90CA6E941E193F34EB9EA8A9881CFBD2CF8D3376, 0, (bool)1, ((int32_t)100), NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Bear.HotFixStarter::InitializeYooAssetEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HotFixStarter_InitializeYooAssetEditor_m673CFFE0AD444E7146E6B85A627BEBDF039B7AFF (HotFixStarter_t80178BC019E3A3F4423BBE556BBE41B43E7658CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeYooAssetEditorU3Ed__5_t460EA8010268F8E82071FC68EAD2BA1471196697_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CInitializeYooAssetEditorU3Ed__5_t460EA8010268F8E82071FC68EAD2BA1471196697* L_0 = (U3CInitializeYooAssetEditorU3Ed__5_t460EA8010268F8E82071FC68EAD2BA1471196697*)il2cpp_codegen_object_new(U3CInitializeYooAssetEditorU3Ed__5_t460EA8010268F8E82071FC68EAD2BA1471196697_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CInitializeYooAssetEditorU3Ed__5__ctor_m10514BABE08C1E54E5C5748C2711B322304C89C0(L_0, 0, NULL);
		U3CInitializeYooAssetEditorU3Ed__5_t460EA8010268F8E82071FC68EAD2BA1471196697* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Bear.HotFixStarter::InitializeYooAssetOffline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HotFixStarter_InitializeYooAssetOffline_mA78863426C2FA1624A76F15D9B233B8873EE9713 (HotFixStarter_t80178BC019E3A3F4423BBE556BBE41B43E7658CC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeYooAssetOfflineU3Ed__6_tF7C6F1E4F37893C1EBB0C44125F1D0030BF99A4A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CInitializeYooAssetOfflineU3Ed__6_tF7C6F1E4F37893C1EBB0C44125F1D0030BF99A4A* L_0 = (U3CInitializeYooAssetOfflineU3Ed__6_tF7C6F1E4F37893C1EBB0C44125F1D0030BF99A4A*)il2cpp_codegen_object_new(U3CInitializeYooAssetOfflineU3Ed__6_tF7C6F1E4F37893C1EBB0C44125F1D0030BF99A4A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CInitializeYooAssetOfflineU3Ed__6__ctor_m4BED8858718A1CCD84AF18D07DA496AF017503ED(L_0, 0, NULL);
		U3CInitializeYooAssetOfflineU3Ed__6_tF7C6F1E4F37893C1EBB0C44125F1D0030BF99A4A* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Bear.HotFixStarter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HotFixStarter__ctor_m56AA28CB3E9BE98DD6E8A2F8F4140153D9F0F4EB (HotFixStarter_t80178BC019E3A3F4423BBE556BBE41B43E7658CC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Bear.HotFixStarter/<InitializeYooAssetEditor>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeYooAssetEditorU3Ed__5__ctor_m10514BABE08C1E54E5C5748C2711B322304C89C0 (U3CInitializeYooAssetEditorU3Ed__5_t460EA8010268F8E82071FC68EAD2BA1471196697* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Bear.HotFixStarter/<InitializeYooAssetEditor>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeYooAssetEditorU3Ed__5_System_IDisposable_Dispose_mD17F15ABF12A1704CB8C260B6E09E668F970761A (U3CInitializeYooAssetEditorU3Ed__5_t460EA8010268F8E82071FC68EAD2BA1471196697* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Bear.HotFixStarter/<InitializeYooAssetEditor>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CInitializeYooAssetEditorU3Ed__5_MoveNext_mF1D3189EC6DF2D1DE2DCBC15F28C72A8DD234F76 (U3CInitializeYooAssetEditorU3Ed__5_t460EA8010268F8E82071FC68EAD2BA1471196697* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EditorSimulateModeParameters_tEF0187193F6D5A6AB7CBE8574D365D4E04D821AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	HotFixStarter_t80178BC019E3A3F4423BBE556BBE41B43E7658CC* V_1 = NULL;
	EditorSimulateModeParameters_tEF0187193F6D5A6AB7CBE8574D365D4E04D821AF* V_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		HotFixStarter_t80178BC019E3A3F4423BBE556BBE41B43E7658CC* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_004f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var initParameters = new EditorSimulateModeParameters();
		EditorSimulateModeParameters_tEF0187193F6D5A6AB7CBE8574D365D4E04D821AF* L_4 = (EditorSimulateModeParameters_tEF0187193F6D5A6AB7CBE8574D365D4E04D821AF*)il2cpp_codegen_object_new(EditorSimulateModeParameters_tEF0187193F6D5A6AB7CBE8574D365D4E04D821AF_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		EditorSimulateModeParameters__ctor_m7C97CBECF9586650FC265B658B7D58A2F106EDD8(L_4, NULL);
		V_2 = L_4;
		// initParameters.SimulateManifestFilePath = EditorSimulateModeHelper.SimulateBuild("Default");
		EditorSimulateModeParameters_tEF0187193F6D5A6AB7CBE8574D365D4E04D821AF* L_5 = V_2;
		String_t* L_6;
		L_6 = EditorSimulateModeHelper_SimulateBuild_m6BFEA7AE009EBC4736041FF11B18F86063572298(_stringLiteral9D5313975DA8153FF9A5262016CB413A4E84846E, NULL);
		NullCheck(L_5);
		L_5->___SimulateManifestFilePath_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___SimulateManifestFilePath_4), (void*)L_6);
		// yield return package.InitializeAsync(initParameters);
		HotFixStarter_t80178BC019E3A3F4423BBE556BBE41B43E7658CC* L_7 = V_1;
		NullCheck(L_7);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_8 = L_7->___package_5;
		EditorSimulateModeParameters_tEF0187193F6D5A6AB7CBE8574D365D4E04D821AF* L_9 = V_2;
		NullCheck(L_8);
		InitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F* L_10;
		L_10 = ResourcePackage_InitializeAsync_mE765719D9916BC40D7DFA0AE5B3243C47F3AC9F4(L_8, L_9, NULL);
		__this->___U3CU3E2__current_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_10);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// OnInited();
		HotFixStarter_t80178BC019E3A3F4423BBE556BBE41B43E7658CC* L_11 = V_1;
		NullCheck(L_11);
		HotFixStarter_OnInited_mE4F460133FB8430B372A91F07A0EE81CB9A766CC(L_11, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Bear.HotFixStarter/<InitializeYooAssetEditor>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CInitializeYooAssetEditorU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC0D57D8C73721AF30C1F33F06F48769D2DE8DEC6 (U3CInitializeYooAssetEditorU3Ed__5_t460EA8010268F8E82071FC68EAD2BA1471196697* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Bear.HotFixStarter/<InitializeYooAssetEditor>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeYooAssetEditorU3Ed__5_System_Collections_IEnumerator_Reset_mD11EC36A2BBAFF6377B74E626A91047096AFA8E4 (U3CInitializeYooAssetEditorU3Ed__5_t460EA8010268F8E82071FC68EAD2BA1471196697* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CInitializeYooAssetEditorU3Ed__5_System_Collections_IEnumerator_Reset_mD11EC36A2BBAFF6377B74E626A91047096AFA8E4_RuntimeMethod_var)));
	}
}
// System.Object Bear.HotFixStarter/<InitializeYooAssetEditor>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CInitializeYooAssetEditorU3Ed__5_System_Collections_IEnumerator_get_Current_mD52CF34D19839A37237C1D1C890A48E07FD2B79D (U3CInitializeYooAssetEditorU3Ed__5_t460EA8010268F8E82071FC68EAD2BA1471196697* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Bear.HotFixStarter/<InitializeYooAssetOffline>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeYooAssetOfflineU3Ed__6__ctor_m4BED8858718A1CCD84AF18D07DA496AF017503ED (U3CInitializeYooAssetOfflineU3Ed__6_tF7C6F1E4F37893C1EBB0C44125F1D0030BF99A4A* __this, int32_t ___0_U3CU3E1__state, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___0_U3CU3E1__state;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Bear.HotFixStarter/<InitializeYooAssetOffline>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeYooAssetOfflineU3Ed__6_System_IDisposable_Dispose_m8D6D1AF3DF16CBB950494DE51AED1633D77F53AA (U3CInitializeYooAssetOfflineU3Ed__6_tF7C6F1E4F37893C1EBB0C44125F1D0030BF99A4A* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Bear.HotFixStarter/<InitializeYooAssetOffline>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CInitializeYooAssetOfflineU3Ed__6_MoveNext_mDA86E59220D5A4C5A6193A6F505CB2A3A017FB16 (U3CInitializeYooAssetOfflineU3Ed__6_tF7C6F1E4F37893C1EBB0C44125F1D0030BF99A4A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OfflinePlayModeParameters_t8BC588D438F1F9FAB046D71BC602A010CC6570E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	HotFixStarter_t80178BC019E3A3F4423BBE556BBE41B43E7658CC* V_1 = NULL;
	OfflinePlayModeParameters_t8BC588D438F1F9FAB046D71BC602A010CC6570E9* V_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		HotFixStarter_t80178BC019E3A3F4423BBE556BBE41B43E7658CC* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// var initParameters = new OfflinePlayModeParameters();
		OfflinePlayModeParameters_t8BC588D438F1F9FAB046D71BC602A010CC6570E9* L_4 = (OfflinePlayModeParameters_t8BC588D438F1F9FAB046D71BC602A010CC6570E9*)il2cpp_codegen_object_new(OfflinePlayModeParameters_t8BC588D438F1F9FAB046D71BC602A010CC6570E9_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		OfflinePlayModeParameters__ctor_m916B527C5A8FDF1631F083C206D9E813916E9C78(L_4, NULL);
		V_2 = L_4;
		// yield return package.InitializeAsync(initParameters);
		HotFixStarter_t80178BC019E3A3F4423BBE556BBE41B43E7658CC* L_5 = V_1;
		NullCheck(L_5);
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_6 = L_5->___package_5;
		OfflinePlayModeParameters_t8BC588D438F1F9FAB046D71BC602A010CC6570E9* L_7 = V_2;
		NullCheck(L_6);
		InitializationOperation_t6B527F5DF87FBB08463CE61CDFBA82190F5CE66F* L_8;
		L_8 = ResourcePackage_InitializeAsync_mE765719D9916BC40D7DFA0AE5B3243C47F3AC9F4(L_6, L_7, NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_003f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// OnInited();
		HotFixStarter_t80178BC019E3A3F4423BBE556BBE41B43E7658CC* L_9 = V_1;
		NullCheck(L_9);
		HotFixStarter_OnInited_mE4F460133FB8430B372A91F07A0EE81CB9A766CC(L_9, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Bear.HotFixStarter/<InitializeYooAssetOffline>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CInitializeYooAssetOfflineU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC82E0760950FA81DD73B3DCF065F3D3569DB7979 (U3CInitializeYooAssetOfflineU3Ed__6_tF7C6F1E4F37893C1EBB0C44125F1D0030BF99A4A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Bear.HotFixStarter/<InitializeYooAssetOffline>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeYooAssetOfflineU3Ed__6_System_Collections_IEnumerator_Reset_m35A7F318A3C58D2FEDD8D22779025AF7F3B4C2DC (U3CInitializeYooAssetOfflineU3Ed__6_tF7C6F1E4F37893C1EBB0C44125F1D0030BF99A4A* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CInitializeYooAssetOfflineU3Ed__6_System_Collections_IEnumerator_Reset_m35A7F318A3C58D2FEDD8D22779025AF7F3B4C2DC_RuntimeMethod_var)));
	}
}
// System.Object Bear.HotFixStarter/<InitializeYooAssetOffline>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CInitializeYooAssetOfflineU3Ed__6_System_Collections_IEnumerator_get_Current_m73FEDA9060F1AB727E2CA48777DE090FA2406AF1 (U3CInitializeYooAssetOfflineU3Ed__6_tF7C6F1E4F37893C1EBB0C44125F1D0030BF99A4A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Bear.StartSignal
IL2CPP_EXTERN_C void StartSignal_tEF5719EFCBE678F3B1EA769BB98E3D07EC7663CA_marshal_pinvoke(const StartSignal_tEF5719EFCBE678F3B1EA769BB98E3D07EC7663CA& unmarshaled, StartSignal_tEF5719EFCBE678F3B1EA769BB98E3D07EC7663CA_marshaled_pinvoke& marshaled)
{
	marshaled.___message_0 = il2cpp_codegen_marshal_string(unmarshaled.___message_0);
}
IL2CPP_EXTERN_C void StartSignal_tEF5719EFCBE678F3B1EA769BB98E3D07EC7663CA_marshal_pinvoke_back(const StartSignal_tEF5719EFCBE678F3B1EA769BB98E3D07EC7663CA_marshaled_pinvoke& marshaled, StartSignal_tEF5719EFCBE678F3B1EA769BB98E3D07EC7663CA& unmarshaled)
{
	unmarshaled.___message_0 = il2cpp_codegen_marshal_string_result(marshaled.___message_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___message_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___message_0));
}
// Conversion method for clean up from marshalling of: Bear.StartSignal
IL2CPP_EXTERN_C void StartSignal_tEF5719EFCBE678F3B1EA769BB98E3D07EC7663CA_marshal_pinvoke_cleanup(StartSignal_tEF5719EFCBE678F3B1EA769BB98E3D07EC7663CA_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___message_0);
	marshaled.___message_0 = NULL;
}
// Conversion methods for marshalling of: Bear.StartSignal
IL2CPP_EXTERN_C void StartSignal_tEF5719EFCBE678F3B1EA769BB98E3D07EC7663CA_marshal_com(const StartSignal_tEF5719EFCBE678F3B1EA769BB98E3D07EC7663CA& unmarshaled, StartSignal_tEF5719EFCBE678F3B1EA769BB98E3D07EC7663CA_marshaled_com& marshaled)
{
	marshaled.___message_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___message_0);
}
IL2CPP_EXTERN_C void StartSignal_tEF5719EFCBE678F3B1EA769BB98E3D07EC7663CA_marshal_com_back(const StartSignal_tEF5719EFCBE678F3B1EA769BB98E3D07EC7663CA_marshaled_com& marshaled, StartSignal_tEF5719EFCBE678F3B1EA769BB98E3D07EC7663CA& unmarshaled)
{
	unmarshaled.___message_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___message_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___message_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___message_0));
}
// Conversion method for clean up from marshalling of: Bear.StartSignal
IL2CPP_EXTERN_C void StartSignal_tEF5719EFCBE678F3B1EA769BB98E3D07EC7663CA_marshal_com_cleanup(StartSignal_tEF5719EFCBE678F3B1EA769BB98E3D07EC7663CA_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___message_0);
	marshaled.___message_0 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void YooAssets_SetDefaultPackage_mB83D34E411C4AB0C42DD9E9CB1992E836BA06328_inline (ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* ___0_package, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _defaultPackage = package;
		ResourcePackage_t6B28B6B3A6DEAB641E6CBB06F383D7B947198022* L_0 = ___0_package;
		il2cpp_codegen_runtime_class_init_inline(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var);
		((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_StaticFields*)il2cpp_codegen_static_fields_for(YooAssets_tD00B5B9911F87CF8AC643076BF1ECB1F10DEBA56_il2cpp_TypeInfo_var))->____defaultPackage_3), (void*)L_0);
		// }
		return;
	}
}
