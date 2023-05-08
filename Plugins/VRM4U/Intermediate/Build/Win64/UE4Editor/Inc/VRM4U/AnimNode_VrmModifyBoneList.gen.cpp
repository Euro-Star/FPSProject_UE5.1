// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/AnimNode_VrmModifyBoneList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_VrmModifyBoneList() {}
// Cross Module References
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_VrmModifyBoneList>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_VrmModifyBoneList cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

class UScriptStruct* FAnimNode_VrmModifyBoneList::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VRM4U_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList, Z_Construct_UPackage__Script_VRM4U(), TEXT("AnimNode_VrmModifyBoneList"), sizeof(FAnimNode_VrmModifyBoneList), Get_Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Hash());
	}
	return Singleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FAnimNode_VrmModifyBoneList>()
{
	return FAnimNode_VrmModifyBoneList::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_VrmModifyBoneList(FAnimNode_VrmModifyBoneList::StaticStruct, TEXT("/Script/VRM4U"), TEXT("AnimNode_VrmModifyBoneList"), false, nullptr, nullptr);
static struct FScriptStruct_VRM4U_StaticRegisterNativesFAnimNode_VrmModifyBoneList
{
	FScriptStruct_VRM4U_StaticRegisterNativesFAnimNode_VrmModifyBoneList()
	{
		UScriptStruct::DeferCppStructOps<FAnimNode_VrmModifyBoneList>(FName(TEXT("AnimNode_VrmModifyBoneList")));
	}
} ScriptStruct_VRM4U_StaticRegisterNativesFAnimNode_VrmModifyBoneList;
	struct Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BoneTrans_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BoneTrans_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneTrans_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_BoneTrans;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UseInputTransBoneList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseInputTransBoneList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UseInputTransBoneList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\x09Simple controller that replaces or adds to the translation/rotation of a single bone.\n*/" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneList.h" },
		{ "ToolTip", "Simple controller that replaces or adds to the translation/rotation of a single bone." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_VrmModifyBoneList>();
	}
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::NewProp_BoneTrans_ValueProp = { "BoneTrans", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::NewProp_BoneTrans_Key_KeyProp = { "BoneTrans_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::NewProp_BoneTrans_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneList.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::NewProp_BoneTrans = { "BoneTrans", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_VrmModifyBoneList, BoneTrans), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::NewProp_BoneTrans_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::NewProp_BoneTrans_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::NewProp_UseInputTransBoneList_Inner = { "UseInputTransBoneList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::NewProp_UseInputTransBoneList_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmModifyBoneList.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::NewProp_UseInputTransBoneList = { "UseInputTransBoneList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_VrmModifyBoneList, UseInputTransBoneList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::NewProp_UseInputTransBoneList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::NewProp_UseInputTransBoneList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::NewProp_BoneTrans_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::NewProp_BoneTrans_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::NewProp_BoneTrans,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::NewProp_UseInputTransBoneList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::NewProp_UseInputTransBoneList,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_VrmModifyBoneList",
		sizeof(FAnimNode_VrmModifyBoneList),
		alignof(FAnimNode_VrmModifyBoneList),
		Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRM4U();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_VrmModifyBoneList"), sizeof(FAnimNode_VrmModifyBoneList), Get_Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList_Hash() { return 1431899435U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
