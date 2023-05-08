// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4UImporter/Private/VrmAssetListThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmAssetListThumbnailRenderer() {}
// Cross Module References
	UNREALED_API UClass* Z_Construct_UClass_USkeletalMeshThumbnailRenderer_NoRegister();
	UNREALED_API UClass* Z_Construct_UClass_UTextureThumbnailRenderer();
	UPackage* Z_Construct_UPackage__Script_VRM4UImporter();
	VRM4UIMPORTER_API UClass* Z_Construct_UClass_UVrmAssetListThumbnailRenderer();
	VRM4UIMPORTER_API UClass* Z_Construct_UClass_UVrmAssetListThumbnailRenderer_NoRegister();
// End Cross Module References
	void UVrmAssetListThumbnailRenderer::StaticRegisterNativesUVrmAssetListThumbnailRenderer()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrmAssetListThumbnailRenderer);
	UClass* Z_Construct_UClass_UVrmAssetListThumbnailRenderer_NoRegister()
	{
		return UVrmAssetListThumbnailRenderer::StaticClass();
	}
	struct Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_meshThumbnail_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meshThumbnail;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UTextureThumbnailRenderer,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4UImporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VrmAssetListThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/VrmAssetListThumbnailRenderer.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::NewProp_meshThumbnail_MetaData[] = {
		{ "Comment", "//void DrawGrid(int32 X, int32 Y, uint32 Width, uint32 Height, FCanvas* Canvas);\n" },
		{ "ModuleRelativePath", "Private/VrmAssetListThumbnailRenderer.h" },
		{ "ToolTip", "void DrawGrid(int32 X, int32 Y, uint32 Width, uint32 Height, FCanvas* Canvas);" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::NewProp_meshThumbnail = { "meshThumbnail", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmAssetListThumbnailRenderer, meshThumbnail), Z_Construct_UClass_USkeletalMeshThumbnailRenderer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::NewProp_meshThumbnail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::NewProp_meshThumbnail_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::NewProp_meshThumbnail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmAssetListThumbnailRenderer>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::ClassParams = {
		&UVrmAssetListThumbnailRenderer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVrmAssetListThumbnailRenderer()
	{
		if (!Z_Registration_Info_UClass_UVrmAssetListThumbnailRenderer.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrmAssetListThumbnailRenderer.OuterSingleton, Z_Construct_UClass_UVrmAssetListThumbnailRenderer_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVrmAssetListThumbnailRenderer.OuterSingleton;
	}
	template<> VRM4UIMPORTER_API UClass* StaticClass<UVrmAssetListThumbnailRenderer>()
	{
		return UVrmAssetListThumbnailRenderer::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmAssetListThumbnailRenderer);
	UVrmAssetListThumbnailRenderer::~UVrmAssetListThumbnailRenderer() {}
	struct Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4UImporter_Private_VrmAssetListThumbnailRenderer_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4UImporter_Private_VrmAssetListThumbnailRenderer_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVrmAssetListThumbnailRenderer, UVrmAssetListThumbnailRenderer::StaticClass, TEXT("UVrmAssetListThumbnailRenderer"), &Z_Registration_Info_UClass_UVrmAssetListThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrmAssetListThumbnailRenderer), 1875977907U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4UImporter_Private_VrmAssetListThumbnailRenderer_h_2378263693(TEXT("/Script/VRM4UImporter"),
		Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4UImporter_Private_VrmAssetListThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4UImporter_Private_VrmAssetListThumbnailRenderer_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
