// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/AnimNode_VrmRetargetFromMannequin.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_VrmRetargetFromMannequin() {}
// Cross Module References
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	VRM4U_API UClass* Z_Construct_UClass_UVrmMetaObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_VrmRetargetFromMannequin>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_VrmRetargetFromMannequin cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

class UScriptStruct* FAnimNode_VrmRetargetFromMannequin::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VRM4U_API uint32 Get_Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin, Z_Construct_UPackage__Script_VRM4U(), TEXT("AnimNode_VrmRetargetFromMannequin"), sizeof(FAnimNode_VrmRetargetFromMannequin), Get_Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Hash());
	}
	return Singleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FAnimNode_VrmRetargetFromMannequin>()
{
	return FAnimNode_VrmRetargetFromMannequin::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin(FAnimNode_VrmRetargetFromMannequin::StaticStruct, TEXT("/Script/VRM4U"), TEXT("AnimNode_VrmRetargetFromMannequin"), false, nullptr, nullptr);
static struct FScriptStruct_VRM4U_StaticRegisterNativesFAnimNode_VrmRetargetFromMannequin
{
	FScriptStruct_VRM4U_StaticRegisterNativesFAnimNode_VrmRetargetFromMannequin()
	{
		UScriptStruct::DeferCppStructOps<FAnimNode_VrmRetargetFromMannequin>(FName(TEXT("AnimNode_VrmRetargetFromMannequin")));
	}
} ScriptStruct_VRM4U_StaticRegisterNativesFAnimNode_VrmRetargetFromMannequin;
	struct Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseAttachedParent_MetaData[];
#endif
		static void NewProp_bUseAttachedParent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAttachedParent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_srcMannequinMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_srcMannequinMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VrmMetaObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VrmMetaObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoreCenterLocation_MetaData[];
#endif
		static void NewProp_bIgnoreCenterLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoreCenterLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterLocationScaleByHeightScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CenterLocationScaleByHeightScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CenterLocationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CenterLocationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MannequinVrmMetaObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MannequinVrmMetaObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_srcSkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_srcSkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dstSkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_dstSkeletalMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\x09Simple controller that replaces or adds to the translation/rotation of a single bone.\n*/" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmRetargetFromMannequin.h" },
		{ "ToolTip", "Simple controller that replaces or adds to the translation/rotation of a single bone." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_VrmRetargetFromMannequin>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_bUseAttachedParent_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "/* If SourceMeshComponent is not valid, and if this is true, it will look for attached parent as a source */" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmRetargetFromMannequin.h" },
		{ "NeverAsPin", "" },
		{ "ToolTip", "If SourceMeshComponent is not valid, and if this is true, it will look for attached parent as a source" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_bUseAttachedParent_SetBit(void* Obj)
	{
		((FAnimNode_VrmRetargetFromMannequin*)Obj)->bUseAttachedParent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_bUseAttachedParent = { "bUseAttachedParent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_VrmRetargetFromMannequin), &Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_bUseAttachedParent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_bUseAttachedParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_bUseAttachedParent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_srcMannequinMesh_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmRetargetFromMannequin.h" },
		{ "PinShownByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_srcMannequinMesh = { "srcMannequinMesh", nullptr, (EPropertyFlags)0x001400000008000d, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_VrmRetargetFromMannequin, srcMannequinMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_srcMannequinMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_srcMannequinMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_VrmMetaObject_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmRetargetFromMannequin.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_VrmMetaObject = { "VrmMetaObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_VrmRetargetFromMannequin, VrmMetaObject), Z_Construct_UClass_UVrmMetaObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_VrmMetaObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_VrmMetaObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_bIgnoreCenterLocation_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmRetargetFromMannequin.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_bIgnoreCenterLocation_SetBit(void* Obj)
	{
		((FAnimNode_VrmRetargetFromMannequin*)Obj)->bIgnoreCenterLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_bIgnoreCenterLocation = { "bIgnoreCenterLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimNode_VrmRetargetFromMannequin), &Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_bIgnoreCenterLocation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_bIgnoreCenterLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_bIgnoreCenterLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_CenterLocationScaleByHeightScale_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmRetargetFromMannequin.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_CenterLocationScaleByHeightScale = { "CenterLocationScaleByHeightScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_VrmRetargetFromMannequin, CenterLocationScaleByHeightScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_CenterLocationScaleByHeightScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_CenterLocationScaleByHeightScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_CenterLocationOffset_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "// FVector(1.0f, 1.0f, 1.0f);\n" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmRetargetFromMannequin.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "FVector(1.0f, 1.0f, 1.0f);" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_CenterLocationOffset = { "CenterLocationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_VrmRetargetFromMannequin, CenterLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_CenterLocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_CenterLocationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_MannequinVrmMetaObject_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "// FVector(1.0f, 1.0f, 1.0f);\n" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmRetargetFromMannequin.h" },
		{ "PinHiddenByDefault", "" },
		{ "ToolTip", "FVector(1.0f, 1.0f, 1.0f);" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_MannequinVrmMetaObject = { "MannequinVrmMetaObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_VrmRetargetFromMannequin, MannequinVrmMetaObject), Z_Construct_UClass_UVrmMetaObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_MannequinVrmMetaObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_MannequinVrmMetaObject_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_srcSkeletalMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_VrmRetargetFromMannequin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_srcSkeletalMesh = { "srcSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_VrmRetargetFromMannequin, srcSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_srcSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_srcSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_dstSkeletalMesh_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimNode_VrmRetargetFromMannequin.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_dstSkeletalMesh = { "dstSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimNode_VrmRetargetFromMannequin, dstSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_dstSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_dstSkeletalMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_bUseAttachedParent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_srcMannequinMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_VrmMetaObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_bIgnoreCenterLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_CenterLocationScaleByHeightScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_CenterLocationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_MannequinVrmMetaObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_srcSkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::NewProp_dstSkeletalMesh,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_VrmRetargetFromMannequin",
		sizeof(FAnimNode_VrmRetargetFromMannequin),
		alignof(FAnimNode_VrmRetargetFromMannequin),
		Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRM4U();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimNode_VrmRetargetFromMannequin"), sizeof(FAnimNode_VrmRetargetFromMannequin), Get_Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimNode_VrmRetargetFromMannequin_Hash() { return 1437750603U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
