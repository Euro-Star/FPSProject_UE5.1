// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4UImporter/Private/VrmImportUI.h"
#include "VRM4U/Public/VrmUtil.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmImportUI() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VRM4UImporter();
	VRM4U_API UEnum* Z_Construct_UEnum_VRM4U_EVRMImportMaterialType();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FImportOptionData();
	VRM4UIMPORTER_API UClass* Z_Construct_UClass_UVrmImportUI();
	VRM4UIMPORTER_API UClass* Z_Construct_UClass_UVrmImportUI_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVrmImportUI::execResetToDefault)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetToDefault();
		P_NATIVE_END;
	}
	void UVrmImportUI::StaticRegisterNativesUVrmImportUI()
	{
		UClass* Class = UVrmImportUI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ResetToDefault", &UVrmImportUI::execResetToDefault },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVrmImportUI_ResetToDefault_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmImportUI_ResetToDefault_Statics::Function_MetaDataParams[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmImportUI_ResetToDefault_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmImportUI, nullptr, "ResetToDefault", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmImportUI_ResetToDefault_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmImportUI_ResetToDefault_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmImportUI_ResetToDefault()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmImportUI_ResetToDefault_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrmImportUI);
	UClass* Z_Construct_UClass_UVrmImportUI_NoRegister()
	{
		return UVrmImportUI::StaticClass();
	}
	struct Z_Construct_UClass_UVrmImportUI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Thumbnail_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Thumbnail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TitleAuthor_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_TitleAuthor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAPoseRetarget_MetaData[];
#endif
		static void NewProp_bAPoseRetarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAPoseRetarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bMobileBone_MetaData[];
#endif
		static void NewProp_bMobileBone_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMobileBone;
		static const UECodeGen_Private::FBytePropertyParams NewProp_MaterialType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaterialType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_MaterialType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateOutlineMaterial_MetaData[];
#endif
		static void NewProp_bGenerateOutlineMaterial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateOutlineMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bForceOverride_MetaData[];
#endif
		static void NewProp_bForceOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceOverride;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bVrm10Bindpose_MetaData[];
#endif
		static void NewProp_bVrm10Bindpose_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVrm10Bindpose;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGenerateRigIK_MetaData[];
#endif
		static void NewProp_bGenerateRigIK_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGenerateRigIK;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipPhysics_MetaData[];
#endif
		static void NewProp_bSkipPhysics_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipPhysics;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSkipMorphTarget_MetaData[];
#endif
		static void NewProp_bSkipMorphTarget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipMorphTarget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bEnableMorphTargetNormal_MetaData[];
#endif
		static void NewProp_bEnableMorphTargetNormal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableMorphTargetNormal;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStrictMorphTargetNameMode_MetaData[];
#endif
		static void NewProp_bStrictMorphTargetNameMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStrictMorphTargetNameMode;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSingleUAssetFile_MetaData[];
#endif
		static void NewProp_bSingleUAssetFile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSingleUAssetFile;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDefaultGridTextureMode_MetaData[];
#endif
		static void NewProp_bDefaultGridTextureMode_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDefaultGridTextureMode;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOptimizeMaterial_MetaData[];
#endif
		static void NewProp_bOptimizeMaterial_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOptimizeMaterial;
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BoneWeightInfluenceNum_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_BoneWeightInfluenceNum;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSimpleRoot_MetaData[];
#endif
		static void NewProp_bSimpleRoot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSimpleRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDebugOneBone_MetaData[];
#endif
		static void NewProp_bDebugOneBone_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDebugOneBone;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Skeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Skeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_allowedUserName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_allowedUserName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_violentUsageName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_violentUsageName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sexualUsageName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_sexualUsageName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_commercialUsageName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_commercialUsageName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_otherPermissionUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_otherPermissionUrl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_licenseName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_licenseName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_otherLicenseUrl_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_otherLicenseUrl;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrmImportUI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4UImporter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVrmImportUI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVrmImportUI_ResetToDefault, "ResetToDefault" }, // 489891300
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "FTransform" },
		{ "HideCategories", "Object" },
		{ "IncludePath", "VrmImportUI.h" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_Thumbnail_MetaData[] = {
		{ "Category", "Mesh" },
		{ "DisplayName", "Thumbnail" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_Thumbnail = { "Thumbnail", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmImportUI, Thumbnail), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_Thumbnail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_Thumbnail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_TitleAuthor_MetaData[] = {
		{ "Category", "Mesh" },
		{ "DisplayName", "VRM Title / Author" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_TitleAuthor = { "TitleAuthor", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmImportUI, TitleAuthor), METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_TitleAuthor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_TitleAuthor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bAPoseRetarget_MetaData[] = {
		{ "Category", "Mesh" },
		{ "DisplayName", "A-pose(Off to T-pose)" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bAPoseRetarget_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bAPoseRetarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bAPoseRetarget = { "bAPoseRetarget", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bAPoseRetarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bAPoseRetarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bAPoseRetarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMobileBone_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** for Mobile. Import root bone only */" },
		{ "DisplayName", "Reduce bonemap<=75 for mobile" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "for Mobile. Import root bone only" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMobileBone_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bMobileBone = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMobileBone = { "bMobileBone", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMobileBone_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMobileBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMobileBone_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_MaterialType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_MaterialType_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Materal Type */" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Materal Type" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_MaterialType = { "MaterialType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmImportUI, MaterialType), Z_Construct_UEnum_VRM4U_EVRMImportMaterialType, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_MaterialType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_MaterialType_MetaData)) }; // 3535535558
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateOutlineMaterial_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Outline Material*/" },
		{ "DisplayName", "GenerateOutlineMaterial" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Outline Material" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateOutlineMaterial_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bGenerateOutlineMaterial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateOutlineMaterial = { "bGenerateOutlineMaterial", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateOutlineMaterial_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateOutlineMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateOutlineMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceOverride_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Force Override */" },
		{ "DisplayName", "Force Override (as New Asset)" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Force Override" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceOverride_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bForceOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceOverride = { "bForceOverride", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceOverride_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_ModelScale_MetaData[] = {
		{ "Category", "Mesh" },
		{ "DisplayName", "Model scale" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_ModelScale = { "ModelScale", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmImportUI, ModelScale), METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_ModelScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_ModelScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_FrameRate_MetaData[] = {
		{ "Category", "Mesh" },
		{ "DisplayName", "Animation Frame Rate" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_FrameRate = { "FrameRate", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmImportUI, FrameRate), METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_FrameRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_FrameRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bVrm10RemoveLocalRotation_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Remove Local Rotation for VRM10 */" },
		{ "DisplayName", "VRM10 Remove Local Rotation" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Remove Local Rotation for VRM10" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bVrm10RemoveLocalRotation_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bVrm10RemoveLocalRotation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bVrm10RemoveLocalRotation = { "bVrm10RemoveLocalRotation", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bVrm10RemoveLocalRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bVrm10RemoveLocalRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bVrm10RemoveLocalRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bVrm10Bindpose_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Use Bindpose for VRM10 */" },
		{ "DisplayName", "VRM10 Bindpose" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Use Bindpose for VRM10" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bVrm10Bindpose_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bVrm10Bindpose = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bVrm10Bindpose = { "bVrm10Bindpose", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bVrm10Bindpose_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bVrm10Bindpose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bVrm10Bindpose_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateHumanoidRenamedMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Duplicate mesh and renamed humanoid bone */" },
		{ "DisplayName", "Generate renamed humanoid mesh" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Duplicate mesh and renamed humanoid bone" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateHumanoidRenamedMesh_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bGenerateHumanoidRenamedMesh = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateHumanoidRenamedMesh = { "bGenerateHumanoidRenamedMesh", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateHumanoidRenamedMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateHumanoidRenamedMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateHumanoidRenamedMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateIKBone_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Add IK Bone */" },
		{ "DisplayName", "Generate IK Bone" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Add IK Bone" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateIKBone_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bGenerateIKBone = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateIKBone = { "bGenerateIKBone", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateIKBone_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateIKBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateIKBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateRigIK_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Add RigIK asset*/" },
		{ "DisplayName", "Generate RigIK Asset" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Add RigIK asset" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateRigIK_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bGenerateRigIK = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateRigIK = { "bGenerateRigIK", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateRigIK_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateRigIK_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateRigIK_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSkipPhysics_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Remove Physics asset */" },
		{ "DisplayName", "No physics asset" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Remove Physics asset" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSkipPhysics_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bSkipPhysics = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSkipPhysics = { "bSkipPhysics", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSkipPhysics_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSkipPhysics_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSkipPhysics_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSkipMorphTarget_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Remove MorphTarget */" },
		{ "DisplayName", "No MorphTarget" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Remove MorphTarget" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSkipMorphTarget_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bSkipMorphTarget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSkipMorphTarget = { "bSkipMorphTarget", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSkipMorphTarget_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSkipMorphTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSkipMorphTarget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bEnableMorphTargetNormal_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Use MorphTarget Normal */" },
		{ "DisplayName", "Eable MorphTarget Normal(TangentZDelta)" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Use MorphTarget Normal" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bEnableMorphTargetNormal_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bEnableMorphTargetNormal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bEnableMorphTargetNormal = { "bEnableMorphTargetNormal", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bEnableMorphTargetNormal_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bEnableMorphTargetNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bEnableMorphTargetNormal_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bStrictMorphTargetNameMode_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Use Strict MorphTarget Name Mode */" },
		{ "DisplayName", "**UE5EA** controlrig work around: Eable MorphTarget Name Check" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Use Strict MorphTarget Name Mode" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bStrictMorphTargetNameMode_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bStrictMorphTargetNameMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bStrictMorphTargetNameMode = { "bStrictMorphTargetNameMode", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bStrictMorphTargetNameMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bStrictMorphTargetNameMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bStrictMorphTargetNameMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bRemoveBlendShapeGroupPrefix_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Use Strict MorphTarget Name Mode */" },
		{ "DisplayName", "Remove BlendShapeGroup prefix for old VRM file" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Use Strict MorphTarget Name Mode" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bRemoveBlendShapeGroupPrefix_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bRemoveBlendShapeGroupPrefix = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bRemoveBlendShapeGroupPrefix = { "bRemoveBlendShapeGroupPrefix", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bRemoveBlendShapeGroupPrefix_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bRemoveBlendShapeGroupPrefix_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bRemoveBlendShapeGroupPrefix_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceOpaque_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Use Opaque insted of translucent */" },
		{ "DisplayName", "Force Opaque" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Use Opaque insted of translucent" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceOpaque_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bForceOpaque = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceOpaque = { "bForceOpaque", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceOpaque_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceOpaque_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceOpaque_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceTwoSided_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Use TwoSided */" },
		{ "DisplayName", "Force TwoSided" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Use TwoSided" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceTwoSided_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bForceTwoSided = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceTwoSided = { "bForceTwoSided", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceTwoSided_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceTwoSided_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceTwoSided_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSingleUAssetFile_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Save as single uasset file */" },
		{ "DisplayName", "Single uasset file" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Save as single uasset file" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSingleUAssetFile_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bSingleUAssetFile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSingleUAssetFile = { "bSingleUAssetFile", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSingleUAssetFile_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSingleUAssetFile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSingleUAssetFile_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDefaultGridTextureMode_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Use GridTexture by Default */" },
		{ "DisplayName", "[Texture] Use DummyGrid by DefaultBaseTexture" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Use GridTexture by Default" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDefaultGridTextureMode_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bDefaultGridTextureMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDefaultGridTextureMode = { "bDefaultGridTextureMode", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDefaultGridTextureMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDefaultGridTextureMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDefaultGridTextureMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bBC7Mode_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Use BC7 */" },
		{ "DisplayName", "[Texture] Use BC7 for BaseTexture" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Use BC7" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bBC7Mode_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bBC7Mode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bBC7Mode = { "bBC7Mode", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bBC7Mode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bBC7Mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bBC7Mode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMipmapGenerateMode_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Generate mipmap (be careful of MatCap texture)*/" },
		{ "DisplayName", "[Texture] Generate Mipmap" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Generate mipmap (be careful of MatCap texture)" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMipmapGenerateMode_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bMipmapGenerateMode = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMipmapGenerateMode = { "bMipmapGenerateMode", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMipmapGenerateMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMipmapGenerateMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMipmapGenerateMode_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMergeMaterial_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Merge material using same parameter */" },
		{ "DisplayName", "[Optimize] Merge material" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Merge material using same parameter" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMergeMaterial_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bMergeMaterial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMergeMaterial = { "bMergeMaterial", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMergeMaterial_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMergeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMergeMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMergePrimitive_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Merge primitives using same material */" },
		{ "DisplayName", "[Optimize] Merge primitive" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Merge primitives using same material" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMergePrimitive_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bMergePrimitive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMergePrimitive = { "bMergePrimitive", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMergePrimitive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMergePrimitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMergePrimitive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bOptimizeMaterial_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Use optimized MaterialInstance */" },
		{ "DisplayName", "[Optimize] use opt material" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Use optimized MaterialInstance" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bOptimizeMaterial_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bOptimizeMaterial = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bOptimizeMaterial = { "bOptimizeMaterial", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bOptimizeMaterial_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bOptimizeMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bOptimizeMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bOptimizeVertex_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Remove unused vertex */" },
		{ "DisplayName", "[Optimize] remove unused vertex" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Remove unused vertex" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bOptimizeVertex_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bOptimizeVertex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bOptimizeVertex = { "bOptimizeVertex", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bOptimizeVertex_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bOptimizeVertex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bOptimizeVertex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bRemoveDegenerateTriangles_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Remove degenerate triangles */" },
		{ "DisplayName", "[Optimize] remove degenerate triangles" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Remove degenerate triangles" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bRemoveDegenerateTriangles_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bRemoveDegenerateTriangles = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bRemoveDegenerateTriangles = { "bRemoveDegenerateTriangles", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bRemoveDegenerateTriangles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bRemoveDegenerateTriangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bRemoveDegenerateTriangles_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_BoneWeightInfluenceNum_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** BoneWeight influence */" },
		{ "DisplayName", "[Optimize] Bone Weight Influence Num" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "BoneWeight influence" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_BoneWeightInfluenceNum = { "BoneWeightInfluenceNum", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmImportUI, BoneWeightInfluenceNum), METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_BoneWeightInfluenceNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_BoneWeightInfluenceNum_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSimpleRoot_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Remove bone has no mesh */" },
		{ "DisplayName", "[Optimize] Remove bone used DCC tool" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Remove bone has no mesh" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSimpleRoot_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bSimpleRoot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSimpleRoot = { "bSimpleRoot", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSimpleRoot_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSimpleRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSimpleRoot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDebugOneBone_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** for DEBUG. Import root bone only */" },
		{ "DisplayName", "[Debug] One bone only" },
		{ "ImportType", "StaticMesh|SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "for DEBUG. Import root bone only" },
	};
#endif
	void Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDebugOneBone_SetBit(void* Obj)
	{
		((UVrmImportUI*)Obj)->bDebugOneBone = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDebugOneBone = { "bDebugOneBone", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVrmImportUI), &Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDebugOneBone_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDebugOneBone_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDebugOneBone_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_Skeleton_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Skeleton to use for imported asset. When importing a mesh, leaving this as \"None\" will create a new skeleton. When importing an animation this MUST be specified to import the asset. */" },
		{ "ImportType", "SkeletalMesh" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
		{ "ToolTip", "Skeleton to use for imported asset. When importing a mesh, leaving this as \"None\" will create a new skeleton. When importing an animation this MUST be specified to import the asset." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_Skeleton = { "Skeleton", nullptr, (EPropertyFlags)0x0010040000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmImportUI, Skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_Skeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_Skeleton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_allowedUserName_MetaData[] = {
		{ "Category", "License_Personation/CharacterizationPermission" },
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_allowedUserName = { "allowedUserName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmImportUI, allowedUserName), METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_allowedUserName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_allowedUserName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_violentUsageName_MetaData[] = {
		{ "Category", "License_Personation/CharacterizationPermission" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_violentUsageName = { "violentUsageName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmImportUI, violentUsageName), METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_violentUsageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_violentUsageName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_sexualUsageName_MetaData[] = {
		{ "Category", "License_Personation/CharacterizationPermission" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_sexualUsageName = { "sexualUsageName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmImportUI, sexualUsageName), METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_sexualUsageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_sexualUsageName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_commercialUsageName_MetaData[] = {
		{ "Category", "License_Personation/CharacterizationPermission" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_commercialUsageName = { "commercialUsageName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmImportUI, commercialUsageName), METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_commercialUsageName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_commercialUsageName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_otherPermissionUrl_MetaData[] = {
		{ "Category", "License_Personation/CharacterizationPermission" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_otherPermissionUrl = { "otherPermissionUrl", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmImportUI, otherPermissionUrl), METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_otherPermissionUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_otherPermissionUrl_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_licenseName_MetaData[] = {
		{ "Category", "License_Redistribution/ModificationsLicense" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_licenseName = { "licenseName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmImportUI, licenseName), METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_licenseName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_licenseName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_otherLicenseUrl_MetaData[] = {
		{ "Category", "License_Redistribution/ModificationsLicense" },
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_otherLicenseUrl = { "otherLicenseUrl", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmImportUI, otherLicenseUrl), METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_otherLicenseUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_otherLicenseUrl_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportUI_Statics::NewProp_data_MetaData[] = {
		{ "ModuleRelativePath", "Private/VrmImportUI.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmImportUI_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmImportUI, data), Z_Construct_UScriptStruct_FImportOptionData, METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::NewProp_data_MetaData)) }; // 724969322
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmImportUI_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_Thumbnail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_TitleAuthor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bAPoseRetarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMobileBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_MaterialType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_MaterialType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateOutlineMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_ModelScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_FrameRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bVrm10RemoveLocalRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bVrm10Bindpose,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateHumanoidRenamedMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateIKBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bGenerateRigIK,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSkipPhysics,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSkipMorphTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bEnableMorphTargetNormal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bStrictMorphTargetNameMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bRemoveBlendShapeGroupPrefix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceOpaque,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bForceTwoSided,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSingleUAssetFile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDefaultGridTextureMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bBC7Mode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMipmapGenerateMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMergeMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bMergePrimitive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bOptimizeMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bOptimizeVertex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bRemoveDegenerateTriangles,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_BoneWeightInfluenceNum,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bSimpleRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_bDebugOneBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_Skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_allowedUserName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_violentUsageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_sexualUsageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_commercialUsageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_otherPermissionUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_licenseName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_otherLicenseUrl,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportUI_Statics::NewProp_data,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmImportUI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmImportUI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrmImportUI_Statics::ClassParams = {
		&UVrmImportUI::StaticClass,
		"EditorPerProjectUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVrmImportUI_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::PropPointers),
		0,
		0x000800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVrmImportUI_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportUI_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVrmImportUI()
	{
		if (!Z_Registration_Info_UClass_UVrmImportUI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrmImportUI.OuterSingleton, Z_Construct_UClass_UVrmImportUI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVrmImportUI.OuterSingleton;
	}
	template<> VRM4UIMPORTER_API UClass* StaticClass<UVrmImportUI>()
	{
		return UVrmImportUI::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmImportUI);
	UVrmImportUI::~UVrmImportUI() {}
	struct Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4UImporter_Private_VrmImportUI_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4UImporter_Private_VrmImportUI_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVrmImportUI, UVrmImportUI::StaticClass, TEXT("UVrmImportUI"), &Z_Registration_Info_UClass_UVrmImportUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrmImportUI), 618404523U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4UImporter_Private_VrmImportUI_h_1167740451(TEXT("/Script/VRM4UImporter"),
		Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4UImporter_Private_VrmImportUI_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4UImporter_Private_VrmImportUI_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
