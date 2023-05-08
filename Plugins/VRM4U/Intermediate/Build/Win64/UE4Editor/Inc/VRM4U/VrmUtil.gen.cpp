// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmUtil.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmUtil() {}
// Cross Module References
	VRM4U_API UEnum* Z_Construct_UEnum_VRM4U_EVRMImportTextureCompressType();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	VRM4U_API UEnum* Z_Construct_UEnum_VRM4U_EVRMImportMaterialType();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FImportOptionData();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
// End Cross Module References
	static UEnum* EVRMImportTextureCompressType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRM4U_EVRMImportTextureCompressType, Z_Construct_UPackage__Script_VRM4U(), TEXT("EVRMImportTextureCompressType"));
		}
		return Singleton;
	}
	template<> VRM4U_API UEnum* StaticEnum<EVRMImportTextureCompressType>()
	{
		return EVRMImportTextureCompressType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRMImportTextureCompressType(EVRMImportTextureCompressType_StaticEnum, TEXT("/Script/VRM4U"), TEXT("EVRMImportTextureCompressType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRM4U_EVRMImportTextureCompressType_Hash() { return 447992342U; }
	UEnum* Z_Construct_UEnum_VRM4U_EVRMImportTextureCompressType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRM4U();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRMImportTextureCompressType"), 0, Get_Z_Construct_UEnum_VRM4U_EVRMImportTextureCompressType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRMImportTextureCompressType::VRMITC_Auto", (int64)EVRMImportTextureCompressType::VRMITC_Auto },
				{ "EVRMImportTextureCompressType::VRMITC_DXT1", (int64)EVRMImportTextureCompressType::VRMITC_DXT1 },
				{ "EVRMImportTextureCompressType::VRMITC_BC7", (int64)EVRMImportTextureCompressType::VRMITC_BC7 },
				{ "EVRMImportTextureCompressType::VRMITC_NoCompression", (int64)EVRMImportTextureCompressType::VRMITC_NoCompression },
				{ "EVRMImportTextureCompressType::VRMITC_MAX", (int64)EVRMImportTextureCompressType::VRMITC_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
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
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRM4U,
				nullptr,
				"EVRMImportTextureCompressType",
				"EVRMImportTextureCompressType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EVRMImportMaterialType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRM4U_EVRMImportMaterialType, Z_Construct_UPackage__Script_VRM4U(), TEXT("EVRMImportMaterialType"));
		}
		return Singleton;
	}
	template<> VRM4U_API UEnum* StaticEnum<EVRMImportMaterialType>()
	{
		return EVRMImportMaterialType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRMImportMaterialType(EVRMImportMaterialType_StaticEnum, TEXT("/Script/VRM4U"), TEXT("EVRMImportMaterialType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRM4U_EVRMImportMaterialType_Hash() { return 1692864514U; }
	UEnum* Z_Construct_UEnum_VRM4U_EVRMImportMaterialType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRM4U();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRMImportMaterialType"), 0, Get_Z_Construct_UEnum_VRM4U_EVRMImportMaterialType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
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
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
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
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRM4U,
				nullptr,
				"EVRMImportMaterialType",
				"EVRMImportMaterialType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FImportOptionData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VRM4U_API uint32 Get_Z_Construct_UScriptStruct_FImportOptionData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FImportOptionData, Z_Construct_UPackage__Script_VRM4U(), TEXT("ImportOptionData"), sizeof(FImportOptionData), Get_Z_Construct_UScriptStruct_FImportOptionData_Hash());
	}
	return Singleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FImportOptionData>()
{
	return FImportOptionData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FImportOptionData(FImportOptionData::StaticStruct, TEXT("/Script/VRM4U"), TEXT("ImportOptionData"), false, nullptr, nullptr);
static struct FScriptStruct_VRM4U_StaticRegisterNativesFImportOptionData
{
	FScriptStruct_VRM4U_StaticRegisterNativesFImportOptionData()
	{
		UScriptStruct::DeferCppStructOps<FImportOptionData>(FName(TEXT("ImportOptionData")));
	}
} ScriptStruct_VRM4U_StaticRegisterNativesFImportOptionData;
	struct Z_Construct_UScriptStruct_FImportOptionData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaterialType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MaterialType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModelScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ModelScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FrameRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FrameRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVrm10RemoveLocalRotation_MetaData[];
#endif
		static void NewProp_bVrm10RemoveLocalRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVrm10RemoveLocalRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateHumanoidRenamedMesh_MetaData[];
#endif
		static void NewProp_bGenerateHumanoidRenamedMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateHumanoidRenamedMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateIKBone_MetaData[];
#endif
		static void NewProp_bGenerateIKBone_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateIKBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRemoveBlendShapeGroupPrefix_MetaData[];
#endif
		static void NewProp_bRemoveBlendShapeGroupPrefix_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemoveBlendShapeGroupPrefix;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceOpaque_MetaData[];
#endif
		static void NewProp_bForceOpaque_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceOpaque;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceTwoSided_MetaData[];
#endif
		static void NewProp_bForceTwoSided_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceTwoSided;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBC7Mode_MetaData[];
#endif
		static void NewProp_bBC7Mode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBC7Mode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMipmapGenerateMode_MetaData[];
#endif
		static void NewProp_bMipmapGenerateMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMipmapGenerateMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateOutlineMaterial_MetaData[];
#endif
		static void NewProp_bGenerateOutlineMaterial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateOutlineMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMergeMaterial_MetaData[];
#endif
		static void NewProp_bMergeMaterial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMergeMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bMergePrimitive_MetaData[];
#endif
		static void NewProp_bMergePrimitive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bMergePrimitive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOptimizeVertex_MetaData[];
#endif
		static void NewProp_bOptimizeVertex_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOptimizeVertex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRemoveDegenerateTriangles_MetaData[];
#endif
		static void NewProp_bRemoveDegenerateTriangles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRemoveDegenerateTriangles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportOptionData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FImportOptionData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FImportOptionData>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_MaterialType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_MaterialType_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_MaterialType = { "MaterialType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImportOptionData, MaterialType), Z_Construct_UEnum_VRM4U_EVRMImportMaterialType, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_MaterialType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_MaterialType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_ModelScale_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_ModelScale = { "ModelScale", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImportOptionData, ModelScale), METADATA_PARAMS(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_ModelScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_ModelScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImportOptionData, FrameRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_FrameRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bVrm10RemoveLocalRotation_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bVrm10RemoveLocalRotation_SetBit(void* Obj)
	{
		((FImportOptionData*)Obj)->bVrm10RemoveLocalRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bVrm10RemoveLocalRotation = { "bVrm10RemoveLocalRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bVrm10RemoveLocalRotation_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bVrm10RemoveLocalRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bVrm10RemoveLocalRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateHumanoidRenamedMesh_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateHumanoidRenamedMesh_SetBit(void* Obj)
	{
		((FImportOptionData*)Obj)->bGenerateHumanoidRenamedMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateHumanoidRenamedMesh = { "bGenerateHumanoidRenamedMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateHumanoidRenamedMesh_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateHumanoidRenamedMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateHumanoidRenamedMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateIKBone_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateIKBone_SetBit(void* Obj)
	{
		((FImportOptionData*)Obj)->bGenerateIKBone = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateIKBone = { "bGenerateIKBone", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateIKBone_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateIKBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateIKBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveBlendShapeGroupPrefix_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveBlendShapeGroupPrefix_SetBit(void* Obj)
	{
		((FImportOptionData*)Obj)->bRemoveBlendShapeGroupPrefix = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveBlendShapeGroupPrefix = { "bRemoveBlendShapeGroupPrefix", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveBlendShapeGroupPrefix_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveBlendShapeGroupPrefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveBlendShapeGroupPrefix_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bForceOpaque_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bForceOpaque_SetBit(void* Obj)
	{
		((FImportOptionData*)Obj)->bForceOpaque = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bForceOpaque = { "bForceOpaque", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bForceOpaque_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bForceOpaque_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bForceOpaque_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bForceTwoSided_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bForceTwoSided_SetBit(void* Obj)
	{
		((FImportOptionData*)Obj)->bForceTwoSided = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bForceTwoSided = { "bForceTwoSided", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bForceTwoSided_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bForceTwoSided_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bForceTwoSided_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bBC7Mode_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bBC7Mode_SetBit(void* Obj)
	{
		((FImportOptionData*)Obj)->bBC7Mode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bBC7Mode = { "bBC7Mode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bBC7Mode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bBC7Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bBC7Mode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMipmapGenerateMode_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMipmapGenerateMode_SetBit(void* Obj)
	{
		((FImportOptionData*)Obj)->bMipmapGenerateMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMipmapGenerateMode = { "bMipmapGenerateMode", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMipmapGenerateMode_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMipmapGenerateMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMipmapGenerateMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateOutlineMaterial_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateOutlineMaterial_SetBit(void* Obj)
	{
		((FImportOptionData*)Obj)->bGenerateOutlineMaterial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateOutlineMaterial = { "bGenerateOutlineMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateOutlineMaterial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateOutlineMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateOutlineMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMergeMaterial_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMergeMaterial_SetBit(void* Obj)
	{
		((FImportOptionData*)Obj)->bMergeMaterial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMergeMaterial = { "bMergeMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMergeMaterial_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMergeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMergeMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMergePrimitive_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMergePrimitive_SetBit(void* Obj)
	{
		((FImportOptionData*)Obj)->bMergePrimitive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMergePrimitive = { "bMergePrimitive", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMergePrimitive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMergePrimitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMergePrimitive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bOptimizeVertex_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bOptimizeVertex_SetBit(void* Obj)
	{
		((FImportOptionData*)Obj)->bOptimizeVertex = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bOptimizeVertex = { "bOptimizeVertex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bOptimizeVertex_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bOptimizeVertex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bOptimizeVertex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveDegenerateTriangles_MetaData[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveDegenerateTriangles_SetBit(void* Obj)
	{
		((FImportOptionData*)Obj)->bRemoveDegenerateTriangles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveDegenerateTriangles = { "bRemoveDegenerateTriangles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FImportOptionData), &Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveDegenerateTriangles_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveDegenerateTriangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveDegenerateTriangles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_Skeleton_MetaData[] = {
		{ "ModuleRelativePath", "Public/VrmUtil.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FImportOptionData, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_Skeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_Skeleton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FImportOptionData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_MaterialType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_MaterialType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_ModelScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_FrameRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bVrm10RemoveLocalRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateHumanoidRenamedMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateIKBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveBlendShapeGroupPrefix,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bForceOpaque,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bForceTwoSided,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bBC7Mode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMipmapGenerateMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bGenerateOutlineMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMergeMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bMergePrimitive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bOptimizeVertex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_bRemoveDegenerateTriangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FImportOptionData_Statics::NewProp_Skeleton,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FImportOptionData_Statics::ReturnStructParams = {
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
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FImportOptionData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRM4U();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ImportOptionData"), sizeof(FImportOptionData), Get_Z_Construct_UScriptStruct_FImportOptionData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FImportOptionData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FImportOptionData_Hash() { return 2834276291U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
