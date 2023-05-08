// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/AnimNode_VrmModifyHumanoidBone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_VrmModifyHumanoidBone() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	VRM4U_API UClass* Z_Construct_UClass_UVrmAssetListObject_NoRegister();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMBoneTransform();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRMBoneTransform;
class UScriptStruct* FVRMBoneTransform::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRMBoneTransform.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRMBoneTransform.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMBoneTransform, Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMBoneTransform"));
	}
	return Z_Registration_Info_UScriptStruct_VRMBoneTransform.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMBoneTransform>()
{
	return FVRMBoneTransform::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVRMBoneTransform_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Transform_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Transform_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Transform;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableRotation_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableRotation_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bEnableRotation;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableTranslation_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableTranslation_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bEnableTranslation;
		static const UECodeGen_Private::FNamePropertyParams NewProp_VRMHumanoidBoneName_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VRMHumanoidBoneName_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VRMHumanoidBoneName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyHumanoidBone.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMBoneTransform>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_Transform_Inner = { "Transform", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_Transform_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyHumanoidBone.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_Transform = { "Transform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRMBoneTransform, Transform), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_Transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_Transform_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_bEnableRotation_Inner = { "bEnableRotation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_bEnableRotation_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyHumanoidBone.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_bEnableRotation = { "bEnableRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRMBoneTransform, bEnableRotation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_bEnableRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_bEnableRotation_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_bEnableTranslation_Inner = { "bEnableTranslation", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_bEnableTranslation_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyHumanoidBone.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_bEnableTranslation = { "bEnableTranslation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRMBoneTransform, bEnableTranslation), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_bEnableTranslation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_bEnableTranslation_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_VRMHumanoidBoneName_Inner = { "VRMHumanoidBoneName", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_VRMHumanoidBoneName_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyHumanoidBone.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_VRMHumanoidBoneName = { "VRMHumanoidBoneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRMBoneTransform, VRMHumanoidBoneName), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_VRMHumanoidBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_VRMHumanoidBoneName_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_Transform_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_Transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_bEnableRotation_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_bEnableRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_bEnableTranslation_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_bEnableTranslation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_VRMHumanoidBoneName_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewProp_VRMHumanoidBoneName,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VRMBoneTransform",
		sizeof(FVRMBoneTransform),
		alignof(FVRMBoneTransform),
		Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRMBoneTransform()
	{
		if (!Z_Registration_Info_UScriptStruct_VRMBoneTransform.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRMBoneTransform.InnerSingleton, Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VRMBoneTransform.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_VrmModifyHumanoidBone>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_VrmModifyHumanoidBone cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyHumanoidBone;
class UScriptStruct* FAnimNode_VrmModifyHumanoidBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyHumanoidBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyHumanoidBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone, Z_Construct_UPackage__Script_VRM4U(), TEXT("AnimNode_VrmModifyHumanoidBone"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyHumanoidBone.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FAnimNode_VrmModifyHumanoidBone>()
{
	return FAnimNode_VrmModifyHumanoidBone::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VrmAssetList_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VrmAssetList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HumanoidBoneTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HumanoidBoneTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ExtBoneTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ExtBoneTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\x09Simple controller that replaces or adds to the translation/rotation of a single bone.\n*/" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyHumanoidBone.h" },
		{ "ToolTip", "Simple controller that replaces or adds to the translation/rotation of a single bone." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_VrmModifyHumanoidBone>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::NewProp_VrmAssetList_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "/** Name of bone to control. This is the main bone chain to modify from. **///UPROPERTY(EditAnywhere, Category=SkeletalControl) \n//FBoneReference BoneToModify;\n" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyHumanoidBone.h" },
		{ "ToolTip", "Name of bone to control. This is the main bone chain to modify from. *//UPROPERTY(EditAnywhere, Category=SkeletalControl)\n//FBoneReference BoneToModify;" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::NewProp_VrmAssetList = { "VrmAssetList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_VrmModifyHumanoidBone, VrmAssetList), Z_Construct_UClass_UVrmAssetListObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::NewProp_VrmAssetList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::NewProp_VrmAssetList_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::NewProp_HumanoidBoneTransform_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyHumanoidBone.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::NewProp_HumanoidBoneTransform = { "HumanoidBoneTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_VrmModifyHumanoidBone, HumanoidBoneTransform), Z_Construct_UScriptStruct_FVRMBoneTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::NewProp_HumanoidBoneTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::NewProp_HumanoidBoneTransform_MetaData)) }; // 361635429
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::NewProp_ExtBoneTransform_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyHumanoidBone.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::NewProp_ExtBoneTransform = { "ExtBoneTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_VrmModifyHumanoidBone, ExtBoneTransform), Z_Construct_UScriptStruct_FVRMBoneTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::NewProp_ExtBoneTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::NewProp_ExtBoneTransform_MetaData)) }; // 361635429
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::NewProp_VrmAssetList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::NewProp_HumanoidBoneTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::NewProp_ExtBoneTransform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_VrmModifyHumanoidBone",
		sizeof(FAnimNode_VrmModifyHumanoidBone),
		alignof(FAnimNode_VrmModifyHumanoidBone),
		Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyHumanoidBone.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyHumanoidBone.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyHumanoidBone.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmModifyHumanoidBone_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmModifyHumanoidBone_h_Statics::ScriptStructInfo[] = {
		{ FVRMBoneTransform::StaticStruct, Z_Construct_UScriptStruct_FVRMBoneTransform_Statics::NewStructOps, TEXT("VRMBoneTransform"), &Z_Registration_Info_UScriptStruct_VRMBoneTransform, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRMBoneTransform), 361635429U) },
		{ FAnimNode_VrmModifyHumanoidBone::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone_Statics::NewStructOps, TEXT("AnimNode_VrmModifyHumanoidBone"), &Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyHumanoidBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_VrmModifyHumanoidBone), 798272958U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmModifyHumanoidBone_h_170963803(TEXT("/Script/VRM4U"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmModifyHumanoidBone_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmModifyHumanoidBone_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
