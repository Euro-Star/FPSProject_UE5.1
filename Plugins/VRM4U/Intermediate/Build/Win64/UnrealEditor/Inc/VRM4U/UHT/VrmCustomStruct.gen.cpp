// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmCustomStruct.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmCustomStruct() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequenceBase_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRMRetargetSrcAnimSequence;
class UScriptStruct* FVRMRetargetSrcAnimSequence::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRMRetargetSrcAnimSequence.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRMRetargetSrcAnimSequence.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence, Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMRetargetSrcAnimSequence"));
	}
	return Z_Registration_Info_UScriptStruct_VRMRetargetSrcAnimSequence.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMRetargetSrcAnimSequence>()
{
	return FVRMRetargetSrcAnimSequence::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AnimSequence_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimSequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VrmCustomStruct.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMRetargetSrcAnimSequence>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence_Statics::NewProp_AnimSequence_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmCustomStruct.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence_Statics::NewProp_AnimSequence = { "AnimSequence", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRMRetargetSrcAnimSequence, AnimSequence), Z_Construct_UClass_UAnimSequenceBase_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence_Statics::NewProp_AnimSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence_Statics::NewProp_AnimSequence_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence_Statics::NewProp_AnimSequence,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VRMRetargetSrcAnimSequence",
		sizeof(FVRMRetargetSrcAnimSequence),
		alignof(FVRMRetargetSrcAnimSequence),
		Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence()
	{
		if (!Z_Registration_Info_UScriptStruct_VRMRetargetSrcAnimSequence.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRMRetargetSrcAnimSequence.InnerSingleton, Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VRMRetargetSrcAnimSequence.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmCustomStruct_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmCustomStruct_h_Statics::ScriptStructInfo[] = {
		{ FVRMRetargetSrcAnimSequence::StaticStruct, Z_Construct_UScriptStruct_FVRMRetargetSrcAnimSequence_Statics::NewStructOps, TEXT("VRMRetargetSrcAnimSequence"), &Z_Registration_Info_UScriptStruct_VRMRetargetSrcAnimSequence, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRMRetargetSrcAnimSequence), 2301822126U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmCustomStruct_h_923835214(TEXT("/Script/VRM4U"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmCustomStruct_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmCustomStruct_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
