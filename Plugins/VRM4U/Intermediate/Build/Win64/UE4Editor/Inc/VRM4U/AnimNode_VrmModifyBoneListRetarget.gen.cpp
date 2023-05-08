// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/AnimNode_VrmModifyBoneListRetarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_VrmModifyBoneListRetarget() {}
// Cross Module References
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	VRM4U_API UClass* Z_Construct_UClass_UVrmMetaObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_VrmModifyBoneListRetarget>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_VrmModifyBoneListRetarget cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

class UScriptStruct* FAnimNode_VrmModifyBoneListRetarget::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VRM4U_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget, Z_Construct_UPackage__Script_VRM4U(), TEXT("AnimNode_VrmModifyBoneListRetarget"), sizeof(FAnimNode_VrmModifyBoneListRetarget), Get_Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Hash());
	}
	return Singleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FAnimNode_VrmModifyBoneListRetarget>()
{
	return FAnimNode_VrmModifyBoneListRetarget::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget(FAnimNode_VrmModifyBoneListRetarget::StaticStruct, TEXT("/Script/VRM4U"), TEXT("AnimNode_VrmModifyBoneListRetarget"), false, nullptr, nullptr);
static struct FScriptStruct_VRM4U_StaticRegisterNativesFAnimNode_VrmModifyBoneListRetarget
{
	FScriptStruct_VRM4U_StaticRegisterNativesFAnimNode_VrmModifyBoneListRetarget()
	{
		UScriptStruct::DeferCppStructOps<FAnimNode_VrmModifyBoneListRetarget>(FName(TEXT("AnimNode_VrmModifyBoneListRetarget")));
	}
} ScriptStruct_VRM4U_StaticRegisterNativesFAnimNode_VrmModifyBoneListRetarget;
	struct Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VrmMetaObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VrmMetaObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneTrans_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BoneTrans_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneTrans_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BoneTrans;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseRemoteCenterPos_MetaData[];
#endif
		static void NewProp_bUseRemoteCenterPos_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseRemoteCenterPos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModelRelativeScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ModelRelativeScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::Struct_MetaDataParams[] = {
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_VrmMetaObject_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneListRetarget.h" },
		{ "NativeConst", "" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_VrmMetaObject = { "VrmMetaObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_VrmModifyBoneListRetarget, VrmMetaObject), Z_Construct_UClass_UVrmMetaObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_VrmMetaObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_VrmMetaObject_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_BoneTrans_ValueProp = { "BoneTrans", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_BoneTrans_Key_KeyProp = { "BoneTrans_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_BoneTrans_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneListRetarget.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_BoneTrans = { "BoneTrans", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_VrmModifyBoneListRetarget, BoneTrans), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_BoneTrans_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_BoneTrans_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_bUseRemoteCenterPos_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneListRetarget.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_bUseRemoteCenterPos_SetBit(void* Obj)
	{
		((FAnimNode_VrmModifyBoneListRetarget*)Obj)->bUseRemoteCenterPos = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_bUseRemoteCenterPos = { "bUseRemoteCenterPos", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_VrmModifyBoneListRetarget), &Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_bUseRemoteCenterPos_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_bUseRemoteCenterPos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_bUseRemoteCenterPos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_ModelRelativeScale_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneListRetarget.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_ModelRelativeScale = { "ModelRelativeScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_VrmModifyBoneListRetarget, ModelRelativeScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_ModelRelativeScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_ModelRelativeScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_VrmMetaObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_BoneTrans_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_BoneTrans_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_BoneTrans,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_bUseRemoteCenterPos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::NewProp_ModelRelativeScale,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::ReturnStructParams = {
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
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRM4U();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_VrmModifyBoneListRetarget"), sizeof(FAnimNode_VrmModifyBoneListRetarget), Get_Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget_Hash() { return 1104784778U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
