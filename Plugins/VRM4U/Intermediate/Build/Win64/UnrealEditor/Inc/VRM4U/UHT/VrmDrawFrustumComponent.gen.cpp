// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmDrawFrustumComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmDrawFrustumComponent() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_UDrawFrustumComponent();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	VRM4U_API UClass* Z_Construct_UClass_UVrmDrawFrustumComponent();
	VRM4U_API UClass* Z_Construct_UClass_UVrmDrawFrustumComponent_NoRegister();
// End Cross Module References
	void UVrmDrawFrustumComponent::StaticRegisterNativesUVrmDrawFrustumComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrmDrawFrustumComponent);
	UClass* Z_Construct_UClass_UVrmDrawFrustumComponent_NoRegister()
	{
		return UVrmDrawFrustumComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVrmDrawFrustumComponent_Statics
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
	UObject* (*const Z_Construct_UClass_UVrmDrawFrustumComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDrawFrustumComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmDrawFrustumComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09Utility component for drawing a view frustum. Origin is at the component location, frustum points down position X axis.\n */" },
		{ "HideCategories", "Object Object Mobility VirtualTexture Trigger" },
		{ "IncludePath", "VrmDrawFrustumComponent.h" },
		{ "ModuleRelativePath", "Public/VrmDrawFrustumComponent.h" },
		{ "ToolTip", "Utility component for drawing a view frustum. Origin is at the component location, frustum points down position X axis." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmDrawFrustumComponent_Statics::NewProp_OffCenterProjectionOffset_MetaData[] = {
		{ "Category", "DrawFrustumComponent" },
		{ "ModuleRelativePath", "Public/VrmDrawFrustumComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmDrawFrustumComponent_Statics::NewProp_OffCenterProjectionOffset = { "OffCenterProjectionOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmDrawFrustumComponent, OffCenterProjectionOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UVrmDrawFrustumComponent_Statics::NewProp_OffCenterProjectionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmDrawFrustumComponent_Statics::NewProp_OffCenterProjectionOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmDrawFrustumComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmDrawFrustumComponent_Statics::NewProp_OffCenterProjectionOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmDrawFrustumComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmDrawFrustumComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrmDrawFrustumComponent_Statics::ClassParams = {
		&UVrmDrawFrustumComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVrmDrawFrustumComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVrmDrawFrustumComponent_Statics::PropPointers),
		0,
		0x00A830A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVrmDrawFrustumComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmDrawFrustumComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVrmDrawFrustumComponent()
	{
		if (!Z_Registration_Info_UClass_UVrmDrawFrustumComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrmDrawFrustumComponent.OuterSingleton, Z_Construct_UClass_UVrmDrawFrustumComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVrmDrawFrustumComponent.OuterSingleton;
	}
	template<> VRM4U_API UClass* StaticClass<UVrmDrawFrustumComponent>()
	{
		return UVrmDrawFrustumComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmDrawFrustumComponent);
	UVrmDrawFrustumComponent::~UVrmDrawFrustumComponent() {}
	struct Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmDrawFrustumComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmDrawFrustumComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVrmDrawFrustumComponent, UVrmDrawFrustumComponent::StaticClass, TEXT("UVrmDrawFrustumComponent"), &Z_Registration_Info_UClass_UVrmDrawFrustumComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrmDrawFrustumComponent), 1397273356U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmDrawFrustumComponent_h_2160354450(TEXT("/Script/VRM4U"),
		Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmDrawFrustumComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmDrawFrustumComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
