// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4UCapture/Public/VrmMocopiReceiver.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmMocopiReceiver() {}
// Cross Module References
	VRM4UCAPTURE_API UFunction* Z_Construct_UDelegateFunction_UVrmMocopiReceiver_VrmMocopiReceiverDelegate__DelegateSignature();
	VRM4UCAPTURE_API UClass* Z_Construct_UClass_UVrmMocopiReceiver();
	VRM4UCAPTURE_API UScriptStruct* Z_Construct_UScriptStruct_FStructMocopiData();
	UPackage* Z_Construct_UPackage__Script_VRM4UCapture();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	VRM4UCAPTURE_API UClass* Z_Construct_UClass_UVrmMocopiReceiver_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UVrmMocopiReceiver_VrmMocopiReceiverDelegate__DelegateSignature_Statics
	{
		struct VrmMocopiReceiver_eventVrmMocopiReceiverDelegate_Parms
		{
			FStructMocopiData data;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_UVrmMocopiReceiver_VrmMocopiReceiverDelegate__DelegateSignature_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrmMocopiReceiver_eventVrmMocopiReceiverDelegate_Parms, data), Z_Construct_UScriptStruct_FStructMocopiData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UVrmMocopiReceiver_VrmMocopiReceiverDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UVrmMocopiReceiver_VrmMocopiReceiverDelegate__DelegateSignature_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UVrmMocopiReceiver_VrmMocopiReceiverDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VrmMocopiReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UVrmMocopiReceiver_VrmMocopiReceiverDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmMocopiReceiver, nullptr, "VrmMocopiReceiverDelegate__DelegateSignature", nullptr, nullptr, sizeof(VrmMocopiReceiver_eventVrmMocopiReceiverDelegate_Parms), Z_Construct_UDelegateFunction_UVrmMocopiReceiver_VrmMocopiReceiverDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVrmMocopiReceiver_VrmMocopiReceiverDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UVrmMocopiReceiver_VrmMocopiReceiverDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVrmMocopiReceiver_VrmMocopiReceiverDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UVrmMocopiReceiver_VrmMocopiReceiverDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UVrmMocopiReceiver_VrmMocopiReceiverDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FStructMocopiData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VRM4UCAPTURE_API uint32 Get_Z_Construct_UScriptStruct_FStructMocopiData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStructMocopiData, Z_Construct_UPackage__Script_VRM4UCapture(), TEXT("StructMocopiData"), sizeof(FStructMocopiData), Get_Z_Construct_UScriptStruct_FStructMocopiData_Hash());
	}
	return Singleton;
}
template<> VRM4UCAPTURE_API UScriptStruct* StaticStruct<FStructMocopiData>()
{
	return FStructMocopiData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStructMocopiData(FStructMocopiData::StaticStruct, TEXT("/Script/VRM4UCapture"), TEXT("StructMocopiData"), false, nullptr, nullptr);
static struct FScriptStruct_VRM4UCapture_StaticRegisterNativesFStructMocopiData
{
	FScriptStruct_VRM4UCapture_StaticRegisterNativesFStructMocopiData()
	{
		UScriptStruct::DeferCppStructOps<FStructMocopiData>(FName(TEXT("StructMocopiData")));
	}
} ScriptStruct_VRM4UCapture_StaticRegisterNativesFStructMocopiData;
	struct Z_Construct_UScriptStruct_FStructMocopiData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FrameNo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MocopiTransformWorld_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MocopiTransformWorld_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MocopiTransformWorld;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MocopiTransformLocal_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MocopiTransformLocal_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MocopiTransformLocal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VrmTransformLocal_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VrmTransformLocal_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VrmTransformLocal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VrmTransformBoneList_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VrmTransformBoneList_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VrmTransformBoneList_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_VrmTransformBoneList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructMocopiData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VrmMocopiReceiver.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStructMocopiData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_FrameNo_MetaData[] = {
		{ "Category", "StructMocopiData" },
		{ "ModuleRelativePath", "Public/VrmMocopiReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_FrameNo = { "FrameNo", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructMocopiData, FrameNo), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_FrameNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_FrameNo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_Time_MetaData[] = {
		{ "Category", "StructMocopiData" },
		{ "ModuleRelativePath", "Public/VrmMocopiReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructMocopiData, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_Time_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_MocopiTransformWorld_Inner = { "MocopiTransformWorld", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_MocopiTransformWorld_MetaData[] = {
		{ "Category", "StructMocopiData" },
		{ "ModuleRelativePath", "Public/VrmMocopiReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_MocopiTransformWorld = { "MocopiTransformWorld", nullptr, (EPropertyFlags)0x0010000000000045, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructMocopiData, MocopiTransformWorld), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_MocopiTransformWorld_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_MocopiTransformWorld_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_MocopiTransformLocal_Inner = { "MocopiTransformLocal", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_MocopiTransformLocal_MetaData[] = {
		{ "Category", "StructMocopiData" },
		{ "ModuleRelativePath", "Public/VrmMocopiReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_MocopiTransformLocal = { "MocopiTransformLocal", nullptr, (EPropertyFlags)0x0010000000000045, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructMocopiData, MocopiTransformLocal), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_MocopiTransformLocal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_MocopiTransformLocal_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_VrmTransformLocal_Inner = { "VrmTransformLocal", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_VrmTransformLocal_MetaData[] = {
		{ "Category", "StructMocopiData" },
		{ "ModuleRelativePath", "Public/VrmMocopiReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_VrmTransformLocal = { "VrmTransformLocal", nullptr, (EPropertyFlags)0x0010000000000045, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructMocopiData, VrmTransformLocal), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_VrmTransformLocal_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_VrmTransformLocal_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_VrmTransformBoneList_ValueProp = { "VrmTransformBoneList", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_VrmTransformBoneList_Key_KeyProp = { "VrmTransformBoneList_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_VrmTransformBoneList_MetaData[] = {
		{ "Category", "StructMocopiData" },
		{ "ModuleRelativePath", "Public/VrmMocopiReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_VrmTransformBoneList = { "VrmTransformBoneList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStructMocopiData, VrmTransformBoneList), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_VrmTransformBoneList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_VrmTransformBoneList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStructMocopiData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_FrameNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_Time,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_MocopiTransformWorld_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_MocopiTransformWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_MocopiTransformLocal_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_MocopiTransformLocal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_VrmTransformLocal_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_VrmTransformLocal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_VrmTransformBoneList_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_VrmTransformBoneList_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStructMocopiData_Statics::NewProp_VrmTransformBoneList,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStructMocopiData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4UCapture,
		nullptr,
		&NewStructOps,
		"StructMocopiData",
		sizeof(FStructMocopiData),
		alignof(FStructMocopiData),
		Z_Construct_UScriptStruct_FStructMocopiData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructMocopiData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStructMocopiData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStructMocopiData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStructMocopiData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStructMocopiData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRM4UCapture();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StructMocopiData"), sizeof(FStructMocopiData), Get_Z_Construct_UScriptStruct_FStructMocopiData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStructMocopiData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStructMocopiData_Hash() { return 1121800156U; }
	DEFINE_FUNCTION(UVrmMocopiReceiver::execGetCurrentTime)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_FrameNo);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Time);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCurrentTime(Z_Param_Out_FrameNo,Z_Param_Out_Time);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmMocopiReceiver::execGetLatestFrameData)
	{
		P_GET_STRUCT_REF(FStructMocopiData,Z_Param_Out_data);
		P_GET_UBOOL_REF(Z_Param_Out_bEnable);
		P_GET_UBOOL_REF(Z_Param_Out_bUpdate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetLatestFrameData(Z_Param_Out_data,Z_Param_Out_bEnable,Z_Param_Out_bUpdate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmMocopiReceiver::execGetNextFrameData)
	{
		P_GET_STRUCT_REF(FStructMocopiData,Z_Param_Out_data);
		P_GET_UBOOL_REF(Z_Param_Out_bEnable);
		P_GET_UBOOL_REF(Z_Param_Out_bUpdate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetNextFrameData(Z_Param_Out_data,Z_Param_Out_bEnable,Z_Param_Out_bUpdate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmMocopiReceiver::execSetBufferNum)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Num);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBufferNum(Z_Param_Num);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmMocopiReceiver::execSetAddress)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ReceiveIPAddress);
		P_GET_PROPERTY(FIntProperty,Z_Param_Port);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetAddress(Z_Param_ReceiveIPAddress,Z_Param_Port);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmMocopiReceiver::execStop)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Stop();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmMocopiReceiver::execListen)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Listen();
		P_NATIVE_END;
	}
	void UVrmMocopiReceiver::StaticRegisterNativesUVrmMocopiReceiver()
	{
		UClass* Class = UVrmMocopiReceiver::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentTime", &UVrmMocopiReceiver::execGetCurrentTime },
			{ "GetLatestFrameData", &UVrmMocopiReceiver::execGetLatestFrameData },
			{ "GetNextFrameData", &UVrmMocopiReceiver::execGetNextFrameData },
			{ "Listen", &UVrmMocopiReceiver::execListen },
			{ "SetAddress", &UVrmMocopiReceiver::execSetAddress },
			{ "SetBufferNum", &UVrmMocopiReceiver::execSetBufferNum },
			{ "Stop", &UVrmMocopiReceiver::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVrmMocopiReceiver_GetCurrentTime_Statics
	{
		struct VrmMocopiReceiver_eventGetCurrentTime_Parms
		{
			int32 FrameNo;
			int32 Time;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FrameNo;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVrmMocopiReceiver_GetCurrentTime_Statics::NewProp_FrameNo = { "FrameNo", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrmMocopiReceiver_eventGetCurrentTime_Parms, FrameNo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVrmMocopiReceiver_GetCurrentTime_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrmMocopiReceiver_eventGetCurrentTime_Parms, Time), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmMocopiReceiver_GetCurrentTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmMocopiReceiver_GetCurrentTime_Statics::NewProp_FrameNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmMocopiReceiver_GetCurrentTime_Statics::NewProp_Time,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmMocopiReceiver_GetCurrentTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmMocopiReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmMocopiReceiver_GetCurrentTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmMocopiReceiver, nullptr, "GetCurrentTime", nullptr, nullptr, sizeof(VrmMocopiReceiver_eventGetCurrentTime_Parms), Z_Construct_UFunction_UVrmMocopiReceiver_GetCurrentTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmMocopiReceiver_GetCurrentTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmMocopiReceiver_GetCurrentTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmMocopiReceiver_GetCurrentTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmMocopiReceiver_GetCurrentTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVrmMocopiReceiver_GetCurrentTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData_Statics
	{
		struct VrmMocopiReceiver_eventGetLatestFrameData_Parms
		{
			FStructMocopiData data;
			bool bEnable;
			bool bUpdate;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static void NewProp_bUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrmMocopiReceiver_eventGetLatestFrameData_Parms, data), Z_Construct_UScriptStruct_FStructMocopiData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((VrmMocopiReceiver_eventGetLatestFrameData_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VrmMocopiReceiver_eventGetLatestFrameData_Parms), &Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData_Statics::NewProp_bUpdate_SetBit(void* Obj)
	{
		((VrmMocopiReceiver_eventGetLatestFrameData_Parms*)Obj)->bUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData_Statics::NewProp_bUpdate = { "bUpdate", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VrmMocopiReceiver_eventGetLatestFrameData_Parms), &Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData_Statics::NewProp_bUpdate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData_Statics::NewProp_bEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData_Statics::NewProp_bUpdate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmMocopiReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmMocopiReceiver, nullptr, "GetLatestFrameData", nullptr, nullptr, sizeof(VrmMocopiReceiver_eventGetLatestFrameData_Parms), Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData_Statics
	{
		struct VrmMocopiReceiver_eventGetNextFrameData_Parms
		{
			FStructMocopiData data;
			bool bEnable;
			bool bUpdate;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static void NewProp_bUpdate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUpdate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrmMocopiReceiver_eventGetNextFrameData_Parms, data), Z_Construct_UScriptStruct_FStructMocopiData, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((VrmMocopiReceiver_eventGetNextFrameData_Parms*)Obj)->bEnable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VrmMocopiReceiver_eventGetNextFrameData_Parms), &Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData_Statics::NewProp_bUpdate_SetBit(void* Obj)
	{
		((VrmMocopiReceiver_eventGetNextFrameData_Parms*)Obj)->bUpdate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData_Statics::NewProp_bUpdate = { "bUpdate", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VrmMocopiReceiver_eventGetNextFrameData_Parms), &Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData_Statics::NewProp_bUpdate_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData_Statics::NewProp_data,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData_Statics::NewProp_bEnable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData_Statics::NewProp_bUpdate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmMocopiReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmMocopiReceiver, nullptr, "GetNextFrameData", nullptr, nullptr, sizeof(VrmMocopiReceiver_eventGetNextFrameData_Parms), Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmMocopiReceiver_Listen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmMocopiReceiver_Listen_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmMocopiReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmMocopiReceiver_Listen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmMocopiReceiver, nullptr, "Listen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmMocopiReceiver_Listen_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmMocopiReceiver_Listen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmMocopiReceiver_Listen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVrmMocopiReceiver_Listen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress_Statics
	{
		struct VrmMocopiReceiver_eventSetAddress_Parms
		{
			FString ReceiveIPAddress;
			int32 Port;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReceiveIPAddress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReceiveIPAddress;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Port;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress_Statics::NewProp_ReceiveIPAddress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress_Statics::NewProp_ReceiveIPAddress = { "ReceiveIPAddress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrmMocopiReceiver_eventSetAddress_Parms, ReceiveIPAddress), METADATA_PARAMS(Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress_Statics::NewProp_ReceiveIPAddress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress_Statics::NewProp_ReceiveIPAddress_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrmMocopiReceiver_eventSetAddress_Parms, Port), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VrmMocopiReceiver_eventSetAddress_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(VrmMocopiReceiver_eventSetAddress_Parms), &Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress_Statics::NewProp_ReceiveIPAddress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress_Statics::NewProp_Port,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmMocopiReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmMocopiReceiver, nullptr, "SetAddress", nullptr, nullptr, sizeof(VrmMocopiReceiver_eventSetAddress_Parms), Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmMocopiReceiver_SetBufferNum_Statics
	{
		struct VrmMocopiReceiver_eventSetBufferNum_Parms
		{
			int32 Num;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Num;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVrmMocopiReceiver_SetBufferNum_Statics::NewProp_Num = { "Num", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrmMocopiReceiver_eventSetBufferNum_Parms, Num), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmMocopiReceiver_SetBufferNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmMocopiReceiver_SetBufferNum_Statics::NewProp_Num,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmMocopiReceiver_SetBufferNum_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "CPP_Default_Num", "10" },
		{ "ModuleRelativePath", "Public/VrmMocopiReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmMocopiReceiver_SetBufferNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmMocopiReceiver, nullptr, "SetBufferNum", nullptr, nullptr, sizeof(VrmMocopiReceiver_eventSetBufferNum_Parms), Z_Construct_UFunction_UVrmMocopiReceiver_SetBufferNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmMocopiReceiver_SetBufferNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmMocopiReceiver_SetBufferNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmMocopiReceiver_SetBufferNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmMocopiReceiver_SetBufferNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVrmMocopiReceiver_SetBufferNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmMocopiReceiver_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmMocopiReceiver_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmMocopiReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmMocopiReceiver_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmMocopiReceiver, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmMocopiReceiver_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmMocopiReceiver_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmMocopiReceiver_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVrmMocopiReceiver_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVrmMocopiReceiver_NoRegister()
	{
		return UVrmMocopiReceiver::StaticClass();
	}
	struct Z_Construct_UClass_UVrmMocopiReceiver_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnReceived_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnReceived;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrmMocopiReceiver_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4UCapture,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVrmMocopiReceiver_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVrmMocopiReceiver_GetCurrentTime, "GetCurrentTime" }, // 1168044009
		{ &Z_Construct_UFunction_UVrmMocopiReceiver_GetLatestFrameData, "GetLatestFrameData" }, // 2091157802
		{ &Z_Construct_UFunction_UVrmMocopiReceiver_GetNextFrameData, "GetNextFrameData" }, // 3985016186
		{ &Z_Construct_UFunction_UVrmMocopiReceiver_Listen, "Listen" }, // 245699967
		{ &Z_Construct_UFunction_UVrmMocopiReceiver_SetAddress, "SetAddress" }, // 3866226703
		{ &Z_Construct_UFunction_UVrmMocopiReceiver_SetBufferNum, "SetBufferNum" }, // 1664954853
		{ &Z_Construct_UFunction_UVrmMocopiReceiver_Stop, "Stop" }, // 4136229711
		{ &Z_Construct_UDelegateFunction_UVrmMocopiReceiver_VrmMocopiReceiverDelegate__DelegateSignature, "VrmMocopiReceiverDelegate__DelegateSignature" }, // 615128725
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmMocopiReceiver_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VrmMocopiReceiver.h" },
		{ "ModuleRelativePath", "Public/VrmMocopiReceiver.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmMocopiReceiver_Statics::NewProp_OnReceived_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmMocopiReceiver.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVrmMocopiReceiver_Statics::NewProp_OnReceived = { "OnReceived", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmMocopiReceiver, OnReceived), Z_Construct_UDelegateFunction_UVrmMocopiReceiver_VrmMocopiReceiverDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVrmMocopiReceiver_Statics::NewProp_OnReceived_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMocopiReceiver_Statics::NewProp_OnReceived_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmMocopiReceiver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMocopiReceiver_Statics::NewProp_OnReceived,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmMocopiReceiver_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmMocopiReceiver>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVrmMocopiReceiver_Statics::ClassParams = {
		&UVrmMocopiReceiver::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVrmMocopiReceiver_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMocopiReceiver_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVrmMocopiReceiver_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMocopiReceiver_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVrmMocopiReceiver()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVrmMocopiReceiver_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVrmMocopiReceiver, 1488462577);
	template<> VRM4UCAPTURE_API UClass* StaticClass<UVrmMocopiReceiver>()
	{
		return UVrmMocopiReceiver::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVrmMocopiReceiver(Z_Construct_UClass_UVrmMocopiReceiver, &UVrmMocopiReceiver::StaticClass, TEXT("/Script/VRM4UCapture"), TEXT("UVrmMocopiReceiver"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmMocopiReceiver);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
