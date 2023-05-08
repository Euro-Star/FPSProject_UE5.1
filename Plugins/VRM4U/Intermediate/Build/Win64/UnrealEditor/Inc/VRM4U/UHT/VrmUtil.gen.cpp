// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmUtil.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmUtil() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	VRM4U_API UEnum* Z_Construct_UEnum_VRM4U_EVRMImportMaterialType();
	VRM4U_API UEnum* Z_Construct_UEnum_VRM4U_EVRMImportTextureCompressType();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FImportOptionData();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRMImportMaterialType;
	static UEnum* EVRMImportMaterialType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVRMImportMaterialType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVRMImportMaterialType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRM4U_EVRMImportMaterialType, Z_Construct_UPackage__Script_VRM4U(), TEXT("EVRMImportMaterialType"));
		}
		return Z_Registration_Info_UEnum_EVRMImportMaterialType.OuterSingleton;
	}
	template<> VRM4U_API UEnum* StaticEnum<EVRMImportMaterialType>()
	{
		return EVRMImportMaterialType_StaticEnum();
	}
	struct Z_Construct_UEnum_VRM4U_EVRMImportMaterialType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRM4U_EVRMImportMaterialType_Statics::Enumerators[] = {
		{ "EVRMImportMaterialType::VRMIMT_Auto", (int64)EVRMImportMaterialType::VRMIMT_Auto },
		{ "EVRMImportMaterialType::VRMIMT_MToon", (int64)EVRMImportMaterialType::VRMIMT_MToon },
		{ "EVRMImportMaterialType::VRMIMT_MToonUnlit", (int64)EVRMImportMaterialType::VRMIMT_MToonUnlit },
		{ "EVRMImportMaterialType::VRMIMT_SSS", (int64)EVRMImportMaterialType::VRMIMT_SSS },
		{ "EVRMImportMaterialType::VRMIMT_SSSProfile", (int64)EVRMImportMaterialType::VRMIMT_SSSProfile },
		{ "EVRMImportMaterialType::VRMIMT_Unlit", (int64)EVRMImportMaterialType::VRMIMT_Unlit },
		{ "EVRMImportMaterialType::VRMIMT_glTF", (int64)EVRMImportMaterialType::VRMIMT_glTF },
		{ "EVRMImportMaterialType::VRMIMT_Custom", (int64)EVRMImportMaterialType::VRMIMT_Custom },
		{ "EVRMImportMaterialType::VRMIMT_MAX", (int64)EVRMImportMaterialType::VRMIMT_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRM4U_EVRMImportMaterialType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// \n//\n" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
		{ "VRMIMT_Auto.Comment", "// \n//\n" },
		{ "VRMIMT_Auto.DisplayName", "Auto(MToon Unlit)" },
		{ "VRMIMT_Auto.Name", "EVRMImportMaterialType::VRMIMT_Auto" },
		{ "VRMIMT_Custom.Comment", "// \n//\n" },
		{ "VRMIMT_Custom.DisplayName", "Custom" },
		{ "VRMIMT_Custom.Name", "EVRMImportMaterialType::VRMIMT_Custom" },
		{ "VRMIMT_glTF.Comment", "// \n//\n" },
		{ "VRMIMT_glTF.DisplayName", "PBR(glTF2)" },
		{ "VRMIMT_glTF.Name", "EVRMImportMaterialType::VRMIMT_glTF" },
		{ "VRMIMT_MAX.Comment", "// \n//\n" },
		{ "VRMIMT_MAX.Name", "EVRMImportMaterialType::VRMIMT_MAX" },
		{ "VRMIMT_MToon.Comment", "// \n//\n" },
		{ "VRMIMT_MToon.DisplayName", "MToon Lit" },
		{ "VRMIMT_MToon.Name", "EVRMImportMaterialType::VRMIMT_MToon" },
		{ "VRMIMT_MToonUnlit.Comment", "// \n//\n" },
		{ "VRMIMT_MToonUnlit.DisplayName", "MToon Unlit" },
		{ "VRMIMT_MToonUnlit.Name", "EVRMImportMaterialType::VRMIMT_MToonUnlit" },
		{ "VRMIMT_SSS.Comment", "// \n//\n" },
		{ "VRMIMT_SSS.DisplayName", "Subsurface" },
		{ "VRMIMT_SSS.Name", "EVRMImportMaterialType::VRMIMT_SSS" },
		{ "VRMIMT_SSSProfile.Comment", "// \n//\n" },
		{ "VRMIMT_SSSProfile.DisplayName", "Subsurface Profile" },
		{ "VRMIMT_SSSProfile.Name", "EVRMImportMaterialType::VRMIMT_SSSProfile" },
		{ "VRMIMT_Unlit.Comment", "// \n//\n" },
		{ "VRMIMT_Unlit.DisplayName", "Unlit" },
		{ "VRMIMT_Unlit.Name", "EVRMImportMaterialType::VRMIMT_Unlit" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRM4U_EVRMImportMaterialType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		"EVRMImportMaterialType",
		"EVRMImportMaterialType",
		Z_Construct_UEnum_VRM4U_EVRMImportMaterialType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRM4U_EVRMImportMaterialType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VRM4U_EVRMImportMaterialType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VRM4U_EVRMImportMaterialType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VRM4U_EVRMImportMaterialType()
	{
		if (!Z_Registration_Info_UEnum_EVRMImportMaterialType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRMImportMaterialType.InnerSingleton, Z_Construct_UEnum_VRM4U_EVRMImportMaterialType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVRMImportMaterialType.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRMImportTextureCompressType;
	static UEnum* EVRMImportTextureCompressType_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVRMImportTextureCompressType.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVRMImportTextureCompressType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRM4U_EVRMImportTextureCompressType, Z_Construct_UPackage__Script_VRM4U(), TEXT("EVRMImportTextureCompressType"));
		}
		return Z_Registration_Info_UEnum_EVRMImportTextureCompressType.OuterSingleton;
	}
	template<> VRM4U_API UEnum* StaticEnum<EVRMImportTextureCompressType>()
	{
		return EVRMImportTextureCompressType_StaticEnum();
	}
	struct Z_Construct_UEnum_VRM4U_EVRMImportTextureCompressType_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRM4U_EVRMImportTextureCompressType_Statics::Enumerators[] = {
		{ "EVRMImportTextureCompressType::VRMITC_Auto", (int64)EVRMImportTextureCompressType::VRMITC_Auto },
		{ "EVRMImportTextureCompressType::VRMITC_DXT1", (int64)EVRMImportTextureCompressType::VRMITC_DXT1 },
		{ "EVRMImportTextureCompressType::VRMITC_BC7", (int64)EVRMImportTextureCompressType::VRMITC_BC7 },
		{ "EVRMImportTextureCompressType::VRMITC_NoCompression", (int64)EVRMImportTextureCompressType::VRMITC_NoCompression },
		{ "EVRMImportTextureCompressType::VRMITC_MAX", (int64)EVRMImportTextureCompressType::VRMITC_MAX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRM4U_EVRMImportTextureCompressType_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
		{ "VRMITC_Auto.DisplayName", "Auto(DXT1)" },
		{ "VRMITC_Auto.Name", "EVRMImportTextureCompressType::VRMITC_Auto" },
		{ "VRMITC_BC7.DisplayName", "BC7" },
		{ "VRMITC_BC7.Name", "EVRMImportTextureCompressType::VRMITC_BC7" },
		{ "VRMITC_DXT1.DisplayName", "DXT1" },
		{ "VRMITC_DXT1.Name", "EVRMImportTextureCompressType::VRMITC_DXT1" },
		{ "VRMITC_MAX.Name", "EVRMImportTextureCompressType::VRMITC_MAX" },
		{ "VRMITC_NoCompression.DisplayName", "NoCompression" },
		{ "VRMITC_NoCompression.Name", "EVRMImportTextureCompressType::VRMITC_NoCompression" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRM4U_EVRMImportTextureCompressType_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		"EVRMImportTextureCompressType",
		"EVRMImportTextureCompressType",
		Z_Construct_UEnum_VRM4U_EVRMImportTextureCompressType_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRM4U_EVRMImportTextureCompressType_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VRM4U_EVRMImportTextureCompressType_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VRM4U_EVRMImportTextureCompressType_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VRM4U_EVRMImportTextureCompressType()
	{
		if (!Z_Registration_Info_UEnum_EVRMImportTextureCompressType.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRMImportTextureCompressType.InnerSingleton, Z_Construct_UEnum_VRM4U_EVRMImportTextureCompressType_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVRMImportTextureCompressType.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ImportOptionData;
class UScriptStruct* FImportOptionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ImportOptionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ImportOptionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FImportOptionData, Z_Construct_UPackage__Script_VRM4U(), TEXT("ImportOptionData"));
	}
	return Z_Registration_Info_UScriptStruct_ImportOptionData.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FImportOptionData>()
{
	return FImportOptionData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FImportOptionData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ModelScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ModelScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_FrameRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVrm10RemoveLocalRotation_MetaData[];
#endif
		static void NewProp_bVrm10RemoveLocalRotation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVrm10RemoveLocalRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateHumanoidRenamedMesh_MetaData[];
#endif
		static void NewProp_bGenerateHumanoidRenamedMesh_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateHumanoidRenamedMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateIKBone_MetaData[];
#endif
		static void NewProp_bGenerateIKBone_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateIKBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveBlendShapeGroupPrefix_MetaData[];
#endif
		static void NewProp_bRemoveBlendShapeGroupPrefix_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveBlendShapeGroupPrefix;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceOpaque_MetaData[];
#endif
		static void NewProp_bForceOpaque_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceOpaque;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceTwoSided_MetaData[];
#endif
		static void NewProp_bForceTwoSided_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceTwoSided;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bBC7Mode_MetaData[];
#endif
		static void NewProp_bBC7Mode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bBC7Mode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMipmapGenerateMode_MetaData[];
#endif
		static void NewProp_bMipmapGenerateMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMipmapGenerateMode;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateOutlineMaterial_MetaData[];
#endif
		static void NewProp_bGenerateOutlineMaterial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateOutlineMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMergeMaterial_MetaData[];
#endif
		static void NewProp_bMergeMaterial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergeMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMergePrimitive_MetaData[];
#endif
		static void NewProp_bMergePrimitive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMergePrimitive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOptimizeVertex_MetaData[];
#endif
		static void NewProp_bOptimizeVertex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptimizeVertex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRemoveDegenerateTriangles_MetaData[];
#endif
		static void NewProp_bRemoveDegenerateTriangles_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemoveDegenerateTriangles;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportOptionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImportOptionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImportOptionData>();
	}
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_MaterialType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_MaterialType_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_MaterialType = { "MaterialType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImportOptionData, MaterialType), Z_Construct_UEnum_VRM4U_EVRMImportMaterialType, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_MaterialType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_MaterialType_MetaData)) }; // 3535535558
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_ModelScale_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_ModelScale = { "ModelScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImportOptionData, ModelScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_ModelScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_ModelScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImportOptionData, FrameRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_FrameRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bVrm10RemoveLocalRotation_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bVrm10RemoveLocalRotation_SetBit(void* Obj)
	{
		((FImportOptionData*)Obj)->bVrm10RemoveLocalRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bVrm10RemoveLocalRotation = { "bVrm10RemoveLocalRotation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bVrm10RemoveLocalRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bVrm10RemoveLocalRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bVrm10RemoveLocalRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateHumanoidRenamedMesh_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateHumanoidRenamedMesh_SetBit(void* Obj)
	{
		((FImportOptionData*)Obj)->bGenerateHumanoidRenamedMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateHumanoidRenamedMesh = { "bGenerateHumanoidRenamedMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateHumanoidRenamedMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateHumanoidRenamedMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateHumanoidRenamedMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateIKBone_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateIKBone_SetBit(void* Obj)
	{
		((FImportOptionData*)Obj)->bGenerateIKBone = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateIKBone = { "bGenerateIKBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateIKBone_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateIKBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateIKBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveBlendShapeGroupPrefix_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveBlendShapeGroupPrefix_SetBit(void* Obj)
	{
		((FImportOptionData*)Obj)->bRemoveBlendShapeGroupPrefix = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveBlendShapeGroupPrefix = { "bRemoveBlendShapeGroupPrefix", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveBlendShapeGroupPrefix_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveBlendShapeGroupPrefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveBlendShapeGroupPrefix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bForceOpaque_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bForceOpaque_SetBit(void* Obj)
	{
		((FImportOptionData*)Obj)->bForceOpaque = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bForceOpaque = { "bForceOpaque", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bForceOpaque_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bForceOpaque_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bForceOpaque_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bForceTwoSided_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bForceTwoSided_SetBit(void* Obj)
	{
		((FImportOptionData*)Obj)->bForceTwoSided = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bForceTwoSided = { "bForceTwoSided", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bForceTwoSided_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bForceTwoSided_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bForceTwoSided_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bBC7Mode_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bBC7Mode_SetBit(void* Obj)
	{
		((FImportOptionData*)Obj)->bBC7Mode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bBC7Mode = { "bBC7Mode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bBC7Mode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bBC7Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bBC7Mode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMipmapGenerateMode_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMipmapGenerateMode_SetBit(void* Obj)
	{
		((FImportOptionData*)Obj)->bMipmapGenerateMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMipmapGenerateMode = { "bMipmapGenerateMode", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMipmapGenerateMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMipmapGenerateMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMipmapGenerateMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateOutlineMaterial_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateOutlineMaterial_SetBit(void* Obj)
	{
		((FImportOptionData*)Obj)->bGenerateOutlineMaterial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateOutlineMaterial = { "bGenerateOutlineMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateOutlineMaterial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateOutlineMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateOutlineMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMergeMaterial_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMergeMaterial_SetBit(void* Obj)
	{
		((FImportOptionData*)Obj)->bMergeMaterial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMergeMaterial = { "bMergeMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMergeMaterial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMergeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMergeMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMergePrimitive_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMergePrimitive_SetBit(void* Obj)
	{
		((FImportOptionData*)Obj)->bMergePrimitive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMergePrimitive = { "bMergePrimitive", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMergePrimitive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMergePrimitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMergePrimitive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bOptimizeVertex_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bOptimizeVertex_SetBit(void* Obj)
	{
		((FImportOptionData*)Obj)->bOptimizeVertex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bOptimizeVertex = { "bOptimizeVertex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bOptimizeVertex_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bOptimizeVertex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bOptimizeVertex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveDegenerateTriangles_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveDegenerateTriangles_SetBit(void* Obj)
	{
		((FImportOptionData*)Obj)->bRemoveDegenerateTriangles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveDegenerateTriangles = { "bRemoveDegenerateTriangles", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveDegenerateTriangles_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveDegenerateTriangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveDegenerateTriangles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_Skeleton_MetaData[] = {
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FImportOptionData, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_Skeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_Skeleton_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImportOptionData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_MaterialType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_MaterialType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_ModelScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_FrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bVrm10RemoveLocalRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateHumanoidRenamedMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateIKBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveBlendShapeGroupPrefix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bForceOpaque,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bForceTwoSided,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bBC7Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMipmapGenerateMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateOutlineMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMergeMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMergePrimitive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bOptimizeVertex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveDegenerateTriangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_Skeleton,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImportOptionData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"ImportOptionData",
		sizeof(FImportOptionData),
		alignof(FImportOptionData),
		Z_Construct_UScriptStruct_FImportOptionData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FImportOptionData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FImportOptionData()
	{
		if (!Z_Registration_Info_UScriptStruct_ImportOptionData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ImportOptionData.InnerSingleton, Z_Construct_UScriptStruct_FImportOptionData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ImportOptionData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmUtil_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmUtil_h_Statics::EnumInfo[] = {
		{ EVRMImportMaterialType_StaticEnum, TEXT("EVRMImportMaterialType"), &Z_Registration_Info_UEnum_EVRMImportMaterialType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3535535558U) },
		{ EVRMImportTextureCompressType_StaticEnum, TEXT("EVRMImportTextureCompressType"), &Z_Registration_Info_UEnum_EVRMImportTextureCompressType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 859863024U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmUtil_h_Statics::ScriptStructInfo[] = {
		{ FImportOptionData::StaticStruct, Z_Construct_UScriptStruct_FImportOptionData_Statics::NewStructOps, TEXT("ImportOptionData"), &Z_Registration_Info_UScriptStruct_ImportOptionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FImportOptionData), 724969322U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmUtil_h_372005697(TEXT("/Script/VRM4U"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmUtil_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmUtil_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmUtil_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmUtil_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
