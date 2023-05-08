// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/AnimNode_VrmSpringBone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimNode_VrmSpringBone() {}
// Cross Module References
	ANIMGRAPHRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	VRM4U_API UClass* Z_Construct_UClass_UVrmMetaObject_NoRegister();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone();
// End Cross Module References

static_assert(std::is_polymorphic<FAnimNode_VrmSpringBone>() == std::is_polymorphic<FAnimNode_SkeletalControlBase>(), "USTRUCT FAnimNode_VrmSpringBone cannot be polymorphic unless super FAnimNode_SkeletalControlBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AnimNode_VrmSpringBone;
class UScriptStruct* FAnimNode_VrmSpringBone::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AnimNode_VrmSpringBone.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AnimNode_VrmSpringBone.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone, Z_Construct_UPackage__Script_VRM4U(), TEXT("AnimNode_VrmSpringBone"));
	}
	return Z_Registration_Info_UScriptStruct_AnimNode_VrmSpringBone.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FAnimNode_VrmSpringBone>()
{
	return FAnimNode_VrmSpringBone::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gravityScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_gravityScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gravityAdd_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_gravityAdd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stiffnessScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_stiffnessScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stiffnessAdd_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_stiffnessAdd;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_randomWindRange_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_randomWindRange;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_windScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_windScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_loopc_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_loopc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_collisionCheckLoopCount_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_collisionCheckLoopCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnorePhysicsResetOnTeleport_MetaData[];
#endif
		static void NewProp_bIgnorePhysicsResetOnTeleport_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnorePhysicsResetOnTeleport;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnorePhysicsCollision_MetaData[];
#endif
		static void NewProp_bIgnorePhysicsCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnorePhysicsCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreVRMCollision_MetaData[];
#endif
		static void NewProp_bIgnoreVRMCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreVRMCollision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreWindDirectionalSource_MetaData[];
#endif
		static void NewProp_bIgnoreWindDirectionalSource_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreWindDirectionalSource;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NoWindBoneNameList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoWindBoneNameList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_NoWindBoneNameList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n*\x09Simple controller that replaces or adds to the translation/rotation of a single bone.\n*/" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmSpringBone.h" },
		{ "ToolTip", "Simple controller that replaces or adds to the translation/rotation of a single bone." },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimNode_VrmSpringBone>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_VrmMetaObject_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmSpringBone.h" },
		{ "NativeConst", "" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_VrmMetaObject = { "VrmMetaObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_VrmSpringBone, VrmMetaObject), Z_Construct_UClass_UVrmMetaObject_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_VrmMetaObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_VrmMetaObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_gravityScale_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmSpringBone.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_gravityScale = { "gravityScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_VrmSpringBone, gravityScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_gravityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_gravityScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_gravityAdd_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmSpringBone.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_gravityAdd = { "gravityAdd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_VrmSpringBone, gravityAdd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_gravityAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_gravityAdd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_stiffnessScale_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmSpringBone.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_stiffnessScale = { "stiffnessScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_VrmSpringBone, stiffnessScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_stiffnessScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_stiffnessScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_stiffnessAdd_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmSpringBone.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_stiffnessAdd = { "stiffnessAdd", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_VrmSpringBone, stiffnessAdd), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_stiffnessAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_stiffnessAdd_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_randomWindRange_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmSpringBone.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_randomWindRange = { "randomWindRange", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_VrmSpringBone, randomWindRange), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_randomWindRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_randomWindRange_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_windScale_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmSpringBone.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_windScale = { "windScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_VrmSpringBone, windScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_windScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_windScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_loopc_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmSpringBone.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_loopc = { "loopc", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_VrmSpringBone, loopc), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_loopc_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_loopc_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_collisionCheckLoopCount_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmSpringBone.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_collisionCheckLoopCount = { "collisionCheckLoopCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_VrmSpringBone, collisionCheckLoopCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_collisionCheckLoopCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_collisionCheckLoopCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnorePhysicsResetOnTeleport_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmSpringBone.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnorePhysicsResetOnTeleport_SetBit(void* Obj)
	{
		((FAnimNode_VrmSpringBone*)Obj)->bIgnorePhysicsResetOnTeleport = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnorePhysicsResetOnTeleport = { "bIgnorePhysicsResetOnTeleport", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_VrmSpringBone), &Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnorePhysicsResetOnTeleport_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnorePhysicsResetOnTeleport_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnorePhysicsResetOnTeleport_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnorePhysicsCollision_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmSpringBone.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnorePhysicsCollision_SetBit(void* Obj)
	{
		((FAnimNode_VrmSpringBone*)Obj)->bIgnorePhysicsCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnorePhysicsCollision = { "bIgnorePhysicsCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_VrmSpringBone), &Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnorePhysicsCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnorePhysicsCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnorePhysicsCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnoreVRMCollision_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmSpringBone.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnoreVRMCollision_SetBit(void* Obj)
	{
		((FAnimNode_VrmSpringBone*)Obj)->bIgnoreVRMCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnoreVRMCollision = { "bIgnoreVRMCollision", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_VrmSpringBone), &Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnoreVRMCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnoreVRMCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnoreVRMCollision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnoreWindDirectionalSource_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmSpringBone.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnoreWindDirectionalSource_SetBit(void* Obj)
	{
		((FAnimNode_VrmSpringBone*)Obj)->bIgnoreWindDirectionalSource = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnoreWindDirectionalSource = { "bIgnoreWindDirectionalSource", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FAnimNode_VrmSpringBone), &Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnoreWindDirectionalSource_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnoreWindDirectionalSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnoreWindDirectionalSource_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_NoWindBoneNameList_Inner = { "NoWindBoneNameList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_NoWindBoneNameList_MetaData[] = {
		{ "Category", "Skeleton" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/AnimNode_VrmSpringBone.h" },
		{ "PinHiddenByDefault", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_NoWindBoneNameList = { "NoWindBoneNameList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FAnimNode_VrmSpringBone, NoWindBoneNameList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_NoWindBoneNameList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_NoWindBoneNameList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_VrmMetaObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_gravityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_gravityAdd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_stiffnessScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_stiffnessAdd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_randomWindRange,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_windScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_loopc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_collisionCheckLoopCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnorePhysicsResetOnTeleport,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnorePhysicsCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnoreVRMCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_bIgnoreWindDirectionalSource,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_NoWindBoneNameList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewProp_NoWindBoneNameList,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		Z_Construct_UScriptStruct_FAnimNode_SkeletalControlBase,
		&NewStructOps,
		"AnimNode_VrmSpringBone",
		sizeof(FAnimNode_VrmSpringBone),
		alignof(FAnimNode_VrmSpringBone),
		Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone()
	{
		if (!Z_Registration_Info_UScriptStruct_AnimNode_VrmSpringBone.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AnimNode_VrmSpringBone.InnerSingleton, Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_AnimNode_VrmSpringBone.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmSpringBone_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmSpringBone_h_Statics::ScriptStructInfo[] = {
		{ FAnimNode_VrmSpringBone::StaticStruct, Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone_Statics::NewStructOps, TEXT("AnimNode_VrmSpringBone"), &Z_Registration_Info_UScriptStruct_AnimNode_VrmSpringBone, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAnimNode_VrmSpringBone), 2180365387U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmSpringBone_h_4051519880(TEXT("/Script/VRM4U"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmSpringBone_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_AnimNode_VrmSpringBone_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
