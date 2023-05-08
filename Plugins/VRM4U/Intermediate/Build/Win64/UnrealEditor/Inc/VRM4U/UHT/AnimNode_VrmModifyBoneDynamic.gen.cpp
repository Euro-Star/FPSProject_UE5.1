// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/AnimNode_VrmModifyBoneDynamic.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_VrmModifyBoneDynamic() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UEnum* Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBoneControlSpace();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_VrmModifyBoneDynamic>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_VrmModifyBoneDynamic cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyBoneDynamic;
class UScriptStruct* FAnimNode_VrmModifyBoneDynamic::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyBoneDynamic.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyBoneDynamic.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic, Z_Construct_UPackage__Script_VRM4U(), TEXT("AnimNode_VrmModifyBoneDynamic"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyBoneDynamic.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FAnimNode_VrmModifyBoneDynamic>()
{
	return FAnimNode_VrmModifyBoneDynamic::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneNameToModify_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNameToModify;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Translation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Translation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslationMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TranslationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleMode_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScaleMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslationSpace_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_TranslationSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpace_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_RotationSpace;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ScaleSpace_MetaData[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_ScaleSpace;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\x09Simple controller that replaces or adds to the translation/rotation of a single bone.\n*/" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneDynamic.h" },
		{ "ToolTip", "Simple controller that replaces or adds to the translation/rotation of a single bone." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_VrmModifyBoneDynamic>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_BoneNameToModify_MetaData[] = {
		{ "Category", "SkeletalControl" },
		{ "Comment", "/** Name of bone to control. This is the main bone chain to modify from. **///UPROPERTY(EditAnywhere, Category=SkeletalControl) \n//FBoneReference BoneToModify;\n" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneDynamic.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "Name of bone to control. This is the main bone chain to modify from. *//UPROPERTY(EditAnywhere, Category=SkeletalControl)\n//FBoneReference BoneToModify;" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_BoneNameToModify = { "BoneNameToModify", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_VrmModifyBoneDynamic, BoneNameToModify), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_BoneNameToModify_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_BoneNameToModify_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_Translation_MetaData[] = {
		{ "Category", "Translation" },
		{ "Comment", "/** New translation of bone to apply. */" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneDynamic.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "New translation of bone to apply." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_Translation = { "Translation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_VrmModifyBoneDynamic, Translation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_Translation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_Translation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** New rotation of bone to apply. */" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneDynamic.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "New rotation of bone to apply." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_VrmModifyBoneDynamic, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "Scale" },
		{ "Comment", "/** New Scale of bone to apply. This is only worldspace. */" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneDynamic.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "New Scale of bone to apply. This is only worldspace." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_VrmModifyBoneDynamic, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_TranslationMode_MetaData[] = {
		{ "Category", "Translation" },
		{ "Comment", "/** Whether and how to modify the translation of this bone. */" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneDynamic.h" },
		{ "ToolTip", "Whether and how to modify the translation of this bone." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_TranslationMode = { "TranslationMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_VrmModifyBoneDynamic, TranslationMode), Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_TranslationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_TranslationMode_MetaData)) }; // 3534746531
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_RotationMode_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** Whether and how to modify the translation of this bone. */" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneDynamic.h" },
		{ "ToolTip", "Whether and how to modify the translation of this bone." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_RotationMode = { "RotationMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_VrmModifyBoneDynamic, RotationMode), Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_RotationMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_RotationMode_MetaData)) }; // 3534746531
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_ScaleMode_MetaData[] = {
		{ "Category", "Scale" },
		{ "Comment", "/** Whether and how to modify the translation of this bone. */" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneDynamic.h" },
		{ "ToolTip", "Whether and how to modify the translation of this bone." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_ScaleMode = { "ScaleMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_VrmModifyBoneDynamic, ScaleMode), Z_Construct_UEnum_AnimGraphRuntime_EBoneModificationMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_ScaleMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_ScaleMode_MetaData)) }; // 3534746531
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_TranslationSpace_MetaData[] = {
		{ "Category", "Translation" },
		{ "Comment", "/** Reference frame to apply Translation in. */" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneDynamic.h" },
		{ "ToolTip", "Reference frame to apply Translation in." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_TranslationSpace = { "TranslationSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_VrmModifyBoneDynamic, TranslationSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_TranslationSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_TranslationSpace_MetaData)) }; // 793580878
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_RotationSpace_MetaData[] = {
		{ "Category", "Rotation" },
		{ "Comment", "/** Reference frame to apply Rotation in. */" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneDynamic.h" },
		{ "ToolTip", "Reference frame to apply Rotation in." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_RotationSpace = { "RotationSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_VrmModifyBoneDynamic, RotationSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_RotationSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_RotationSpace_MetaData)) }; // 793580878
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_ScaleSpace_MetaData[] = {
		{ "Category", "Scale" },
		{ "Comment", "/** Reference frame to apply Scale in. */" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneDynamic.h" },
		{ "ToolTip", "Reference frame to apply Scale in." },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_ScaleSpace = { "ScaleSpace", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_VrmModifyBoneDynamic, ScaleSpace), Z_Construct_UEnum_Engine_EBoneControlSpace, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_ScaleSpace_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_ScaleSpace_MetaData)) }; // 793580878
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_BoneNameToModify,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_Translation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_Rotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_TranslationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_RotationMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_ScaleMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_TranslationSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_RotationSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewProp_ScaleSpace,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_VrmModifyBoneDynamic",
		sizeof(FAnimNode_VrmModifyBoneDynamic),
		alignof(FAnimNode_VrmModifyBoneDynamic),
		Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyBoneDynamic.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyBoneDynamic.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyBoneDynamic.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmModifyBoneDynamic_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmModifyBoneDynamic_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_VrmModifyBoneDynamic::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneDynamic_Statics::NewStructOps, TEXT("AnimNode_VrmModifyBoneDynamic"), &Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyBoneDynamic, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_VrmModifyBoneDynamic), 2455415827U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmModifyBoneDynamic_h_2488187093(TEXT("/Script/VRM4U"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmModifyBoneDynamic_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmModifyBoneDynamic_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
