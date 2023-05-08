// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/AnimNode_VrmQuestHandBone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_VrmQuestHandBone() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	VRM4U_API UClass* Z_Construct_UClass_UVrmMetaObject_NoRegister();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMQuestHandBone();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRMQuestHandBone;
class UScriptStruct* FVRMQuestHandBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRMQuestHandBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRMQuestHandBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMQuestHandBone, Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMQuestHandBone"));
	}
	return Z_Registration_Info_UScriptStruct_VRMQuestHandBone.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMQuestHandBone>()
{
	return FVRMQuestHandBone::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_HandLeft_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandLeft_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HandLeft;
		static const UECodeGen_Private::FStructPropertyParams NewProp_HandRight_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandRight_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_HandRight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmQuestHandBone.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMQuestHandBone>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::NewProp_HandLeft_Inner = { "HandLeft", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::NewProp_HandLeft_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmQuestHandBone.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::NewProp_HandLeft = { "HandLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRMQuestHandBone, HandLeft), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::NewProp_HandLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::NewProp_HandLeft_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::NewProp_HandRight_Inner = { "HandRight", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::NewProp_HandRight_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmQuestHandBone.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::NewProp_HandRight = { "HandRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRMQuestHandBone, HandRight), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::NewProp_HandRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::NewProp_HandRight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::NewProp_HandLeft_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::NewProp_HandLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::NewProp_HandRight_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::NewProp_HandRight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VRMQuestHandBone",
		sizeof(FVRMQuestHandBone),
		alignof(FVRMQuestHandBone),
		Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRMQuestHandBone()
	{
		if (!Z_Registration_Info_UScriptStruct_VRMQuestHandBone.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRMQuestHandBone.InnerSingleton, Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VRMQuestHandBone.InnerSingleton;
	}

static_assert(std::is_polymorphic<FAnimNode_VrmQuestHandBone>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_VrmQuestHandBone cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_VrmQuestHandBone;
class UScriptStruct* FAnimNode_VrmQuestHandBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_VrmQuestHandBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_VrmQuestHandBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone, Z_Construct_UPackage__Script_VRM4U(), TEXT("AnimNode_VrmQuestHandBone"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_VrmQuestHandBone.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FAnimNode_VrmQuestHandBone>()
{
	return FAnimNode_VrmQuestHandBone::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VrmMetaObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VrmMetaObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HandTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HandReferenceTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HandReferenceTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\x09Simple controller that replaces or adds to the translation/rotation of a single bone.\n*/" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmQuestHandBone.h" },
		{ "ToolTip", "Simple controller that replaces or adds to the translation/rotation of a single bone." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_VrmQuestHandBone>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::NewProp_VrmMetaObject_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmQuestHandBone.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::NewProp_VrmMetaObject = { "VrmMetaObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_VrmQuestHandBone, VrmMetaObject), Z_Construct_UClass_UVrmMetaObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::NewProp_VrmMetaObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::NewProp_VrmMetaObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::NewProp_HandTransform_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "//UPROPERTY(EditAnywhere, Category = Rotation, meta = (PinHiddenByDefault))\n//TEnumAsByte<enum EBoneControlSpace> TransformSpace;\n" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmQuestHandBone.h" },
		{ "PinShownByDefault", "" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, Category = Rotation, meta = (PinHiddenByDefault))\nTEnumAsByte<enum EBoneControlSpace> TransformSpace;" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::NewProp_HandTransform = { "HandTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_VrmQuestHandBone, HandTransform), Z_Construct_UScriptStruct_FVRMQuestHandBone, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::NewProp_HandTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::NewProp_HandTransform_MetaData)) }; // 864809196
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::NewProp_HandReferenceTransform_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmQuestHandBone.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::NewProp_HandReferenceTransform = { "HandReferenceTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_VrmQuestHandBone, HandReferenceTransform), Z_Construct_UScriptStruct_FVRMQuestHandBone, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::NewProp_HandReferenceTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::NewProp_HandReferenceTransform_MetaData)) }; // 864809196
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::NewProp_VrmMetaObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::NewProp_HandTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::NewProp_HandReferenceTransform,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_VrmQuestHandBone",
		sizeof(FAnimNode_VrmQuestHandBone),
		alignof(FAnimNode_VrmQuestHandBone),
		Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_VrmQuestHandBone.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_VrmQuestHandBone.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_VrmQuestHandBone.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmQuestHandBone_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmQuestHandBone_h_Statics::ScriptStructInfo[] = {
		{ FVRMQuestHandBone::StaticStruct, Z_Construct_UScriptStruct_FVRMQuestHandBone_Statics::NewStructOps, TEXT("VRMQuestHandBone"), &Z_Registration_Info_UScriptStruct_VRMQuestHandBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRMQuestHandBone), 864809196U) },
		{ FAnimNode_VrmQuestHandBone::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_VrmQuestHandBone_Statics::NewStructOps, TEXT("AnimNode_VrmQuestHandBone"), &Z_Registration_Info_UScriptStruct_AnimNode_VrmQuestHandBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_VrmQuestHandBone), 4000006647U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmQuestHandBone_h_1678085577(TEXT("/Script/VRM4U"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmQuestHandBone_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmQuestHandBone_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
