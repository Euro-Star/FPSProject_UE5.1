// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/AnimNode_VrmCopyHandBone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_VrmCopyHandBone() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	VRM4U_API UClass* Z_Construct_UClass_UVrmMetaObject_NoRegister();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmCopyHandBone();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_VrmCopyHandBone>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_VrmCopyHandBone cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_VrmCopyHandBone;
class UScriptStruct* FAnimNode_VrmCopyHandBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_VrmCopyHandBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_VrmCopyHandBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_VrmCopyHandBone, Z_Construct_UPackage__Script_VRM4U(), TEXT("AnimNode_VrmCopyHandBone"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_VrmCopyHandBone.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FAnimNode_VrmCopyHandBone>()
{
	return FAnimNode_VrmCopyHandBone::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_VrmCopyHandBone_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponentLeft_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponentLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponentRight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponentRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VrmMetaObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VrmMetaObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmCopyHandBone_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\x09Simple controller that replaces or adds to the translation/rotation of a single bone.\n*/" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmCopyHandBone.h" },
		{ "ToolTip", "Simple controller that replaces or adds to the translation/rotation of a single bone." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_VrmCopyHandBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_VrmCopyHandBone>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmCopyHandBone_Statics::NewProp_SkeletalMeshComponentLeft_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmCopyHandBone.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmCopyHandBone_Statics::NewProp_SkeletalMeshComponentLeft = { "SkeletalMeshComponentLeft", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_VrmCopyHandBone, SkeletalMeshComponentLeft), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmCopyHandBone_Statics::NewProp_SkeletalMeshComponentLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmCopyHandBone_Statics::NewProp_SkeletalMeshComponentLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmCopyHandBone_Statics::NewProp_SkeletalMeshComponentRight_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmCopyHandBone.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmCopyHandBone_Statics::NewProp_SkeletalMeshComponentRight = { "SkeletalMeshComponentRight", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_VrmCopyHandBone, SkeletalMeshComponentRight), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmCopyHandBone_Statics::NewProp_SkeletalMeshComponentRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmCopyHandBone_Statics::NewProp_SkeletalMeshComponentRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmCopyHandBone_Statics::NewProp_VrmMetaObject_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmCopyHandBone.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmCopyHandBone_Statics::NewProp_VrmMetaObject = { "VrmMetaObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_VrmCopyHandBone, VrmMetaObject), Z_Construct_UClass_UVrmMetaObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmCopyHandBone_Statics::NewProp_VrmMetaObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmCopyHandBone_Statics::NewProp_VrmMetaObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_VrmCopyHandBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmCopyHandBone_Statics::NewProp_SkeletalMeshComponentLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmCopyHandBone_Statics::NewProp_SkeletalMeshComponentRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmCopyHandBone_Statics::NewProp_VrmMetaObject,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_VrmCopyHandBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_VrmCopyHandBone",
		sizeof(FAnimNode_VrmCopyHandBone),
		alignof(FAnimNode_VrmCopyHandBone),
		Z_Construct_UScriptStruct_FAnimNode_VrmCopyHandBone_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmCopyHandBone_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmCopyHandBone_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmCopyHandBone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmCopyHandBone()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_VrmCopyHandBone.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_VrmCopyHandBone.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_VrmCopyHandBone_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_VrmCopyHandBone.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmCopyHandBone_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmCopyHandBone_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_VrmCopyHandBone::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_VrmCopyHandBone_Statics::NewStructOps, TEXT("AnimNode_VrmCopyHandBone"), &Z_Registration_Info_UScriptStruct_AnimNode_VrmCopyHandBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_VrmCopyHandBone), 638806444U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmCopyHandBone_h_629183293(TEXT("/Script/VRM4U"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmCopyHandBone_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmCopyHandBone_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
