// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/AnimNode_VrmModifyBoneListRetarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_VrmModifyBoneListRetarget() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	VRM4U_API UClass* Z_Construct_UClass_UVrmMetaObject_NoRegister();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_VrmModifyBoneListRetarget>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_VrmModifyBoneListRetarget cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyBoneListRetarget;
class UScriptStruct* FAnimNode_VrmModifyBoneListRetarget::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyBoneListRetarget.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyBoneListRetarget.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget, Z_Construct_UPackage__Script_VRM4U(), TEXT("AnimNode_VrmModifyBoneListRetarget"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyBoneListRetarget.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FAnimNode_VrmModifyBoneListRetarget>()
{
	return FAnimNode_VrmModifyBoneListRetarget::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VrmMetaObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VrmMetaObject;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BoneTrans_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_BoneTrans_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneTrans_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_BoneTrans;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseRemoteCenterPos_MetaData[];
#endif
		static void NewProp_bUseRemoteCenterPos_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRemoteCenterPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModelRelativeScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ModelRelativeScale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\x09Simple controller that replaces or adds to the translation/rotation of a single bone.\n*/" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneListRetarget.h" },
		{ "ToolTip", "Simple controller that replaces or adds to the translation/rotation of a single bone." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_VrmModifyBoneListRetarget>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_VrmMetaObject_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneListRetarget.h" },
		{ "NativeConst", "" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_VrmMetaObject = { "VrmMetaObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_VrmModifyBoneListRetarget, VrmMetaObject), Z_Construct_UClass_UVrmMetaObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_VrmMetaObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_VrmMetaObject_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_BoneTrans_ValueProp = { "BoneTrans", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_BoneTrans_Key_KeyProp = { "BoneTrans_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_BoneTrans_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneListRetarget.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_BoneTrans = { "BoneTrans", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_VrmModifyBoneListRetarget, BoneTrans), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_BoneTrans_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_BoneTrans_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_bUseRemoteCenterPos_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneListRetarget.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_bUseRemoteCenterPos_SetBit(void* Obj)
	{
		((FAnimNode_VrmModifyBoneListRetarget*)Obj)->bUseRemoteCenterPos = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_bUseRemoteCenterPos = { "bUseRemoteCenterPos", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_VrmModifyBoneListRetarget), &Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_bUseRemoteCenterPos_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_bUseRemoteCenterPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_bUseRemoteCenterPos_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_ModelRelativeScale_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneListRetarget.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_ModelRelativeScale = { "ModelRelativeScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_VrmModifyBoneListRetarget, ModelRelativeScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_ModelRelativeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_ModelRelativeScale_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_VrmMetaObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_BoneTrans_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_BoneTrans_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_BoneTrans,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_bUseRemoteCenterPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_ModelRelativeScale,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_VrmModifyBoneListRetarget",
		sizeof(FAnimNode_VrmModifyBoneListRetarget),
		alignof(FAnimNode_VrmModifyBoneListRetarget),
		Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyBoneListRetarget.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyBoneListRetarget.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyBoneListRetarget.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmModifyBoneListRetarget_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmModifyBoneListRetarget_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_VrmModifyBoneListRetarget::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewStructOps, TEXT("AnimNode_VrmModifyBoneListRetarget"), &Z_Registration_Info_UScriptStruct_AnimNode_VrmModifyBoneListRetarget, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_VrmModifyBoneListRetarget), 3506854231U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmModifyBoneListRetarget_h_1677255869(TEXT("/Script/VRM4U"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmModifyBoneListRetarget_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmModifyBoneListRetarget_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
