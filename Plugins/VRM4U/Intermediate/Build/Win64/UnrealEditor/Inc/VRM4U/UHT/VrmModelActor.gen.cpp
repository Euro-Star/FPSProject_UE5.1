// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmModelActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmModelActor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	VRM4U_API UClass* Z_Construct_UClass_AVrmModelActor();
	VRM4U_API UClass* Z_Construct_UClass_AVrmModelActor_NoRegister();
// End Cross Module References
	void AVrmModelActor::StaticRegisterNativesAVrmModelActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVrmModelActor);
	UClass* Z_Construct_UClass_AVrmModelActor_NoRegister()
	{
		return AVrmModelActor::StaticClass();
	}
	struct Z_Construct_UClass_AVrmModelActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseOpaqueMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseOpaqueMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseTransparentMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseTransparentMaterial;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Textures_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Textures_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Textures;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Materials_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Materials_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Materials;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVrmModelActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrmModelActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VrmModelActor.h" },
		{ "ModuleRelativePath", "Public/VrmModelActor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrmModelActor_Statics::NewProp_BaseOpaqueMaterial_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmModelActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVrmModelActor_Statics::NewProp_BaseOpaqueMaterial = { "BaseOpaqueMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVrmModelActor, BaseOpaqueMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVrmModelActor_Statics::NewProp_BaseOpaqueMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVrmModelActor_Statics::NewProp_BaseOpaqueMaterial_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrmModelActor_Statics::NewProp_BaseTransparentMaterial_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmModelActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVrmModelActor_Statics::NewProp_BaseTransparentMaterial = { "BaseTransparentMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVrmModelActor, BaseTransparentMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVrmModelActor_Statics::NewProp_BaseTransparentMaterial_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVrmModelActor_Statics::NewProp_BaseTransparentMaterial_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVrmModelActor_Statics::NewProp_Textures_Inner = { "Textures", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrmModelActor_Statics::NewProp_Textures_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmModelActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVrmModelActor_Statics::NewProp_Textures = { "Textures", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVrmModelActor, Textures), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AVrmModelActor_Statics::NewProp_Textures_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVrmModelActor_Statics::NewProp_Textures_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVrmModelActor_Statics::NewProp_Materials_Inner = { "Materials", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrmModelActor_Statics::NewProp_Materials_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmModelActor.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AVrmModelActor_Statics::NewProp_Materials = { "Materials", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVrmModelActor, Materials), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AVrmModelActor_Statics::NewProp_Materials_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVrmModelActor_Statics::NewProp_Materials_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrmModelActor_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmModelActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVrmModelActor_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AVrmModelActor, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVrmModelActor_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVrmModelActor_Statics::NewProp_SkeletalMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVrmModelActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrmModelActor_Statics::NewProp_BaseOpaqueMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrmModelActor_Statics::NewProp_BaseTransparentMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrmModelActor_Statics::NewProp_Textures_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrmModelActor_Statics::NewProp_Textures,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrmModelActor_Statics::NewProp_Materials_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrmModelActor_Statics::NewProp_Materials,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVrmModelActor_Statics::NewProp_SkeletalMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVrmModelActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVrmModelActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVrmModelActor_Statics::ClassParams = {
		&AVrmModelActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AVrmModelActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AVrmModelActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVrmModelActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVrmModelActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVrmModelActor()
	{
		if (!Z_Registration_Info_UClass_AVrmModelActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVrmModelActor.OuterSingleton, Z_Construct_UClass_AVrmModelActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVrmModelActor.OuterSingleton;
	}
	template<> VRM4U_API UClass* StaticClass<AVrmModelActor>()
	{
		return AVrmModelActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVrmModelActor);
	AVrmModelActor::~AVrmModelActor() {}
	struct Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmModelActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmModelActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVrmModelActor, AVrmModelActor::StaticClass, TEXT("AVrmModelActor"), &Z_Registration_Info_UClass_AVrmModelActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVrmModelActor), 1457198577U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmModelActor_h_1013962308(TEXT("/Script/VRM4U"),
		Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmModelActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmModelActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
