// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmMetaObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmMetaObject() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	VRM4U_API UClass* Z_Construct_UClass_UVrmAssetListObject_NoRegister();
	VRM4U_API UClass* Z_Construct_UClass_UVrmMetaObject();
	VRM4U_API UClass* Z_Construct_UClass_UVrmMetaObject_NoRegister();
	VRM4U_API UEnum* Z_Construct_UEnum_VRM4U_EVRMConstraintType();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVrmBlendShape();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVrmBlendShapeGroup();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMColliderGroupMeta();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMColliderMeta();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMConstraint();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMConstraintAim();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMConstraintRoll();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMConstraintRotation();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMSpringColliderData();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMSpringMeta();
// End Cross Module References
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRMSpringMeta;
class UScriptStruct* FVRMSpringMeta::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRMSpringMeta.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRMSpringMeta.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMSpringMeta, Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMSpringMeta"));
	}
	return Z_Registration_Info_UScriptStruct_VRMSpringMeta.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMSpringMeta>()
{
	return FVRMSpringMeta::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVRMSpringMeta_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_stiffness_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_stiffness;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gravityPower_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_gravityPower;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_gravityDir_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_gravityDir;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dragForce_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_dragForce;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hitRadius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_hitRadius;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_bones_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bones_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_bones;
		static const UECodeGen_Private::FStrPropertyParams NewProp_boneNames_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_boneNames_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_boneNames;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ColliderIndexArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColliderIndexArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ColliderIndexArray;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_ColliderGroupArrayVRM10_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ColliderGroupArrayVRM10_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ColliderGroupArrayVRM10;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMSpringMeta>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_stiffness_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_stiffness = { "stiffness", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRMSpringMeta, stiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_stiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_stiffness_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_gravityPower_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_gravityPower = { "gravityPower", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRMSpringMeta, gravityPower), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_gravityPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_gravityPower_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_gravityDir_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_gravityDir = { "gravityDir", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRMSpringMeta, gravityDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_gravityDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_gravityDir_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_dragForce_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_dragForce = { "dragForce", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRMSpringMeta, dragForce), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_dragForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_dragForce_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_hitRadius_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_hitRadius = { "hitRadius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRMSpringMeta, hitRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_hitRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_hitRadius_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_bones_Inner = { "bones", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_bones_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)\n//int boneNum = 0;\n" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)\nint boneNum = 0;" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_bones = { "bones", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRMSpringMeta, bones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_bones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_bones_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_boneNames_Inner = { "boneNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_boneNames_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_boneNames = { "boneNames", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRMSpringMeta, boneNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_boneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_boneNames_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderIndexArray_Inner = { "ColliderIndexArray", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderIndexArray_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderIndexArray = { "ColliderIndexArray", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRMSpringMeta, ColliderIndexArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderIndexArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderIndexArray_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderGroupArrayVRM10_Inner = { "ColliderGroupArrayVRM10", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderGroupArrayVRM10_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderGroupArrayVRM10 = { "ColliderGroupArrayVRM10", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRMSpringMeta, ColliderGroupArrayVRM10), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderGroupArrayVRM10_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderGroupArrayVRM10_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_stiffness,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_gravityPower,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_gravityDir,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_dragForce,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_hitRadius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_bones_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_bones,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_boneNames_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_boneNames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderIndexArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderIndexArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderGroupArrayVRM10_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderGroupArrayVRM10,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VRMSpringMeta",
		sizeof(FVRMSpringMeta),
		alignof(FVRMSpringMeta),
		Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRMSpringMeta()
	{
		if (!Z_Registration_Info_UScriptStruct_VRMSpringMeta.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRMSpringMeta.InnerSingleton, Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VRMSpringMeta.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRMSpringColliderData;
class UScriptStruct* FVRMSpringColliderData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRMSpringColliderData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRMSpringColliderData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMSpringColliderData, Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMSpringColliderData"));
	}
	return Z_Registration_Info_UScriptStruct_VRMSpringColliderData.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMSpringColliderData>()
{
	return FVRMSpringColliderData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_shapeType_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_shapeType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_offset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_offset;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_radius_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_radius;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_tail_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_tail;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMSpringColliderData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_shapeType_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_shapeType = { "shapeType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRMSpringColliderData, shapeType), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_shapeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_shapeType_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_offset_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_offset = { "offset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRMSpringColliderData, offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_offset_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_radius_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRMSpringColliderData, radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_radius_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_tail_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_tail = { "tail", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRMSpringColliderData, tail), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_tail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_tail_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_shapeType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_offset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_tail,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VRMSpringColliderData",
		sizeof(FVRMSpringColliderData),
		alignof(FVRMSpringColliderData),
		Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRMSpringColliderData()
	{
		if (!Z_Registration_Info_UScriptStruct_VRMSpringColliderData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRMSpringColliderData.InnerSingleton, Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VRMSpringColliderData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRMColliderGroupMeta;
class UScriptStruct* FVRMColliderGroupMeta::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRMColliderGroupMeta.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRMColliderGroupMeta.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMColliderGroupMeta, Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMColliderGroupMeta"));
	}
	return Z_Registration_Info_UScriptStruct_VRMColliderGroupMeta.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMColliderGroupMeta>()
{
	return FVRMColliderGroupMeta::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_groupName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_groupName;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_colliderGroup_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_colliderGroup_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_colliderGroup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMColliderGroupMeta>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_groupName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_groupName = { "groupName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRMColliderGroupMeta, groupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_groupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_groupName_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_colliderGroup_Inner = { "colliderGroup", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_colliderGroup_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_colliderGroup = { "colliderGroup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRMColliderGroupMeta, colliderGroup), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_colliderGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_colliderGroup_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_groupName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_colliderGroup_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_colliderGroup,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VRMColliderGroupMeta",
		sizeof(FVRMColliderGroupMeta),
		alignof(FVRMColliderGroupMeta),
		Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRMColliderGroupMeta()
	{
		if (!Z_Registration_Info_UScriptStruct_VRMColliderGroupMeta.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRMColliderGroupMeta.InnerSingleton, Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VRMColliderGroupMeta.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRMColliderMeta;
class UScriptStruct* FVRMColliderMeta::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRMColliderMeta.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRMColliderMeta.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMColliderMeta, Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMColliderMeta"));
	}
	return Z_Registration_Info_UScriptStruct_VRMColliderMeta.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMColliderMeta>()
{
	return FVRMColliderMeta::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVRMColliderMeta_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bone_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_bone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_boneName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_boneName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_collider_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_collider_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_collider;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMColliderMeta>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_bone_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_bone = { "bone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRMColliderMeta, bone), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_bone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_boneName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_boneName = { "boneName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRMColliderMeta, boneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_boneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_boneName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_collider_Inner = { "collider", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVRMSpringColliderData, METADATA_PARAMS(nullptr, 0) }; // 3579306206
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_collider_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_collider = { "collider", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRMColliderMeta, collider), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_collider_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_collider_MetaData)) }; // 3579306206
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_bone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_boneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_collider_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_collider,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VRMColliderMeta",
		sizeof(FVRMColliderMeta),
		alignof(FVRMColliderMeta),
		Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRMColliderMeta()
	{
		if (!Z_Registration_Info_UScriptStruct_VRMColliderMeta.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRMColliderMeta.InnerSingleton, Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VRMColliderMeta.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VrmBlendShape;
class UScriptStruct* FVrmBlendShape::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VrmBlendShape.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VrmBlendShape.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVrmBlendShape, Z_Construct_UPackage__Script_VRM4U(), TEXT("VrmBlendShape"));
	}
	return Z_Registration_Info_UScriptStruct_VrmBlendShape.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVrmBlendShape>()
{
	return FVrmBlendShape::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVrmBlendShape_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_morphTargetName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_morphTargetName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_nodeName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_nodeName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_meshName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshID_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_meshID;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_shapeIndex_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_shapeIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_weight_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_weight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShape_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// BlendShape\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
		{ "ToolTip", "BlendShape" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVrmBlendShape>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_morphTargetName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_morphTargetName = { "morphTargetName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVrmBlendShape, morphTargetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_morphTargetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_morphTargetName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_nodeName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_nodeName = { "nodeName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVrmBlendShape, nodeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_nodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_nodeName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_meshName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_meshName = { "meshName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVrmBlendShape, meshName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_meshName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_meshName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_meshID_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_meshID = { "meshID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVrmBlendShape, meshID), METADATA_PARAMS(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_meshID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_meshID_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_shapeIndex_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_shapeIndex = { "shapeIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVrmBlendShape, shapeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_shapeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_shapeIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_weight_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_weight = { "weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVrmBlendShape, weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_weight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVrmBlendShape_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_morphTargetName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_nodeName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_meshName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_meshID,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_shapeIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_weight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVrmBlendShape_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VrmBlendShape",
		sizeof(FVrmBlendShape),
		alignof(FVrmBlendShape),
		Z_Construct_UScriptStruct_FVrmBlendShape_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVrmBlendShape()
	{
		if (!Z_Registration_Info_UScriptStruct_VrmBlendShape.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VrmBlendShape.InnerSingleton, Z_Construct_UScriptStruct_FVrmBlendShape_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VrmBlendShape.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VrmBlendShapeMaterialList;
class UScriptStruct* FVrmBlendShapeMaterialList::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VrmBlendShapeMaterialList.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VrmBlendShapeMaterialList.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList, Z_Construct_UPackage__Script_VRM4U(), TEXT("VrmBlendShapeMaterialList"));
	}
	return Z_Registration_Info_UScriptStruct_VrmBlendShapeMaterialList.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVrmBlendShapeMaterialList>()
{
	return FVrmBlendShapeMaterialList::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_materialName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_materialName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_propertyName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_propertyName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_color_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// BlendShape Material\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
		{ "ToolTip", "BlendShape Material" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVrmBlendShapeMaterialList>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_materialName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_materialName = { "materialName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVrmBlendShapeMaterialList, materialName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_materialName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_materialName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_propertyName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_propertyName = { "propertyName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVrmBlendShapeMaterialList, propertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_propertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_propertyName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_color_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVrmBlendShapeMaterialList, color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_color_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_materialName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_propertyName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_color,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VrmBlendShapeMaterialList",
		sizeof(FVrmBlendShapeMaterialList),
		alignof(FVrmBlendShapeMaterialList),
		Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList()
	{
		if (!Z_Registration_Info_UScriptStruct_VrmBlendShapeMaterialList.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VrmBlendShapeMaterialList.InnerSingleton, Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VrmBlendShapeMaterialList.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VrmBlendShapeGroup;
class UScriptStruct* FVrmBlendShapeGroup::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VrmBlendShapeGroup.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VrmBlendShapeGroup.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVrmBlendShapeGroup, Z_Construct_UPackage__Script_VRM4U(), TEXT("VrmBlendShapeGroup"));
	}
	return Z_Registration_Info_UScriptStruct_VrmBlendShapeGroup.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVrmBlendShapeGroup>()
{
	return FVrmBlendShapeGroup::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendShape_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendShape_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendShape;
		static const UECodeGen_Private::FStructPropertyParams NewProp_MaterialList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_MaterialList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVrmBlendShapeGroup>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_name_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVrmBlendShapeGroup, name), METADATA_PARAMS(Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_name_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_BlendShape_Inner = { "BlendShape", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVrmBlendShape, METADATA_PARAMS(nullptr, 0) }; // 2933596548
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_BlendShape_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_BlendShape = { "BlendShape", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVrmBlendShapeGroup, BlendShape), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_BlendShape_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_BlendShape_MetaData)) }; // 2933596548
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_MaterialList_Inner = { "MaterialList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList, METADATA_PARAMS(nullptr, 0) }; // 57249097
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_MaterialList_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_MaterialList = { "MaterialList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVrmBlendShapeGroup, MaterialList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_MaterialList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_MaterialList_MetaData)) }; // 57249097
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_BlendShape_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_BlendShape,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_MaterialList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_MaterialList,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VrmBlendShapeGroup",
		sizeof(FVrmBlendShapeGroup),
		alignof(FVrmBlendShapeGroup),
		Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVrmBlendShapeGroup()
	{
		if (!Z_Registration_Info_UScriptStruct_VrmBlendShapeGroup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VrmBlendShapeGroup.InnerSingleton, Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VrmBlendShapeGroup.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRMConstraintType;
	static UEnum* EVRMConstraintType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVRMConstraintType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVRMConstraintType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRM4U_EVRMConstraintType, Z_Construct_UPackage__Script_VRM4U(), TEXT("EVRMConstraintType"));
		}
		return Z_Registration_Info_UEnum_EVRMConstraintType.OuterSingleton;
	}
	template<> VRM4U_API UEnum* StaticEnum<EVRMConstraintType>()
	{
		return EVRMConstraintType_StaticEnum();
	}
	struct Z_Construct_UEnum_VRM4U_EVRMConstraintType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRM4U_EVRMConstraintType_Statics::Enumerators[] = {
		{ "EVRMConstraintType::None", (int64)EVRMConstraintType::None },
		{ "EVRMConstraintType::Roll", (int64)EVRMConstraintType::Roll },
		{ "EVRMConstraintType::Aim", (int64)EVRMConstraintType::Aim },
		{ "EVRMConstraintType::Rotation", (int64)EVRMConstraintType::Rotation },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRM4U_EVRMConstraintType_Statics::Enum_MetaDataParams[] = {
		{ "Aim.Name", "EVRMConstraintType::Aim" },
		{ "BlueprintType", "true" },
		{ "Comment", "//struct VRM4U_API FBVrmlendShapeGroup {\n//\x09TArray<FVrmBlendShape> \n//};\n" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
		{ "None.Name", "EVRMConstraintType::None" },
		{ "Roll.Name", "EVRMConstraintType::Roll" },
		{ "Rotation.Name", "EVRMConstraintType::Rotation" },
		{ "ToolTip", "struct VRM4U_API FBVrmlendShapeGroup {\n       TArray<FVrmBlendShape>\n};" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRM4U_EVRMConstraintType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		"EVRMConstraintType",
		"EVRMConstraintType",
		Z_Construct_UEnum_VRM4U_EVRMConstraintType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRM4U_EVRMConstraintType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VRM4U_EVRMConstraintType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VRM4U_EVRMConstraintType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VRM4U_EVRMConstraintType()
	{
		if (!Z_Registration_Info_UEnum_EVRMConstraintType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRMConstraintType.InnerSingleton, Z_Construct_UEnum_VRM4U_EVRMConstraintType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVRMConstraintType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRMConstraintRoll;
class UScriptStruct* FVRMConstraintRoll::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRMConstraintRoll.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRMConstraintRoll.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMConstraintRoll, Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMConstraintRoll"));
	}
	return Z_Registration_Info_UScriptStruct_VRMConstraintRoll.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMConstraintRoll>()
{
	return FVRMConstraintRoll::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sourceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_sourceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_source_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_source;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_rollAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_rollAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_weight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMConstraintRoll>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_sourceName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_sourceName = { "sourceName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRMConstraintRoll, sourceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_sourceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_sourceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_source_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRMConstraintRoll, source), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_source_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_rollAxis_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_rollAxis = { "rollAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRMConstraintRoll, rollAxis), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_rollAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_rollAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_weight_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_weight = { "weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRMConstraintRoll, weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_weight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_sourceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_rollAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_weight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VRMConstraintRoll",
		sizeof(FVRMConstraintRoll),
		alignof(FVRMConstraintRoll),
		Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRMConstraintRoll()
	{
		if (!Z_Registration_Info_UScriptStruct_VRMConstraintRoll.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRMConstraintRoll.InnerSingleton, Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VRMConstraintRoll.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRMConstraintAim;
class UScriptStruct* FVRMConstraintAim::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRMConstraintAim.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRMConstraintAim.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMConstraintAim, Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMConstraintAim"));
	}
	return Z_Registration_Info_UScriptStruct_VRMConstraintAim.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMConstraintAim>()
{
	return FVRMConstraintAim::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVRMConstraintAim_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sourceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_sourceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_source_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_source;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_aimAxis_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_aimAxis;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_weight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMConstraintAim>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_sourceName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_sourceName = { "sourceName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRMConstraintAim, sourceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_sourceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_sourceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_source_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRMConstraintAim, source), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_source_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_aimAxis_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_aimAxis = { "aimAxis", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRMConstraintAim, aimAxis), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_aimAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_aimAxis_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_weight_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_weight = { "weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRMConstraintAim, weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_weight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_sourceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_aimAxis,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_weight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VRMConstraintAim",
		sizeof(FVRMConstraintAim),
		alignof(FVRMConstraintAim),
		Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRMConstraintAim()
	{
		if (!Z_Registration_Info_UScriptStruct_VRMConstraintAim.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRMConstraintAim.InnerSingleton, Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VRMConstraintAim.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRMConstraintRotation;
class UScriptStruct* FVRMConstraintRotation::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRMConstraintRotation.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRMConstraintRotation.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMConstraintRotation, Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMConstraintRotation"));
	}
	return Z_Registration_Info_UScriptStruct_VRMConstraintRotation.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMConstraintRotation>()
{
	return FVRMConstraintRotation::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sourceName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_sourceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_source_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_source;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_weight_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_weight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMConstraintRotation>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_sourceName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_sourceName = { "sourceName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRMConstraintRotation, sourceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_sourceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_sourceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_source_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRMConstraintRotation, source), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_source_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_weight_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_weight = { "weight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRMConstraintRotation, weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_weight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_sourceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_source,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_weight,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VRMConstraintRotation",
		sizeof(FVRMConstraintRotation),
		alignof(FVRMConstraintRotation),
		Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRMConstraintRotation()
	{
		if (!Z_Registration_Info_UScriptStruct_VRMConstraintRotation.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRMConstraintRotation.InnerSingleton, Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VRMConstraintRotation.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VRMConstraint;
class UScriptStruct* FVRMConstraint::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VRMConstraint.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VRMConstraint.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMConstraint, Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMConstraint"));
	}
	return Z_Registration_Info_UScriptStruct_VRMConstraint.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMConstraint>()
{
	return FVRMConstraint::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVRMConstraint_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_constraintRoll_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_constraintRoll;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_constraintAim_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_constraintAim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_constraintRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_constraintRotation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMConstraint>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_type_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRMConstraint, type), Z_Construct_UEnum_VRM4U_EVRMConstraintType, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_type_MetaData)) }; // 2767123413
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintRoll_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintRoll = { "constraintRoll", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRMConstraint, constraintRoll), Z_Construct_UScriptStruct_FVRMConstraintRoll, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintRoll_MetaData)) }; // 3836736996
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintAim_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintAim = { "constraintAim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRMConstraint, constraintAim), Z_Construct_UScriptStruct_FVRMConstraintAim, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintAim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintAim_MetaData)) }; // 4269143850
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintRotation_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintRotation = { "constraintRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FVRMConstraint, constraintRotation), Z_Construct_UScriptStruct_FVRMConstraintRotation, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintRotation_MetaData)) }; // 2707491540
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMConstraint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintRoll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintAim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintRotation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMConstraint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VRMConstraint",
		sizeof(FVRMConstraint),
		alignof(FVRMConstraint),
		Z_Construct_UScriptStruct_FVRMConstraint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMConstraint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRMConstraint()
	{
		if (!Z_Registration_Info_UScriptStruct_VRMConstraint.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VRMConstraint.InnerSingleton, Z_Construct_UScriptStruct_FVRMConstraint_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VRMConstraint.InnerSingleton;
	}
	void UVrmMetaObject::StaticRegisterNativesUVrmMetaObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrmMetaObject);
	UClass* Z_Construct_UClass_UVrmMetaObject_NoRegister()
	{
		return UVrmMetaObject::StaticClass();
	}
	struct Z_Construct_UClass_UVrmMetaObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_humanoidBoneTable_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_humanoidBoneTable_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_humanoidBoneTable_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_humanoidBoneTable;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BlendShapeGroup_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlendShapeGroup_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BlendShapeGroup;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VRMSpringMeta_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VRMSpringMeta_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VRMSpringMeta;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VRMColliderMeta_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VRMColliderMeta_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VRMColliderMeta;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VRMColliderGroupMeta_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VRMColliderGroupMeta_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_VRMColliderGroupMeta;
		static const UECodeGen_Private::FStructPropertyParams NewProp_VRMConstraintMeta_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_VRMConstraintMeta_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VRMConstraintMeta_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_VRMConstraintMeta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_VrmAssetListObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_VrmAssetListObject;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrmMetaObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmMetaObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VrmMetaObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_humanoidBoneTable_ValueProp = { "humanoidBoneTable", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_humanoidBoneTable_Key_KeyProp = { "humanoidBoneTable_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_humanoidBoneTable_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "// humanoid name -> model name\n" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
		{ "ToolTip", "humanoid name -> model name" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_humanoidBoneTable = { "humanoidBoneTable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmMetaObject, humanoidBoneTable), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_humanoidBoneTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_humanoidBoneTable_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_BlendShapeGroup_Inner = { "BlendShapeGroup", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVrmBlendShapeGroup, METADATA_PARAMS(nullptr, 0) }; // 981650436
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_BlendShapeGroup_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_BlendShapeGroup = { "BlendShapeGroup", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmMetaObject, BlendShapeGroup), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_BlendShapeGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_BlendShapeGroup_MetaData)) }; // 981650436
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMSpringMeta_Inner = { "VRMSpringMeta", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVRMSpringMeta, METADATA_PARAMS(nullptr, 0) }; // 3387661225
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMSpringMeta_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMSpringMeta = { "VRMSpringMeta", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmMetaObject, VRMSpringMeta), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMSpringMeta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMSpringMeta_MetaData)) }; // 3387661225
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderMeta_Inner = { "VRMColliderMeta", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVRMColliderMeta, METADATA_PARAMS(nullptr, 0) }; // 254300466
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderMeta_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderMeta = { "VRMColliderMeta", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmMetaObject, VRMColliderMeta), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderMeta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderMeta_MetaData)) }; // 254300466
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderGroupMeta_Inner = { "VRMColliderGroupMeta", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FVRMColliderGroupMeta, METADATA_PARAMS(nullptr, 0) }; // 609625866
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderGroupMeta_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderGroupMeta = { "VRMColliderGroupMeta", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmMetaObject, VRMColliderGroupMeta), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderGroupMeta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderGroupMeta_MetaData)) }; // 609625866
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMConstraintMeta_ValueProp = { "VRMConstraintMeta", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FVRMConstraint, METADATA_PARAMS(nullptr, 0) }; // 1116693549
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMConstraintMeta_Key_KeyProp = { "VRMConstraintMeta_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMConstraintMeta_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMConstraintMeta = { "VRMConstraintMeta", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmMetaObject, VRMConstraintMeta), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMConstraintMeta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMConstraintMeta_MetaData)) }; // 1116693549
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmMetaObject, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VrmAssetListObject_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VrmAssetListObject = { "VrmAssetListObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmMetaObject, VrmAssetListObject), Z_Construct_UClass_UVrmAssetListObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VrmAssetListObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VrmAssetListObject_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmMetaObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_humanoidBoneTable_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_humanoidBoneTable_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_humanoidBoneTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_BlendShapeGroup_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_BlendShapeGroup,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMSpringMeta_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMSpringMeta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderMeta_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderMeta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderGroupMeta_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderGroupMeta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMConstraintMeta_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMConstraintMeta_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMConstraintMeta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_SkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VrmAssetListObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmMetaObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmMetaObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrmMetaObject_Statics::ClassParams = {
		&UVrmMetaObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVrmMetaObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMetaObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVrmMetaObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMetaObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVrmMetaObject()
	{
		if (!Z_Registration_Info_UClass_UVrmMetaObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrmMetaObject.OuterSingleton, Z_Construct_UClass_UVrmMetaObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVrmMetaObject.OuterSingleton;
	}
	template<> VRM4U_API UClass* StaticClass<UVrmMetaObject>()
	{
		return UVrmMetaObject::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmMetaObject);
	UVrmMetaObject::~UVrmMetaObject() {}
	struct Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmMetaObject_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmMetaObject_h_Statics::EnumInfo[] = {
		{ EVRMConstraintType_StaticEnum, TEXT("EVRMConstraintType"), &Z_Registration_Info_UEnum_EVRMConstraintType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2767123413U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmMetaObject_h_Statics::ScriptStructInfo[] = {
		{ FVRMSpringMeta::StaticStruct, Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewStructOps, TEXT("VRMSpringMeta"), &Z_Registration_Info_UScriptStruct_VRMSpringMeta, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRMSpringMeta), 3387661225U) },
		{ FVRMSpringColliderData::StaticStruct, Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewStructOps, TEXT("VRMSpringColliderData"), &Z_Registration_Info_UScriptStruct_VRMSpringColliderData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRMSpringColliderData), 3579306206U) },
		{ FVRMColliderGroupMeta::StaticStruct, Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewStructOps, TEXT("VRMColliderGroupMeta"), &Z_Registration_Info_UScriptStruct_VRMColliderGroupMeta, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRMColliderGroupMeta), 609625866U) },
		{ FVRMColliderMeta::StaticStruct, Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewStructOps, TEXT("VRMColliderMeta"), &Z_Registration_Info_UScriptStruct_VRMColliderMeta, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRMColliderMeta), 254300466U) },
		{ FVrmBlendShape::StaticStruct, Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewStructOps, TEXT("VrmBlendShape"), &Z_Registration_Info_UScriptStruct_VrmBlendShape, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVrmBlendShape), 2933596548U) },
		{ FVrmBlendShapeMaterialList::StaticStruct, Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewStructOps, TEXT("VrmBlendShapeMaterialList"), &Z_Registration_Info_UScriptStruct_VrmBlendShapeMaterialList, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVrmBlendShapeMaterialList), 57249097U) },
		{ FVrmBlendShapeGroup::StaticStruct, Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewStructOps, TEXT("VrmBlendShapeGroup"), &Z_Registration_Info_UScriptStruct_VrmBlendShapeGroup, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVrmBlendShapeGroup), 981650436U) },
		{ FVRMConstraintRoll::StaticStruct, Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewStructOps, TEXT("VRMConstraintRoll"), &Z_Registration_Info_UScriptStruct_VRMConstraintRoll, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRMConstraintRoll), 3836736996U) },
		{ FVRMConstraintAim::StaticStruct, Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewStructOps, TEXT("VRMConstraintAim"), &Z_Registration_Info_UScriptStruct_VRMConstraintAim, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRMConstraintAim), 4269143850U) },
		{ FVRMConstraintRotation::StaticStruct, Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewStructOps, TEXT("VRMConstraintRotation"), &Z_Registration_Info_UScriptStruct_VRMConstraintRotation, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRMConstraintRotation), 2707491540U) },
		{ FVRMConstraint::StaticStruct, Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewStructOps, TEXT("VRMConstraint"), &Z_Registration_Info_UScriptStruct_VRMConstraint, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVRMConstraint), 1116693549U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmMetaObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVrmMetaObject, UVrmMetaObject::StaticClass, TEXT("UVrmMetaObject"), &Z_Registration_Info_UClass_UVrmMetaObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrmMetaObject), 994446452U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmMetaObject_h_3273617630(TEXT("/Script/VRM4U"),
		Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmMetaObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmMetaObject_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmMetaObject_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmMetaObject_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmMetaObject_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmMetaObject_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
