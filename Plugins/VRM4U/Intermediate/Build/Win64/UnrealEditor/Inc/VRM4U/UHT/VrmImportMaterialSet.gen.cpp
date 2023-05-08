// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmImportMaterialSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmImportMaterialSet() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	VRM4U_API UClass* Z_Construct_UClass_UVrmImportMaterialSet();
	VRM4U_API UClass* Z_Construct_UClass_UVrmImportMaterialSet_NoRegister();
// End Cross Module References
	void UVrmImportMaterialSet::StaticRegisterNativesUVrmImportMaterialSet()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrmImportMaterialSet);
	UClass* Z_Construct_UClass_UVrmImportMaterialSet_NoRegister()
	{
		return UVrmImportMaterialSet::StaticClass();
	}
	struct Z_Construct_UClass_UVrmImportMaterialSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Opaque_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Opaque;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpaqueTwoSided_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OpaqueTwoSided;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Translucent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Translucent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TranslucentTwoSided_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TranslucentTwoSided;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrmImportMaterialSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportMaterialSet_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VrmImportMaterialSet.h" },
		{ "ModuleRelativePath", "Public/VrmImportMaterialSet.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_Opaque_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/VrmImportMaterialSet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_Opaque = { "Opaque", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmImportMaterialSet, Opaque), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_Opaque_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_Opaque_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_OpaqueTwoSided_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/VrmImportMaterialSet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_OpaqueTwoSided = { "OpaqueTwoSided", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmImportMaterialSet, OpaqueTwoSided), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_OpaqueTwoSided_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_OpaqueTwoSided_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_Translucent_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/VrmImportMaterialSet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_Translucent = { "Translucent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmImportMaterialSet, Translucent), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_Translucent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_Translucent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_TranslucentTwoSided_MetaData[] = {
		{ "Category", "Material" },
		{ "ModuleRelativePath", "Public/VrmImportMaterialSet.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_TranslucentTwoSided = { "TranslucentTwoSided", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmImportMaterialSet, TranslucentTwoSided), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_TranslucentTwoSided_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_TranslucentTwoSided_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmImportMaterialSet_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_Opaque,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_OpaqueTwoSided,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_Translucent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmImportMaterialSet_Statics::NewProp_TranslucentTwoSided,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmImportMaterialSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmImportMaterialSet>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrmImportMaterialSet_Statics::ClassParams = {
		&UVrmImportMaterialSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVrmImportMaterialSet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportMaterialSet_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVrmImportMaterialSet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmImportMaterialSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVrmImportMaterialSet()
	{
		if (!Z_Registration_Info_UClass_UVrmImportMaterialSet.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrmImportMaterialSet.OuterSingleton, Z_Construct_UClass_UVrmImportMaterialSet_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVrmImportMaterialSet.OuterSingleton;
	}
	template<> VRM4U_API UClass* StaticClass<UVrmImportMaterialSet>()
	{
		return UVrmImportMaterialSet::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmImportMaterialSet);
	UVrmImportMaterialSet::~UVrmImportMaterialSet() {}
	struct Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmImportMaterialSet_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmImportMaterialSet_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVrmImportMaterialSet, UVrmImportMaterialSet::StaticClass, TEXT("UVrmImportMaterialSet"), &Z_Registration_Info_UClass_UVrmImportMaterialSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrmImportMaterialSet), 583346374U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmImportMaterialSet_h_2804236249(TEXT("/Script/VRM4U"),
		Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmImportMaterialSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmImportMaterialSet_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
