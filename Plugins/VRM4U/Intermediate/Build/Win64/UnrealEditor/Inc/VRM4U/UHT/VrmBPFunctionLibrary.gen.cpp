// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmBPFunctionLibrary.h"
#include "CinematicCamera/Public/CineCameraSettings.h"
#include "Engine/Classes/Engine/Scene.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmBPFunctionLibrary() {}
// Cross Module References
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent_NoRegister();
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraFilmbackSettings();
	CINEMATICCAMERA_API UScriptStruct* Z_Construct_UScriptStruct_FCameraTrackingFocusSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_ULightComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceConstant_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextureRenderTarget2D_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EBlendMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMaterialShadingModel();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETextureRenderTargetFormat();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPostProcessSettings();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	VRM4U_API UClass* Z_Construct_UClass_UVrmBPFunctionLibrary();
	VRM4U_API UClass* Z_Construct_UClass_UVrmBPFunctionLibrary_NoRegister();
	VRM4U_API UEnum* Z_Construct_UEnum_VRM4U_EVRMWidgetMode();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRMWidgetMode;
	static UEnum* EVRMWidgetMode_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVRMWidgetMode.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVRMWidgetMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRM4U_EVRMWidgetMode, Z_Construct_UPackage__Script_VRM4U(), TEXT("EVRMWidgetMode"));
		}
		return Z_Registration_Info_UEnum_EVRMWidgetMode.OuterSingleton;
	}
	template<> VRM4U_API UEnum* StaticEnum<EVRMWidgetMode>()
	{
		return EVRMWidgetMode_StaticEnum();
	}
	struct Z_Construct_UEnum_VRM4U_EVRMWidgetMode_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRM4U_EVRMWidgetMode_Statics::Enumerators[] = {
		{ "EVRMWidgetMode::WM_Translate", (int64)EVRMWidgetMode::WM_Translate },
		{ "EVRMWidgetMode::WM_Rotate", (int64)EVRMWidgetMode::WM_Rotate },
		{ "EVRMWidgetMode::WM_Scale", (int64)EVRMWidgetMode::WM_Scale },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRM4U_EVRMWidgetMode_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
		{ "WM_Rotate.Name", "EVRMWidgetMode::WM_Rotate" },
		{ "WM_Scale.Name", "EVRMWidgetMode::WM_Scale" },
		{ "WM_Translate.Name", "EVRMWidgetMode::WM_Translate" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRM4U_EVRMWidgetMode_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		"EVRMWidgetMode",
		"EVRMWidgetMode",
		Z_Construct_UEnum_VRM4U_EVRMWidgetMode_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRM4U_EVRMWidgetMode_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VRM4U_EVRMWidgetMode_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VRM4U_EVRMWidgetMode_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VRM4U_EVRMWidgetMode()
	{
		if (!Z_Registration_Info_UEnum_EVRMWidgetMode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRMWidgetMode.InnerSingleton, Z_Construct_UEnum_VRM4U_EVRMWidgetMode_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVRMWidgetMode.InnerSingleton;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMGetTopLevelAssetName)
	{
		P_GET_STRUCT_REF(FAssetData,Z_Param_Out_target);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_AssetName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMGetTopLevelAssetName(Z_Param_Out_target,Z_Param_Out_AssetName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMGetSkeletalMeshFromSkinnedMeshComponent)
	{
		P_GET_OBJECT(USkinnedMeshComponent,Z_Param_target);
		P_GET_OBJECT_REF(USkeletalMesh,Z_Param_Out_skeletalmesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMGetSkeletalMeshFromSkinnedMeshComponent(Z_Param_target,Z_Param_Out_skeletalmesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMGetPreviewMesh)
	{
		P_GET_OBJECT(UObject,Z_Param_target);
		P_GET_OBJECT_REF(USkeletalMesh,Z_Param_Out_mesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMGetPreviewMesh(Z_Param_target,Z_Param_Out_mesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMGetIKRigDefinition)
	{
		P_GET_OBJECT(UObject,Z_Param_retargeter);
		P_GET_OBJECT_REF(UObject,Z_Param_Out_src);
		P_GET_OBJECT_REF(UObject,Z_Param_Out_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMGetIKRigDefinition(Z_Param_retargeter,Z_Param_Out_src,Z_Param_Out_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMSetPerBoneMotionBlur)
	{
		P_GET_OBJECT(USkinnedMeshComponent,Z_Param_SkinnedMesh);
		P_GET_UBOOL(Z_Param_bUsePerBoneMotionBlur);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMSetPerBoneMotionBlur(Z_Param_SkinnedMesh,Z_Param_bUsePerBoneMotionBlur);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMGetRigNodeNameFromBoneName)
	{
		P_GET_OBJECT(USkeleton,Z_Param_skeleton);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_boneName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_RigNodeName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMGetRigNodeNameFromBoneName(Z_Param_skeleton,Z_Param_Out_boneName,Z_Param_Out_RigNodeName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMGetUEVersion)
	{
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_major);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_minor);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_patch);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMGetUEVersion(Z_Param_Out_major,Z_Param_Out_minor,Z_Param_Out_patch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMGetAllActorsHasSceneComponent)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UClass,Z_Param_UObjectClass);
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_OutActors);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMGetAllActorsHasSceneComponent(Z_Param_WorldContextObject,Z_Param_UObjectClass,Z_Param_Out_OutActors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMBakeAnim)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_skc);
		P_GET_PROPERTY(FStrProperty,Z_Param_FilePath);
		P_GET_PROPERTY(FStrProperty,Z_Param_AssetFileName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVrmBPFunctionLibrary::VRMBakeAnim(Z_Param_skc,Z_Param_FilePath,Z_Param_AssetFileName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMSetWidgetMode)
	{
		P_GET_ENUM(EVRMWidgetMode,Z_Param_mode);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMSetWidgetMode(EVRMWidgetMode(Z_Param_mode));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMAllowTranslucentSelection)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMAllowTranslucentSelection(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMAddTickPrerequisite)
	{
		P_GET_OBJECT(UActorComponent,Z_Param_dst);
		P_GET_OBJECT(UActorComponent,Z_Param_src);
		P_GET_UBOOL(Z_Param_bRemove);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVrmBPFunctionLibrary::VRMAddTickPrerequisite(Z_Param_dst,Z_Param_src,Z_Param_bRemove);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMSetTransparentWindow)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_GET_STRUCT(FLinearColor,Z_Param_crKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVrmBPFunctionLibrary::VRMSetTransparentWindow(Z_Param_bEnable,Z_Param_crKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMExecuteConsoleCommand)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FStrProperty,Z_Param_cmd);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMExecuteConsoleCommand(Z_Param_WorldContextObject,Z_Param_cmd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMGetAnimationAssetData)
	{
		P_GET_OBJECT(UAnimationAsset,Z_Param_animAsset);
		P_GET_OBJECT_REF(USkeleton,Z_Param_Out_skeleton);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVrmBPFunctionLibrary::VRMGetAnimationAssetData(Z_Param_animAsset,Z_Param_Out_skeleton);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMGetPlayMode)
	{
		P_GET_UBOOL_REF(Z_Param_Out_bPlay);
		P_GET_UBOOL_REF(Z_Param_Out_bSIE);
		P_GET_UBOOL_REF(Z_Param_Out_bIsEditor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMGetPlayMode(Z_Param_Out_bPlay,Z_Param_Out_bSIE,Z_Param_Out_bIsEditor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMGetCameraTransform)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayerIndex);
		P_GET_UBOOL(Z_Param_bGameOnly);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_transform);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_fovDegree);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMGetCameraTransform(Z_Param_WorldContextObject,Z_Param_PlayerIndex,Z_Param_bGameOnly,Z_Param_Out_transform,Z_Param_Out_fovDegree);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMSetActorLabel)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FStrProperty,Z_Param_NewActorLabel);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMSetActorLabel(Z_Param_Actor,Z_Param_NewActorLabel);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMMakeCameraTrackingFocusSettings)
	{
		P_GET_OBJECT(AActor,Z_Param_ActorToTrack);
		P_GET_STRUCT(FVector,Z_Param_RelativeOffset);
		P_GET_UBOOL(Z_Param_bDrawDebugTrackingFocusPoint);
		P_GET_STRUCT_REF(FCameraTrackingFocusSettings,Z_Param_Out_Settings);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMMakeCameraTrackingFocusSettings(Z_Param_ActorToTrack,Z_Param_RelativeOffset,Z_Param_bDrawDebugTrackingFocusPoint,Z_Param_Out_Settings);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMSetPostProcessToneCurveAmount)
	{
		P_GET_STRUCT_REF(FPostProcessSettings,Z_Param_Out_OutSettings);
		P_GET_STRUCT_REF(FPostProcessSettings,Z_Param_Out_InSettings);
		P_GET_UBOOL(Z_Param_bOverride);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMSetPostProcessToneCurveAmount(Z_Param_Out_OutSettings,Z_Param_Out_InSettings,Z_Param_bOverride,Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMSetPostProcessSettingFromCineCamera)
	{
		P_GET_STRUCT_REF(FPostProcessSettings,Z_Param_Out_OutSettings);
		P_GET_STRUCT_REF(FPostProcessSettings,Z_Param_Out_InSettings);
		P_GET_OBJECT(UCineCameraComponent,Z_Param_CineCamera);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVrmBPFunctionLibrary::VRMSetPostProcessSettingFromCineCamera(Z_Param_Out_OutSettings,Z_Param_Out_InSettings,Z_Param_CineCamera);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMSetCameraFilmback)
	{
		P_GET_OBJECT(UCineCameraComponent,Z_Param_CineCamera);
		P_GET_STRUCT_REF(FCameraFilmbackSettings,Z_Param_Out_filmback);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVrmBPFunctionLibrary::VRMSetCameraFilmback(Z_Param_CineCamera,Z_Param_Out_filmback);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMGetCameraFilmback)
	{
		P_GET_OBJECT(UCineCameraComponent,Z_Param_CineCamera);
		P_GET_STRUCT_REF(FCameraFilmbackSettings,Z_Param_Out_filmback);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVrmBPFunctionLibrary::VRMGetCameraFilmback(Z_Param_CineCamera,Z_Param_Out_filmback);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMSetPostProcessSettingAO)
	{
		P_GET_STRUCT_REF(FPostProcessSettings,Z_Param_Out_OutSettings);
		P_GET_STRUCT_REF(FPostProcessSettings,Z_Param_Out_InSettings);
		P_GET_UBOOL(Z_Param_bOverride);
		P_GET_PROPERTY(FFloatProperty,Z_Param_AOIntensity);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
		P_GET_UBOOL(Z_Param_bRayTracing);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMSetPostProcessSettingAO(Z_Param_Out_OutSettings,Z_Param_Out_InSettings,Z_Param_bOverride,Z_Param_AOIntensity,Z_Param_Radius,Z_Param_bRayTracing);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMSetSpecularScale)
	{
		P_GET_OBJECT(ULightComponent,Z_Param_light);
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMSetSpecularScale(Z_Param_light,Z_Param_scale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMSetShadowSlopeBias)
	{
		P_GET_OBJECT(ULightComponent,Z_Param_light);
		P_GET_PROPERTY(FFloatProperty,Z_Param_bias);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMSetShadowSlopeBias(Z_Param_light,Z_Param_bias);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMSetCastRaytracedShadow)
	{
		P_GET_OBJECT(ULightComponent,Z_Param_light);
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMSetCastRaytracedShadow(Z_Param_light,Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMSetLightingChannelLight)
	{
		P_GET_OBJECT(ULightComponent,Z_Param_light);
		P_GET_UBOOL(Z_Param_channel0);
		P_GET_UBOOL(Z_Param_channel1);
		P_GET_UBOOL(Z_Param_channel2);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMSetLightingChannelLight(Z_Param_light,Z_Param_channel0,Z_Param_channel1,Z_Param_channel2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMSetLightingChannelPrim)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_prim);
		P_GET_UBOOL(Z_Param_channel0);
		P_GET_UBOOL(Z_Param_channel1);
		P_GET_UBOOL(Z_Param_channel2);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMSetLightingChannelPrim(Z_Param_prim,Z_Param_channel0,Z_Param_channel1,Z_Param_channel2);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMGetShadowEnable)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_mesh);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaterialIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVrmBPFunctionLibrary::VRMGetShadowEnable(Z_Param_mesh,Z_Param_MaterialIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMRenderingThreadEnable)
	{
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVrmBPFunctionLibrary::VRMRenderingThreadEnable(Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMCreateRenderTarget2D)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_PROPERTY(FIntProperty,Z_Param_Width);
		P_GET_PROPERTY(FIntProperty,Z_Param_Height);
		P_GET_PROPERTY(FByteProperty,Z_Param_Format);
		P_GET_STRUCT(FLinearColor,Z_Param_ClearColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UTextureRenderTarget2D**)Z_Param__Result=UVrmBPFunctionLibrary::VRMCreateRenderTarget2D(Z_Param_WorldContextObject,Z_Param_Width,Z_Param_Height,ETextureRenderTargetFormat(Z_Param_Format),Z_Param_ClearColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMGetAssetsByPackageName)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_PackageName);
		P_GET_TARRAY_REF(FAssetData,Z_Param_Out_OutAssetData);
		P_GET_UBOOL(Z_Param_bIncludeOnlyOnDiskAssets);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVrmBPFunctionLibrary::VRMGetAssetsByPackageName(Z_Param_PackageName,Z_Param_Out_OutAssetData,Z_Param_bIncludeOnlyOnDiskAssets);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMSetImportedBounds)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_target);
		P_GET_STRUCT(FVector,Z_Param_min);
		P_GET_STRUCT(FVector,Z_Param_max);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMSetImportedBounds(Z_Param_target,Z_Param_min,Z_Param_max);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMSetMaterial)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_target);
		P_GET_PROPERTY(FIntProperty,Z_Param_no);
		P_GET_OBJECT(UMaterialInterface,Z_Param_material);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMSetMaterial(Z_Param_target,Z_Param_no,Z_Param_material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMDuplicateAsset)
	{
		P_GET_OBJECT(UObject,Z_Param_src);
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_OBJECT(UObject,Z_Param_thisOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=UVrmBPFunctionLibrary::VRMDuplicateAsset(Z_Param_src,Z_Param_name,Z_Param_thisOwner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMChangeMaterialStaticSwitch)
	{
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_material);
		P_GET_PROPERTY(FNameProperty,Z_Param_paramName);
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMChangeMaterialStaticSwitch(Z_Param_material,Z_Param_paramName,Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMChangeMaterialVectorParameter)
	{
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_material);
		P_GET_PROPERTY(FNameProperty,Z_Param_paramName);
		P_GET_STRUCT(FLinearColor,Z_Param_param);
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMChangeMaterialVectorParameter(Z_Param_material,Z_Param_paramName,Z_Param_param,Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMChangeMaterialScalarParameter)
	{
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_material);
		P_GET_PROPERTY(FNameProperty,Z_Param_paramName);
		P_GET_PROPERTY(FFloatProperty,Z_Param_param);
		P_GET_UBOOL(Z_Param_bEnable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMChangeMaterialScalarParameter(Z_Param_material,Z_Param_paramName,Z_Param_param,Z_Param_bEnable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMChangeMaterialBlendMode)
	{
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_material);
		P_GET_PROPERTY(FByteProperty,Z_Param_BlendMode);
		P_GET_UBOOL(Z_Param_bOverride);
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMChangeMaterialBlendMode(Z_Param_material,EBlendMode(Z_Param_BlendMode),Z_Param_bOverride,Z_Param_bForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMChangeMaterialShadingModel)
	{
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_material);
		P_GET_PROPERTY(FByteProperty,Z_Param_ShadingModel);
		P_GET_UBOOL(Z_Param_bOverride);
		P_GET_UBOOL(Z_Param_bForce);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMChangeMaterialShadingModel(Z_Param_material,EMaterialShadingModel(Z_Param_ShadingModel),Z_Param_bOverride,Z_Param_bForce);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMChangeMaterialSkipEditChange)
	{
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_material);
		P_GET_OBJECT(USkeletalMesh,Z_Param_UseSkeletalMesh);
		P_GET_UBOOL(Z_Param_bSkip);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMChangeMaterialSkipEditChange(Z_Param_material,Z_Param_UseSkeletalMesh,Z_Param_bSkip);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMChangeMaterialTexture)
	{
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_dst);
		P_GET_PROPERTY(FNameProperty,Z_Param_texName);
		P_GET_OBJECT(UTexture,Z_Param_texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMChangeMaterialTexture(Z_Param_dst,Z_Param_texName,Z_Param_texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMChangeMaterialParent)
	{
		P_GET_OBJECT(UMaterialInstanceConstant,Z_Param_dst);
		P_GET_OBJECT(UMaterialInterface,Z_Param_NewParent);
		P_GET_OBJECT(USkeletalMesh,Z_Param_UseSkeletalMesh);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMChangeMaterialParent(Z_Param_dst,Z_Param_NewParent,Z_Param_UseSkeletalMesh);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMUpdateTextureProperty)
	{
		P_GET_OBJECT(UTexture,Z_Param_Texture);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMUpdateTextureProperty(Z_Param_Texture);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMDrawMaterialToRenderTarget)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UTextureRenderTarget2D,Z_Param_TextureRenderTarget);
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMDrawMaterialToRenderTarget(Z_Param_WorldContextObject,Z_Param_TextureRenderTarget,Z_Param_Material);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMGetMobileMode)
	{
		P_GET_UBOOL_REF(Z_Param_Out_IsMobile);
		P_GET_UBOOL_REF(Z_Param_Out_IsAndroid);
		P_GET_UBOOL_REF(Z_Param_Out_IsIOS);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMGetMobileMode(Z_Param_Out_IsMobile,Z_Param_Out_IsAndroid,Z_Param_Out_IsIOS);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMGetMaterialPropertyOverrides)
	{
		P_GET_OBJECT(UMaterialInterface,Z_Param_Material);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_BlendMode);
		P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_ShadingModel);
		P_GET_UBOOL_REF(Z_Param_Out_IsTwoSided);
		P_GET_UBOOL_REF(Z_Param_Out_IsMasked);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMGetMaterialPropertyOverrides(Z_Param_Material,(TEnumAsByte<EBlendMode>&)(Z_Param_Out_BlendMode),(TEnumAsByte<EMaterialShadingModel>&)(Z_Param_Out_ShadingModel),Z_Param_Out_IsTwoSided,Z_Param_Out_IsMasked);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMUpdateRefPose)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_target);
		P_GET_UBOOL(Z_Param_bForceAlignGlobal);
		P_GET_UBOOL(Z_Param_bForceUE4Humanoid);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMUpdateRefPose(Z_Param_target,Z_Param_bForceAlignGlobal,Z_Param_bForceUE4Humanoid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMInitAnim)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMInitAnim(Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMGetHumanoidParentBone)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_boneName);
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_parentBoneName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVrmBPFunctionLibrary::VRMGetHumanoidParentBone(Z_Param_boneName,Z_Param_Out_parentBoneName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMGetEpicSkeletonToHumanoid)
	{
		P_GET_TMAP_REF(FString,FString,Z_Param_Out_table);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMGetEpicSkeletonToHumanoid(Z_Param_Out_table);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMGetEpicSkeletonBoneNameList)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_BoneNameListString);
		P_GET_TARRAY_REF(FName,Z_Param_Out_BoneNameListName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMGetEpicSkeletonBoneNameList(Z_Param_Out_BoneNameListString,Z_Param_Out_BoneNameListName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMGetHumanoidBoneNameList)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_BoneNameListString);
		P_GET_TARRAY_REF(FName,Z_Param_Out_BoneNameListName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMGetHumanoidBoneNameList(Z_Param_Out_BoneNameListString,Z_Param_Out_BoneNameListName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMGetRefBoneTransform)
	{
		P_GET_OBJECT(USkeleton,Z_Param_target);
		P_GET_PROPERTY(FNameProperty,Z_Param_boneName);
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_boneTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UVrmBPFunctionLibrary::VRMGetRefBoneTransform(Z_Param_target,Z_Param_boneName,Z_Param_Out_boneTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMGetMorphTargetList)
	{
		P_GET_OBJECT(USkeletalMesh,Z_Param_target);
		P_GET_TARRAY_REF(FString,Z_Param_Out_morphTargetList);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMGetMorphTargetList(Z_Param_target,Z_Param_Out_morphTargetList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmBPFunctionLibrary::execVRMTransMatrix)
	{
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_transform);
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_matrix);
		P_GET_TARRAY_REF(FLinearColor,Z_Param_Out_matrix_inv);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmBPFunctionLibrary::VRMTransMatrix(Z_Param_Out_transform,Z_Param_Out_matrix,Z_Param_Out_matrix_inv);
		P_NATIVE_END;
	}
	void UVrmBPFunctionLibrary::StaticRegisterNativesUVrmBPFunctionLibrary()
	{
		UClass* Class = UVrmBPFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "VRMAddTickPrerequisite", &UVrmBPFunctionLibrary::execVRMAddTickPrerequisite },
			{ "VRMAllowTranslucentSelection", &UVrmBPFunctionLibrary::execVRMAllowTranslucentSelection },
			{ "VRMBakeAnim", &UVrmBPFunctionLibrary::execVRMBakeAnim },
			{ "VRMChangeMaterialBlendMode", &UVrmBPFunctionLibrary::execVRMChangeMaterialBlendMode },
			{ "VRMChangeMaterialParent", &UVrmBPFunctionLibrary::execVRMChangeMaterialParent },
			{ "VRMChangeMaterialScalarParameter", &UVrmBPFunctionLibrary::execVRMChangeMaterialScalarParameter },
			{ "VRMChangeMaterialShadingModel", &UVrmBPFunctionLibrary::execVRMChangeMaterialShadingModel },
			{ "VRMChangeMaterialSkipEditChange", &UVrmBPFunctionLibrary::execVRMChangeMaterialSkipEditChange },
			{ "VRMChangeMaterialStaticSwitch", &UVrmBPFunctionLibrary::execVRMChangeMaterialStaticSwitch },
			{ "VRMChangeMaterialTexture", &UVrmBPFunctionLibrary::execVRMChangeMaterialTexture },
			{ "VRMChangeMaterialVectorParameter", &UVrmBPFunctionLibrary::execVRMChangeMaterialVectorParameter },
			{ "VRMCreateRenderTarget2D", &UVrmBPFunctionLibrary::execVRMCreateRenderTarget2D },
			{ "VRMDrawMaterialToRenderTarget", &UVrmBPFunctionLibrary::execVRMDrawMaterialToRenderTarget },
			{ "VRMDuplicateAsset", &UVrmBPFunctionLibrary::execVRMDuplicateAsset },
			{ "VRMExecuteConsoleCommand", &UVrmBPFunctionLibrary::execVRMExecuteConsoleCommand },
			{ "VRMGetAllActorsHasSceneComponent", &UVrmBPFunctionLibrary::execVRMGetAllActorsHasSceneComponent },
			{ "VRMGetAnimationAssetData", &UVrmBPFunctionLibrary::execVRMGetAnimationAssetData },
			{ "VRMGetAssetsByPackageName", &UVrmBPFunctionLibrary::execVRMGetAssetsByPackageName },
			{ "VRMGetCameraFilmback", &UVrmBPFunctionLibrary::execVRMGetCameraFilmback },
			{ "VRMGetCameraTransform", &UVrmBPFunctionLibrary::execVRMGetCameraTransform },
			{ "VRMGetEpicSkeletonBoneNameList", &UVrmBPFunctionLibrary::execVRMGetEpicSkeletonBoneNameList },
			{ "VRMGetEpicSkeletonToHumanoid", &UVrmBPFunctionLibrary::execVRMGetEpicSkeletonToHumanoid },
			{ "VRMGetHumanoidBoneNameList", &UVrmBPFunctionLibrary::execVRMGetHumanoidBoneNameList },
			{ "VRMGetHumanoidParentBone", &UVrmBPFunctionLibrary::execVRMGetHumanoidParentBone },
			{ "VRMGetIKRigDefinition", &UVrmBPFunctionLibrary::execVRMGetIKRigDefinition },
			{ "VRMGetMaterialPropertyOverrides", &UVrmBPFunctionLibrary::execVRMGetMaterialPropertyOverrides },
			{ "VRMGetMobileMode", &UVrmBPFunctionLibrary::execVRMGetMobileMode },
			{ "VRMGetMorphTargetList", &UVrmBPFunctionLibrary::execVRMGetMorphTargetList },
			{ "VRMGetPlayMode", &UVrmBPFunctionLibrary::execVRMGetPlayMode },
			{ "VRMGetPreviewMesh", &UVrmBPFunctionLibrary::execVRMGetPreviewMesh },
			{ "VRMGetRefBoneTransform", &UVrmBPFunctionLibrary::execVRMGetRefBoneTransform },
			{ "VRMGetRigNodeNameFromBoneName", &UVrmBPFunctionLibrary::execVRMGetRigNodeNameFromBoneName },
			{ "VRMGetShadowEnable", &UVrmBPFunctionLibrary::execVRMGetShadowEnable },
			{ "VRMGetSkeletalMeshFromSkinnedMeshComponent", &UVrmBPFunctionLibrary::execVRMGetSkeletalMeshFromSkinnedMeshComponent },
			{ "VRMGetTopLevelAssetName", &UVrmBPFunctionLibrary::execVRMGetTopLevelAssetName },
			{ "VRMGetUEVersion", &UVrmBPFunctionLibrary::execVRMGetUEVersion },
			{ "VRMInitAnim", &UVrmBPFunctionLibrary::execVRMInitAnim },
			{ "VRMMakeCameraTrackingFocusSettings", &UVrmBPFunctionLibrary::execVRMMakeCameraTrackingFocusSettings },
			{ "VRMRenderingThreadEnable", &UVrmBPFunctionLibrary::execVRMRenderingThreadEnable },
			{ "VRMSetActorLabel", &UVrmBPFunctionLibrary::execVRMSetActorLabel },
			{ "VRMSetCameraFilmback", &UVrmBPFunctionLibrary::execVRMSetCameraFilmback },
			{ "VRMSetCastRaytracedShadow", &UVrmBPFunctionLibrary::execVRMSetCastRaytracedShadow },
			{ "VRMSetImportedBounds", &UVrmBPFunctionLibrary::execVRMSetImportedBounds },
			{ "VRMSetLightingChannelLight", &UVrmBPFunctionLibrary::execVRMSetLightingChannelLight },
			{ "VRMSetLightingChannelPrim", &UVrmBPFunctionLibrary::execVRMSetLightingChannelPrim },
			{ "VRMSetMaterial", &UVrmBPFunctionLibrary::execVRMSetMaterial },
			{ "VRMSetPerBoneMotionBlur", &UVrmBPFunctionLibrary::execVRMSetPerBoneMotionBlur },
			{ "VRMSetPostProcessSettingAO", &UVrmBPFunctionLibrary::execVRMSetPostProcessSettingAO },
			{ "VRMSetPostProcessSettingFromCineCamera", &UVrmBPFunctionLibrary::execVRMSetPostProcessSettingFromCineCamera },
			{ "VRMSetPostProcessToneCurveAmount", &UVrmBPFunctionLibrary::execVRMSetPostProcessToneCurveAmount },
			{ "VRMSetShadowSlopeBias", &UVrmBPFunctionLibrary::execVRMSetShadowSlopeBias },
			{ "VRMSetSpecularScale", &UVrmBPFunctionLibrary::execVRMSetSpecularScale },
			{ "VRMSetTransparentWindow", &UVrmBPFunctionLibrary::execVRMSetTransparentWindow },
			{ "VRMSetWidgetMode", &UVrmBPFunctionLibrary::execVRMSetWidgetMode },
			{ "VRMTransMatrix", &UVrmBPFunctionLibrary::execVRMTransMatrix },
			{ "VRMUpdateRefPose", &UVrmBPFunctionLibrary::execVRMUpdateRefPose },
			{ "VRMUpdateTextureProperty", &UVrmBPFunctionLibrary::execVRMUpdateTextureProperty },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAddTickPrerequisite_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMAddTickPrerequisite_Parms
		{
			UActorComponent* dst;
			UActorComponent* src;
			bool bRemove;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_dst_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_dst;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_src_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_src;
		static void NewProp_bRemove_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRemove;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAddTickPrerequisite_Statics::NewProp_dst_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAddTickPrerequisite_Statics::NewProp_dst = { "dst", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMAddTickPrerequisite_Parms, dst), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAddTickPrerequisite_Statics::NewProp_dst_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAddTickPrerequisite_Statics::NewProp_dst_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAddTickPrerequisite_Statics::NewProp_src_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAddTickPrerequisite_Statics::NewProp_src = { "src", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMAddTickPrerequisite_Parms, src), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAddTickPrerequisite_Statics::NewProp_src_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAddTickPrerequisite_Statics::NewProp_src_MetaData)) };
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAddTickPrerequisite_Statics::NewProp_bRemove_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMAddTickPrerequisite_Parms*)Obj)->bRemove = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAddTickPrerequisite_Statics::NewProp_bRemove = { "bRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMAddTickPrerequisite_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAddTickPrerequisite_Statics::NewProp_bRemove_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAddTickPrerequisite_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMAddTickPrerequisite_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAddTickPrerequisite_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMAddTickPrerequisite_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAddTickPrerequisite_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAddTickPrerequisite_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAddTickPrerequisite_Statics::NewProp_dst,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAddTickPrerequisite_Statics::NewProp_src,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAddTickPrerequisite_Statics::NewProp_bRemove,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAddTickPrerequisite_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAddTickPrerequisite_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAddTickPrerequisite_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMAddTickPrerequisite", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAddTickPrerequisite_Statics::VrmBPFunctionLibrary_eventVRMAddTickPrerequisite_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAddTickPrerequisite_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAddTickPrerequisite_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAddTickPrerequisite_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAddTickPrerequisite_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAddTickPrerequisite()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAddTickPrerequisite_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAllowTranslucentSelection_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMAllowTranslucentSelection_Parms
		{
			bool bEnable;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAllowTranslucentSelection_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMAllowTranslucentSelection_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAllowTranslucentSelection_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMAllowTranslucentSelection_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAllowTranslucentSelection_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAllowTranslucentSelection_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAllowTranslucentSelection_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAllowTranslucentSelection_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAllowTranslucentSelection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMAllowTranslucentSelection", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAllowTranslucentSelection_Statics::VrmBPFunctionLibrary_eventVRMAllowTranslucentSelection_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAllowTranslucentSelection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAllowTranslucentSelection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAllowTranslucentSelection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAllowTranslucentSelection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAllowTranslucentSelection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAllowTranslucentSelection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMBakeAnim_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMBakeAnim_Parms
		{
			const USkeletalMeshComponent* skc;
			FString FilePath;
			FString AssetFileName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skc_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skc;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FilePath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetFileName_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_AssetFileName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMBakeAnim_Statics::NewProp_skc_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMBakeAnim_Statics::NewProp_skc = { "skc", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMBakeAnim_Parms, skc), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMBakeAnim_Statics::NewProp_skc_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMBakeAnim_Statics::NewProp_skc_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMBakeAnim_Statics::NewProp_FilePath_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMBakeAnim_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMBakeAnim_Parms, FilePath), METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMBakeAnim_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMBakeAnim_Statics::NewProp_FilePath_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMBakeAnim_Statics::NewProp_AssetFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMBakeAnim_Statics::NewProp_AssetFileName = { "AssetFileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMBakeAnim_Parms, AssetFileName), METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMBakeAnim_Statics::NewProp_AssetFileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMBakeAnim_Statics::NewProp_AssetFileName_MetaData)) };
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMBakeAnim_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMBakeAnim_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMBakeAnim_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMBakeAnim_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMBakeAnim_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMBakeAnim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMBakeAnim_Statics::NewProp_skc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMBakeAnim_Statics::NewProp_FilePath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMBakeAnim_Statics::NewProp_AssetFileName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMBakeAnim_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMBakeAnim_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "Comment", "//UFUNCTION(BlueprintCallable, Category = \"VRM4U\", meta = (DynamicOutputParam = \"PropertyNames|PropertyValues|FrameNo\"))\n//static bool VRMLiveLinkEvaluate(const FName Subject, TArray<FName> &PropertyNames, TArray<float> &PropertyValues, int &FrameNo);\n" },
		{ "DevelopmentOnly", "" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"VRM4U\", meta = (DynamicOutputParam = \"PropertyNames|PropertyValues|FrameNo\"))\nstatic bool VRMLiveLinkEvaluate(const FName Subject, TArray<FName> &PropertyNames, TArray<float> &PropertyValues, int &FrameNo);" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMBakeAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMBakeAnim", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMBakeAnim_Statics::VrmBPFunctionLibrary_eventVRMBakeAnim_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMBakeAnim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMBakeAnim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMBakeAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMBakeAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMBakeAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMBakeAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialBlendMode_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMChangeMaterialBlendMode_Parms
		{
			UMaterialInstanceConstant* material;
			TEnumAsByte<EBlendMode> BlendMode;
			bool bOverride;
			bool bForce;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_material;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendMode;
		static void NewProp_bOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride;
		static void NewProp_bForce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialBlendMode_Statics::NewProp_material = { "material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMChangeMaterialBlendMode_Parms, material), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialBlendMode_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMChangeMaterialBlendMode_Parms, BlendMode), Z_Construct_UEnum_Engine_EBlendMode, METADATA_PARAMS(nullptr, 0) }; // 2814665215
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialBlendMode_Statics::NewProp_bOverride_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMChangeMaterialBlendMode_Parms*)Obj)->bOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialBlendMode_Statics::NewProp_bOverride = { "bOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMChangeMaterialBlendMode_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialBlendMode_Statics::NewProp_bOverride_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialBlendMode_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMChangeMaterialBlendMode_Parms*)Obj)->bForce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialBlendMode_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMChangeMaterialBlendMode_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialBlendMode_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialBlendMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialBlendMode_Statics::NewProp_material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialBlendMode_Statics::NewProp_BlendMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialBlendMode_Statics::NewProp_bOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialBlendMode_Statics::NewProp_bForce,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialBlendMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialBlendMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMChangeMaterialBlendMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialBlendMode_Statics::VrmBPFunctionLibrary_eventVRMChangeMaterialBlendMode_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialBlendMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialBlendMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialBlendMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialBlendMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialBlendMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialBlendMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialParent_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMChangeMaterialParent_Parms
		{
			UMaterialInstanceConstant* dst;
			UMaterialInterface* NewParent;
			USkeletalMesh* UseSkeletalMesh;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_dst;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewParent;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UseSkeletalMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialParent_Statics::NewProp_dst = { "dst", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMChangeMaterialParent_Parms, dst), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialParent_Statics::NewProp_NewParent = { "NewParent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMChangeMaterialParent_Parms, NewParent), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialParent_Statics::NewProp_UseSkeletalMesh = { "UseSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMChangeMaterialParent_Parms, UseSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialParent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialParent_Statics::NewProp_dst,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialParent_Statics::NewProp_NewParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialParent_Statics::NewProp_UseSkeletalMesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialParent_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMChangeMaterialParent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialParent_Statics::VrmBPFunctionLibrary_eventVRMChangeMaterialParent_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialParent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialParent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialParent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialParent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialParent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialScalarParameter_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMChangeMaterialScalarParameter_Parms
		{
			UMaterialInstanceConstant* material;
			FName paramName;
			float param;
			bool bEnable;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_material;
		static const UECodeGen_Private::FNamePropertyParams NewProp_paramName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_param;
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialScalarParameter_Statics::NewProp_material = { "material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMChangeMaterialScalarParameter_Parms, material), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialScalarParameter_Statics::NewProp_paramName = { "paramName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMChangeMaterialScalarParameter_Parms, paramName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialScalarParameter_Statics::NewProp_param = { "param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMChangeMaterialScalarParameter_Parms, param), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialScalarParameter_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMChangeMaterialScalarParameter_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialScalarParameter_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMChangeMaterialScalarParameter_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialScalarParameter_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialScalarParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialScalarParameter_Statics::NewProp_material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialScalarParameter_Statics::NewProp_paramName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialScalarParameter_Statics::NewProp_param,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialScalarParameter_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialScalarParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialScalarParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMChangeMaterialScalarParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialScalarParameter_Statics::VrmBPFunctionLibrary_eventVRMChangeMaterialScalarParameter_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialScalarParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialScalarParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialScalarParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialScalarParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialScalarParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialScalarParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialShadingModel_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMChangeMaterialShadingModel_Parms
		{
			UMaterialInstanceConstant* material;
			TEnumAsByte<EMaterialShadingModel> ShadingModel;
			bool bOverride;
			bool bForce;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_material;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShadingModel;
		static void NewProp_bOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride;
		static void NewProp_bForce_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForce;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialShadingModel_Statics::NewProp_material = { "material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMChangeMaterialShadingModel_Parms, material), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialShadingModel_Statics::NewProp_ShadingModel = { "ShadingModel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMChangeMaterialShadingModel_Parms, ShadingModel), Z_Construct_UEnum_Engine_EMaterialShadingModel, METADATA_PARAMS(nullptr, 0) }; // 3210614493
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialShadingModel_Statics::NewProp_bOverride_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMChangeMaterialShadingModel_Parms*)Obj)->bOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialShadingModel_Statics::NewProp_bOverride = { "bOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMChangeMaterialShadingModel_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialShadingModel_Statics::NewProp_bOverride_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialShadingModel_Statics::NewProp_bForce_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMChangeMaterialShadingModel_Parms*)Obj)->bForce = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialShadingModel_Statics::NewProp_bForce = { "bForce", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMChangeMaterialShadingModel_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialShadingModel_Statics::NewProp_bForce_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialShadingModel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialShadingModel_Statics::NewProp_material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialShadingModel_Statics::NewProp_ShadingModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialShadingModel_Statics::NewProp_bOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialShadingModel_Statics::NewProp_bForce,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialShadingModel_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialShadingModel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMChangeMaterialShadingModel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialShadingModel_Statics::VrmBPFunctionLibrary_eventVRMChangeMaterialShadingModel_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialShadingModel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialShadingModel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialShadingModel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialShadingModel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialShadingModel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialShadingModel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialSkipEditChange_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMChangeMaterialSkipEditChange_Parms
		{
			UMaterialInstanceConstant* material;
			USkeletalMesh* UseSkeletalMesh;
			bool bSkip;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_material;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_UseSkeletalMesh;
		static void NewProp_bSkip_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkip;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialSkipEditChange_Statics::NewProp_material = { "material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMChangeMaterialSkipEditChange_Parms, material), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialSkipEditChange_Statics::NewProp_UseSkeletalMesh = { "UseSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMChangeMaterialSkipEditChange_Parms, UseSkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialSkipEditChange_Statics::NewProp_bSkip_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMChangeMaterialSkipEditChange_Parms*)Obj)->bSkip = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialSkipEditChange_Statics::NewProp_bSkip = { "bSkip", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMChangeMaterialSkipEditChange_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialSkipEditChange_Statics::NewProp_bSkip_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialSkipEditChange_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialSkipEditChange_Statics::NewProp_material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialSkipEditChange_Statics::NewProp_UseSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialSkipEditChange_Statics::NewProp_bSkip,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialSkipEditChange_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "Comment", "// mat begin\n" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
		{ "ToolTip", "mat begin" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialSkipEditChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMChangeMaterialSkipEditChange", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialSkipEditChange_Statics::VrmBPFunctionLibrary_eventVRMChangeMaterialSkipEditChange_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialSkipEditChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialSkipEditChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialSkipEditChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialSkipEditChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialSkipEditChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialSkipEditChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialStaticSwitch_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMChangeMaterialStaticSwitch_Parms
		{
			UMaterialInstanceConstant* material;
			FName paramName;
			bool bEnable;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_material;
		static const UECodeGen_Private::FNamePropertyParams NewProp_paramName;
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialStaticSwitch_Statics::NewProp_material = { "material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMChangeMaterialStaticSwitch_Parms, material), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialStaticSwitch_Statics::NewProp_paramName = { "paramName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMChangeMaterialStaticSwitch_Parms, paramName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialStaticSwitch_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMChangeMaterialStaticSwitch_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialStaticSwitch_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMChangeMaterialStaticSwitch_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialStaticSwitch_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialStaticSwitch_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialStaticSwitch_Statics::NewProp_material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialStaticSwitch_Statics::NewProp_paramName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialStaticSwitch_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialStaticSwitch_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialStaticSwitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMChangeMaterialStaticSwitch", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialStaticSwitch_Statics::VrmBPFunctionLibrary_eventVRMChangeMaterialStaticSwitch_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialStaticSwitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialStaticSwitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialStaticSwitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialStaticSwitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialStaticSwitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialStaticSwitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialTexture_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMChangeMaterialTexture_Parms
		{
			UMaterialInstanceConstant* dst;
			FName texName;
			UTexture* texture;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_dst;
		static const UECodeGen_Private::FNamePropertyParams NewProp_texName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialTexture_Statics::NewProp_dst = { "dst", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMChangeMaterialTexture_Parms, dst), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialTexture_Statics::NewProp_texName = { "texName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMChangeMaterialTexture_Parms, texName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialTexture_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMChangeMaterialTexture_Parms, texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialTexture_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialTexture_Statics::NewProp_dst,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialTexture_Statics::NewProp_texName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialTexture_Statics::NewProp_texture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialTexture_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMChangeMaterialTexture", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialTexture_Statics::VrmBPFunctionLibrary_eventVRMChangeMaterialTexture_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialVectorParameter_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMChangeMaterialVectorParameter_Parms
		{
			UMaterialInstanceConstant* material;
			FName paramName;
			FLinearColor param;
			bool bEnable;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_material;
		static const UECodeGen_Private::FNamePropertyParams NewProp_paramName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_param;
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialVectorParameter_Statics::NewProp_material = { "material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMChangeMaterialVectorParameter_Parms, material), Z_Construct_UClass_UMaterialInstanceConstant_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialVectorParameter_Statics::NewProp_paramName = { "paramName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMChangeMaterialVectorParameter_Parms, paramName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialVectorParameter_Statics::NewProp_param = { "param", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMChangeMaterialVectorParameter_Parms, param), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialVectorParameter_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMChangeMaterialVectorParameter_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialVectorParameter_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMChangeMaterialVectorParameter_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialVectorParameter_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialVectorParameter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialVectorParameter_Statics::NewProp_material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialVectorParameter_Statics::NewProp_paramName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialVectorParameter_Statics::NewProp_param,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialVectorParameter_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialVectorParameter_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialVectorParameter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMChangeMaterialVectorParameter", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialVectorParameter_Statics::VrmBPFunctionLibrary_eventVRMChangeMaterialVectorParameter_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialVectorParameter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialVectorParameter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialVectorParameter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialVectorParameter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialVectorParameter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialVectorParameter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMCreateRenderTarget2D_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMCreateRenderTarget2D_Parms
		{
			UObject* WorldContextObject;
			int32 Width;
			int32 Height;
			TEnumAsByte<ETextureRenderTargetFormat> Format;
			FLinearColor ClearColor;
			UTextureRenderTarget2D* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Width;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Height;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Format;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ClearColor;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMCreateRenderTarget2D_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMCreateRenderTarget2D_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMCreateRenderTarget2D_Statics::NewProp_Width = { "Width", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMCreateRenderTarget2D_Parms, Width), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMCreateRenderTarget2D_Statics::NewProp_Height = { "Height", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMCreateRenderTarget2D_Parms, Height), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMCreateRenderTarget2D_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMCreateRenderTarget2D_Parms, Format), Z_Construct_UEnum_Engine_ETextureRenderTargetFormat, METADATA_PARAMS(nullptr, 0) }; // 1004718673
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMCreateRenderTarget2D_Statics::NewProp_ClearColor = { "ClearColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMCreateRenderTarget2D_Parms, ClearColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMCreateRenderTarget2D_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMCreateRenderTarget2D_Parms, ReturnValue), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMCreateRenderTarget2D_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMCreateRenderTarget2D_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMCreateRenderTarget2D_Statics::NewProp_Width,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMCreateRenderTarget2D_Statics::NewProp_Height,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMCreateRenderTarget2D_Statics::NewProp_Format,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMCreateRenderTarget2D_Statics::NewProp_ClearColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMCreateRenderTarget2D_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMCreateRenderTarget2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "CPP_Default_ClearColor", "(R=0.000000,G=0.000000,B=0.000000,A=1.000000)" },
		{ "CPP_Default_Format", "RTF_RGBA16f" },
		{ "CPP_Default_Height", "256" },
		{ "CPP_Default_Width", "256" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMCreateRenderTarget2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMCreateRenderTarget2D", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMCreateRenderTarget2D_Statics::VrmBPFunctionLibrary_eventVRMCreateRenderTarget2D_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMCreateRenderTarget2D_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMCreateRenderTarget2D_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMCreateRenderTarget2D_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMCreateRenderTarget2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMCreateRenderTarget2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMCreateRenderTarget2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMDrawMaterialToRenderTarget_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMDrawMaterialToRenderTarget_Parms
		{
			UObject* WorldContextObject;
			UTextureRenderTarget2D* TextureRenderTarget;
			UMaterialInterface* Material;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextureRenderTarget;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMDrawMaterialToRenderTarget_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMDrawMaterialToRenderTarget_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMDrawMaterialToRenderTarget_Statics::NewProp_TextureRenderTarget = { "TextureRenderTarget", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMDrawMaterialToRenderTarget_Parms, TextureRenderTarget), Z_Construct_UClass_UTextureRenderTarget2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMDrawMaterialToRenderTarget_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMDrawMaterialToRenderTarget_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMDrawMaterialToRenderTarget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMDrawMaterialToRenderTarget_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMDrawMaterialToRenderTarget_Statics::NewProp_TextureRenderTarget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMDrawMaterialToRenderTarget_Statics::NewProp_Material,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMDrawMaterialToRenderTarget_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
		{ "UnsafeDuringActorConstruction", "true" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMDrawMaterialToRenderTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMDrawMaterialToRenderTarget", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMDrawMaterialToRenderTarget_Statics::VrmBPFunctionLibrary_eventVRMDrawMaterialToRenderTarget_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMDrawMaterialToRenderTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMDrawMaterialToRenderTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMDrawMaterialToRenderTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMDrawMaterialToRenderTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMDrawMaterialToRenderTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMDrawMaterialToRenderTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMDuplicateAsset_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMDuplicateAsset_Parms
		{
			UObject* src;
			FString name;
			UObject* thisOwner;
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_src;
		static const UECodeGen_Private::FStrPropertyParams NewProp_name;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_thisOwner;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMDuplicateAsset_Statics::NewProp_src = { "src", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMDuplicateAsset_Parms, src), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMDuplicateAsset_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMDuplicateAsset_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMDuplicateAsset_Statics::NewProp_thisOwner = { "thisOwner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMDuplicateAsset_Parms, thisOwner), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMDuplicateAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMDuplicateAsset_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMDuplicateAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMDuplicateAsset_Statics::NewProp_src,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMDuplicateAsset_Statics::NewProp_name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMDuplicateAsset_Statics::NewProp_thisOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMDuplicateAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMDuplicateAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "Comment", "// mat end\n" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
		{ "ToolTip", "mat end" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMDuplicateAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMDuplicateAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMDuplicateAsset_Statics::VrmBPFunctionLibrary_eventVRMDuplicateAsset_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMDuplicateAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMDuplicateAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMDuplicateAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMDuplicateAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMDuplicateAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMDuplicateAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMExecuteConsoleCommand_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMExecuteConsoleCommand_Parms
		{
			UObject* WorldContextObject;
			FString cmd;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_cmd_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_cmd;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMExecuteConsoleCommand_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMExecuteConsoleCommand_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMExecuteConsoleCommand_Statics::NewProp_cmd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMExecuteConsoleCommand_Statics::NewProp_cmd = { "cmd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMExecuteConsoleCommand_Parms, cmd), METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMExecuteConsoleCommand_Statics::NewProp_cmd_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMExecuteConsoleCommand_Statics::NewProp_cmd_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMExecuteConsoleCommand_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMExecuteConsoleCommand_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMExecuteConsoleCommand_Statics::NewProp_cmd,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMExecuteConsoleCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMExecuteConsoleCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMExecuteConsoleCommand", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMExecuteConsoleCommand_Statics::VrmBPFunctionLibrary_eventVRMExecuteConsoleCommand_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMExecuteConsoleCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMExecuteConsoleCommand_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMExecuteConsoleCommand_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMExecuteConsoleCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMExecuteConsoleCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMExecuteConsoleCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAllActorsHasSceneComponent_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMGetAllActorsHasSceneComponent_Parms
		{
			const UObject* WorldContextObject;
			TSubclassOf<UObject>  UObjectClass;
			TArray<AActor*> OutActors;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FClassPropertyParams NewProp_UObjectClass;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutActors_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutActors;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAllActorsHasSceneComponent_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAllActorsHasSceneComponent_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetAllActorsHasSceneComponent_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAllActorsHasSceneComponent_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAllActorsHasSceneComponent_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAllActorsHasSceneComponent_Statics::NewProp_UObjectClass = { "UObjectClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetAllActorsHasSceneComponent_Parms, UObjectClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAllActorsHasSceneComponent_Statics::NewProp_OutActors_Inner = { "OutActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAllActorsHasSceneComponent_Statics::NewProp_OutActors = { "OutActors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetAllActorsHasSceneComponent_Parms, OutActors), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAllActorsHasSceneComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAllActorsHasSceneComponent_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAllActorsHasSceneComponent_Statics::NewProp_UObjectClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAllActorsHasSceneComponent_Statics::NewProp_OutActors_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAllActorsHasSceneComponent_Statics::NewProp_OutActors,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAllActorsHasSceneComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "DeterminesOutputType", "UObjectClass" },
		{ "DynamicOutputParam", "OutActors" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAllActorsHasSceneComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMGetAllActorsHasSceneComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAllActorsHasSceneComponent_Statics::VrmBPFunctionLibrary_eventVRMGetAllActorsHasSceneComponent_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAllActorsHasSceneComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAllActorsHasSceneComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAllActorsHasSceneComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAllActorsHasSceneComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAllActorsHasSceneComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAllActorsHasSceneComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAnimationAssetData_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMGetAnimationAssetData_Parms
		{
			const UAnimationAsset* animAsset;
			USkeleton* skeleton;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_animAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_animAsset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skeleton;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAnimationAssetData_Statics::NewProp_animAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAnimationAssetData_Statics::NewProp_animAsset = { "animAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetAnimationAssetData_Parms, animAsset), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAnimationAssetData_Statics::NewProp_animAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAnimationAssetData_Statics::NewProp_animAsset_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAnimationAssetData_Statics::NewProp_skeleton = { "skeleton", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetAnimationAssetData_Parms, skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAnimationAssetData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMGetAnimationAssetData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAnimationAssetData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMGetAnimationAssetData_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAnimationAssetData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAnimationAssetData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAnimationAssetData_Statics::NewProp_animAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAnimationAssetData_Statics::NewProp_skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAnimationAssetData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAnimationAssetData_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "DynamicOutputParam", "skeleton" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAnimationAssetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMGetAnimationAssetData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAnimationAssetData_Statics::VrmBPFunctionLibrary_eventVRMGetAnimationAssetData_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAnimationAssetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAnimationAssetData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAnimationAssetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAnimationAssetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAnimationAssetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAnimationAssetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAssetsByPackageName_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct VrmBPFunctionLibrary_eventVRMGetAssetsByPackageName_Parms
		{
			FName PackageName;
			TArray<FAssetData> OutAssetData;
			bool bIncludeOnlyOnDiskAssets;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_PackageName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutAssetData_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_OutAssetData;
		static void NewProp_bIncludeOnlyOnDiskAssets_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeOnlyOnDiskAssets;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAssetsByPackageName_Statics::NewProp_PackageName = { "PackageName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetAssetsByPackageName_Parms, PackageName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAssetsByPackageName_Statics::NewProp_OutAssetData_Inner = { "OutAssetData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAssetsByPackageName_Statics::NewProp_OutAssetData = { "OutAssetData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetAssetsByPackageName_Parms, OutAssetData), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAssetsByPackageName_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMGetAssetsByPackageName_Parms*)Obj)->bIncludeOnlyOnDiskAssets = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAssetsByPackageName_Statics::NewProp_bIncludeOnlyOnDiskAssets = { "bIncludeOnlyOnDiskAssets", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMGetAssetsByPackageName_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAssetsByPackageName_Statics::NewProp_bIncludeOnlyOnDiskAssets_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAssetsByPackageName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMGetAssetsByPackageName_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAssetsByPackageName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMGetAssetsByPackageName_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAssetsByPackageName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAssetsByPackageName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAssetsByPackageName_Statics::NewProp_PackageName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAssetsByPackageName_Statics::NewProp_OutAssetData_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAssetsByPackageName_Statics::NewProp_OutAssetData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAssetsByPackageName_Statics::NewProp_bIncludeOnlyOnDiskAssets,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAssetsByPackageName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAssetsByPackageName_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "CPP_Default_bIncludeOnlyOnDiskAssets", "false" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAssetsByPackageName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMGetAssetsByPackageName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAssetsByPackageName_Statics::VrmBPFunctionLibrary_eventVRMGetAssetsByPackageName_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAssetsByPackageName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAssetsByPackageName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAssetsByPackageName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAssetsByPackageName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAssetsByPackageName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAssetsByPackageName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraFilmback_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMGetCameraFilmback_Parms
		{
			UCineCameraComponent* CineCamera;
			FCameraFilmbackSettings filmback;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CineCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CineCamera;
		static const UECodeGen_Private::FStructPropertyParams NewProp_filmback;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraFilmback_Statics::NewProp_CineCamera_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraFilmback_Statics::NewProp_CineCamera = { "CineCamera", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetCameraFilmback_Parms, CineCamera), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraFilmback_Statics::NewProp_CineCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraFilmback_Statics::NewProp_CineCamera_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraFilmback_Statics::NewProp_filmback = { "filmback", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetCameraFilmback_Parms, filmback), Z_Construct_UScriptStruct_FCameraFilmbackSettings, METADATA_PARAMS(nullptr, 0) }; // 833749679
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraFilmback_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMGetCameraFilmback_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraFilmback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMGetCameraFilmback_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraFilmback_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraFilmback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraFilmback_Statics::NewProp_CineCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraFilmback_Statics::NewProp_filmback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraFilmback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraFilmback_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "DynamicOutputParam", "filmback" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraFilmback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMGetCameraFilmback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraFilmback_Statics::VrmBPFunctionLibrary_eventVRMGetCameraFilmback_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraFilmback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraFilmback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraFilmback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraFilmback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraFilmback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraFilmback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraTransform_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMGetCameraTransform_Parms
		{
			const UObject* WorldContextObject;
			int32 PlayerIndex;
			bool bGameOnly;
			FTransform transform;
			float fovDegree;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerIndex;
		static void NewProp_bGameOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGameOnly;
		static const UECodeGen_Private::FStructPropertyParams NewProp_transform;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_fovDegree;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraTransform_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraTransform_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetCameraTransform_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraTransform_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraTransform_Statics::NewProp_WorldContextObject_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraTransform_Statics::NewProp_PlayerIndex = { "PlayerIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetCameraTransform_Parms, PlayerIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraTransform_Statics::NewProp_bGameOnly_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMGetCameraTransform_Parms*)Obj)->bGameOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraTransform_Statics::NewProp_bGameOnly = { "bGameOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMGetCameraTransform_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraTransform_Statics::NewProp_bGameOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraTransform_Statics::NewProp_transform = { "transform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetCameraTransform_Parms, transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraTransform_Statics::NewProp_fovDegree = { "fovDegree", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetCameraTransform_Parms, fovDegree), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraTransform_Statics::NewProp_WorldContextObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraTransform_Statics::NewProp_PlayerIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraTransform_Statics::NewProp_bGameOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraTransform_Statics::NewProp_transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraTransform_Statics::NewProp_fovDegree,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "DynamicOutputParam", "transform" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMGetCameraTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraTransform_Statics::VrmBPFunctionLibrary_eventVRMGetCameraTransform_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetEpicSkeletonBoneNameList_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMGetEpicSkeletonBoneNameList_Parms
		{
			TArray<FString> BoneNameListString;
			TArray<FName> BoneNameListName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_BoneNameListString_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneNameListString;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNameListName_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneNameListName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetEpicSkeletonBoneNameList_Statics::NewProp_BoneNameListString_Inner = { "BoneNameListString", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetEpicSkeletonBoneNameList_Statics::NewProp_BoneNameListString = { "BoneNameListString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetEpicSkeletonBoneNameList_Parms, BoneNameListString), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetEpicSkeletonBoneNameList_Statics::NewProp_BoneNameListName_Inner = { "BoneNameListName", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetEpicSkeletonBoneNameList_Statics::NewProp_BoneNameListName = { "BoneNameListName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetEpicSkeletonBoneNameList_Parms, BoneNameListName), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetEpicSkeletonBoneNameList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetEpicSkeletonBoneNameList_Statics::NewProp_BoneNameListString_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetEpicSkeletonBoneNameList_Statics::NewProp_BoneNameListString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetEpicSkeletonBoneNameList_Statics::NewProp_BoneNameListName_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetEpicSkeletonBoneNameList_Statics::NewProp_BoneNameListName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetEpicSkeletonBoneNameList_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetEpicSkeletonBoneNameList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMGetEpicSkeletonBoneNameList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetEpicSkeletonBoneNameList_Statics::VrmBPFunctionLibrary_eventVRMGetEpicSkeletonBoneNameList_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetEpicSkeletonBoneNameList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetEpicSkeletonBoneNameList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetEpicSkeletonBoneNameList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetEpicSkeletonBoneNameList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetEpicSkeletonBoneNameList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetEpicSkeletonBoneNameList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetEpicSkeletonToHumanoid_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMGetEpicSkeletonToHumanoid_Parms
		{
			TMap<FString,FString> table;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_table_ValueProp;
		static const UECodeGen_Private::FStrPropertyParams NewProp_table_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_table;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetEpicSkeletonToHumanoid_Statics::NewProp_table_ValueProp = { "table", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetEpicSkeletonToHumanoid_Statics::NewProp_table_Key_KeyProp = { "table_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetEpicSkeletonToHumanoid_Statics::NewProp_table = { "table", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetEpicSkeletonToHumanoid_Parms, table), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetEpicSkeletonToHumanoid_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetEpicSkeletonToHumanoid_Statics::NewProp_table_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetEpicSkeletonToHumanoid_Statics::NewProp_table_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetEpicSkeletonToHumanoid_Statics::NewProp_table,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetEpicSkeletonToHumanoid_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetEpicSkeletonToHumanoid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMGetEpicSkeletonToHumanoid", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetEpicSkeletonToHumanoid_Statics::VrmBPFunctionLibrary_eventVRMGetEpicSkeletonToHumanoid_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetEpicSkeletonToHumanoid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetEpicSkeletonToHumanoid_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetEpicSkeletonToHumanoid_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetEpicSkeletonToHumanoid_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetEpicSkeletonToHumanoid()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetEpicSkeletonToHumanoid_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidBoneNameList_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMGetHumanoidBoneNameList_Parms
		{
			TArray<FString> BoneNameListString;
			TArray<FName> BoneNameListName;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_BoneNameListString_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneNameListString;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BoneNameListName_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_BoneNameListName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidBoneNameList_Statics::NewProp_BoneNameListString_Inner = { "BoneNameListString", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidBoneNameList_Statics::NewProp_BoneNameListString = { "BoneNameListString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetHumanoidBoneNameList_Parms, BoneNameListString), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidBoneNameList_Statics::NewProp_BoneNameListName_Inner = { "BoneNameListName", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidBoneNameList_Statics::NewProp_BoneNameListName = { "BoneNameListName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetHumanoidBoneNameList_Parms, BoneNameListName), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidBoneNameList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidBoneNameList_Statics::NewProp_BoneNameListString_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidBoneNameList_Statics::NewProp_BoneNameListString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidBoneNameList_Statics::NewProp_BoneNameListName_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidBoneNameList_Statics::NewProp_BoneNameListName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidBoneNameList_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidBoneNameList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMGetHumanoidBoneNameList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidBoneNameList_Statics::VrmBPFunctionLibrary_eventVRMGetHumanoidBoneNameList_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidBoneNameList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidBoneNameList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidBoneNameList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidBoneNameList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidBoneNameList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidBoneNameList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidParentBone_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMGetHumanoidParentBone_Parms
		{
			FName boneName;
			FName parentBoneName;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_boneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_boneName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_parentBoneName;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidParentBone_Statics::NewProp_boneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidParentBone_Statics::NewProp_boneName = { "boneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetHumanoidParentBone_Parms, boneName), METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidParentBone_Statics::NewProp_boneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidParentBone_Statics::NewProp_boneName_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidParentBone_Statics::NewProp_parentBoneName = { "parentBoneName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetHumanoidParentBone_Parms, parentBoneName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidParentBone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMGetHumanoidParentBone_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidParentBone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMGetHumanoidParentBone_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidParentBone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidParentBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidParentBone_Statics::NewProp_boneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidParentBone_Statics::NewProp_parentBoneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidParentBone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidParentBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidParentBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMGetHumanoidParentBone", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidParentBone_Statics::VrmBPFunctionLibrary_eventVRMGetHumanoidParentBone_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidParentBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidParentBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidParentBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidParentBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidParentBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidParentBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetIKRigDefinition_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMGetIKRigDefinition_Parms
		{
			UObject* retargeter;
			UObject* src;
			UObject* target;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_retargeter;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_src;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetIKRigDefinition_Statics::NewProp_retargeter = { "retargeter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetIKRigDefinition_Parms, retargeter), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetIKRigDefinition_Statics::NewProp_src = { "src", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetIKRigDefinition_Parms, src), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetIKRigDefinition_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetIKRigDefinition_Parms, target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetIKRigDefinition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetIKRigDefinition_Statics::NewProp_retargeter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetIKRigDefinition_Statics::NewProp_src,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetIKRigDefinition_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetIKRigDefinition_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetIKRigDefinition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMGetIKRigDefinition", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetIKRigDefinition_Statics::VrmBPFunctionLibrary_eventVRMGetIKRigDefinition_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetIKRigDefinition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetIKRigDefinition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetIKRigDefinition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetIKRigDefinition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetIKRigDefinition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetIKRigDefinition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMaterialPropertyOverrides_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMGetMaterialPropertyOverrides_Parms
		{
			const UMaterialInterface* Material;
			TEnumAsByte<EBlendMode> BlendMode;
			TEnumAsByte<EMaterialShadingModel> ShadingModel;
			bool IsTwoSided;
			bool IsMasked;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FBytePropertyParams NewProp_BlendMode;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ShadingModel;
		static void NewProp_IsTwoSided_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsTwoSided;
		static void NewProp_IsMasked_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsMasked;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMaterialPropertyOverrides_Statics::NewProp_Material_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMaterialPropertyOverrides_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetMaterialPropertyOverrides_Parms, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMaterialPropertyOverrides_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMaterialPropertyOverrides_Statics::NewProp_Material_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMaterialPropertyOverrides_Statics::NewProp_BlendMode = { "BlendMode", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetMaterialPropertyOverrides_Parms, BlendMode), Z_Construct_UEnum_Engine_EBlendMode, METADATA_PARAMS(nullptr, 0) }; // 2814665215
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMaterialPropertyOverrides_Statics::NewProp_ShadingModel = { "ShadingModel", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetMaterialPropertyOverrides_Parms, ShadingModel), Z_Construct_UEnum_Engine_EMaterialShadingModel, METADATA_PARAMS(nullptr, 0) }; // 3210614493
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMaterialPropertyOverrides_Statics::NewProp_IsTwoSided_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMGetMaterialPropertyOverrides_Parms*)Obj)->IsTwoSided = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMaterialPropertyOverrides_Statics::NewProp_IsTwoSided = { "IsTwoSided", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMGetMaterialPropertyOverrides_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMaterialPropertyOverrides_Statics::NewProp_IsTwoSided_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMaterialPropertyOverrides_Statics::NewProp_IsMasked_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMGetMaterialPropertyOverrides_Parms*)Obj)->IsMasked = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMaterialPropertyOverrides_Statics::NewProp_IsMasked = { "IsMasked", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMGetMaterialPropertyOverrides_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMaterialPropertyOverrides_Statics::NewProp_IsMasked_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMaterialPropertyOverrides_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMaterialPropertyOverrides_Statics::NewProp_Material,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMaterialPropertyOverrides_Statics::NewProp_BlendMode,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMaterialPropertyOverrides_Statics::NewProp_ShadingModel,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMaterialPropertyOverrides_Statics::NewProp_IsTwoSided,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMaterialPropertyOverrides_Statics::NewProp_IsMasked,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMaterialPropertyOverrides_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMaterialPropertyOverrides_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMGetMaterialPropertyOverrides", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMaterialPropertyOverrides_Statics::VrmBPFunctionLibrary_eventVRMGetMaterialPropertyOverrides_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMaterialPropertyOverrides_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMaterialPropertyOverrides_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMaterialPropertyOverrides_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMaterialPropertyOverrides_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMaterialPropertyOverrides()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMaterialPropertyOverrides_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMobileMode_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMGetMobileMode_Parms
		{
			bool IsMobile;
			bool IsAndroid;
			bool IsIOS;
		};
		static void NewProp_IsMobile_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsMobile;
		static void NewProp_IsAndroid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsAndroid;
		static void NewProp_IsIOS_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_IsIOS;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMobileMode_Statics::NewProp_IsMobile_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMGetMobileMode_Parms*)Obj)->IsMobile = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMobileMode_Statics::NewProp_IsMobile = { "IsMobile", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMGetMobileMode_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMobileMode_Statics::NewProp_IsMobile_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMobileMode_Statics::NewProp_IsAndroid_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMGetMobileMode_Parms*)Obj)->IsAndroid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMobileMode_Statics::NewProp_IsAndroid = { "IsAndroid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMGetMobileMode_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMobileMode_Statics::NewProp_IsAndroid_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMobileMode_Statics::NewProp_IsIOS_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMGetMobileMode_Parms*)Obj)->IsIOS = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMobileMode_Statics::NewProp_IsIOS = { "IsIOS", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMGetMobileMode_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMobileMode_Statics::NewProp_IsIOS_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMobileMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMobileMode_Statics::NewProp_IsMobile,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMobileMode_Statics::NewProp_IsAndroid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMobileMode_Statics::NewProp_IsIOS,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMobileMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMobileMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMGetMobileMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMobileMode_Statics::VrmBPFunctionLibrary_eventVRMGetMobileMode_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMobileMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMobileMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMobileMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMobileMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMobileMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMobileMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMorphTargetList_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMGetMorphTargetList_Parms
		{
			const USkeletalMesh* target;
			TArray<FString> morphTargetList;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UECodeGen_Private::FStrPropertyParams NewProp_morphTargetList_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_morphTargetList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMorphTargetList_Statics::NewProp_target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMorphTargetList_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetMorphTargetList_Parms, target), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMorphTargetList_Statics::NewProp_target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMorphTargetList_Statics::NewProp_target_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMorphTargetList_Statics::NewProp_morphTargetList_Inner = { "morphTargetList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMorphTargetList_Statics::NewProp_morphTargetList = { "morphTargetList", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetMorphTargetList_Parms, morphTargetList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMorphTargetList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMorphTargetList_Statics::NewProp_target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMorphTargetList_Statics::NewProp_morphTargetList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMorphTargetList_Statics::NewProp_morphTargetList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMorphTargetList_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMorphTargetList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMGetMorphTargetList", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMorphTargetList_Statics::VrmBPFunctionLibrary_eventVRMGetMorphTargetList_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMorphTargetList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMorphTargetList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMorphTargetList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMorphTargetList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMorphTargetList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMorphTargetList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetPlayMode_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMGetPlayMode_Parms
		{
			bool bPlay;
			bool bSIE;
			bool bIsEditor;
		};
		static void NewProp_bPlay_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlay;
		static void NewProp_bSIE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSIE;
		static void NewProp_bIsEditor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEditor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetPlayMode_Statics::NewProp_bPlay_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMGetPlayMode_Parms*)Obj)->bPlay = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetPlayMode_Statics::NewProp_bPlay = { "bPlay", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMGetPlayMode_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetPlayMode_Statics::NewProp_bPlay_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetPlayMode_Statics::NewProp_bSIE_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMGetPlayMode_Parms*)Obj)->bSIE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetPlayMode_Statics::NewProp_bSIE = { "bSIE", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMGetPlayMode_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetPlayMode_Statics::NewProp_bSIE_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetPlayMode_Statics::NewProp_bIsEditor_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMGetPlayMode_Parms*)Obj)->bIsEditor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetPlayMode_Statics::NewProp_bIsEditor = { "bIsEditor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMGetPlayMode_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetPlayMode_Statics::NewProp_bIsEditor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetPlayMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetPlayMode_Statics::NewProp_bPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetPlayMode_Statics::NewProp_bSIE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetPlayMode_Statics::NewProp_bIsEditor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetPlayMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetPlayMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMGetPlayMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetPlayMode_Statics::VrmBPFunctionLibrary_eventVRMGetPlayMode_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetPlayMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetPlayMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetPlayMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetPlayMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetPlayMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetPlayMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetPreviewMesh_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMGetPreviewMesh_Parms
		{
			UObject* target;
			USkeletalMesh* mesh;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetPreviewMesh_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetPreviewMesh_Parms, target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetPreviewMesh_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetPreviewMesh_Parms, mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetPreviewMesh_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetPreviewMesh_Statics::NewProp_target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetPreviewMesh_Statics::NewProp_mesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetPreviewMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "Comment", "//static void GetIKRigDefinition(UIKRetargeter, UIKRigDefinition * &src, UIKRigDefinition * &target)\n" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
		{ "ToolTip", "static void GetIKRigDefinition(UIKRetargeter, UIKRigDefinition * &src, UIKRigDefinition * &target)" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetPreviewMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMGetPreviewMesh", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetPreviewMesh_Statics::VrmBPFunctionLibrary_eventVRMGetPreviewMesh_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetPreviewMesh_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetPreviewMesh_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetPreviewMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetPreviewMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetPreviewMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetPreviewMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRefBoneTransform_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMGetRefBoneTransform_Parms
		{
			const USkeleton* target;
			FName boneName;
			FTransform boneTransform;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_boneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_boneName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_boneTransform;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRefBoneTransform_Statics::NewProp_target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRefBoneTransform_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetRefBoneTransform_Parms, target), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRefBoneTransform_Statics::NewProp_target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRefBoneTransform_Statics::NewProp_target_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRefBoneTransform_Statics::NewProp_boneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRefBoneTransform_Statics::NewProp_boneName = { "boneName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetRefBoneTransform_Parms, boneName), METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRefBoneTransform_Statics::NewProp_boneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRefBoneTransform_Statics::NewProp_boneName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRefBoneTransform_Statics::NewProp_boneTransform = { "boneTransform", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetRefBoneTransform_Parms, boneTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRefBoneTransform_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMGetRefBoneTransform_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRefBoneTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMGetRefBoneTransform_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRefBoneTransform_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRefBoneTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRefBoneTransform_Statics::NewProp_target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRefBoneTransform_Statics::NewProp_boneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRefBoneTransform_Statics::NewProp_boneTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRefBoneTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRefBoneTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRefBoneTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMGetRefBoneTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRefBoneTransform_Statics::VrmBPFunctionLibrary_eventVRMGetRefBoneTransform_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRefBoneTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRefBoneTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRefBoneTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRefBoneTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRefBoneTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRefBoneTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRigNodeNameFromBoneName_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMGetRigNodeNameFromBoneName_Parms
		{
			const USkeleton* skeleton;
			FName boneName;
			FName RigNodeName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_skeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_boneName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_boneName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RigNodeName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRigNodeNameFromBoneName_Statics::NewProp_skeleton_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRigNodeNameFromBoneName_Statics::NewProp_skeleton = { "skeleton", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetRigNodeNameFromBoneName_Parms, skeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRigNodeNameFromBoneName_Statics::NewProp_skeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRigNodeNameFromBoneName_Statics::NewProp_skeleton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRigNodeNameFromBoneName_Statics::NewProp_boneName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRigNodeNameFromBoneName_Statics::NewProp_boneName = { "boneName", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetRigNodeNameFromBoneName_Parms, boneName), METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRigNodeNameFromBoneName_Statics::NewProp_boneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRigNodeNameFromBoneName_Statics::NewProp_boneName_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRigNodeNameFromBoneName_Statics::NewProp_RigNodeName = { "RigNodeName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetRigNodeNameFromBoneName_Parms, RigNodeName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRigNodeNameFromBoneName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRigNodeNameFromBoneName_Statics::NewProp_skeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRigNodeNameFromBoneName_Statics::NewProp_boneName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRigNodeNameFromBoneName_Statics::NewProp_RigNodeName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRigNodeNameFromBoneName_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "DynamicOutputParam", "RigNodeName" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRigNodeNameFromBoneName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMGetRigNodeNameFromBoneName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRigNodeNameFromBoneName_Statics::VrmBPFunctionLibrary_eventVRMGetRigNodeNameFromBoneName_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRigNodeNameFromBoneName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRigNodeNameFromBoneName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRigNodeNameFromBoneName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRigNodeNameFromBoneName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRigNodeNameFromBoneName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRigNodeNameFromBoneName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetShadowEnable_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMGetShadowEnable_Parms
		{
			const USkeletalMesh* mesh;
			int32 MaterialIndex;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_mesh;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_MaterialIndex;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetShadowEnable_Statics::NewProp_mesh_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetShadowEnable_Statics::NewProp_mesh = { "mesh", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetShadowEnable_Parms, mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetShadowEnable_Statics::NewProp_mesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetShadowEnable_Statics::NewProp_mesh_MetaData)) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetShadowEnable_Statics::NewProp_MaterialIndex = { "MaterialIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetShadowEnable_Parms, MaterialIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetShadowEnable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMGetShadowEnable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetShadowEnable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMGetShadowEnable_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetShadowEnable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetShadowEnable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetShadowEnable_Statics::NewProp_mesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetShadowEnable_Statics::NewProp_MaterialIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetShadowEnable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetShadowEnable_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetShadowEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMGetShadowEnable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetShadowEnable_Statics::VrmBPFunctionLibrary_eventVRMGetShadowEnable_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetShadowEnable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetShadowEnable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetShadowEnable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetShadowEnable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetShadowEnable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetShadowEnable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetSkeletalMeshFromSkinnedMeshComponent_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMGetSkeletalMeshFromSkinnedMeshComponent_Parms
		{
			const USkinnedMeshComponent* target;
			USkeletalMesh* skeletalmesh;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_skeletalmesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetSkeletalMeshFromSkinnedMeshComponent_Statics::NewProp_target_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetSkeletalMeshFromSkinnedMeshComponent_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetSkeletalMeshFromSkinnedMeshComponent_Parms, target), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetSkeletalMeshFromSkinnedMeshComponent_Statics::NewProp_target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetSkeletalMeshFromSkinnedMeshComponent_Statics::NewProp_target_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetSkeletalMeshFromSkinnedMeshComponent_Statics::NewProp_skeletalmesh = { "skeletalmesh", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetSkeletalMeshFromSkinnedMeshComponent_Parms, skeletalmesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetSkeletalMeshFromSkinnedMeshComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetSkeletalMeshFromSkinnedMeshComponent_Statics::NewProp_target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetSkeletalMeshFromSkinnedMeshComponent_Statics::NewProp_skeletalmesh,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetSkeletalMeshFromSkinnedMeshComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "DynamicOutputParam", "skeletalmesh" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetSkeletalMeshFromSkinnedMeshComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMGetSkeletalMeshFromSkinnedMeshComponent", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetSkeletalMeshFromSkinnedMeshComponent_Statics::VrmBPFunctionLibrary_eventVRMGetSkeletalMeshFromSkinnedMeshComponent_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetSkeletalMeshFromSkinnedMeshComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetSkeletalMeshFromSkinnedMeshComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetSkeletalMeshFromSkinnedMeshComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetSkeletalMeshFromSkinnedMeshComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetSkeletalMeshFromSkinnedMeshComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetSkeletalMeshFromSkinnedMeshComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetTopLevelAssetName_Statics
	{
		struct FTopLevelAssetPath
		{
			FName PackageName;
			FName AssetName;
		};

		struct VrmBPFunctionLibrary_eventVRMGetTopLevelAssetName_Parms
		{
			FAssetData target;
			FName AssetName;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_target;
		static const UECodeGen_Private::FNamePropertyParams NewProp_AssetName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetTopLevelAssetName_Statics::NewProp_target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetTopLevelAssetName_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetTopLevelAssetName_Parms, target), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetTopLevelAssetName_Statics::NewProp_target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetTopLevelAssetName_Statics::NewProp_target_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetTopLevelAssetName_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetTopLevelAssetName_Parms, AssetName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetTopLevelAssetName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetTopLevelAssetName_Statics::NewProp_target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetTopLevelAssetName_Statics::NewProp_AssetName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetTopLevelAssetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "DynamicOutputParam", "AssetName" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetTopLevelAssetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMGetTopLevelAssetName", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetTopLevelAssetName_Statics::VrmBPFunctionLibrary_eventVRMGetTopLevelAssetName_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetTopLevelAssetName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetTopLevelAssetName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetTopLevelAssetName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetTopLevelAssetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetTopLevelAssetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetTopLevelAssetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetUEVersion_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMGetUEVersion_Parms
		{
			int32 major;
			int32 minor;
			int32 patch;
		};
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_major;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_minor;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_patch;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetUEVersion_Statics::NewProp_major = { "major", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetUEVersion_Parms, major), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetUEVersion_Statics::NewProp_minor = { "minor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetUEVersion_Parms, minor), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetUEVersion_Statics::NewProp_patch = { "patch", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMGetUEVersion_Parms, patch), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetUEVersion_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetUEVersion_Statics::NewProp_major,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetUEVersion_Statics::NewProp_minor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetUEVersion_Statics::NewProp_patch,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetUEVersion_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetUEVersion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMGetUEVersion", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetUEVersion_Statics::VrmBPFunctionLibrary_eventVRMGetUEVersion_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetUEVersion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetUEVersion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetUEVersion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetUEVersion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetUEVersion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetUEVersion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMInitAnim_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMInitAnim_Parms
		{
			USkeletalMeshComponent* target;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMInitAnim_Statics::NewProp_target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMInitAnim_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMInitAnim_Parms, target), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMInitAnim_Statics::NewProp_target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMInitAnim_Statics::NewProp_target_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMInitAnim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMInitAnim_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMInitAnim_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMInitAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMInitAnim", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMInitAnim_Statics::VrmBPFunctionLibrary_eventVRMInitAnim_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMInitAnim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMInitAnim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMInitAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMInitAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMInitAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMInitAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMMakeCameraTrackingFocusSettings_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMMakeCameraTrackingFocusSettings_Parms
		{
			AActor* ActorToTrack;
			FVector RelativeOffset;
			bool bDrawDebugTrackingFocusPoint;
			FCameraTrackingFocusSettings Settings;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorToTrack;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeOffset;
		static void NewProp_bDrawDebugTrackingFocusPoint_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDrawDebugTrackingFocusPoint;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Settings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMMakeCameraTrackingFocusSettings_Statics::NewProp_ActorToTrack = { "ActorToTrack", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMMakeCameraTrackingFocusSettings_Parms, ActorToTrack), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMMakeCameraTrackingFocusSettings_Statics::NewProp_RelativeOffset = { "RelativeOffset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMMakeCameraTrackingFocusSettings_Parms, RelativeOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMMakeCameraTrackingFocusSettings_Statics::NewProp_bDrawDebugTrackingFocusPoint_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMMakeCameraTrackingFocusSettings_Parms*)Obj)->bDrawDebugTrackingFocusPoint = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMMakeCameraTrackingFocusSettings_Statics::NewProp_bDrawDebugTrackingFocusPoint = { "bDrawDebugTrackingFocusPoint", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMMakeCameraTrackingFocusSettings_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMMakeCameraTrackingFocusSettings_Statics::NewProp_bDrawDebugTrackingFocusPoint_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMMakeCameraTrackingFocusSettings_Statics::NewProp_Settings = { "Settings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMMakeCameraTrackingFocusSettings_Parms, Settings), Z_Construct_UScriptStruct_FCameraTrackingFocusSettings, METADATA_PARAMS(nullptr, 0) }; // 3475425736
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMMakeCameraTrackingFocusSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMMakeCameraTrackingFocusSettings_Statics::NewProp_ActorToTrack,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMMakeCameraTrackingFocusSettings_Statics::NewProp_RelativeOffset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMMakeCameraTrackingFocusSettings_Statics::NewProp_bDrawDebugTrackingFocusPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMMakeCameraTrackingFocusSettings_Statics::NewProp_Settings,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMMakeCameraTrackingFocusSettings_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "DynamicOutputParam", "Settings" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMMakeCameraTrackingFocusSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMMakeCameraTrackingFocusSettings", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMMakeCameraTrackingFocusSettings_Statics::VrmBPFunctionLibrary_eventVRMMakeCameraTrackingFocusSettings_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMMakeCameraTrackingFocusSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMMakeCameraTrackingFocusSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMMakeCameraTrackingFocusSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMMakeCameraTrackingFocusSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMMakeCameraTrackingFocusSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMMakeCameraTrackingFocusSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMRenderingThreadEnable_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMRenderingThreadEnable_Parms
		{
			bool bEnable;
			bool ReturnValue;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMRenderingThreadEnable_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMRenderingThreadEnable_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMRenderingThreadEnable_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMRenderingThreadEnable_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMRenderingThreadEnable_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMRenderingThreadEnable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMRenderingThreadEnable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMRenderingThreadEnable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMRenderingThreadEnable_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMRenderingThreadEnable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMRenderingThreadEnable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMRenderingThreadEnable_Statics::NewProp_bEnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMRenderingThreadEnable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMRenderingThreadEnable_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMRenderingThreadEnable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMRenderingThreadEnable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMRenderingThreadEnable_Statics::VrmBPFunctionLibrary_eventVRMRenderingThreadEnable_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMRenderingThreadEnable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMRenderingThreadEnable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMRenderingThreadEnable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMRenderingThreadEnable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMRenderingThreadEnable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMRenderingThreadEnable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetActorLabel_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMSetActorLabel_Parms
		{
			AActor* Actor;
			FString NewActorLabel;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NewActorLabel_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_NewActorLabel;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetActorLabel_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMSetActorLabel_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetActorLabel_Statics::NewProp_NewActorLabel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetActorLabel_Statics::NewProp_NewActorLabel = { "NewActorLabel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMSetActorLabel_Parms, NewActorLabel), METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetActorLabel_Statics::NewProp_NewActorLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetActorLabel_Statics::NewProp_NewActorLabel_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetActorLabel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetActorLabel_Statics::NewProp_Actor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetActorLabel_Statics::NewProp_NewActorLabel,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetActorLabel_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "DynamicOutputParam", "Settings" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetActorLabel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMSetActorLabel", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetActorLabel_Statics::VrmBPFunctionLibrary_eventVRMSetActorLabel_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetActorLabel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetActorLabel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetActorLabel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetActorLabel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetActorLabel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetActorLabel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCameraFilmback_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMSetCameraFilmback_Parms
		{
			UCineCameraComponent* CineCamera;
			FCameraFilmbackSettings filmback;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CineCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CineCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_filmback_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_filmback;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCameraFilmback_Statics::NewProp_CineCamera_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCameraFilmback_Statics::NewProp_CineCamera = { "CineCamera", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMSetCameraFilmback_Parms, CineCamera), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCameraFilmback_Statics::NewProp_CineCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCameraFilmback_Statics::NewProp_CineCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCameraFilmback_Statics::NewProp_filmback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCameraFilmback_Statics::NewProp_filmback = { "filmback", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMSetCameraFilmback_Parms, filmback), Z_Construct_UScriptStruct_FCameraFilmbackSettings, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCameraFilmback_Statics::NewProp_filmback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCameraFilmback_Statics::NewProp_filmback_MetaData)) }; // 833749679
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCameraFilmback_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMSetCameraFilmback_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCameraFilmback_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMSetCameraFilmback_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCameraFilmback_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCameraFilmback_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCameraFilmback_Statics::NewProp_CineCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCameraFilmback_Statics::NewProp_filmback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCameraFilmback_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCameraFilmback_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCameraFilmback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMSetCameraFilmback", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCameraFilmback_Statics::VrmBPFunctionLibrary_eventVRMSetCameraFilmback_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCameraFilmback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCameraFilmback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCameraFilmback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCameraFilmback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCameraFilmback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCameraFilmback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCastRaytracedShadow_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMSetCastRaytracedShadow_Parms
		{
			ULightComponent* light;
			bool bEnable;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_light_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_light;
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCastRaytracedShadow_Statics::NewProp_light_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCastRaytracedShadow_Statics::NewProp_light = { "light", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMSetCastRaytracedShadow_Parms, light), Z_Construct_UClass_ULightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCastRaytracedShadow_Statics::NewProp_light_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCastRaytracedShadow_Statics::NewProp_light_MetaData)) };
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCastRaytracedShadow_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMSetCastRaytracedShadow_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCastRaytracedShadow_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMSetCastRaytracedShadow_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCastRaytracedShadow_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCastRaytracedShadow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCastRaytracedShadow_Statics::NewProp_light,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCastRaytracedShadow_Statics::NewProp_bEnable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCastRaytracedShadow_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCastRaytracedShadow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMSetCastRaytracedShadow", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCastRaytracedShadow_Statics::VrmBPFunctionLibrary_eventVRMSetCastRaytracedShadow_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCastRaytracedShadow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCastRaytracedShadow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCastRaytracedShadow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCastRaytracedShadow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCastRaytracedShadow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCastRaytracedShadow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetImportedBounds_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMSetImportedBounds_Parms
		{
			USkeletalMesh* target;
			FVector min;
			FVector max;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UECodeGen_Private::FStructPropertyParams NewProp_min;
		static const UECodeGen_Private::FStructPropertyParams NewProp_max;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetImportedBounds_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMSetImportedBounds_Parms, target), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetImportedBounds_Statics::NewProp_min = { "min", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMSetImportedBounds_Parms, min), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetImportedBounds_Statics::NewProp_max = { "max", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMSetImportedBounds_Parms, max), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetImportedBounds_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetImportedBounds_Statics::NewProp_target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetImportedBounds_Statics::NewProp_min,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetImportedBounds_Statics::NewProp_max,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetImportedBounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetImportedBounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMSetImportedBounds", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetImportedBounds_Statics::VrmBPFunctionLibrary_eventVRMSetImportedBounds_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetImportedBounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetImportedBounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetImportedBounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetImportedBounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetImportedBounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetImportedBounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelLight_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMSetLightingChannelLight_Parms
		{
			ULightComponent* light;
			bool channel0;
			bool channel1;
			bool channel2;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_light_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_light;
		static void NewProp_channel0_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_channel0;
		static void NewProp_channel1_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_channel1;
		static void NewProp_channel2_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_channel2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelLight_Statics::NewProp_light_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelLight_Statics::NewProp_light = { "light", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMSetLightingChannelLight_Parms, light), Z_Construct_UClass_ULightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelLight_Statics::NewProp_light_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelLight_Statics::NewProp_light_MetaData)) };
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelLight_Statics::NewProp_channel0_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMSetLightingChannelLight_Parms*)Obj)->channel0 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelLight_Statics::NewProp_channel0 = { "channel0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMSetLightingChannelLight_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelLight_Statics::NewProp_channel0_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelLight_Statics::NewProp_channel1_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMSetLightingChannelLight_Parms*)Obj)->channel1 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelLight_Statics::NewProp_channel1 = { "channel1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMSetLightingChannelLight_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelLight_Statics::NewProp_channel1_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelLight_Statics::NewProp_channel2_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMSetLightingChannelLight_Parms*)Obj)->channel2 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelLight_Statics::NewProp_channel2 = { "channel2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMSetLightingChannelLight_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelLight_Statics::NewProp_channel2_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelLight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelLight_Statics::NewProp_light,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelLight_Statics::NewProp_channel0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelLight_Statics::NewProp_channel1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelLight_Statics::NewProp_channel2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelLight_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelLight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMSetLightingChannelLight", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelLight_Statics::VrmBPFunctionLibrary_eventVRMSetLightingChannelLight_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelLight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelLight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelLight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelLight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelLight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelLight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelPrim_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMSetLightingChannelPrim_Parms
		{
			UPrimitiveComponent* prim;
			bool channel0;
			bool channel1;
			bool channel2;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_prim_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_prim;
		static void NewProp_channel0_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_channel0;
		static void NewProp_channel1_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_channel1;
		static void NewProp_channel2_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_channel2;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelPrim_Statics::NewProp_prim_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelPrim_Statics::NewProp_prim = { "prim", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMSetLightingChannelPrim_Parms, prim), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelPrim_Statics::NewProp_prim_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelPrim_Statics::NewProp_prim_MetaData)) };
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelPrim_Statics::NewProp_channel0_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMSetLightingChannelPrim_Parms*)Obj)->channel0 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelPrim_Statics::NewProp_channel0 = { "channel0", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMSetLightingChannelPrim_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelPrim_Statics::NewProp_channel0_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelPrim_Statics::NewProp_channel1_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMSetLightingChannelPrim_Parms*)Obj)->channel1 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelPrim_Statics::NewProp_channel1 = { "channel1", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMSetLightingChannelPrim_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelPrim_Statics::NewProp_channel1_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelPrim_Statics::NewProp_channel2_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMSetLightingChannelPrim_Parms*)Obj)->channel2 = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelPrim_Statics::NewProp_channel2 = { "channel2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMSetLightingChannelPrim_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelPrim_Statics::NewProp_channel2_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelPrim_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelPrim_Statics::NewProp_prim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelPrim_Statics::NewProp_channel0,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelPrim_Statics::NewProp_channel1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelPrim_Statics::NewProp_channel2,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelPrim_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelPrim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMSetLightingChannelPrim", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelPrim_Statics::VrmBPFunctionLibrary_eventVRMSetLightingChannelPrim_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelPrim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelPrim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelPrim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelPrim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelPrim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelPrim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetMaterial_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMSetMaterial_Parms
		{
			USkeletalMesh* target;
			int32 no;
			UMaterialInterface* material;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_no;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetMaterial_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMSetMaterial_Parms, target), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetMaterial_Statics::NewProp_no = { "no", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMSetMaterial_Parms, no), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetMaterial_Statics::NewProp_material = { "material", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMSetMaterial_Parms, material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetMaterial_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetMaterial_Statics::NewProp_target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetMaterial_Statics::NewProp_no,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetMaterial_Statics::NewProp_material,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetMaterial_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMSetMaterial", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetMaterial_Statics::VrmBPFunctionLibrary_eventVRMSetMaterial_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetMaterial_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetMaterial_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetMaterial_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPerBoneMotionBlur_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMSetPerBoneMotionBlur_Parms
		{
			USkinnedMeshComponent* SkinnedMesh;
			bool bUsePerBoneMotionBlur;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkinnedMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkinnedMesh;
		static void NewProp_bUsePerBoneMotionBlur_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUsePerBoneMotionBlur;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPerBoneMotionBlur_Statics::NewProp_SkinnedMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPerBoneMotionBlur_Statics::NewProp_SkinnedMesh = { "SkinnedMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMSetPerBoneMotionBlur_Parms, SkinnedMesh), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPerBoneMotionBlur_Statics::NewProp_SkinnedMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPerBoneMotionBlur_Statics::NewProp_SkinnedMesh_MetaData)) };
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPerBoneMotionBlur_Statics::NewProp_bUsePerBoneMotionBlur_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMSetPerBoneMotionBlur_Parms*)Obj)->bUsePerBoneMotionBlur = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPerBoneMotionBlur_Statics::NewProp_bUsePerBoneMotionBlur = { "bUsePerBoneMotionBlur", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMSetPerBoneMotionBlur_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPerBoneMotionBlur_Statics::NewProp_bUsePerBoneMotionBlur_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPerBoneMotionBlur_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPerBoneMotionBlur_Statics::NewProp_SkinnedMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPerBoneMotionBlur_Statics::NewProp_bUsePerBoneMotionBlur,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPerBoneMotionBlur_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPerBoneMotionBlur_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMSetPerBoneMotionBlur", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPerBoneMotionBlur_Statics::VrmBPFunctionLibrary_eventVRMSetPerBoneMotionBlur_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPerBoneMotionBlur_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPerBoneMotionBlur_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPerBoneMotionBlur_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPerBoneMotionBlur_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPerBoneMotionBlur()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPerBoneMotionBlur_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingAO_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMSetPostProcessSettingAO_Parms
		{
			FPostProcessSettings OutSettings;
			FPostProcessSettings InSettings;
			bool bOverride;
			float AOIntensity;
			float Radius;
			bool bRayTracing;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
		static void NewProp_bOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_AOIntensity;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static void NewProp_bRayTracing_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRayTracing;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingAO_Statics::NewProp_OutSettings = { "OutSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMSetPostProcessSettingAO_Parms, OutSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(nullptr, 0) }; // 617129618
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingAO_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingAO_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMSetPostProcessSettingAO_Parms, InSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingAO_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingAO_Statics::NewProp_InSettings_MetaData)) }; // 617129618
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingAO_Statics::NewProp_bOverride_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMSetPostProcessSettingAO_Parms*)Obj)->bOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingAO_Statics::NewProp_bOverride = { "bOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMSetPostProcessSettingAO_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingAO_Statics::NewProp_bOverride_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingAO_Statics::NewProp_AOIntensity = { "AOIntensity", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMSetPostProcessSettingAO_Parms, AOIntensity), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingAO_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMSetPostProcessSettingAO_Parms, Radius), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingAO_Statics::NewProp_bRayTracing_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMSetPostProcessSettingAO_Parms*)Obj)->bRayTracing = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingAO_Statics::NewProp_bRayTracing = { "bRayTracing", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMSetPostProcessSettingAO_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingAO_Statics::NewProp_bRayTracing_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingAO_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingAO_Statics::NewProp_OutSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingAO_Statics::NewProp_InSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingAO_Statics::NewProp_bOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingAO_Statics::NewProp_AOIntensity,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingAO_Statics::NewProp_Radius,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingAO_Statics::NewProp_bRayTracing,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingAO_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "CPP_Default_bRayTracing", "true" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingAO_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMSetPostProcessSettingAO", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingAO_Statics::VrmBPFunctionLibrary_eventVRMSetPostProcessSettingAO_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingAO_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingAO_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingAO_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingAO_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingAO()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingAO_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingFromCineCamera_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMSetPostProcessSettingFromCineCamera_Parms
		{
			FPostProcessSettings OutSettings;
			FPostProcessSettings InSettings;
			const UCineCameraComponent* CineCamera;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CineCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CineCamera;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingFromCineCamera_Statics::NewProp_OutSettings = { "OutSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMSetPostProcessSettingFromCineCamera_Parms, OutSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(nullptr, 0) }; // 617129618
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingFromCineCamera_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingFromCineCamera_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMSetPostProcessSettingFromCineCamera_Parms, InSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingFromCineCamera_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingFromCineCamera_Statics::NewProp_InSettings_MetaData)) }; // 617129618
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingFromCineCamera_Statics::NewProp_CineCamera_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingFromCineCamera_Statics::NewProp_CineCamera = { "CineCamera", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMSetPostProcessSettingFromCineCamera_Parms, CineCamera), Z_Construct_UClass_UCineCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingFromCineCamera_Statics::NewProp_CineCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingFromCineCamera_Statics::NewProp_CineCamera_MetaData)) };
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingFromCineCamera_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMSetPostProcessSettingFromCineCamera_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingFromCineCamera_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMSetPostProcessSettingFromCineCamera_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingFromCineCamera_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingFromCineCamera_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingFromCineCamera_Statics::NewProp_OutSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingFromCineCamera_Statics::NewProp_InSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingFromCineCamera_Statics::NewProp_CineCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingFromCineCamera_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingFromCineCamera_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingFromCineCamera_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMSetPostProcessSettingFromCineCamera", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingFromCineCamera_Statics::VrmBPFunctionLibrary_eventVRMSetPostProcessSettingFromCineCamera_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingFromCineCamera_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingFromCineCamera_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingFromCineCamera_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingFromCineCamera_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingFromCineCamera()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingFromCineCamera_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessToneCurveAmount_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMSetPostProcessToneCurveAmount_Parms
		{
			FPostProcessSettings OutSettings;
			FPostProcessSettings InSettings;
			bool bOverride;
			float Amount;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_OutSettings;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InSettings;
		static void NewProp_bOverride_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverride;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessToneCurveAmount_Statics::NewProp_OutSettings = { "OutSettings", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMSetPostProcessToneCurveAmount_Parms, OutSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(nullptr, 0) }; // 617129618
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessToneCurveAmount_Statics::NewProp_InSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessToneCurveAmount_Statics::NewProp_InSettings = { "InSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMSetPostProcessToneCurveAmount_Parms, InSettings), Z_Construct_UScriptStruct_FPostProcessSettings, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessToneCurveAmount_Statics::NewProp_InSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessToneCurveAmount_Statics::NewProp_InSettings_MetaData)) }; // 617129618
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessToneCurveAmount_Statics::NewProp_bOverride_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMSetPostProcessToneCurveAmount_Parms*)Obj)->bOverride = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessToneCurveAmount_Statics::NewProp_bOverride = { "bOverride", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMSetPostProcessToneCurveAmount_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessToneCurveAmount_Statics::NewProp_bOverride_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessToneCurveAmount_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMSetPostProcessToneCurveAmount_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessToneCurveAmount_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessToneCurveAmount_Statics::NewProp_OutSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessToneCurveAmount_Statics::NewProp_InSettings,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessToneCurveAmount_Statics::NewProp_bOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessToneCurveAmount_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessToneCurveAmount_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessToneCurveAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMSetPostProcessToneCurveAmount", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessToneCurveAmount_Statics::VrmBPFunctionLibrary_eventVRMSetPostProcessToneCurveAmount_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessToneCurveAmount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessToneCurveAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessToneCurveAmount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessToneCurveAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessToneCurveAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessToneCurveAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetShadowSlopeBias_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMSetShadowSlopeBias_Parms
		{
			ULightComponent* light;
			float bias;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_light_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_light;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_bias;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetShadowSlopeBias_Statics::NewProp_light_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetShadowSlopeBias_Statics::NewProp_light = { "light", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMSetShadowSlopeBias_Parms, light), Z_Construct_UClass_ULightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetShadowSlopeBias_Statics::NewProp_light_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetShadowSlopeBias_Statics::NewProp_light_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetShadowSlopeBias_Statics::NewProp_bias = { "bias", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMSetShadowSlopeBias_Parms, bias), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetShadowSlopeBias_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetShadowSlopeBias_Statics::NewProp_light,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetShadowSlopeBias_Statics::NewProp_bias,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetShadowSlopeBias_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "CPP_Default_bias", "0.500000" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetShadowSlopeBias_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMSetShadowSlopeBias", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetShadowSlopeBias_Statics::VrmBPFunctionLibrary_eventVRMSetShadowSlopeBias_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetShadowSlopeBias_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetShadowSlopeBias_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetShadowSlopeBias_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetShadowSlopeBias_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetShadowSlopeBias()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetShadowSlopeBias_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetSpecularScale_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMSetSpecularScale_Parms
		{
			ULightComponent* light;
			float scale;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_light_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_light;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_scale;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetSpecularScale_Statics::NewProp_light_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetSpecularScale_Statics::NewProp_light = { "light", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMSetSpecularScale_Parms, light), Z_Construct_UClass_ULightComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetSpecularScale_Statics::NewProp_light_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetSpecularScale_Statics::NewProp_light_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetSpecularScale_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMSetSpecularScale_Parms, scale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetSpecularScale_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetSpecularScale_Statics::NewProp_light,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetSpecularScale_Statics::NewProp_scale,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetSpecularScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "CPP_Default_scale", "1.000000" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetSpecularScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMSetSpecularScale", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetSpecularScale_Statics::VrmBPFunctionLibrary_eventVRMSetSpecularScale_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetSpecularScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetSpecularScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetSpecularScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetSpecularScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetSpecularScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetSpecularScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetTransparentWindow_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMSetTransparentWindow_Parms
		{
			bool bEnable;
			FLinearColor crKey;
			bool ReturnValue;
		};
		static void NewProp_bEnable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
		static const UECodeGen_Private::FStructPropertyParams NewProp_crKey;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetTransparentWindow_Statics::NewProp_bEnable_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMSetTransparentWindow_Parms*)Obj)->bEnable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetTransparentWindow_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMSetTransparentWindow_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetTransparentWindow_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetTransparentWindow_Statics::NewProp_crKey = { "crKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMSetTransparentWindow_Parms, crKey), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetTransparentWindow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMSetTransparentWindow_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetTransparentWindow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMSetTransparentWindow_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetTransparentWindow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetTransparentWindow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetTransparentWindow_Statics::NewProp_bEnable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetTransparentWindow_Statics::NewProp_crKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetTransparentWindow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetTransparentWindow_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetTransparentWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMSetTransparentWindow", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetTransparentWindow_Statics::VrmBPFunctionLibrary_eventVRMSetTransparentWindow_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetTransparentWindow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetTransparentWindow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetTransparentWindow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetTransparentWindow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetTransparentWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetTransparentWindow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetWidgetMode_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMSetWidgetMode_Parms
		{
			EVRMWidgetMode mode;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_mode_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_mode_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_mode;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetWidgetMode_Statics::NewProp_mode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetWidgetMode_Statics::NewProp_mode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetWidgetMode_Statics::NewProp_mode = { "mode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMSetWidgetMode_Parms, mode), Z_Construct_UEnum_VRM4U_EVRMWidgetMode, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetWidgetMode_Statics::NewProp_mode_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetWidgetMode_Statics::NewProp_mode_MetaData)) }; // 444223330
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetWidgetMode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetWidgetMode_Statics::NewProp_mode_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetWidgetMode_Statics::NewProp_mode,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetWidgetMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetWidgetMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMSetWidgetMode", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetWidgetMode_Statics::VrmBPFunctionLibrary_eventVRMSetWidgetMode_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetWidgetMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetWidgetMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetWidgetMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetWidgetMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetWidgetMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetWidgetMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMTransMatrix_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMTransMatrix_Parms
		{
			FTransform transform;
			TArray<FLinearColor> matrix;
			TArray<FLinearColor> matrix_inv;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_transform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_transform;
		static const UECodeGen_Private::FStructPropertyParams NewProp_matrix_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_matrix;
		static const UECodeGen_Private::FStructPropertyParams NewProp_matrix_inv_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_matrix_inv;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMTransMatrix_Statics::NewProp_transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMTransMatrix_Statics::NewProp_transform = { "transform", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMTransMatrix_Parms, transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMTransMatrix_Statics::NewProp_transform_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMTransMatrix_Statics::NewProp_transform_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMTransMatrix_Statics::NewProp_matrix_Inner = { "matrix", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMTransMatrix_Statics::NewProp_matrix = { "matrix", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMTransMatrix_Parms, matrix), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMTransMatrix_Statics::NewProp_matrix_inv_Inner = { "matrix_inv", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMTransMatrix_Statics::NewProp_matrix_inv = { "matrix_inv", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMTransMatrix_Parms, matrix_inv), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMTransMatrix_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMTransMatrix_Statics::NewProp_transform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMTransMatrix_Statics::NewProp_matrix_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMTransMatrix_Statics::NewProp_matrix,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMTransMatrix_Statics::NewProp_matrix_inv_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMTransMatrix_Statics::NewProp_matrix_inv,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMTransMatrix_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMTransMatrix_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMTransMatrix", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMTransMatrix_Statics::VrmBPFunctionLibrary_eventVRMTransMatrix_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMTransMatrix_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMTransMatrix_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMTransMatrix_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMTransMatrix_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMTransMatrix()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMTransMatrix_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMUpdateRefPose_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMUpdateRefPose_Parms
		{
			USkeletalMeshComponent* target;
			bool bForceAlignGlobal;
			bool bForceUE4Humanoid;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_target_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_target;
		static void NewProp_bForceAlignGlobal_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceAlignGlobal;
		static void NewProp_bForceUE4Humanoid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceUE4Humanoid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMUpdateRefPose_Statics::NewProp_target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMUpdateRefPose_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMUpdateRefPose_Parms, target), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMUpdateRefPose_Statics::NewProp_target_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMUpdateRefPose_Statics::NewProp_target_MetaData)) };
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMUpdateRefPose_Statics::NewProp_bForceAlignGlobal_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMUpdateRefPose_Parms*)Obj)->bForceAlignGlobal = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMUpdateRefPose_Statics::NewProp_bForceAlignGlobal = { "bForceAlignGlobal", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMUpdateRefPose_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMUpdateRefPose_Statics::NewProp_bForceAlignGlobal_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMUpdateRefPose_Statics::NewProp_bForceUE4Humanoid_SetBit(void* Obj)
	{
		((VrmBPFunctionLibrary_eventVRMUpdateRefPose_Parms*)Obj)->bForceUE4Humanoid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMUpdateRefPose_Statics::NewProp_bForceUE4Humanoid = { "bForceUE4Humanoid", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmBPFunctionLibrary_eventVRMUpdateRefPose_Parms), &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMUpdateRefPose_Statics::NewProp_bForceUE4Humanoid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMUpdateRefPose_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMUpdateRefPose_Statics::NewProp_target,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMUpdateRefPose_Statics::NewProp_bForceAlignGlobal,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMUpdateRefPose_Statics::NewProp_bForceUE4Humanoid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMUpdateRefPose_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMUpdateRefPose_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMUpdateRefPose", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMUpdateRefPose_Statics::VrmBPFunctionLibrary_eventVRMUpdateRefPose_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMUpdateRefPose_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMUpdateRefPose_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMUpdateRefPose_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMUpdateRefPose_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMUpdateRefPose()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMUpdateRefPose_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMUpdateTextureProperty_Statics
	{
		struct VrmBPFunctionLibrary_eventVRMUpdateTextureProperty_Parms
		{
			UTexture* Texture;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Texture;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMUpdateTextureProperty_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmBPFunctionLibrary_eventVRMUpdateTextureProperty_Parms, Texture), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMUpdateTextureProperty_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMUpdateTextureProperty_Statics::NewProp_Texture,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMUpdateTextureProperty_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMUpdateTextureProperty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmBPFunctionLibrary, nullptr, "VRMUpdateTextureProperty", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMUpdateTextureProperty_Statics::VrmBPFunctionLibrary_eventVRMUpdateTextureProperty_Parms), Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMUpdateTextureProperty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMUpdateTextureProperty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMUpdateTextureProperty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMUpdateTextureProperty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMUpdateTextureProperty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMUpdateTextureProperty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrmBPFunctionLibrary);
	UClass* Z_Construct_UClass_UVrmBPFunctionLibrary_NoRegister()
	{
		return UVrmBPFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVrmBPFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrmBPFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVrmBPFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAddTickPrerequisite, "VRMAddTickPrerequisite" }, // 766060127
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMAllowTranslucentSelection, "VRMAllowTranslucentSelection" }, // 3344881975
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMBakeAnim, "VRMBakeAnim" }, // 1874721803
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialBlendMode, "VRMChangeMaterialBlendMode" }, // 2896704429
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialParent, "VRMChangeMaterialParent" }, // 2755991326
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialScalarParameter, "VRMChangeMaterialScalarParameter" }, // 675049817
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialShadingModel, "VRMChangeMaterialShadingModel" }, // 4186938928
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialSkipEditChange, "VRMChangeMaterialSkipEditChange" }, // 3284052017
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialStaticSwitch, "VRMChangeMaterialStaticSwitch" }, // 1669339289
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialTexture, "VRMChangeMaterialTexture" }, // 4213497409
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMChangeMaterialVectorParameter, "VRMChangeMaterialVectorParameter" }, // 2883382070
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMCreateRenderTarget2D, "VRMCreateRenderTarget2D" }, // 1152316591
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMDrawMaterialToRenderTarget, "VRMDrawMaterialToRenderTarget" }, // 2770998470
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMDuplicateAsset, "VRMDuplicateAsset" }, // 70773820
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMExecuteConsoleCommand, "VRMExecuteConsoleCommand" }, // 341110660
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAllActorsHasSceneComponent, "VRMGetAllActorsHasSceneComponent" }, // 2905924413
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAnimationAssetData, "VRMGetAnimationAssetData" }, // 1921895184
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetAssetsByPackageName, "VRMGetAssetsByPackageName" }, // 1391753984
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraFilmback, "VRMGetCameraFilmback" }, // 489500025
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetCameraTransform, "VRMGetCameraTransform" }, // 3398847342
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetEpicSkeletonBoneNameList, "VRMGetEpicSkeletonBoneNameList" }, // 588368929
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetEpicSkeletonToHumanoid, "VRMGetEpicSkeletonToHumanoid" }, // 2254421523
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidBoneNameList, "VRMGetHumanoidBoneNameList" }, // 2220273393
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetHumanoidParentBone, "VRMGetHumanoidParentBone" }, // 1035421395
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetIKRigDefinition, "VRMGetIKRigDefinition" }, // 2685712858
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMaterialPropertyOverrides, "VRMGetMaterialPropertyOverrides" }, // 1894706645
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMobileMode, "VRMGetMobileMode" }, // 2591841701
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetMorphTargetList, "VRMGetMorphTargetList" }, // 2284646698
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetPlayMode, "VRMGetPlayMode" }, // 313020703
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetPreviewMesh, "VRMGetPreviewMesh" }, // 4017594157
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRefBoneTransform, "VRMGetRefBoneTransform" }, // 264360518
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetRigNodeNameFromBoneName, "VRMGetRigNodeNameFromBoneName" }, // 3227400603
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetShadowEnable, "VRMGetShadowEnable" }, // 2050761139
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetSkeletalMeshFromSkinnedMeshComponent, "VRMGetSkeletalMeshFromSkinnedMeshComponent" }, // 2806331891
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetTopLevelAssetName, "VRMGetTopLevelAssetName" }, // 1863178193
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMGetUEVersion, "VRMGetUEVersion" }, // 1693510933
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMInitAnim, "VRMInitAnim" }, // 352569990
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMMakeCameraTrackingFocusSettings, "VRMMakeCameraTrackingFocusSettings" }, // 2323634759
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMRenderingThreadEnable, "VRMRenderingThreadEnable" }, // 525682212
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetActorLabel, "VRMSetActorLabel" }, // 3755131805
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCameraFilmback, "VRMSetCameraFilmback" }, // 4140736641
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetCastRaytracedShadow, "VRMSetCastRaytracedShadow" }, // 1186582735
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetImportedBounds, "VRMSetImportedBounds" }, // 4234328662
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelLight, "VRMSetLightingChannelLight" }, // 3405213098
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetLightingChannelPrim, "VRMSetLightingChannelPrim" }, // 2420198788
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetMaterial, "VRMSetMaterial" }, // 3960204895
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPerBoneMotionBlur, "VRMSetPerBoneMotionBlur" }, // 840794406
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingAO, "VRMSetPostProcessSettingAO" }, // 3591749907
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessSettingFromCineCamera, "VRMSetPostProcessSettingFromCineCamera" }, // 2006634641
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetPostProcessToneCurveAmount, "VRMSetPostProcessToneCurveAmount" }, // 923340519
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetShadowSlopeBias, "VRMSetShadowSlopeBias" }, // 774839040
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetSpecularScale, "VRMSetSpecularScale" }, // 3106675175
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetTransparentWindow, "VRMSetTransparentWindow" }, // 2287344569
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMSetWidgetMode, "VRMSetWidgetMode" }, // 2444777923
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMTransMatrix, "VRMTransMatrix" }, // 780039680
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMUpdateRefPose, "VRMUpdateRefPose" }, // 502938616
		{ &Z_Construct_UFunction_UVrmBPFunctionLibrary_VRMUpdateTextureProperty, "VRMUpdateTextureProperty" }, // 2790560045
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmBPFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "VrmBPFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/VrmBPFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmBPFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmBPFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrmBPFunctionLibrary_Statics::ClassParams = {
		&UVrmBPFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVrmBPFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmBPFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVrmBPFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UVrmBPFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrmBPFunctionLibrary.OuterSingleton, Z_Construct_UClass_UVrmBPFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVrmBPFunctionLibrary.OuterSingleton;
	}
	template<> VRM4U_API UClass* StaticClass<UVrmBPFunctionLibrary>()
	{
		return UVrmBPFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmBPFunctionLibrary);
	UVrmBPFunctionLibrary::~UVrmBPFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmBPFunctionLibrary_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmBPFunctionLibrary_h_Statics::EnumInfo[] = {
		{ EVRMWidgetMode_StaticEnum, TEXT("EVRMWidgetMode"), &Z_Registration_Info_UEnum_EVRMWidgetMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 444223330U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmBPFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVrmBPFunctionLibrary, UVrmBPFunctionLibrary::StaticClass, TEXT("UVrmBPFunctionLibrary"), &Z_Registration_Info_UClass_UVrmBPFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrmBPFunctionLibrary), 3723737700U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmBPFunctionLibrary_h_179852265(TEXT("/Script/VRM4U"),
		Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmBPFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmBPFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmBPFunctionLibrary_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmBPFunctionLibrary_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
