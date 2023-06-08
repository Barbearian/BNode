#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct VirtualActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
	}
};
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
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<Mono.CSharp.Block,Mono.CSharp.Block>
struct Dictionary_2_t4AFFA5572FB5806437050F29C868D7AD9AEE8F9D;
// System.Collections.Generic.Dictionary`2<Mono.CSharp.Statement,System.Collections.Generic.List`1<Mono.CSharp.DefiniteAssignmentBitSet>>
struct Dictionary_2_tA6D325CDB3C947B13DF16206DB3823EFF8787FA3;
// System.Collections.Generic.Dictionary`2<Mono.CSharp.TypeSpec,System.Object>
struct Dictionary_2_t7FAE44A2B2E72C711EB10F5FC14B36876256194D;
// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.Object>
struct ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583;
// System.Func`3<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,System.Int32>
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821;
// System.Collections.Generic.List`1<Mono.CSharp.IExpressionCleanup>
struct List_1_tF144BA6CF1F889E09DA1EC6AE4A98FB1754FB91F;
// System.Collections.Generic.List`1<Mono.CSharp.ResumableStatement>
struct List_1_t250FC0003BD62BE871BD32A380B8287630B3E351;
// System.Collections.Generic.List`1<Mono.CSharp.SourceFile>
struct List_1_tE25B395EA25FA32FC05543838706BC98401701AB;
// System.Collections.Generic.List`1<Mono.CSharp.TryFinally>
struct List_1_t65E2863C1DAD524F0AA122302D908B6F1515A235;
// System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<System.Object>
struct WorkStealingQueue_t24446799B8DD68186AE6AC897ED0358FD1E03896;
// System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>
struct XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A;
// System.Xml.Linq.XHashtable`1<System.Object>
struct XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072;
// Mono.CSharp.YieldStatement`1<System.Object>
struct YieldStatement_1_t750B7E1A9DC34B29E91108D1F9F3C7C70229492F;
// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<System.Object>[]
struct EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping[]
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263;
// Mono.CSharp.Location/Checkpoint[]
struct CheckpointU5BU5D_tBDFE98DE1652432651D9224F448A434AA88990F1;
// Mono.CSharp.AnonymousExpression
struct AnonymousExpression_t78C4F0AC19BD9BBAC4C5928F80D91F3197011414;
// Mono.CSharp.Block
struct Block_t1DBA3DA0C20129EF28163FF210284CD039B2543A;
// Mono.CSharp.BlockContext
struct BlockContext_tB2407BBCB8B477D535A7512F310E3AE0EB3DA4F3;
// Mono.CSharp.CloneContext
struct CloneContext_t1503DDCBC25A8CCFC1A56F42F0F87415B136AC09;
// Mono.CSharp.CompilerContext
struct CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2;
// Mono.CSharp.ConditionalAccessContext
struct ConditionalAccessContext_t83BE3A246B510FFFC912108E628AC9E34C3024F8;
// Mono.CSharp.DefiniteAssignmentBitSet
struct DefiniteAssignmentBitSet_tD9FC31FFB05775DAA735194088E38A5E97235B12;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Mono.CSharp.DynamicSiteClass
struct DynamicSiteClass_tA1F6EBB629B6DC3FC5EB2F34F9E7FB50FBB364AB;
// Mono.CSharp.EmitContext
struct EmitContext_t4F2268BCF4C3AB3781ECE507806EF8632A12031C;
// Mono.CSharp.ExceptionStatement
struct ExceptionStatement_tD72CFF74FF08EAE99069D55F1CB7BD95729200BF;
// Mono.CSharp.Expression
struct Expression_t765E7793407091A8450573D552B39FDD6121FF49;
// Mono.CSharp.FlowAnalysisContext
struct FlowAnalysisContext_t5DDB23C6A1441BE2EB24E0BC82E9AE8B1A817D06;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t2B624D1AA8840E0A7147E6628C5606D42443617A;
// Mono.CSharp.IMemberContext
struct IMemberContext_t02991223F3FEC57045D9FA372DB500892FFE0B7F;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// System.Reflection.Emit.LocalBuilder
struct LocalBuilder_tCB5AF342391604CED7394B81A931AB5BC6B97BB6;
// Mono.CSharp.LocalVariable
struct LocalVariable_tF41E16205A31C902E5019E3F5E6BB524C25E4EF9;
// Mono.CSharp.LoopStatement
struct LoopStatement_t4CFDF3FFC44C2A67F004A2DBB7BFDEDFA603C42A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C;
// Mono.CSharp.ParametersBlock
struct ParametersBlock_t68EDCB1C43780F0042B72F3A47C002DE7D356E99;
// Mono.CSharp.ResolveContext
struct ResolveContext_t3B244DBC54CA521A77ADC2E849E8CD8A9A529626;
// Mono.CSharp.ResumableStatement
struct ResumableStatement_tE9CC299D91959558B2711FB0F613178793BD6B95;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Mono.CompilerServices.SymbolWriter.SourceMethodBuilder
struct SourceMethodBuilder_t22B516C687FC30A801C6ED9C73A753D847D0A842;
// Mono.CSharp.StateMachine
struct StateMachine_tD390E3D4B7E2B3BA50F6518042D31FE1BCC86E85;
// Mono.CSharp.StateMachineInitializer
struct StateMachineInitializer_tD6039E8985AB33B2CB1FBBCF927FDDCAC541FA32;
// Mono.CSharp.Statement
struct Statement_t4498D621BCD841B009E22E38039C2759DFC4AC2B;
// System.String
struct String_t;
// Mono.CSharp.Switch
struct Switch_t5712DD8CBDA4D650401AD53609725C59716090FE;
// Mono.CSharp.TryFinally
struct TryFinally_t7F4AB6D12093D4F36F38CC8C3F68CB39F2A9FEF7;
// Mono.CSharp.TypeDefinition
struct TypeDefinition_t195EE8751B10A8EA1752532FC68B8BDCC1A806B0;
// Mono.CSharp.TypeSpec
struct TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C const RuntimeMethod* WorkStealingQueue_LocalPush_m8B1D8601B4870C599A8FF4F36500D74B9C159C0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XHashtableState_Resize_mDB3BA5C327EF6A86F6CE58B59E1D7430E62532C5_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<System.Object>
struct WorkStealingQueue_t24446799B8DD68186AE6AC897ED0358FD1E03896  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue::_headIndex
	int32_t ____headIndex_0;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue::_tailIndex
	int32_t ____tailIndex_1;
	// T[] modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_2;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue::_mask
	int32_t ____mask_3;
	// System.Int32 System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue::_addTakeCount
	int32_t ____addTakeCount_4;
	// System.Int32 System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue::_stealCount
	int32_t ____stealCount_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue::_currentOp
	int32_t ____currentOp_6;
	// System.Boolean System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue::_frozen
	bool ____frozen_7;
	// System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<T> System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue::_nextQueue
	WorkStealingQueue_t24446799B8DD68186AE6AC897ED0358FD1E03896* ____nextQueue_8;
	// System.Int32 System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue::_ownerThreadId
	int32_t ____ownerThreadId_9;
};

// System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>
struct XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A  : public RuntimeObject
{
	// System.Int32[] System.Xml.Linq.XHashtable`1/XHashtableState::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<TValue>[] System.Xml.Linq.XHashtable`1/XHashtableState::_entries
	EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* ____entries_1;
	// System.Int32 System.Xml.Linq.XHashtable`1/XHashtableState::_numEntries
	int32_t ____numEntries_2;
	// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue> System.Xml.Linq.XHashtable`1/XHashtableState::_extractKey
	ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* ____extractKey_3;
};

// System.Xml.Linq.XHashtable`1<System.Object>
struct XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072  : public RuntimeObject
{
	// System.Xml.Linq.XHashtable`1/XHashtableState<TValue> System.Xml.Linq.XHashtable`1::_state
	XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* ____state_0;
};

// Mono.CSharp.BuilderContext
struct BuilderContext_t04DFFD0663A46532EFF3A7339727296324D421F2  : public RuntimeObject
{
	// Mono.CSharp.BuilderContext/Options Mono.CSharp.BuilderContext::flags
	int32_t ___flags_0;
};

// Mono.CSharp.CloneContext
struct CloneContext_t1503DDCBC25A8CCFC1A56F42F0F87415B136AC09  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<Mono.CSharp.Block,Mono.CSharp.Block> Mono.CSharp.CloneContext::block_map
	Dictionary_2_t4AFFA5572FB5806437050F29C868D7AD9AEE8F9D* ___block_map_0;
};

// Mono.CSharp.FlowAnalysisContext
struct FlowAnalysisContext_t5DDB23C6A1441BE2EB24E0BC82E9AE8B1A817D06  : public RuntimeObject
{
	// Mono.CSharp.CompilerContext Mono.CSharp.FlowAnalysisContext::ctx
	CompilerContext_t61FCD5D9A2F49929FBB1AF28F8A3222FB944F3D2* ___ctx_0;
	// Mono.CSharp.DefiniteAssignmentBitSet Mono.CSharp.FlowAnalysisContext::conditional_access
	DefiniteAssignmentBitSet_tD9FC31FFB05775DAA735194088E38A5E97235B12* ___conditional_access_1;
	// Mono.CSharp.DefiniteAssignmentBitSet Mono.CSharp.FlowAnalysisContext::<DefiniteAssignment>k__BackingField
	DefiniteAssignmentBitSet_tD9FC31FFB05775DAA735194088E38A5E97235B12* ___U3CDefiniteAssignmentU3Ek__BackingField_2;
	// Mono.CSharp.DefiniteAssignmentBitSet Mono.CSharp.FlowAnalysisContext::<DefiniteAssignmentOnTrue>k__BackingField
	DefiniteAssignmentBitSet_tD9FC31FFB05775DAA735194088E38A5E97235B12* ___U3CDefiniteAssignmentOnTrueU3Ek__BackingField_3;
	// Mono.CSharp.DefiniteAssignmentBitSet Mono.CSharp.FlowAnalysisContext::<DefiniteAssignmentOnFalse>k__BackingField
	DefiniteAssignmentBitSet_tD9FC31FFB05775DAA735194088E38A5E97235B12* ___U3CDefiniteAssignmentOnFalseU3Ek__BackingField_4;
	// System.Collections.Generic.Dictionary`2<Mono.CSharp.Statement,System.Collections.Generic.List`1<Mono.CSharp.DefiniteAssignmentBitSet>> Mono.CSharp.FlowAnalysisContext::<LabelStack>k__BackingField
	Dictionary_2_tA6D325CDB3C947B13DF16206DB3823EFF8787FA3* ___U3CLabelStackU3Ek__BackingField_5;
	// Mono.CSharp.ParametersBlock Mono.CSharp.FlowAnalysisContext::<ParametersBlock>k__BackingField
	ParametersBlock_t68EDCB1C43780F0042B72F3A47C002DE7D356E99* ___U3CParametersBlockU3Ek__BackingField_6;
	// Mono.CSharp.DefiniteAssignmentBitSet Mono.CSharp.FlowAnalysisContext::<SwitchInitialDefinitiveAssignment>k__BackingField
	DefiniteAssignmentBitSet_tD9FC31FFB05775DAA735194088E38A5E97235B12* ___U3CSwitchInitialDefinitiveAssignmentU3Ek__BackingField_7;
	// Mono.CSharp.TryFinally Mono.CSharp.FlowAnalysisContext::<TryFinally>k__BackingField
	TryFinally_t7F4AB6D12093D4F36F38CC8C3F68CB39F2A9FEF7* ___U3CTryFinallyU3Ek__BackingField_8;
	// System.Boolean Mono.CSharp.FlowAnalysisContext::<UnreachableReported>k__BackingField
	bool ___U3CUnreachableReportedU3Ek__BackingField_9;
};

// Mono.CSharp.ResolveContext
struct ResolveContext_t3B244DBC54CA521A77ADC2E849E8CD8A9A529626  : public RuntimeObject
{
	// Mono.CSharp.ResolveContext/Options Mono.CSharp.ResolveContext::flags
	int32_t ___flags_0;
	// Mono.CSharp.AnonymousExpression Mono.CSharp.ResolveContext::CurrentAnonymousMethod
	AnonymousExpression_t78C4F0AC19BD9BBAC4C5928F80D91F3197011414* ___CurrentAnonymousMethod_1;
	// Mono.CSharp.Expression Mono.CSharp.ResolveContext::CurrentInitializerVariable
	Expression_t765E7793407091A8450573D552B39FDD6121FF49* ___CurrentInitializerVariable_2;
	// Mono.CSharp.Block Mono.CSharp.ResolveContext::CurrentBlock
	Block_t1DBA3DA0C20129EF28163FF210284CD039B2543A* ___CurrentBlock_3;
	// Mono.CSharp.IMemberContext Mono.CSharp.ResolveContext::MemberContext
	RuntimeObject* ___MemberContext_4;
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

// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<System.Object>
struct Entry_t6E72C722C46949F140550D563C1F41E304752583 
{
	// TValue System.Xml.Linq.XHashtable`1/XHashtableState/Entry::Value
	RuntimeObject* ___Value_0;
	// System.Int32 System.Xml.Linq.XHashtable`1/XHashtableState/Entry::HashCode
	int32_t ___HashCode_1;
	// System.Int32 System.Xml.Linq.XHashtable`1/XHashtableState/Entry::Next
	int32_t ___Next_2;
};

// UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>
struct WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87 
{
	// T[] UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1::m_Data
	LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___m_Data_0;
	// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1::m_Start
	int32_t ___m_Start_1;
	// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1::m_Length
	int32_t ___m_Length_2;
};

// Mono.CSharp.BlockContext
struct BlockContext_tB2407BBCB8B477D535A7512F310E3AE0EB3DA4F3  : public ResolveContext_t3B244DBC54CA521A77ADC2E849E8CD8A9A529626
{
	// Mono.CSharp.TypeSpec Mono.CSharp.BlockContext::return_type
	TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* ___return_type_5;
	// System.Int32 Mono.CSharp.BlockContext::AssignmentInfoOffset
	int32_t ___AssignmentInfoOffset_6;
	// Mono.CSharp.ExceptionStatement Mono.CSharp.BlockContext::<CurrentTryBlock>k__BackingField
	ExceptionStatement_tD72CFF74FF08EAE99069D55F1CB7BD95729200BF* ___U3CCurrentTryBlockU3Ek__BackingField_7;
	// Mono.CSharp.LoopStatement Mono.CSharp.BlockContext::<EnclosingLoop>k__BackingField
	LoopStatement_t4CFDF3FFC44C2A67F004A2DBB7BFDEDFA603C42A* ___U3CEnclosingLoopU3Ek__BackingField_8;
	// Mono.CSharp.LoopStatement Mono.CSharp.BlockContext::<EnclosingLoopOrSwitch>k__BackingField
	LoopStatement_t4CFDF3FFC44C2A67F004A2DBB7BFDEDFA603C42A* ___U3CEnclosingLoopOrSwitchU3Ek__BackingField_9;
	// Mono.CSharp.Switch Mono.CSharp.BlockContext::<Switch>k__BackingField
	Switch_t5712DD8CBDA4D650401AD53609725C59716090FE* ___U3CSwitchU3Ek__BackingField_10;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// System.Reflection.Emit.Label
struct Label_tE539F0FEBA09A9E2042C249C75886A37351A89DE 
{
	// System.Int32 System.Reflection.Emit.Label::label
	int32_t ___label_0;
};

// Mono.CSharp.Location
struct Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F 
{
	// System.Int32 Mono.CSharp.Location::token
	int32_t ___token_0;
};

// System.Threading.SpinWait
struct SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675 
{
	// System.Int32 System.Threading.SpinWait::_count
	int32_t ____count_1;
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

// UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 
{
	// System.UInt16 UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping::visibleLightIndex
	uint16_t ___visibleLightIndex_0;
	// System.UInt16 UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping::lightBufferIndex
	uint16_t ___lightBufferIndex_1;
	// UnityEngine.Light UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping::light
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_pinvoke
{
	uint16_t ___visibleLightIndex_0;
	uint16_t ___lightBufferIndex_1;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light_2;
};
// Native definition for COM marshalling of UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_marshaled_com
{
	uint16_t ___visibleLightIndex_0;
	uint16_t ___lightBufferIndex_1;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___light_2;
};

// System.Nullable`1<System.Reflection.Emit.Label>
struct Nullable_1_t3AA3C8E5D7263702F44078E58D95E5A308B670C9 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	Label_tE539F0FEBA09A9E2042C249C75886A37351A89DE ___value_1;
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

// Mono.CSharp.Expression
struct Expression_t765E7793407091A8450573D552B39FDD6121FF49  : public RuntimeObject
{
	// Mono.CSharp.ExprClass Mono.CSharp.Expression::eclass
	uint8_t ___eclass_0;
	// Mono.CSharp.TypeSpec Mono.CSharp.Expression::type
	TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* ___type_1;
	// Mono.CSharp.Location Mono.CSharp.Expression::loc
	Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc_2;
};

// Mono.CSharp.Statement
struct Statement_t4498D621BCD841B009E22E38039C2759DFC4AC2B  : public RuntimeObject
{
	// Mono.CSharp.Location Mono.CSharp.Statement::loc
	Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___loc_0;
	// System.Boolean Mono.CSharp.Statement::reachable
	bool ___reachable_1;
};

// Mono.CSharp.EmitContext
struct EmitContext_t4F2268BCF4C3AB3781ECE507806EF8632A12031C  : public BuilderContext_t04DFFD0663A46532EFF3A7339727296324D421F2
{
	// System.Reflection.Emit.ILGenerator Mono.CSharp.EmitContext::ig
	ILGenerator_t2B624D1AA8840E0A7147E6628C5606D42443617A* ___ig_1;
	// Mono.CSharp.TypeSpec Mono.CSharp.EmitContext::return_type
	TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* ___return_type_2;
	// System.Collections.Generic.Dictionary`2<Mono.CSharp.TypeSpec,System.Object> Mono.CSharp.EmitContext::temporary_storage
	Dictionary_2_t7FAE44A2B2E72C711EB10F5FC14B36876256194D* ___temporary_storage_3;
	// System.Reflection.Emit.LocalBuilder Mono.CSharp.EmitContext::return_value
	LocalBuilder_tCB5AF342391604CED7394B81A931AB5BC6B97BB6* ___return_value_4;
	// System.Reflection.Emit.Label Mono.CSharp.EmitContext::LoopBegin
	Label_tE539F0FEBA09A9E2042C249C75886A37351A89DE ___LoopBegin_5;
	// System.Reflection.Emit.Label Mono.CSharp.EmitContext::LoopEnd
	Label_tE539F0FEBA09A9E2042C249C75886A37351A89DE ___LoopEnd_6;
	// System.Reflection.Emit.Label Mono.CSharp.EmitContext::DefaultTarget
	Label_tE539F0FEBA09A9E2042C249C75886A37351A89DE ___DefaultTarget_7;
	// Mono.CSharp.Switch Mono.CSharp.EmitContext::Switch
	Switch_t5712DD8CBDA4D650401AD53609725C59716090FE* ___Switch_8;
	// Mono.CSharp.AnonymousExpression Mono.CSharp.EmitContext::CurrentAnonymousMethod
	AnonymousExpression_t78C4F0AC19BD9BBAC4C5928F80D91F3197011414* ___CurrentAnonymousMethod_9;
	// Mono.CSharp.IMemberContext Mono.CSharp.EmitContext::member_context
	RuntimeObject* ___member_context_10;
	// Mono.CompilerServices.SymbolWriter.SourceMethodBuilder Mono.CSharp.EmitContext::methodSymbols
	SourceMethodBuilder_t22B516C687FC30A801C6ED9C73A753D847D0A842* ___methodSymbols_11;
	// Mono.CSharp.DynamicSiteClass Mono.CSharp.EmitContext::dynamic_site_container
	DynamicSiteClass_tA1F6EBB629B6DC3FC5EB2F34F9E7FB50FBB364AB* ___dynamic_site_container_12;
	// System.Nullable`1<System.Reflection.Emit.Label> Mono.CSharp.EmitContext::return_label
	Nullable_1_t3AA3C8E5D7263702F44078E58D95E5A308B670C9 ___return_label_13;
	// System.Collections.Generic.List`1<Mono.CSharp.IExpressionCleanup> Mono.CSharp.EmitContext::epilogue_expressions
	List_1_tF144BA6CF1F889E09DA1EC6AE4A98FB1754FB91F* ___epilogue_expressions_14;
	// Mono.CSharp.ConditionalAccessContext Mono.CSharp.EmitContext::<ConditionalAccess>k__BackingField
	ConditionalAccessContext_t83BE3A246B510FFFC912108E628AC9E34C3024F8* ___U3CConditionalAccessU3Ek__BackingField_15;
	// Mono.CSharp.LocalVariable Mono.CSharp.EmitContext::<AsyncThrowVariable>k__BackingField
	LocalVariable_tF41E16205A31C902E5019E3F5E6BB524C25E4EF9* ___U3CAsyncThrowVariableU3Ek__BackingField_16;
	// System.Collections.Generic.List`1<Mono.CSharp.TryFinally> Mono.CSharp.EmitContext::<TryFinallyUnwind>k__BackingField
	List_1_t65E2863C1DAD524F0AA122302D908B6F1515A235* ___U3CTryFinallyUnwindU3Ek__BackingField_17;
	// System.Reflection.Emit.Label Mono.CSharp.EmitContext::<RecursivePatternLabel>k__BackingField
	Label_tE539F0FEBA09A9E2042C249C75886A37351A89DE ___U3CRecursivePatternLabelU3Ek__BackingField_18;
};

// Mono.CSharp.ExpressionStatement
struct ExpressionStatement_tDA75EE3A8834AC17B1847F10020D2E4F24CF5A2C  : public Expression_t765E7793407091A8450573D552B39FDD6121FF49
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

// Mono.CSharp.ResumableStatement
struct ResumableStatement_tE9CC299D91959558B2711FB0F613178793BD6B95  : public Statement_t4498D621BCD841B009E22E38039C2759DFC4AC2B
{
	// System.Boolean Mono.CSharp.ResumableStatement::prepared
	bool ___prepared_2;
	// System.Reflection.Emit.Label Mono.CSharp.ResumableStatement::resume_point
	Label_tE539F0FEBA09A9E2042C249C75886A37351A89DE ___resume_point_3;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.Object>
struct ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583  : public MulticastDelegate_t
{
};

// System.Func`3<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,System.Int32>
struct Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821  : public MulticastDelegate_t
{
};

// Mono.CSharp.YieldStatement`1<System.Object>
struct YieldStatement_1_t750B7E1A9DC34B29E91108D1F9F3C7C70229492F  : public ResumableStatement_tE9CC299D91959558B2711FB0F613178793BD6B95
{
	// Mono.CSharp.Expression Mono.CSharp.YieldStatement`1::expr
	Expression_t765E7793407091A8450573D552B39FDD6121FF49* ___expr_4;
	// System.Boolean Mono.CSharp.YieldStatement`1::unwind_protect
	bool ___unwind_protect_5;
	// T Mono.CSharp.YieldStatement`1::machine_initializer
	RuntimeObject* ___machine_initializer_6;
	// System.Int32 Mono.CSharp.YieldStatement`1::resume_pc
	int32_t ___resume_pc_7;
	// Mono.CSharp.ExceptionStatement Mono.CSharp.YieldStatement`1::inside_try_block
	ExceptionStatement_tD72CFF74FF08EAE99069D55F1CB7BD95729200BF* ___inside_try_block_8;
};

// Mono.CSharp.AnonymousExpression
struct AnonymousExpression_t78C4F0AC19BD9BBAC4C5928F80D91F3197011414  : public ExpressionStatement_tDA75EE3A8834AC17B1847F10020D2E4F24CF5A2C
{
	// Mono.CSharp.ParametersBlock Mono.CSharp.AnonymousExpression::block
	ParametersBlock_t68EDCB1C43780F0042B72F3A47C002DE7D356E99* ___block_3;
	// Mono.CSharp.TypeSpec Mono.CSharp.AnonymousExpression::ReturnType
	TypeSpec_t59724C170F2A668BF7D43C0FDD932030AE0A5253* ___ReturnType_4;
};

// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Mono.CSharp.ExceptionStatement
struct ExceptionStatement_tD72CFF74FF08EAE99069D55F1CB7BD95729200BF  : public ResumableStatement_tE9CC299D91959558B2711FB0F613178793BD6B95
{
	// System.Collections.Generic.List`1<Mono.CSharp.ResumableStatement> Mono.CSharp.ExceptionStatement::resume_points
	List_1_t250FC0003BD62BE871BD32A380B8287630B3E351* ___resume_points_4;
	// System.Int32 Mono.CSharp.ExceptionStatement::first_resume_pc
	int32_t ___first_resume_pc_5;
	// Mono.CSharp.ExceptionStatement Mono.CSharp.ExceptionStatement::parent
	ExceptionStatement_tD72CFF74FF08EAE99069D55F1CB7BD95729200BF* ___parent_6;
};

// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};

// Mono.CSharp.StateMachineInitializer
struct StateMachineInitializer_tD6039E8985AB33B2CB1FBBCF927FDDCAC541FA32  : public AnonymousExpression_t78C4F0AC19BD9BBAC4C5928F80D91F3197011414
{
	// Mono.CSharp.TypeDefinition Mono.CSharp.StateMachineInitializer::Host
	TypeDefinition_t195EE8751B10A8EA1752532FC68B8BDCC1A806B0* ___Host_5;
	// Mono.CSharp.StateMachine Mono.CSharp.StateMachineInitializer::storey
	StateMachine_tD390E3D4B7E2B3BA50F6518042D31FE1BCC86E85* ___storey_6;
	// System.Reflection.Emit.Label Mono.CSharp.StateMachineInitializer::move_next_ok
	Label_tE539F0FEBA09A9E2042C249C75886A37351A89DE ___move_next_ok_7;
	// System.Reflection.Emit.Label Mono.CSharp.StateMachineInitializer::move_next_error
	Label_tE539F0FEBA09A9E2042C249C75886A37351A89DE ___move_next_error_8;
	// System.Reflection.Emit.LocalBuilder Mono.CSharp.StateMachineInitializer::skip_finally
	LocalBuilder_tCB5AF342391604CED7394B81A931AB5BC6B97BB6* ___skip_finally_9;
	// System.Reflection.Emit.LocalBuilder Mono.CSharp.StateMachineInitializer::current_pc
	LocalBuilder_tCB5AF342391604CED7394B81A931AB5BC6B97BB6* ___current_pc_10;
	// System.Collections.Generic.List`1<Mono.CSharp.ResumableStatement> Mono.CSharp.StateMachineInitializer::resume_points
	List_1_t250FC0003BD62BE871BD32A380B8287630B3E351* ___resume_points_11;
	// System.Reflection.Emit.Label Mono.CSharp.StateMachineInitializer::<BodyEnd>k__BackingField
	Label_tE539F0FEBA09A9E2042C249C75886A37351A89DE ___U3CBodyEndU3Ek__BackingField_12;
};

// System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<System.Object>

// System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<System.Object>

// System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>

// System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>

// System.Xml.Linq.XHashtable`1<System.Object>

// System.Xml.Linq.XHashtable`1<System.Object>

// Mono.CSharp.CloneContext

// Mono.CSharp.CloneContext

// Mono.CSharp.FlowAnalysisContext

// Mono.CSharp.FlowAnalysisContext

// Mono.CSharp.ResolveContext

// Mono.CSharp.ResolveContext

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<System.Object>

// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<System.Object>

// UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>

// UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>

// Mono.CSharp.BlockContext

// Mono.CSharp.BlockContext

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.Reflection.Emit.Label

// System.Reflection.Emit.Label

// Mono.CSharp.Location
struct Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F_StaticFields
{
	// System.Collections.Generic.List`1<Mono.CSharp.SourceFile> Mono.CSharp.Location::source_list
	List_1_tE25B395EA25FA32FC05543838706BC98401701AB* ___source_list_6;
	// Mono.CSharp.Location/Checkpoint[] Mono.CSharp.Location::checkpoints
	CheckpointU5BU5D_tBDFE98DE1652432651D9224F448A434AA88990F1* ___checkpoints_7;
	// System.Int32 Mono.CSharp.Location::checkpoint_index
	int32_t ___checkpoint_index_8;
	// Mono.CSharp.Location Mono.CSharp.Location::Null
	Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___Null_9;
	// System.Boolean Mono.CSharp.Location::InEmacs
	bool ___InEmacs_10;
};

// Mono.CSharp.Location

// System.Threading.SpinWait
struct SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675_StaticFields
{
	// System.Int32 System.Threading.SpinWait::SpinCountforSpinBeforeWait
	int32_t ___SpinCountforSpinBeforeWait_0;
};

// System.Threading.SpinWait

// System.Void

// System.Void

// UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping
struct LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2_StaticFields
{
	// System.Func`3<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,System.Int32> UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping::s_CompareByCookieSize
	Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___s_CompareByCookieSize_3;
	// System.Func`3<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,System.Int32> UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping::s_CompareByBufferIndex
	Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___s_CompareByBufferIndex_4;
};

// UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping

// Mono.CSharp.Expression

// Mono.CSharp.Expression

// Mono.CSharp.Statement

// Mono.CSharp.Statement

// Mono.CSharp.EmitContext

// Mono.CSharp.EmitContext

// Mono.CSharp.ResumableStatement

// Mono.CSharp.ResumableStatement

// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.Object>

// System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<System.Object>

// System.Func`3<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,System.Int32>

// System.Func`3<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping,System.Int32>

// Mono.CSharp.YieldStatement`1<System.Object>

// Mono.CSharp.YieldStatement`1<System.Object>

// Mono.CSharp.AnonymousExpression

// Mono.CSharp.AnonymousExpression

// Mono.CSharp.ExceptionStatement

// Mono.CSharp.ExceptionStatement

// System.OverflowException

// System.OverflowException

// Mono.CSharp.StateMachineInitializer

// Mono.CSharp.StateMachineInitializer
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping[]
struct LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263  : public RuntimeArray
{
	ALIGN_FIELD (8) LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 m_Items[1];

	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___light_2), (void*)NULL);
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___light_2), (void*)NULL);
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
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Xml.Linq.XHashtable`1/XHashtableState/Entry<System.Object>[]
struct EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635  : public RuntimeArray
{
	ALIGN_FIELD (8) Entry_t6E72C722C46949F140550D563C1F41E304752583 m_Items[1];

	inline Entry_t6E72C722C46949F140550D563C1F41E304752583 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Entry_t6E72C722C46949F140550D563C1F41E304752583* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Entry_t6E72C722C46949F140550D563C1F41E304752583 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value_0), (void*)NULL);
	}
	inline Entry_t6E72C722C46949F140550D563C1F41E304752583 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Entry_t6E72C722C46949F140550D563C1F41E304752583* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Entry_t6E72C722C46949F140550D563C1F41E304752583 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___Value_0), (void*)NULL);
	}
};


// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::.ctor(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method) ;
// T UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___0_index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___1_value, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::get_length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_gshared_inline (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::get_capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::Sort(System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___0_compare, const RuntimeMethod* method) ;

// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::.ctor(T[],System.Int32,System.Int32)
inline void WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0_gshared)(__this, ___0_src, ___1_srcStart, ___2_srcLen, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::.ctor(T[],System.Int32)
inline void WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, const RuntimeMethod*))WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4_gshared)(__this, ___0_src, ___1_srcLen, method);
}
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
// T UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::get_Item(System.Int32)
inline LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, int32_t, const RuntimeMethod*))WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D_gshared)(__this, ___0_index, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::set_Item(System.Int32,T)
inline void WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___0_index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, int32_t, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2, const RuntimeMethod*))WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663_gshared)(__this, ___0_index, ___1_value, method);
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::get_length()
inline int32_t WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_inline (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, const RuntimeMethod*))WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::get_capacity()
inline int32_t WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, const RuntimeMethod*))WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0_gshared)(__this, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::Sort(System.Func`3<T,T,System.Int32>)
inline void WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584 (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___0_compare, const RuntimeMethod* method)
{
	((  void (*) (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584_gshared)(__this, ___0_compare, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF (const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 System.Threading.Interlocked::Exchange(System.Int32&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF (int32_t* ___0_location1, int32_t ___1_value, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
// System.Int64 System.Threading.Interlocked::Increment(System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Interlocked_Increment_m12CD643CCD5FCDE95DBC0AB07D09AF696E26F9C0 (int64_t* ___0_location, const RuntimeMethod* method) ;
// System.Void System.Threading.SpinWait::SpinOnce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpinWait_SpinOnce_m5B74E6B15013E90667646C0D943E886D4EC596AF (SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675* __this, const RuntimeMethod* method) ;
// System.Int32 System.Threading.Interlocked::CompareExchange(System.Int32&,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717 (int32_t* ___0_location1, int32_t ___1_value, int32_t ___2_comparand, const RuntimeMethod* method) ;
// System.Void System.OverflowException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m7F6A928C9BE47384586BDDE8B4B87666421E0F1A (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* __this, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.Int32 System.Threading.Interlocked::Increment(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309 (int32_t* ___0_location, const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::MemoryBarrier()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D (const RuntimeMethod* method) ;
// System.Int32 System.String::CompareOrdinal(System.String,System.Int32,System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_CompareOrdinal_m8940CFAE90021ED8DA3F2DF8226941C9EEB2E32D (String_t* ___0_strA, int32_t ___1_indexA, String_t* ___2_strB, int32_t ___3_indexB, int32_t ___4_length, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Void Mono.CSharp.ResumableStatement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResumableStatement__ctor_m07A1A214C477D4E3D8B2E15BC2B9C6A8E6412A94 (ResumableStatement_tE9CC299D91959558B2711FB0F613178793BD6B95* __this, const RuntimeMethod* method) ;
// Mono.CSharp.Expression Mono.CSharp.Expression::Resolve(Mono.CSharp.ResolveContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t765E7793407091A8450573D552B39FDD6121FF49* Expression_Resolve_mC12792F1C3B920CB0A200585AD6BB9E13F231199 (Expression_t765E7793407091A8450573D552B39FDD6121FF49* __this, ResolveContext_t3B244DBC54CA521A77ADC2E849E8CD8A9A529626* ___0_rc, const RuntimeMethod* method) ;
// Mono.CSharp.ExceptionStatement Mono.CSharp.BlockContext::get_CurrentTryBlock()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExceptionStatement_tD72CFF74FF08EAE99069D55F1CB7BD95729200BF* BlockContext_get_CurrentTryBlock_m62AE2EC8CDD4F8C119969E9EA7E78F0603EB0DCA_inline (BlockContext_tB2407BBCB8B477D535A7512F310E3AE0EB3DA4F3* __this, const RuntimeMethod* method) ;
// System.Int32 Mono.CSharp.StateMachineInitializer::AddResumePoint(Mono.CSharp.ResumableStatement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StateMachineInitializer_AddResumePoint_mAFE2361F277A252FFEE38497C72571DEDDD50BC8 (StateMachineInitializer_tD6039E8985AB33B2CB1FBBCF927FDDCAC541FA32* __this, ResumableStatement_tE9CC299D91959558B2711FB0F613178793BD6B95* ___0_stmt, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::.ctor(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method) 
{
	{
		// public WorkSlice(T[] src, int srcLen = -1) : this(src, 0, srcLen) { }
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = ___0_src;
		int32_t L_1 = ___1_srcLen;
		WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0(__this, L_0, 0, L_1, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 0));
		// public WorkSlice(T[] src, int srcLen = -1) : this(src, 0, srcLen) { }
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4_AdjustorThunk (RuntimeObject* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_src, int32_t ___1_srcLen, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	WorkSlice_1__ctor_m76CCC65E3DFB8B84A2154B65A79B56688F9B26A4(_thisAdjusted, ___0_src, ___1_srcLen, method);
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* G_B2_0 = NULL;
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* G_B3_1 = NULL;
	{
		// m_Data = src;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = ___0_src;
		__this->___m_Data_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Data_0), (void*)L_0);
		// m_Start = srcStart;
		int32_t L_1 = ___1_srcStart;
		__this->___m_Start_1 = L_1;
		// m_Length = (srcLen < 0) ? src.Length : Math.Min(srcLen, src.Length);
		int32_t L_2 = ___2_srcLen;
		G_B1_0 = __this;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_001e;
		}
	}
	{
		int32_t L_3 = ___2_srcLen;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_4 = ___0_src;
		NullCheck(L_4);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_3, ((int32_t)(((RuntimeArray*)L_4)->max_length)), NULL);
		G_B3_0 = L_5;
		G_B3_1 = G_B1_0;
		goto IL_0021;
	}

IL_001e:
	{
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_6 = ___0_src;
		NullCheck(L_6);
		G_B3_0 = ((int32_t)(((RuntimeArray*)L_6)->max_length));
		G_B3_1 = G_B2_0;
	}

IL_0021:
	{
		G_B3_1->___m_Length_2 = G_B3_0;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0_AdjustorThunk (RuntimeObject* __this, LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* ___0_src, int32_t ___1_srcStart, int32_t ___2_srcLen, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	WorkSlice_1__ctor_mC3BCAA8301A4E37DDB26811AAFFE1A3654FA47D0(_thisAdjusted, ___0_src, ___1_srcStart, ___2_srcLen, method);
}
// T UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	{
		// get => m_Data[m_Start + index];
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)__this->___m_Data_0;
		int32_t L_1 = (int32_t)__this->___m_Start_1;
		int32_t L_2 = ___0_index;
		NullCheck(L_0);
		int32_t L_3 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_4 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		return L_4;
	}
}
IL2CPP_EXTERN_C  LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 _returnValue;
	_returnValue = WorkSlice_1_get_Item_mFD8EE50B88077F3EF9BCEF97BD6D0352D2E8445D(_thisAdjusted, ___0_index, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, int32_t ___0_index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___1_value, const RuntimeMethod* method) 
{
	{
		// set => m_Data[m_Start + index] = value;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)__this->___m_Data_0;
		int32_t L_1 = (int32_t)__this->___m_Start_1;
		int32_t L_2 = ___0_index;
		LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 L_3 = ___1_value;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_1, L_2))), (LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2)L_3);
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663_AdjustorThunk (RuntimeObject* __this, int32_t ___0_index, LightCookieMapping_t76B317D9FDE96056FA698B46B45D7F0937BD02D2 ___1_value, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	WorkSlice_1_set_Item_m070889CA2F62E82384BAB3CEF6D6E9AABF153663(_thisAdjusted, ___0_index, ___1_value, method);
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method) 
{
	{
		// public int length => m_Length;
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::get_capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method) 
{
	{
		// public int capacity => m_Data.Length;
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_0 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)__this->___m_Data_0;
		NullCheck(L_0);
		return ((int32_t)(((RuntimeArray*)L_0)->max_length));
	}
}
IL2CPP_EXTERN_C  int32_t WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = WorkSlice_1_get_capacity_m98A237D126494A11FF3C61211B36A790E4E8A3B0(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Rendering.Universal.LightCookieManager/WorkSlice`1<UnityEngine.Rendering.Universal.LightCookieManager/LightCookieMapping>::Sort(System.Func`3<T,T,System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584_gshared (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___0_compare, const RuntimeMethod* method) 
{
	{
		// if (m_Length > 1)
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		if ((((int32_t)L_0) <= ((int32_t)1)))
		{
			goto IL_002a;
		}
	}
	{
		// Sorting.QuickSort(m_Data, m_Start, m_Start + m_Length - 1, compare);
		LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263* L_1 = (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*)__this->___m_Data_0;
		int32_t L_2 = (int32_t)__this->___m_Start_1;
		int32_t L_3 = (int32_t)__this->___m_Start_1;
		int32_t L_4 = (int32_t)__this->___m_Length_2;
		Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* L_5 = ___0_compare;
		((  void (*) (LightCookieMappingU5BU5D_tE1F10A7D54920D3636F1DB7774B3D5F5B560E263*, int32_t, int32_t, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1)))(L_1, L_2, ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_3, L_4)), 1)), L_5, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 1));
	}

IL_002a:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584_AdjustorThunk (RuntimeObject* __this, Func_3_t3E644C82345CE04737DA5CDE018481FE0A88F821* ___0_compare, const RuntimeMethod* method)
{
	WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87*>(__this + _offset);
	WorkSlice_1_Sort_m7EF532E936D55845DAAC606C0A214FE48EBF8584(_thisAdjusted, ___0_compare, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<System.Object>::.ctor(System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkStealingQueue__ctor_m5008A780D3A45C6DD9B8248FDD47AA3766CBD9E3_gshared (WorkStealingQueue_t24446799B8DD68186AE6AC897ED0358FD1E03896* __this, WorkStealingQueue_t24446799B8DD68186AE6AC897ED0358FD1E03896* ___0_nextQueue, const RuntimeMethod* method) 
{
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 0), (uint32_t)((int32_t)32));
		il2cpp_codegen_memory_barrier();
		__this->____array_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____array_2), (void*)L_0);
		il2cpp_codegen_memory_barrier();
		__this->____mask_3 = ((int32_t)31);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m66483AADCCC13272EBDCD94D31D2E52603C24BDF(NULL);
		__this->____ownerThreadId_9 = L_1;
		WorkStealingQueue_t24446799B8DD68186AE6AC897ED0358FD1E03896* L_2 = ___0_nextQueue;
		__this->____nextQueue_8 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nextQueue_8), (void*)L_2);
		return;
	}
}
// System.Void System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<System.Object>::LocalPush(T,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorkStealingQueue_LocalPush_m8B1D8601B4870C599A8FF4F36500D74B9C159C0F_gshared (WorkStealingQueue_t24446799B8DD68186AE6AC897ED0358FD1E03896* __this, RuntimeObject* ___0_item, int64_t* ___1_emptyToNonEmptyListTransitionCount, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WorkStealingQueue_LocalPush_m8B1D8601B4870C599A8FF4F36500D74B9C159C0F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	WorkStealingQueue_t24446799B8DD68186AE6AC897ED0358FD1E03896* V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_6 = NULL;
	int32_t V_7 = 0;
	{
		V_0 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0203:
			{// begin finally (depth: 1)
				{
					il2cpp_codegen_memory_barrier();
					__this->____currentOp_6 = 0;
					bool L_0 = V_0;
					if (!L_0)
					{
						goto IL_0215;
					}
				}
				{
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)__this, NULL);
				}

IL_0215:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				int32_t* L_1 = (int32_t*)(&__this->____currentOp_6);
				il2cpp_codegen_memory_barrier();
				int32_t L_2;
				L_2 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(L_1, 1, NULL);
				int32_t L_3 = (int32_t)__this->____tailIndex_1;
				il2cpp_codegen_memory_barrier();
				V_1 = L_3;
				int32_t L_4 = V_1;
				if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)2147483647LL)))))
				{
					goto IL_007d_1;
				}
			}
			{
				il2cpp_codegen_memory_barrier();
				__this->____currentOp_6 = 0;
				V_3 = __this;
				V_4 = (bool)0;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0072_1:
					{// begin finally (depth: 2)
						{
							bool L_5 = V_4;
							if (!L_5)
							{
								goto IL_007c_1;
							}
						}
						{
							WorkStealingQueue_t24446799B8DD68186AE6AC897ED0358FD1E03896* L_6 = V_3;
							Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_6, NULL);
						}

IL_007c_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					WorkStealingQueue_t24446799B8DD68186AE6AC897ED0358FD1E03896* L_7 = V_3;
					Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_7, (&V_4), NULL);
					int32_t L_8 = (int32_t)__this->____headIndex_0;
					il2cpp_codegen_memory_barrier();
					int32_t L_9 = (int32_t)__this->____mask_3;
					il2cpp_codegen_memory_barrier();
					il2cpp_codegen_memory_barrier();
					__this->____headIndex_0 = ((int32_t)(L_8&L_9));
					int32_t L_10 = V_1;
					int32_t L_11 = (int32_t)__this->____mask_3;
					il2cpp_codegen_memory_barrier();
					int32_t L_12 = ((int32_t)(L_10&L_11));
					V_1 = L_12;
					il2cpp_codegen_memory_barrier();
					__this->____tailIndex_1 = L_12;
					int32_t* L_13 = (int32_t*)(&__this->____currentOp_6);
					il2cpp_codegen_memory_barrier();
					int32_t L_14;
					L_14 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(L_13, 1, NULL);
					goto IL_007d_1;
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_007d_1:
			{
				int32_t L_15 = (int32_t)__this->____headIndex_0;
				il2cpp_codegen_memory_barrier();
				V_2 = L_15;
				bool L_16 = (bool)__this->____frozen_7;
				if (L_16)
				{
					goto IL_00cc_1;
				}
			}
			{
				int32_t L_17 = V_2;
				int32_t L_18 = V_1;
				int32_t L_19 = V_1;
				int32_t L_20 = V_2;
				int32_t L_21 = (int32_t)__this->____mask_3;
				il2cpp_codegen_memory_barrier();
				if (!((int32_t)(((((int32_t)L_17) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_18, 1))))? 1 : 0)&((((int32_t)L_19) < ((int32_t)((int32_t)il2cpp_codegen_add(L_20, L_21))))? 1 : 0))))
				{
					goto IL_00cc_1;
				}
			}
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_22 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____array_2;
				il2cpp_codegen_memory_barrier();
				int32_t L_23 = V_1;
				int32_t L_24 = (int32_t)__this->____mask_3;
				il2cpp_codegen_memory_barrier();
				RuntimeObject* L_25 = ___0_item;
				NullCheck(L_22);
				(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_23&L_24))), (RuntimeObject*)L_25);
				int32_t L_26 = V_1;
				il2cpp_codegen_memory_barrier();
				__this->____tailIndex_1 = ((int32_t)il2cpp_codegen_add(L_26, 1));
				goto IL_01f3_1;
			}

IL_00cc_1:
			{
				il2cpp_codegen_memory_barrier();
				__this->____currentOp_6 = 0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)__this, (&V_0), NULL);
				int32_t L_27 = (int32_t)__this->____headIndex_0;
				il2cpp_codegen_memory_barrier();
				V_2 = L_27;
				int32_t L_28 = V_1;
				int32_t L_29 = V_2;
				V_5 = ((int32_t)il2cpp_codegen_subtract(L_28, L_29));
				int32_t L_30 = V_5;
				int32_t L_31 = (int32_t)__this->____mask_3;
				il2cpp_codegen_memory_barrier();
				if ((((int32_t)L_30) < ((int32_t)L_31)))
				{
					goto IL_01ab_1;
				}
			}
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____array_2;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_32);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 0), (uint32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_32)->max_length))<<1)));
				V_6 = L_33;
				int32_t L_34 = V_2;
				int32_t L_35 = (int32_t)__this->____mask_3;
				il2cpp_codegen_memory_barrier();
				V_7 = ((int32_t)(L_34&L_35));
				int32_t L_36 = V_7;
				if (L_36)
				{
					goto IL_013a_1;
				}
			}
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_37 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____array_2;
				il2cpp_codegen_memory_barrier();
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38 = V_6;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_39 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____array_2;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_39);
				Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_37, 0, (RuntimeArray*)L_38, 0, ((int32_t)(((RuntimeArray*)L_39)->max_length)), NULL);
				goto IL_0178_1;
			}

IL_013a_1:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____array_2;
				il2cpp_codegen_memory_barrier();
				int32_t L_41 = V_7;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_42 = V_6;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_43 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____array_2;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_43);
				int32_t L_44 = V_7;
				Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_40, L_41, (RuntimeArray*)L_42, 0, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_43)->max_length)), L_44)), NULL);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_45 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____array_2;
				il2cpp_codegen_memory_barrier();
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = V_6;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_47 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____array_2;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_47);
				int32_t L_48 = V_7;
				int32_t L_49 = V_7;
				Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_45, 0, (RuntimeArray*)L_46, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_47)->max_length)), L_48)), L_49, NULL);
			}

IL_0178_1:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_50 = V_6;
				il2cpp_codegen_memory_barrier();
				__this->____array_2 = L_50;
				Il2CppCodeGenWriteBarrier((void**)(&__this->____array_2), (void*)L_50);
				il2cpp_codegen_memory_barrier();
				__this->____headIndex_0 = 0;
				int32_t L_51 = V_5;
				int32_t L_52 = L_51;
				V_1 = L_52;
				il2cpp_codegen_memory_barrier();
				__this->____tailIndex_1 = L_52;
				int32_t L_53 = (int32_t)__this->____mask_3;
				il2cpp_codegen_memory_barrier();
				il2cpp_codegen_memory_barrier();
				__this->____mask_3 = ((int32_t)(((int32_t)(L_53<<1))|1));
			}

IL_01ab_1:
			{
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_54 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____array_2;
				il2cpp_codegen_memory_barrier();
				int32_t L_55 = V_1;
				int32_t L_56 = (int32_t)__this->____mask_3;
				il2cpp_codegen_memory_barrier();
				RuntimeObject* L_57 = ___0_item;
				NullCheck(L_54);
				(L_54)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_55&L_56))), (RuntimeObject*)L_57);
				int32_t L_58 = V_1;
				il2cpp_codegen_memory_barrier();
				__this->____tailIndex_1 = ((int32_t)il2cpp_codegen_add(L_58, 1));
				int32_t L_59 = V_5;
				if (L_59)
				{
					goto IL_01d9_1;
				}
			}
			{
				int64_t* L_60 = ___1_emptyToNonEmptyListTransitionCount;
				int64_t L_61;
				L_61 = Interlocked_Increment_m12CD643CCD5FCDE95DBC0AB07D09AF696E26F9C0(L_60, NULL);
			}

IL_01d9_1:
			{
				int32_t L_62 = (int32_t)__this->____addTakeCount_4;
				int32_t L_63 = (int32_t)__this->____stealCount_5;
				__this->____addTakeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_62, L_63));
				__this->____stealCount_5 = 0;
			}

IL_01f3_1:
			{
				int32_t L_64 = (int32_t)__this->____addTakeCount_4;
				if (((int64_t)L_64 + (int64_t)1 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_64 + (int64_t)1 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), WorkStealingQueue_LocalPush_m8B1D8601B4870C599A8FF4F36500D74B9C159C0F_RuntimeMethod_var);
				__this->____addTakeCount_4 = ((int32_t)il2cpp_codegen_add(L_64, 1));
				goto IL_0216;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0216:
	{
		return;
	}
}
// System.Boolean System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<System.Object>::TryLocalPop(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WorkStealingQueue_TryLocalPop_mEE65FB52F67ED82674A4E589A22B445BEC0DC0C1_gshared (WorkStealingQueue_t24446799B8DD68186AE6AC897ED0358FD1E03896* __this, RuntimeObject** ___0_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	int32_t V_5 = 0;
	{
		int32_t L_0 = (int32_t)__this->____tailIndex_1;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		int32_t L_1 = (int32_t)__this->____headIndex_0;
		il2cpp_codegen_memory_barrier();
		int32_t L_2 = V_0;
		if ((((int32_t)L_1) < ((int32_t)L_2)))
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject** L_3 = ___0_result;
		il2cpp_codegen_initobj(L_3, sizeof(RuntimeObject*));
		return (bool)0;
	}

IL_001d:
	{
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0117:
			{// begin finally (depth: 1)
				{
					il2cpp_codegen_memory_barrier();
					__this->____currentOp_6 = 0;
					bool L_4 = V_1;
					if (!L_4)
					{
						goto IL_0129;
					}
				}
				{
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)__this, NULL);
				}

IL_0129:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				il2cpp_codegen_memory_barrier();
				__this->____currentOp_6 = 2;
				int32_t* L_5 = (int32_t*)(&__this->____tailIndex_1);
				il2cpp_codegen_memory_barrier();
				int32_t L_6 = V_0;
				int32_t L_7 = ((int32_t)il2cpp_codegen_subtract(L_6, 1));
				V_0 = L_7;
				int32_t L_8;
				L_8 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(L_5, L_7, NULL);
				bool L_9 = (bool)__this->____frozen_7;
				if (L_9)
				{
					goto IL_0098_1;
				}
			}
			{
				int32_t L_10 = (int32_t)__this->____headIndex_0;
				il2cpp_codegen_memory_barrier();
				int32_t L_11 = V_0;
				if ((((int32_t)L_10) >= ((int32_t)L_11)))
				{
					goto IL_0098_1;
				}
			}
			{
				int32_t L_12 = V_0;
				int32_t L_13 = (int32_t)__this->____mask_3;
				il2cpp_codegen_memory_barrier();
				V_2 = ((int32_t)(L_12&L_13));
				RuntimeObject** L_14 = ___0_result;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____array_2;
				il2cpp_codegen_memory_barrier();
				int32_t L_16 = V_2;
				NullCheck(L_15);
				int32_t L_17 = L_16;
				RuntimeObject* L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
				*(RuntimeObject**)L_14 = L_18;
				Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_14, (void*)L_18);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____array_2;
				il2cpp_codegen_memory_barrier();
				int32_t L_20 = V_2;
				il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
				RuntimeObject* L_21 = V_3;
				NullCheck(L_19);
				(L_19)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (RuntimeObject*)L_21);
				int32_t L_22 = (int32_t)__this->____addTakeCount_4;
				__this->____addTakeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_22, 1));
				V_4 = (bool)1;
				goto IL_012a;
			}

IL_0098_1:
			{
				il2cpp_codegen_memory_barrier();
				__this->____currentOp_6 = 0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)__this, (&V_1), NULL);
				int32_t L_23 = (int32_t)__this->____headIndex_0;
				il2cpp_codegen_memory_barrier();
				int32_t L_24 = V_0;
				if ((((int32_t)L_23) > ((int32_t)L_24)))
				{
					goto IL_0100_1;
				}
			}
			{
				int32_t L_25 = V_0;
				int32_t L_26 = (int32_t)__this->____mask_3;
				il2cpp_codegen_memory_barrier();
				V_5 = ((int32_t)(L_25&L_26));
				RuntimeObject** L_27 = ___0_result;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____array_2;
				il2cpp_codegen_memory_barrier();
				int32_t L_29 = V_5;
				NullCheck(L_28);
				int32_t L_30 = L_29;
				RuntimeObject* L_31 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
				*(RuntimeObject**)L_27 = L_31;
				Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_27, (void*)L_31);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_32 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____array_2;
				il2cpp_codegen_memory_barrier();
				int32_t L_33 = V_5;
				il2cpp_codegen_initobj((&V_3), sizeof(RuntimeObject*));
				RuntimeObject* L_34 = V_3;
				NullCheck(L_32);
				(L_32)->SetAt(static_cast<il2cpp_array_size_t>(L_33), (RuntimeObject*)L_34);
				int32_t L_35 = (int32_t)__this->____addTakeCount_4;
				__this->____addTakeCount_4 = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
				V_4 = (bool)1;
				goto IL_012a;
			}

IL_0100_1:
			{
				int32_t L_36 = V_0;
				il2cpp_codegen_memory_barrier();
				__this->____tailIndex_1 = ((int32_t)il2cpp_codegen_add(L_36, 1));
				RuntimeObject** L_37 = ___0_result;
				il2cpp_codegen_initobj(L_37, sizeof(RuntimeObject*));
				V_4 = (bool)0;
				goto IL_012a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_012a:
	{
		bool L_38 = V_4;
		return L_38;
	}
}
// System.Boolean System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<System.Object>::TrySteal(T&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WorkStealingQueue_TrySteal_mCB55858C75081104C556E8390D4C2E41E1FAD7D5_gshared (WorkStealingQueue_t24446799B8DD68186AE6AC897ED0358FD1E03896* __this, RuntimeObject** ___0_result, bool ___1_take, const RuntimeMethod* method) 
{
	WorkStealingQueue_t24446799B8DD68186AE6AC897ED0358FD1E03896* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t V_4 = 0;
	RuntimeObject* V_5 = NULL;
	bool V_6 = false;
	{
		V_0 = __this;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ee:
			{// begin finally (depth: 1)
				{
					bool L_0 = V_1;
					if (!L_0)
					{
						goto IL_00f7;
					}
				}
				{
					WorkStealingQueue_t24446799B8DD68186AE6AC897ED0358FD1E03896* L_1 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_1, NULL);
				}

IL_00f7:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				WorkStealingQueue_t24446799B8DD68186AE6AC897ED0358FD1E03896* L_2 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_2, (&V_1), NULL);
				int32_t L_3 = (int32_t)__this->____headIndex_0;
				il2cpp_codegen_memory_barrier();
				V_2 = L_3;
				bool L_4 = ___1_take;
				if (!L_4)
				{
					goto IL_00bf_1;
				}
			}
			{
				int32_t L_5 = V_2;
				int32_t L_6 = (int32_t)__this->____tailIndex_1;
				il2cpp_codegen_memory_barrier();
				if ((((int32_t)L_5) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_6, 1)))))
				{
					goto IL_004d_1;
				}
			}
			{
				int32_t L_7 = (int32_t)__this->____currentOp_6;
				il2cpp_codegen_memory_barrier();
				if ((((int32_t)L_7) == ((int32_t)1)))
				{
					goto IL_004d_1;
				}
			}
			{
				il2cpp_codegen_initobj((&V_3), sizeof(SpinWait_t51CFFA8FF70F1B430E075F96CFD936260D8CE675));
			}

IL_003b_1:
			{
				SpinWait_SpinOnce_m5B74E6B15013E90667646C0D943E886D4EC596AF((&V_3), NULL);
				int32_t L_8 = (int32_t)__this->____currentOp_6;
				il2cpp_codegen_memory_barrier();
				if ((((int32_t)L_8) == ((int32_t)1)))
				{
					goto IL_003b_1;
				}
			}

IL_004d_1:
			{
				int32_t* L_9 = (int32_t*)(&__this->____headIndex_0);
				il2cpp_codegen_memory_barrier();
				int32_t L_10 = V_2;
				int32_t L_11;
				L_11 = Interlocked_Exchange_m5810F59A9EF49D8003BA76D95398854254A091DF(L_9, ((int32_t)il2cpp_codegen_add(L_10, 1)), NULL);
				int32_t L_12 = V_2;
				int32_t L_13 = (int32_t)__this->____tailIndex_1;
				il2cpp_codegen_memory_barrier();
				if ((((int32_t)L_12) >= ((int32_t)L_13)))
				{
					goto IL_00b4_1;
				}
			}
			{
				int32_t L_14 = V_2;
				int32_t L_15 = (int32_t)__this->____mask_3;
				il2cpp_codegen_memory_barrier();
				V_4 = ((int32_t)(L_14&L_15));
				RuntimeObject** L_16 = ___0_result;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_17 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____array_2;
				il2cpp_codegen_memory_barrier();
				int32_t L_18 = V_4;
				NullCheck(L_17);
				int32_t L_19 = L_18;
				RuntimeObject* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
				*(RuntimeObject**)L_16 = L_20;
				Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_16, (void*)L_20);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_21 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____array_2;
				il2cpp_codegen_memory_barrier();
				int32_t L_22 = V_4;
				il2cpp_codegen_initobj((&V_5), sizeof(RuntimeObject*));
				RuntimeObject* L_23 = V_5;
				NullCheck(L_21);
				(L_21)->SetAt(static_cast<il2cpp_array_size_t>(L_22), (RuntimeObject*)L_23);
				int32_t L_24 = (int32_t)__this->____stealCount_5;
				__this->____stealCount_5 = ((int32_t)il2cpp_codegen_add(L_24, 1));
				V_6 = (bool)1;
				goto IL_0101;
			}

IL_00b4_1:
			{
				int32_t L_25 = V_2;
				il2cpp_codegen_memory_barrier();
				__this->____headIndex_0 = L_25;
				goto IL_00f8;
			}

IL_00bf_1:
			{
				int32_t L_26 = V_2;
				int32_t L_27 = (int32_t)__this->____tailIndex_1;
				il2cpp_codegen_memory_barrier();
				if ((((int32_t)L_26) >= ((int32_t)L_27)))
				{
					goto IL_00ec_1;
				}
			}
			{
				RuntimeObject** L_28 = ___0_result;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____array_2;
				il2cpp_codegen_memory_barrier();
				int32_t L_30 = V_2;
				int32_t L_31 = (int32_t)__this->____mask_3;
				il2cpp_codegen_memory_barrier();
				NullCheck(L_29);
				int32_t L_32 = ((int32_t)(L_30&L_31));
				RuntimeObject* L_33 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
				*(RuntimeObject**)L_28 = L_33;
				Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_28, (void*)L_33);
				V_6 = (bool)1;
				goto IL_0101;
			}

IL_00ec_1:
			{
				goto IL_00f8;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00f8:
	{
		RuntimeObject** L_34 = ___0_result;
		il2cpp_codegen_initobj(L_34, sizeof(RuntimeObject*));
		return (bool)0;
	}

IL_0101:
	{
		bool L_35 = V_6;
		return L_35;
	}
}
// System.Int32 System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<System.Object>::DangerousCopyTo(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkStealingQueue_DangerousCopyTo_m94E502A92EB138838B97596A203E39F6E55FF508_gshared (WorkStealingQueue_t24446799B8DD68186AE6AC897ED0358FD1E03896* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_array, int32_t ___1_arrayIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		int32_t L_0 = (int32_t)__this->____headIndex_0;
		il2cpp_codegen_memory_barrier();
		V_0 = L_0;
		int32_t L_1;
		L_1 = ((  int32_t (*) (WorkStealingQueue_t24446799B8DD68186AE6AC897ED0358FD1E03896*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		V_1 = L_1;
		int32_t L_2 = ___1_arrayIndex;
		int32_t L_3 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_add(L_2, L_3)), 1));
		goto IL_003e;
	}

IL_0018:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = ___0_array;
		int32_t L_5 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____array_2;
		il2cpp_codegen_memory_barrier();
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, 1));
		int32_t L_9 = (int32_t)__this->____mask_3;
		il2cpp_codegen_memory_barrier();
		NullCheck(L_6);
		int32_t L_10 = ((int32_t)(L_8&L_9));
		RuntimeObject* L_11 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject*)L_11);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_12, 1));
	}

IL_003e:
	{
		int32_t L_13 = V_2;
		int32_t L_14 = ___1_arrayIndex;
		if ((((int32_t)L_13) >= ((int32_t)L_14)))
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_15 = V_1;
		return L_15;
	}
}
// System.Int32 System.Collections.Concurrent.ConcurrentBag`1/WorkStealingQueue<System.Object>::get_DangerousCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WorkStealingQueue_get_DangerousCount_m7EA23F3971CF379A3C0A87B49FECB670CD7D738E_gshared (WorkStealingQueue_t24446799B8DD68186AE6AC897ED0358FD1E03896* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____addTakeCount_4;
		int32_t L_1 = (int32_t)__this->____stealCount_5;
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
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
// System.Void System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::.ctor(System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtableState__ctor_m37E975C296D7D8CDF9ACAA9ABD7C4A0C82C427D3_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		int32_t L_0 = ___1_capacity;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->____buckets_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____buckets_0), (void*)L_1);
		int32_t L_2 = ___1_capacity;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_3 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)(EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 0), (uint32_t)L_2);
		__this->____entries_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____entries_1), (void*)L_3);
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_4 = ___0_extractKey;
		__this->____extractKey_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____extractKey_3), (void*)L_4);
		return;
	}
}
// System.Xml.Linq.XHashtable`1/XHashtableState<TValue> System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::Resize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* XHashtableState_Resize_mDB3BA5C327EF6A86F6CE58B59E1D7430E62532C5_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	{
		int32_t L_0 = (int32_t)__this->____numEntries_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length)))))
		{
			goto IL_0012;
		}
	}
	{
		return __this;
	}

IL_0012:
	{
		V_0 = 0;
		V_2 = 0;
		goto IL_00a7;
	}

IL_001b:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_2 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_3 = V_2;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_3 = L_5;
		int32_t L_6 = V_3;
		if (L_6)
		{
			goto IL_009f;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_7 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		int32_t L_9;
		L_9 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), (-1), 0, NULL);
		V_3 = L_9;
		goto IL_009f;
	}

IL_003d:
	{
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_10 = (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*)__this->____extractKey_3;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_11 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_12 = V_3;
		NullCheck(L_11);
		RuntimeObject* L_13 = (RuntimeObject*)((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_12)))->___Value_0;
		NullCheck(L_10);
		String_t* L_14;
		L_14 = ((  String_t* (*) (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_10, L_13, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		if (!L_14)
		{
			goto IL_005f;
		}
	}
	{
		int32_t L_15 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_005f:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_16 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_17 = V_3;
		NullCheck(L_16);
		int32_t L_18 = (int32_t)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)))->___Next_2;
		if (L_18)
		{
			goto IL_008d;
		}
	}
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_19 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_20 = V_3;
		NullCheck(L_19);
		int32_t* L_21 = (int32_t*)(&((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___Next_2);
		int32_t L_22;
		L_22 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(L_21, (-1), 0, NULL);
		V_3 = L_22;
		goto IL_009f;
	}

IL_008d:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_23 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_24 = V_3;
		NullCheck(L_23);
		int32_t L_25 = (int32_t)((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_24)))->___Next_2;
		V_3 = L_25;
	}

IL_009f:
	{
		int32_t L_26 = V_3;
		if ((((int32_t)L_26) > ((int32_t)0)))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_27 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_00a7:
	{
		int32_t L_28 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_29);
		if ((((int32_t)L_28) < ((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length)))))
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_30 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_31);
		if ((((int32_t)L_30) >= ((int32_t)((int32_t)(((int32_t)(((RuntimeArray*)L_31)->max_length))/2)))))
		{
			goto IL_00cd;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_32 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_32);
		V_0 = ((int32_t)(((RuntimeArray*)L_32)->max_length));
		goto IL_00e2;
	}

IL_00cd:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_33 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_33);
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_33)->max_length)), 2));
		int32_t L_34 = V_0;
		if ((((int32_t)L_34) >= ((int32_t)0)))
		{
			goto IL_00e2;
		}
	}
	{
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_35 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_35);
		OverflowException__ctor_m7F6A928C9BE47384586BDDE8B4B87666421E0F1A(L_35, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_35, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XHashtableState_Resize_mDB3BA5C327EF6A86F6CE58B59E1D7430E62532C5_RuntimeMethod_var)));
	}

IL_00e2:
	{
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_36 = (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*)__this->____extractKey_3;
		int32_t L_37 = V_0;
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_38 = (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 3));
		NullCheck(L_38);
		((  void (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_38, L_36, L_37, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
		V_1 = L_38;
		V_4 = 0;
		goto IL_013b;
	}

IL_00f4:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_39 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_40 = V_4;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		int32_t L_42 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		V_5 = L_42;
		goto IL_0130;
	}

IL_0101:
	{
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_43 = V_1;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_44 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_45 = V_5;
		NullCheck(L_44);
		RuntimeObject* L_46 = (RuntimeObject*)((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45)))->___Value_0;
		NullCheck(L_43);
		bool L_47;
		L_47 = ((  bool (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, RuntimeObject*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 5)))(L_43, L_46, (&V_6), il2cpp_rgctx_method(method->klass->rgctx_data, 5));
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_48 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_49 = V_5;
		NullCheck(L_48);
		int32_t L_50 = (int32_t)((L_48)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_49)))->___Next_2;
		V_5 = L_50;
	}

IL_0130:
	{
		int32_t L_51 = V_5;
		if ((((int32_t)L_51) > ((int32_t)0)))
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_52 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_013b:
	{
		int32_t L_53 = V_4;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_54 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_54);
		if ((((int32_t)L_53) < ((int32_t)((int32_t)(((RuntimeArray*)L_54)->max_length)))))
		{
			goto IL_00f4;
		}
	}
	{
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_55 = V_1;
		return L_55;
	}
}
// System.Boolean System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::TryGetValue(System.String,System.Int32,System.Int32,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryGetValue_m22BFB31B1A4E2CEDE4CA7133F4A0B50B9E514308_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, RuntimeObject** ___3_value, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_key;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_count;
		int32_t L_3;
		L_3 = ((  int32_t (*) (String_t*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_0, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_0 = L_3;
		V_1 = 0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___0_key;
		int32_t L_6 = ___1_index;
		int32_t L_7 = ___2_count;
		bool L_8;
		L_8 = ((  bool (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, int32_t, String_t*, int32_t, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_4, L_5, L_6, L_7, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_8)
		{
			goto IL_0033;
		}
	}
	{
		RuntimeObject** L_9 = ___3_value;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_10 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		RuntimeObject* L_12 = (RuntimeObject*)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)))->___Value_0;
		*(RuntimeObject**)L_9 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_9, (void*)L_12);
		return (bool)1;
	}

IL_0033:
	{
		RuntimeObject** L_13 = ___3_value;
		il2cpp_codegen_initobj(L_13, sizeof(RuntimeObject*));
		return (bool)0;
	}
}
// System.Boolean System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::TryAdd(TValue,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_TryAdd_m951A9A914307495745E2B33DB0BA6583FB4060A1_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, RuntimeObject* ___0_value, RuntimeObject** ___1_newValue, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	{
		RuntimeObject** L_0 = ___1_newValue;
		RuntimeObject* L_1 = ___0_value;
		*(RuntimeObject**)L_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_0, (void*)L_1);
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_2 = (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*)__this->____extractKey_3;
		RuntimeObject* L_3 = ___0_value;
		NullCheck(L_2);
		String_t* L_4;
		L_4 = ((  String_t* (*) (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_2, L_3, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_2 = L_4;
		String_t* L_5 = V_2;
		if (L_5)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}

IL_0019:
	{
		String_t* L_6 = V_2;
		String_t* L_7 = V_2;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_7, NULL);
		int32_t L_9;
		L_9 = ((  int32_t (*) (String_t*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 6)))(L_6, 0, L_8, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		V_3 = L_9;
		int32_t* L_10 = (int32_t*)(&__this->____numEntries_2);
		int32_t L_11;
		L_11 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_10, NULL);
		V_0 = L_11;
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) < ((int32_t)0)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_13 = V_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_14 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0044;
		}
	}

IL_0042:
	{
		return (bool)0;
	}

IL_0044:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_15 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		RuntimeObject* L_17 = ___0_value;
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___Value_0 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___Value_0), (void*)L_17);
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_18 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = V_3;
		((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___HashCode_1 = L_20;
		Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D(NULL);
		V_1 = 0;
		goto IL_00b7;
	}

IL_0071:
	{
		int32_t L_21 = V_1;
		if (L_21)
		{
			goto IL_0095;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_22 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_23 = V_3;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_24 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_24);
		NullCheck(L_22);
		int32_t L_25 = V_0;
		int32_t L_26;
		L_26 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_23&((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_24)->max_length)), 1))))))), L_25, 0, NULL);
		V_1 = L_26;
		goto IL_00ae;
	}

IL_0095:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_27 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		int32_t* L_29 = (int32_t*)(&((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___Next_2);
		int32_t L_30 = V_0;
		int32_t L_31;
		L_31 = Interlocked_CompareExchange_mB06E8737D3DA41F9FFBC38A6D0583D515EFB5717(L_29, L_30, 0, NULL);
		V_1 = L_31;
	}

IL_00ae:
	{
		int32_t L_32 = V_1;
		if ((((int32_t)L_32) > ((int32_t)0)))
		{
			goto IL_00b7;
		}
	}
	{
		int32_t L_33 = V_1;
		return (bool)((((int32_t)L_33) == ((int32_t)0))? 1 : 0);
	}

IL_00b7:
	{
		int32_t L_34 = V_3;
		String_t* L_35 = V_2;
		String_t* L_36 = V_2;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_36, NULL);
		bool L_38;
		L_38 = ((  bool (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, int32_t, String_t*, int32_t, int32_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 8)))(__this, L_34, L_35, 0, L_37, (&V_1), il2cpp_rgctx_method(method->klass->rgctx_data, 8));
		if (!L_38)
		{
			goto IL_0071;
		}
	}
	{
		RuntimeObject** L_39 = ___1_newValue;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_40 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_41 = V_1;
		NullCheck(L_40);
		RuntimeObject* L_42 = (RuntimeObject*)((L_40)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_41)))->___Value_0;
		*(RuntimeObject**)L_39 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_39, (void*)L_42);
		return (bool)1;
	}
}
// System.Boolean System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::FindEntry(System.Int32,System.String,System.Int32,System.Int32,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtableState_FindEntry_m3AC0430564190D3FCAD9A8DB1DD0E725F7392A91_gshared (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* __this, int32_t ___0_hashCode, String_t* ___1_key, int32_t ___2_index, int32_t ___3_count, int32_t* ___4_entryIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		int32_t* L_0 = ___4_entryIndex;
		int32_t L_1 = *((int32_t*)L_0);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_4 = ___0_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_5);
		NullCheck(L_3);
		int32_t L_6 = ((int32_t)(L_4&((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_5)->max_length)), 1))));
		int32_t L_7 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_1 = L_7;
		goto IL_00f9;
	}

IL_0020:
	{
		int32_t L_8 = V_0;
		V_1 = L_8;
		goto IL_00f9;
	}

IL_0027:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_9 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = (int32_t)((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___HashCode_1;
		int32_t L_12 = ___0_hashCode;
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_00e5;
		}
	}
	{
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_13 = (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*)__this->____extractKey_3;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_14 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		RuntimeObject* L_16 = (RuntimeObject*)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___Value_0;
		NullCheck(L_13);
		String_t* L_17;
		L_17 = ((  String_t* (*) (ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_13, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		V_2 = L_17;
		String_t* L_18 = V_2;
		if (L_18)
		{
			goto IL_00c8;
		}
	}
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_19 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_20 = V_1;
		NullCheck(L_19);
		int32_t L_21 = (int32_t)((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___Next_2;
		if ((((int32_t)L_21) <= ((int32_t)0)))
		{
			goto IL_00e5;
		}
	}
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_22 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		RuntimeObject** L_24 = (RuntimeObject**)(&((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_23)))->___Value_0);
		il2cpp_codegen_initobj(L_24, sizeof(RuntimeObject*));
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_25 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_26 = V_1;
		NullCheck(L_25);
		int32_t L_27 = (int32_t)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___Next_2;
		V_1 = L_27;
		int32_t L_28 = V_0;
		if (L_28)
		{
			goto IL_00b4;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		int32_t L_30 = ___0_hashCode;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)__this->____buckets_0;
		NullCheck(L_31);
		int32_t L_32 = V_1;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_30&((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_31)->max_length)), 1))))), (int32_t)L_32);
		goto IL_00f9;
	}

IL_00b4:
	{
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_33 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_34 = V_0;
		NullCheck(L_33);
		int32_t L_35 = V_1;
		((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_34)))->___Next_2 = L_35;
		goto IL_00f9;
	}

IL_00c8:
	{
		int32_t L_36 = ___3_count;
		String_t* L_37 = V_2;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_37, NULL);
		if ((!(((uint32_t)L_36) == ((uint32_t)L_38))))
		{
			goto IL_00e5;
		}
	}
	{
		String_t* L_39 = ___1_key;
		int32_t L_40 = ___2_index;
		String_t* L_41 = V_2;
		int32_t L_42 = ___3_count;
		int32_t L_43;
		L_43 = String_CompareOrdinal_m8940CFAE90021ED8DA3F2DF8226941C9EEB2E32D(L_39, L_40, L_41, 0, L_42, NULL);
		if (L_43)
		{
			goto IL_00e5;
		}
	}
	{
		int32_t* L_44 = ___4_entryIndex;
		int32_t L_45 = V_1;
		*((int32_t*)L_44) = (int32_t)L_45;
		return (bool)1;
	}

IL_00e5:
	{
		int32_t L_46 = V_1;
		V_0 = L_46;
		EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635* L_47 = (EntryU5BU5D_tA5AD9C5E098FD22F628C31033C0DAD7AD6F59635*)__this->____entries_1;
		int32_t L_48 = V_1;
		NullCheck(L_47);
		int32_t L_49 = (int32_t)((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___Next_2;
		V_1 = L_49;
	}

IL_00f9:
	{
		int32_t L_50 = V_1;
		if ((((int32_t)L_50) > ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t* L_51 = ___4_entryIndex;
		int32_t L_52 = V_0;
		*((int32_t*)L_51) = (int32_t)L_52;
		return (bool)0;
	}
}
// System.Int32 System.Xml.Linq.XHashtable`1/XHashtableState<System.Object>::ComputeHashCode(System.String,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XHashtableState_ComputeHashCode_mD58A823B4A09F8DB93853EA9536E6B457B59F1B1_gshared (String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		V_0 = ((int32_t)352654597);
		int32_t L_0 = ___1_index;
		int32_t L_1 = ___2_count;
		V_1 = ((int32_t)il2cpp_codegen_add(L_0, L_1));
		int32_t L_2 = ___1_index;
		V_2 = L_2;
		goto IL_0020;
	}

IL_000e:
	{
		int32_t L_3 = V_0;
		int32_t L_4 = V_0;
		String_t* L_5 = ___0_key;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		Il2CppChar L_7;
		L_7 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_5, L_6, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, ((int32_t)(((int32_t)(L_4<<7))^(int32_t)L_7))));
		int32_t L_8 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0020:
	{
		int32_t L_9 = V_2;
		int32_t L_10 = V_1;
		if ((((int32_t)L_9) < ((int32_t)L_10)))
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_11 = V_0;
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_11, ((int32_t)(L_12>>((int32_t)17)))));
		int32_t L_13 = V_0;
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_13, ((int32_t)(L_14>>((int32_t)11)))));
		int32_t L_15 = V_0;
		int32_t L_16 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_15, ((int32_t)(L_16>>5))));
		int32_t L_17 = V_0;
		return ((int32_t)(L_17&((int32_t)2147483647LL)));
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
// System.Void System.Xml.Linq.XHashtable`1<System.Object>::.ctor(System.Xml.Linq.XHashtable`1/ExtractKeyDelegate<TValue>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XHashtable_1__ctor_m9D005D3C7669B409F1E1B4F0863596FD91DB335C_gshared (XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* __this, ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* ___0_extractKey, int32_t ___1_capacity, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2((RuntimeObject*)__this, NULL);
		ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583* L_0 = ___0_extractKey;
		int32_t L_1 = ___1_capacity;
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_2 = (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 0));
		NullCheck(L_2);
		((  void (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, ExtractKeyDelegate_t9BADAD4BDEEE5FEB8CBD095F1EA307C3DA921583*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 1)))(L_2, L_0, L_1, il2cpp_rgctx_method(method->klass->rgctx_data, 1));
		__this->____state_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____state_0), (void*)L_2);
		return;
	}
}
// System.Boolean System.Xml.Linq.XHashtable`1<System.Object>::TryGetValue(System.String,System.Int32,System.Int32,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XHashtable_1_TryGetValue_mB91947F216CD72CEE9C38FA8EF56137E42817080_gshared (XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* __this, String_t* ___0_key, int32_t ___1_index, int32_t ___2_count, RuntimeObject** ___3_value, const RuntimeMethod* method) 
{
	{
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_0 = (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*)__this->____state_0;
		String_t* L_1 = ___0_key;
		int32_t L_2 = ___1_index;
		int32_t L_3 = ___2_count;
		RuntimeObject** L_4 = ___3_value;
		NullCheck(L_0);
		bool L_5;
		L_5 = ((  bool (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, String_t*, int32_t, int32_t, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(L_0, L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return L_5;
	}
}
// TValue System.Xml.Linq.XHashtable`1<System.Object>::Add(TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XHashtable_1_Add_m4CE3AB9A64E8EBADEC48510932751F7C6D5581A0_gshared (XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* V_1 = NULL;
	bool V_2 = false;
	XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* V_3 = NULL;

IL_0000:
	{
		XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_0 = (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*)__this->____state_0;
		RuntimeObject* L_1 = ___0_value;
		NullCheck(L_0);
		bool L_2;
		L_2 = ((  bool (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, RuntimeObject*, RuntimeObject**, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(L_0, L_1, (&V_0), il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		if (!L_2)
		{
			goto IL_0012;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}

IL_0012:
	{
		V_1 = __this;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				{
					bool L_4 = V_2;
					if (!L_4)
					{
						goto IL_0041;
					}
				}
				{
					XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* L_5 = V_1;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA((RuntimeObject*)L_5, NULL);
				}

IL_0041:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			XHashtable_1_t4C208624C5DAFD8858B7794DF15C5747BE4B3072* L_6 = V_1;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149((RuntimeObject*)L_6, (&V_2), NULL);
			XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_7 = (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*)__this->____state_0;
			NullCheck(L_7);
			XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_8;
			L_8 = ((  XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* (*) (XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 4)))(L_7, il2cpp_rgctx_method(method->klass->rgctx_data, 4));
			V_3 = L_8;
			Thread_MemoryBarrier_m83873F1E6CEB16C0781941141382DA874A36097D(NULL);
			XHashtableState_tA4D9621B10532B31291D60ED7E6B08342FAA537A* L_9 = V_3;
			__this->____state_0 = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&__this->____state_0), (void*)L_9);
			goto IL_0000;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}
	il2cpp_codegen_no_return();
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.CSharp.YieldStatement`1<System.Object>::.ctor(Mono.CSharp.Expression,Mono.CSharp.Location)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldStatement_1__ctor_m67351F3A2431BBDC3137855044C8E0CD2B704B13_gshared (YieldStatement_1_t750B7E1A9DC34B29E91108D1F9F3C7C70229492F* __this, Expression_t765E7793407091A8450573D552B39FDD6121FF49* ___0_expr, Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F ___1_l, const RuntimeMethod* method) 
{
	{
		ResumableStatement__ctor_m07A1A214C477D4E3D8B2E15BC2B9C6A8E6412A94((ResumableStatement_tE9CC299D91959558B2711FB0F613178793BD6B95*)__this, NULL);
		Expression_t765E7793407091A8450573D552B39FDD6121FF49* L_0 = ___0_expr;
		__this->___expr_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___expr_4), (void*)L_0);
		Location_tF92FDB3E8F03EC5294BC71D0B897A339751F203F L_1 = ___1_l;
		((Statement_t4498D621BCD841B009E22E38039C2759DFC4AC2B*)__this)->___loc_0 = L_1;
		return;
	}
}
// Mono.CSharp.Expression Mono.CSharp.YieldStatement`1<System.Object>::get_Expr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t765E7793407091A8450573D552B39FDD6121FF49* YieldStatement_1_get_Expr_mFF7C04E6E8A57AB64278E742B01216FC18CB0A41_gshared (YieldStatement_1_t750B7E1A9DC34B29E91108D1F9F3C7C70229492F* __this, const RuntimeMethod* method) 
{
	{
		Expression_t765E7793407091A8450573D552B39FDD6121FF49* L_0 = (Expression_t765E7793407091A8450573D552B39FDD6121FF49*)__this->___expr_4;
		return L_0;
	}
}
// System.Void Mono.CSharp.YieldStatement`1<System.Object>::CloneTo(Mono.CSharp.CloneContext,Mono.CSharp.Statement)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldStatement_1_CloneTo_m4525B9E6DB5A4036DA63F818DFA467FECB153E1E_gshared (YieldStatement_1_t750B7E1A9DC34B29E91108D1F9F3C7C70229492F* __this, CloneContext_t1503DDCBC25A8CCFC1A56F42F0F87415B136AC09* ___0_clonectx, Statement_t4498D621BCD841B009E22E38039C2759DFC4AC2B* ___1_t, const RuntimeMethod* method) 
{
	{
		Statement_t4498D621BCD841B009E22E38039C2759DFC4AC2B* L_0 = ___1_t;
		Expression_t765E7793407091A8450573D552B39FDD6121FF49* L_1 = (Expression_t765E7793407091A8450573D552B39FDD6121FF49*)__this->___expr_4;
		CloneContext_t1503DDCBC25A8CCFC1A56F42F0F87415B136AC09* L_2 = ___0_clonectx;
		NullCheck(L_1);
		Expression_t765E7793407091A8450573D552B39FDD6121FF49* L_3;
		L_3 = VirtualFuncInvoker1< Expression_t765E7793407091A8450573D552B39FDD6121FF49*, CloneContext_t1503DDCBC25A8CCFC1A56F42F0F87415B136AC09* >::Invoke(31 /* Mono.CSharp.Expression Mono.CSharp.Expression::Clone(Mono.CSharp.CloneContext) */, L_1, L_2);
		NullCheck(((YieldStatement_1_t750B7E1A9DC34B29E91108D1F9F3C7C70229492F*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0))));
		((YieldStatement_1_t750B7E1A9DC34B29E91108D1F9F3C7C70229492F*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0)))->___expr_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((YieldStatement_1_t750B7E1A9DC34B29E91108D1F9F3C7C70229492F*)CastclassClass((RuntimeObject*)L_0, il2cpp_rgctx_data(method->klass->rgctx_data, 0)))->___expr_4), (void*)L_3);
		return;
	}
}
// System.Void Mono.CSharp.YieldStatement`1<System.Object>::DoEmit(Mono.CSharp.EmitContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldStatement_1_DoEmit_m900A4FF4F9619420DD38879427FF207E27C82371_gshared (YieldStatement_1_t750B7E1A9DC34B29E91108D1F9F3C7C70229492F* __this, EmitContext_t4F2268BCF4C3AB3781ECE507806EF8632A12031C* ___0_ec, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___machine_initializer_6;
		EmitContext_t4F2268BCF4C3AB3781ECE507806EF8632A12031C* L_1 = ___0_ec;
		Expression_t765E7793407091A8450573D552B39FDD6121FF49* L_2 = (Expression_t765E7793407091A8450573D552B39FDD6121FF49*)__this->___expr_4;
		int32_t L_3 = (int32_t)__this->___resume_pc_7;
		bool L_4 = (bool)__this->___unwind_protect_5;
		Label_tE539F0FEBA09A9E2042C249C75886A37351A89DE L_5 = (Label_tE539F0FEBA09A9E2042C249C75886A37351A89DE)((ResumableStatement_tE9CC299D91959558B2711FB0F613178793BD6B95*)__this)->___resume_point_3;
		NullCheck((StateMachineInitializer_tD6039E8985AB33B2CB1FBBCF927FDDCAC541FA32*)L_0);
		VirtualActionInvoker5< EmitContext_t4F2268BCF4C3AB3781ECE507806EF8632A12031C*, Expression_t765E7793407091A8450573D552B39FDD6121FF49*, int32_t, bool, Label_tE539F0FEBA09A9E2042C249C75886A37351A89DE >::Invoke(42 /* System.Void Mono.CSharp.StateMachineInitializer::InjectYield(Mono.CSharp.EmitContext,Mono.CSharp.Expression,System.Int32,System.Boolean,System.Reflection.Emit.Label) */, (StateMachineInitializer_tD6039E8985AB33B2CB1FBBCF927FDDCAC541FA32*)L_0, L_1, L_2, L_3, L_4, L_5);
		return;
	}
}
// System.Boolean Mono.CSharp.YieldStatement`1<System.Object>::DoFlowAnalysis(Mono.CSharp.FlowAnalysisContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YieldStatement_1_DoFlowAnalysis_m65EE2BA4B7DC6E1361472C509BE3140DE92D65C7_gshared (YieldStatement_1_t750B7E1A9DC34B29E91108D1F9F3C7C70229492F* __this, FlowAnalysisContext_t5DDB23C6A1441BE2EB24E0BC82E9AE8B1A817D06* ___0_fc, const RuntimeMethod* method) 
{
	{
		Expression_t765E7793407091A8450573D552B39FDD6121FF49* L_0 = (Expression_t765E7793407091A8450573D552B39FDD6121FF49*)__this->___expr_4;
		FlowAnalysisContext_t5DDB23C6A1441BE2EB24E0BC82E9AE8B1A817D06* L_1 = ___0_fc;
		NullCheck(L_0);
		VirtualActionInvoker1< FlowAnalysisContext_t5DDB23C6A1441BE2EB24E0BC82E9AE8B1A817D06* >::Invoke(26 /* System.Void Mono.CSharp.Expression::FlowAnalysis(Mono.CSharp.FlowAnalysisContext) */, L_0, L_1);
		((  void (*) (YieldStatement_1_t750B7E1A9DC34B29E91108D1F9F3C7C70229492F*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 2)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 2));
		return (bool)0;
	}
}
// System.Boolean Mono.CSharp.YieldStatement`1<System.Object>::Resolve(Mono.CSharp.BlockContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool YieldStatement_1_Resolve_mCFA0D55386F6E0E2D147BED47611AF528F9153F0_gshared (YieldStatement_1_t750B7E1A9DC34B29E91108D1F9F3C7C70229492F* __this, BlockContext_tB2407BBCB8B477D535A7512F310E3AE0EB3DA4F3* ___0_bc, const RuntimeMethod* method) 
{
	{
		Expression_t765E7793407091A8450573D552B39FDD6121FF49* L_0 = (Expression_t765E7793407091A8450573D552B39FDD6121FF49*)__this->___expr_4;
		BlockContext_tB2407BBCB8B477D535A7512F310E3AE0EB3DA4F3* L_1 = ___0_bc;
		NullCheck(L_0);
		Expression_t765E7793407091A8450573D552B39FDD6121FF49* L_2;
		L_2 = Expression_Resolve_mC12792F1C3B920CB0A200585AD6BB9E13F231199(L_0, (ResolveContext_t3B244DBC54CA521A77ADC2E849E8CD8A9A529626*)L_1, NULL);
		__this->___expr_4 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___expr_4), (void*)L_2);
		Expression_t765E7793407091A8450573D552B39FDD6121FF49* L_3 = (Expression_t765E7793407091A8450573D552B39FDD6121FF49*)__this->___expr_4;
		if (L_3)
		{
			goto IL_001c;
		}
	}
	{
		return (bool)0;
	}

IL_001c:
	{
		BlockContext_tB2407BBCB8B477D535A7512F310E3AE0EB3DA4F3* L_4 = ___0_bc;
		NullCheck(L_4);
		AnonymousExpression_t78C4F0AC19BD9BBAC4C5928F80D91F3197011414* L_5 = (AnonymousExpression_t78C4F0AC19BD9BBAC4C5928F80D91F3197011414*)((ResolveContext_t3B244DBC54CA521A77ADC2E849E8CD8A9A529626*)L_4)->___CurrentAnonymousMethod_1;
		__this->___machine_initializer_6 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 1))), il2cpp_rgctx_data(method->klass->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___machine_initializer_6), (void*)((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_5, il2cpp_rgctx_data(method->klass->rgctx_data, 1))), il2cpp_rgctx_data(method->klass->rgctx_data, 1))));
		BlockContext_tB2407BBCB8B477D535A7512F310E3AE0EB3DA4F3* L_6 = ___0_bc;
		NullCheck(L_6);
		ExceptionStatement_tD72CFF74FF08EAE99069D55F1CB7BD95729200BF* L_7;
		L_7 = BlockContext_get_CurrentTryBlock_m62AE2EC8CDD4F8C119969E9EA7E78F0603EB0DCA_inline(L_6, NULL);
		__this->___inside_try_block_8 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inside_try_block_8), (void*)L_7);
		return (bool)1;
	}
}
// System.Void Mono.CSharp.YieldStatement`1<System.Object>::RegisterResumePoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void YieldStatement_1_RegisterResumePoint_m1A6AAC72CFBD449B1F7B0BB54B3F85E1CC8F84A1_gshared (YieldStatement_1_t750B7E1A9DC34B29E91108D1F9F3C7C70229492F* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->___resume_pc_7;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		ExceptionStatement_tD72CFF74FF08EAE99069D55F1CB7BD95729200BF* L_1 = (ExceptionStatement_tD72CFF74FF08EAE99069D55F1CB7BD95729200BF*)__this->___inside_try_block_8;
		if (L_1)
		{
			goto IL_0029;
		}
	}
	{
		RuntimeObject* L_2 = (RuntimeObject*)__this->___machine_initializer_6;
		NullCheck((StateMachineInitializer_tD6039E8985AB33B2CB1FBBCF927FDDCAC541FA32*)L_2);
		int32_t L_3;
		L_3 = StateMachineInitializer_AddResumePoint_mAFE2361F277A252FFEE38497C72571DEDDD50BC8((StateMachineInitializer_tD6039E8985AB33B2CB1FBBCF927FDDCAC541FA32*)L_2, (ResumableStatement_tE9CC299D91959558B2711FB0F613178793BD6B95*)__this, NULL);
		__this->___resume_pc_7 = L_3;
		return;
	}

IL_0029:
	{
		ExceptionStatement_tD72CFF74FF08EAE99069D55F1CB7BD95729200BF* L_4 = (ExceptionStatement_tD72CFF74FF08EAE99069D55F1CB7BD95729200BF*)__this->___inside_try_block_8;
		int32_t L_5 = (int32_t)__this->___resume_pc_7;
		RuntimeObject* L_6 = (RuntimeObject*)__this->___machine_initializer_6;
		NullCheck(L_4);
		int32_t L_7;
		L_7 = VirtualFuncInvoker3< int32_t, ResumableStatement_tE9CC299D91959558B2711FB0F613178793BD6B95*, int32_t, StateMachineInitializer_tD6039E8985AB33B2CB1FBBCF927FDDCAC541FA32* >::Invoke(16 /* System.Int32 Mono.CSharp.ExceptionStatement::AddResumePoint(Mono.CSharp.ResumableStatement,System.Int32,Mono.CSharp.StateMachineInitializer) */, L_4, (ResumableStatement_tE9CC299D91959558B2711FB0F613178793BD6B95*)__this, L_5, (StateMachineInitializer_tD6039E8985AB33B2CB1FBBCF927FDDCAC541FA32*)L_6);
		__this->___resume_pc_7 = L_7;
		__this->___unwind_protect_5 = (bool)1;
		__this->___inside_try_block_8 = (ExceptionStatement_tD72CFF74FF08EAE99069D55F1CB7BD95729200BF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___inside_try_block_8), (void*)(ExceptionStatement_tD72CFF74FF08EAE99069D55F1CB7BD95729200BF*)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ExceptionStatement_tD72CFF74FF08EAE99069D55F1CB7BD95729200BF* BlockContext_get_CurrentTryBlock_m62AE2EC8CDD4F8C119969E9EA7E78F0603EB0DCA_inline (BlockContext_tB2407BBCB8B477D535A7512F310E3AE0EB3DA4F3* __this, const RuntimeMethod* method) 
{
	{
		ExceptionStatement_tD72CFF74FF08EAE99069D55F1CB7BD95729200BF* L_0 = __this->___U3CCurrentTryBlockU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t WorkSlice_1_get_length_m0E5769CB5B052657E7327DCAD0F2CA104327D7D8_gshared_inline (WorkSlice_1_t667B566D7F9D6CCD86634FB4157540E5A9C14E87* __this, const RuntimeMethod* method) 
{
	{
		// public int length => m_Length;
		int32_t L_0 = (int32_t)__this->___m_Length_2;
		return L_0;
	}
}
