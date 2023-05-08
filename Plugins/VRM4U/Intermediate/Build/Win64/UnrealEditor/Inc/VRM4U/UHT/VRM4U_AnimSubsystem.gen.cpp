// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VRM4U_AnimSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRM4U_AnimSubsystem() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UEngineSubsystem();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	VRM4U_API UClass* Z_Construct_UClass_UVRM4U_AnimSubsystem();
	VRM4U_API UClass* Z_Construct_UClass_UVRM4U_AnimSubsystem_NoRegister();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVrmTransformData();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VrmTransformData;
class UScriptStruct* FVrmTransformData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VrmTransformData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VrmTransformData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVrmTransformData, Z_Construct_UPackage__Script_VRM4U(), TEXT("VrmTransformData"));
	}
	return Z_Registration_Info_UScriptStruct_VrmTransformData.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVrmTransformData>()
{
	return FVrmTransformData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVrmTransformData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneTransform_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_BoneTransform_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneTransform_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BoneTransform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RawData_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_RawData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RawData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RawData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmTransformData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VRM4U_AnimSubsystem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVrmTransformData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVrmTransformData>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVrmTransformData_Statics::NewProp_BoneTransform_ValueProp = { "BoneTransform", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVrmTransformData_Statics::NewProp_BoneTransform_Key_KeyProp = { "BoneTransform_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmTransformData_Statics::NewProp_BoneTransform_MetaData[] = {
		{ "Comment", "//\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = VRM4U)\n" },
		{ "ModuleRelativePath", "Public/VRM4U_AnimSubsystem.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = VRM4U)" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FVrmTransformData_Statics::NewProp_BoneTransform = { "BoneTransform", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVrmTransformData, BoneTransform), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVrmTransformData_Statics::NewProp_BoneTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmTransformData_Statics::NewProp_BoneTransform_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVrmTransformData_Statics::NewProp_RawData_ValueProp = { "RawData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVrmTransformData_Statics::NewProp_RawData_Key_KeyProp = { "RawData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmTransformData_Statics::NewProp_RawData_MetaData[] = {
		{ "Comment", "//\x09UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = VRM4U)\n" },
		{ "ModuleRelativePath", "Public/VRM4U_AnimSubsystem.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = VRM4U)" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FVrmTransformData_Statics::NewProp_RawData = { "RawData", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVrmTransformData, RawData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVrmTransformData_Statics::NewProp_RawData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmTransformData_Statics::NewProp_RawData_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVrmTransformData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmTransformData_Statics::NewProp_BoneTransform_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmTransformData_Statics::NewProp_BoneTransform_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmTransformData_Statics::NewProp_BoneTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmTransformData_Statics::NewProp_RawData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmTransformData_Statics::NewProp_RawData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmTransformData_Statics::NewProp_RawData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVrmTransformData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VrmTransformData",
		sizeof(FVrmTransformData),
		alignof(FVrmTransformData),
		Z_Construct_UScriptStruct_FVrmTransformData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmTransformData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVrmTransformData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmTransformData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVrmTransformData()
	{
		if (!Z_Registration_Info_UScriptStruct_VrmTransformData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VrmTransformData.InnerSingleton, Z_Construct_UScriptStruct_FVrmTransformData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VrmTransformData.InnerSingleton;
	}
	DEFINE_FUNCTION(UVRM4U_AnimSubsystem::execSetRawData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_port);
		P_GET_TMAP_REF(FString,FTransform,Z_Param_Out_trans);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRawData(Z_Param_port,Z_Param_Out_trans);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRM4U_AnimSubsystem::execSetBoneTransform)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_port);
		P_GET_TMAP_REF(FString,FTransform,Z_Param_Out_trans);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoneTransform(Z_Param_port,Z_Param_Out_trans);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRM4U_AnimSubsystem::execGetRawdataByPort)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_port);
		P_GET_TMAP_REF(FString,FTransform,Z_Param_Out_trans);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRawdataByPort(Z_Param_port,Z_Param_Out_trans);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRM4U_AnimSubsystem::execGetRawdataByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_TMAP_REF(FString,FTransform,Z_Param_Out_trans);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetRawdataByIndex(Z_Param_index,Z_Param_Out_trans);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRM4U_AnimSubsystem::execGetBoneByPort)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_port);
		P_GET_TMAP_REF(FString,FTransform,Z_Param_Out_trans);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetBoneByPort(Z_Param_port,Z_Param_Out_trans);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRM4U_AnimSubsystem::execGetBoneByIndex)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_TMAP_REF(FString,FTransform,Z_Param_Out_trans);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetBoneByIndex(Z_Param_index,Z_Param_Out_trans);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVRM4U_AnimSubsystem::execClear)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Clear();
		P_NATIVE_END;
	}
	void UVRM4U_AnimSubsystem::StaticRegisterNativesUVRM4U_AnimSubsystem()
	{
		UClass* Class = UVRM4U_AnimSubsystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Clear", &UVRM4U_AnimSubsystem::execClear },
			{ "GetBoneByIndex", &UVRM4U_AnimSubsystem::execGetBoneByIndex },
			{ "GetBoneByPort", &UVRM4U_AnimSubsystem::execGetBoneByPort },
			{ "GetRawdataByIndex", &UVRM4U_AnimSubsystem::execGetRawdataByIndex },
			{ "GetRawdataByPort", &UVRM4U_AnimSubsystem::execGetRawdataByPort },
			{ "SetBoneTransform", &UVRM4U_AnimSubsystem::execSetBoneTransform },
			{ "SetRawData", &UVRM4U_AnimSubsystem::execSetRawData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVRM4U_AnimSubsystem_Clear_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRM4U_AnimSubsystem_Clear_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VRM4U_AnimSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_Clear_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRM4U_AnimSubsystem, nullptr, "Clear", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRM4U_AnimSubsystem_Clear_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_AnimSubsystem_Clear_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRM4U_AnimSubsystem_Clear()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRM4U_AnimSubsystem_Clear_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex_Statics
	{
		struct VRM4U_AnimSubsystem_eventGetBoneByIndex_Parms
		{
			int32 index;
			TMap<FString,FTransform> trans;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_trans_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_trans_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_trans;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VRM4U_AnimSubsystem_eventGetBoneByIndex_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex_Statics::NewProp_trans_ValueProp = { "trans", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex_Statics::NewProp_trans_Key_KeyProp = { "trans_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex_Statics::NewProp_trans = { "trans", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VRM4U_AnimSubsystem_eventGetBoneByIndex_Parms, trans), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex_Statics::NewProp_trans_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex_Statics::NewProp_trans_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex_Statics::NewProp_trans,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VRM4U_AnimSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRM4U_AnimSubsystem, nullptr, "GetBoneByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex_Statics::VRM4U_AnimSubsystem_eventGetBoneByIndex_Parms), Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort_Statics
	{
		struct VRM4U_AnimSubsystem_eventGetBoneByPort_Parms
		{
			int32 port;
			TMap<FString,FTransform> trans;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_port;
		static const UECodeGen_Private::FStructPropertyParams NewProp_trans_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_trans_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_trans;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VRM4U_AnimSubsystem_eventGetBoneByPort_Parms, port), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort_Statics::NewProp_trans_ValueProp = { "trans", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort_Statics::NewProp_trans_Key_KeyProp = { "trans_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort_Statics::NewProp_trans = { "trans", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VRM4U_AnimSubsystem_eventGetBoneByPort_Parms, trans), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort_Statics::NewProp_port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort_Statics::NewProp_trans_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort_Statics::NewProp_trans_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort_Statics::NewProp_trans,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VRM4U_AnimSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRM4U_AnimSubsystem, nullptr, "GetBoneByPort", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort_Statics::VRM4U_AnimSubsystem_eventGetBoneByPort_Parms), Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex_Statics
	{
		struct VRM4U_AnimSubsystem_eventGetRawdataByIndex_Parms
		{
			int32 index;
			TMap<FString,FTransform> trans;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_index;
		static const UECodeGen_Private::FStructPropertyParams NewProp_trans_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_trans_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_trans;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VRM4U_AnimSubsystem_eventGetRawdataByIndex_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex_Statics::NewProp_trans_ValueProp = { "trans", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex_Statics::NewProp_trans_Key_KeyProp = { "trans_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex_Statics::NewProp_trans = { "trans", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VRM4U_AnimSubsystem_eventGetRawdataByIndex_Parms, trans), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex_Statics::NewProp_index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex_Statics::NewProp_trans_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex_Statics::NewProp_trans_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex_Statics::NewProp_trans,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VRM4U_AnimSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRM4U_AnimSubsystem, nullptr, "GetRawdataByIndex", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex_Statics::VRM4U_AnimSubsystem_eventGetRawdataByIndex_Parms), Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort_Statics
	{
		struct VRM4U_AnimSubsystem_eventGetRawdataByPort_Parms
		{
			int32 port;
			TMap<FString,FTransform> trans;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_port;
		static const UECodeGen_Private::FStructPropertyParams NewProp_trans_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_trans_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_trans;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VRM4U_AnimSubsystem_eventGetRawdataByPort_Parms, port), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort_Statics::NewProp_trans_ValueProp = { "trans", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort_Statics::NewProp_trans_Key_KeyProp = { "trans_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort_Statics::NewProp_trans = { "trans", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VRM4U_AnimSubsystem_eventGetRawdataByPort_Parms, trans), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort_Statics::NewProp_port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort_Statics::NewProp_trans_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort_Statics::NewProp_trans_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort_Statics::NewProp_trans,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VRM4U_AnimSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRM4U_AnimSubsystem, nullptr, "GetRawdataByPort", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort_Statics::VRM4U_AnimSubsystem_eventGetRawdataByPort_Parms), Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform_Statics
	{
		struct VRM4U_AnimSubsystem_eventSetBoneTransform_Parms
		{
			int32 port;
			TMap<FString,FTransform> trans;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_port;
		static const UECodeGen_Private::FStructPropertyParams NewProp_trans_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_trans_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_trans_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_trans;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VRM4U_AnimSubsystem_eventSetBoneTransform_Parms, port), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform_Statics::NewProp_trans_ValueProp = { "trans", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform_Statics::NewProp_trans_Key_KeyProp = { "trans_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform_Statics::NewProp_trans_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform_Statics::NewProp_trans = { "trans", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VRM4U_AnimSubsystem_eventSetBoneTransform_Parms, trans), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform_Statics::NewProp_trans_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform_Statics::NewProp_trans_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform_Statics::NewProp_port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform_Statics::NewProp_trans_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform_Statics::NewProp_trans_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform_Statics::NewProp_trans,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VRM4U_AnimSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRM4U_AnimSubsystem, nullptr, "SetBoneTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform_Statics::VRM4U_AnimSubsystem_eventSetBoneTransform_Parms), Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData_Statics
	{
		struct VRM4U_AnimSubsystem_eventSetRawData_Parms
		{
			int32 port;
			TMap<FString,FTransform> trans;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_port;
		static const UECodeGen_Private::FStructPropertyParams NewProp_trans_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_trans_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_trans_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_trans;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData_Statics::NewProp_port = { "port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VRM4U_AnimSubsystem_eventSetRawData_Parms, port), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData_Statics::NewProp_trans_ValueProp = { "trans", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData_Statics::NewProp_trans_Key_KeyProp = { "trans_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData_Statics::NewProp_trans_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData_Statics::NewProp_trans = { "trans", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VRM4U_AnimSubsystem_eventSetRawData_Parms, trans), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData_Statics::NewProp_trans_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData_Statics::NewProp_trans_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData_Statics::NewProp_port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData_Statics::NewProp_trans_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData_Statics::NewProp_trans_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData_Statics::NewProp_trans,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VRM4U_AnimSubsystem.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVRM4U_AnimSubsystem, nullptr, "SetRawData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData_Statics::VRM4U_AnimSubsystem_eventSetRawData_Parms), Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVRM4U_AnimSubsystem);
	UClass* Z_Construct_UClass_UVRM4U_AnimSubsystem_NoRegister()
	{
		return UVRM4U_AnimSubsystem::StaticClass();
	}
	struct Z_Construct_UClass_UVRM4U_AnimSubsystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVRM4U_AnimSubsystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEngineSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVRM4U_AnimSubsystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVRM4U_AnimSubsystem_Clear, "Clear" }, // 101539941
		{ &Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByIndex, "GetBoneByIndex" }, // 937140568
		{ &Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetBoneByPort, "GetBoneByPort" }, // 3850165012
		{ &Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByIndex, "GetRawdataByIndex" }, // 3106592016
		{ &Z_Construct_UFunction_UVRM4U_AnimSubsystem_GetRawdataByPort, "GetRawdataByPort" }, // 3862008607
		{ &Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetBoneTransform, "SetBoneTransform" }, // 667291188
		{ &Z_Construct_UFunction_UVRM4U_AnimSubsystem_SetRawData, "SetRawData" }, // 2817933806
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVRM4U_AnimSubsystem_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VRM4U_AnimSubsystem.h" },
		{ "ModuleRelativePath", "Public/VRM4U_AnimSubsystem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVRM4U_AnimSubsystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVRM4U_AnimSubsystem>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVRM4U_AnimSubsystem_Statics::ClassParams = {
		&UVRM4U_AnimSubsystem::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVRM4U_AnimSubsystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVRM4U_AnimSubsystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVRM4U_AnimSubsystem()
	{
		if (!Z_Registration_Info_UClass_UVRM4U_AnimSubsystem.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVRM4U_AnimSubsystem.OuterSingleton, Z_Construct_UClass_UVRM4U_AnimSubsystem_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVRM4U_AnimSubsystem.OuterSingleton;
	}
	template<> VRM4U_API UClass* StaticClass<UVRM4U_AnimSubsystem>()
	{
		return UVRM4U_AnimSubsystem::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVRM4U_AnimSubsystem);
	UVRM4U_AnimSubsystem::~UVRM4U_AnimSubsystem() {}
	struct Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h_Statics::ScriptStructInfo[] = {
		{ FVrmTransformData::StaticStruct, Z_Construct_UScriptStruct_FVrmTransformData_Statics::NewStructOps, TEXT("VrmTransformData"), &Z_Registration_Info_UScriptStruct_VrmTransformData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVrmTransformData), 3856307737U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVRM4U_AnimSubsystem, UVRM4U_AnimSubsystem::StaticClass, TEXT("UVRM4U_AnimSubsystem"), &Z_Registration_Info_UClass_UVRM4U_AnimSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVRM4U_AnimSubsystem), 575424916U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h_2544887172(TEXT("/Script/VRM4U"),
		Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
