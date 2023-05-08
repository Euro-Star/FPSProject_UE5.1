// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmCineCameraComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmCineCameraComponent() {}
// Cross Module References
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	VRM4U_API UClass* Z_Construct_UClass_UVrmCineCameraComponent();
	VRM4U_API UClass* Z_Construct_UClass_UVrmCineCameraComponent_NoRegister();
// End Cross Module References
	void UVrmCineCameraComponent::StaticRegisterNativesUVrmCineCameraComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrmCineCameraComponent);
	UClass* Z_Construct_UClass_UVrmCineCameraComponent_NoRegister()
	{
		return UVrmCineCameraComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVrmCineCameraComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OffCenterProjectionOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OffCenterProjectionOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrmCineCameraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCineCameraComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmCineCameraComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Camera" },
		{ "HideCategories", "CameraSettings Mobility Rendering LOD Trigger PhysicsVolume" },
		{ "HideFunctions", "SetFieldOfView SetAspectRatio" },
		{ "IncludePath", "VrmCineCameraComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmCineCameraComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmCineCameraComponent_Statics::NewProp_OffCenterProjectionOffset_MetaData[] = {
		{ "Category", "Vrm Camera Settings" },
		{ "ModuleRelativePath", "Public/VrmCineCameraComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmCineCameraComponent_Statics::NewProp_OffCenterProjectionOffset = { "OffCenterProjectionOffset", nullptr, (EPropertyFlags)0x0010000200000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmCineCameraComponent, OffCenterProjectionOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UVrmCineCameraComponent_Statics::NewProp_OffCenterProjectionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmCineCameraComponent_Statics::NewProp_OffCenterProjectionOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmCineCameraComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmCineCameraComponent_Statics::NewProp_OffCenterProjectionOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmCineCameraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmCineCameraComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrmCineCameraComponent_Statics::ClassParams = {
		&UVrmCineCameraComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVrmCineCameraComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVrmCineCameraComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVrmCineCameraComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmCineCameraComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVrmCineCameraComponent()
	{
		if (!Z_Registration_Info_UClass_UVrmCineCameraComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrmCineCameraComponent.OuterSingleton, Z_Construct_UClass_UVrmCineCameraComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVrmCineCameraComponent.OuterSingleton;
	}
	template<> VRM4U_API UClass* StaticClass<UVrmCineCameraComponent>()
	{
		return UVrmCineCameraComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmCineCameraComponent);
	UVrmCineCameraComponent::~UVrmCineCameraComponent() {}
	struct Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmCineCameraComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmCineCameraComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVrmCineCameraComponent, UVrmCineCameraComponent::StaticClass, TEXT("UVrmCineCameraComponent"), &Z_Registration_Info_UClass_UVrmCineCameraComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrmCineCameraComponent), 4124379049U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmCineCameraComponent_h_1058064408(TEXT("/Script/VRM4U"),
		Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmCineCameraComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmCineCameraComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
