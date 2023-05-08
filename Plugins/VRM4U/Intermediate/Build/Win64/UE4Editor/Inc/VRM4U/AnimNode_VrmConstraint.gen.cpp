// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/AnimNode_VrmConstraint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_VrmConstraint() {}
// Cross Module References
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmConstraint();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	VRM4U_API UClass* Z_Construct_UClass_UVrmMetaObject_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_VrmConstraint>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_VrmConstraint cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

class UScriptStruct* FAnimNode_VrmConstraint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VRM4U_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_VrmConstraint, Z_Construct_UPackage__Script_VRM4U(), TEXT("AnimNode_VrmConstraint"), sizeof(FAnimNode_VrmConstraint), Get_Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Hash());
	}
	return Singleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FAnimNode_VrmConstraint>()
{
	return FAnimNode_VrmConstraint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_VrmConstraint(FAnimNode_VrmConstraint::StaticStruct, TEXT("/Script/VRM4U"), TEXT("AnimNode_VrmConstraint"), false, nullptr, nullptr);
static struct FScriptStruct_VRM4U_StaticRegisterNativesFAnimNode_VrmConstraint
{
	FScriptStruct_VRM4U_StaticRegisterNativesFAnimNode_VrmConstraint()
	{
		UScriptStruct::DeferCppStructOps<FAnimNode_VrmConstraint>(FName(TEXT("AnimNode_VrmConstraint")));
	}
} ScriptStruct_VRM4U_StaticRegisterNativesFAnimNode_VrmConstraint;
	struct Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VrmMetaObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VrmMetaObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\x09Simple controller that replaces or adds to the translation/rotation of a single bone.\n*/" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmConstraint.h" },
		{ "ToolTip", "Simple controller that replaces or adds to the translation/rotation of a single bone." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_VrmConstraint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Statics::NewProp_VrmMetaObject_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmConstraint.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Statics::NewProp_VrmMetaObject = { "VrmMetaObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_VrmConstraint, VrmMetaObject), Z_Construct_UClass_UVrmMetaObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Statics::NewProp_VrmMetaObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Statics::NewProp_VrmMetaObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Statics::NewProp_VrmMetaObject,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_VrmConstraint",
		sizeof(FAnimNode_VrmConstraint),
		alignof(FAnimNode_VrmConstraint),
		Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmConstraint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRM4U();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_VrmConstraint"), sizeof(FAnimNode_VrmConstraint), Get_Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_VrmConstraint_Hash() { return 1051509405U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
