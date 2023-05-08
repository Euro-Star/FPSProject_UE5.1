// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4ULoader/Public/VrmSkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmSkeletalMeshComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent();
	UPackage* Z_Construct_UPackage__Script_VRM4ULoader();
	VRM4ULOADER_API UClass* Z_Construct_UClass_UVrmSkeletalMeshComponent();
	VRM4ULOADER_API UClass* Z_Construct_UClass_UVrmSkeletalMeshComponent_NoRegister();
// End Cross Module References
	void UVrmSkeletalMeshComponent::StaticRegisterNativesUVrmSkeletalMeshComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrmSkeletalMeshComponent);
	UClass* Z_Construct_UClass_UVrmSkeletalMeshComponent_NoRegister()
	{
		return UVrmSkeletalMeshComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVrmSkeletalMeshComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrmSkeletalMeshComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USkeletalMeshComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4ULoader,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmSkeletalMeshComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n *///UCLASS(meta=(BlueprintSpawnableComponent))\n" },
		{ "HideCategories", "Object Mesh|SkeletalAsset Object Mobility Trigger" },
		{ "IncludePath", "VrmSkeletalMeshComponent.h" },
		{ "ModuleRelativePath", "Public/VrmSkeletalMeshComponent.h" },
		{ "ToolTip", "//UCLASS(meta=(BlueprintSpawnableComponent))" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmSkeletalMeshComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmSkeletalMeshComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrmSkeletalMeshComponent_Statics::ClassParams = {
		&UVrmSkeletalMeshComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVrmSkeletalMeshComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmSkeletalMeshComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVrmSkeletalMeshComponent()
	{
		if (!Z_Registration_Info_UClass_UVrmSkeletalMeshComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrmSkeletalMeshComponent.OuterSingleton, Z_Construct_UClass_UVrmSkeletalMeshComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVrmSkeletalMeshComponent.OuterSingleton;
	}
	template<> VRM4ULOADER_API UClass* StaticClass<UVrmSkeletalMeshComponent>()
	{
		return UVrmSkeletalMeshComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmSkeletalMeshComponent);
	UVrmSkeletalMeshComponent::~UVrmSkeletalMeshComponent() {}
	struct Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmSkeletalMeshComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmSkeletalMeshComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVrmSkeletalMeshComponent, UVrmSkeletalMeshComponent::StaticClass, TEXT("UVrmSkeletalMeshComponent"), &Z_Registration_Info_UClass_UVrmSkeletalMeshComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrmSkeletalMeshComponent), 2724807527U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmSkeletalMeshComponent_h_781272724(TEXT("/Script/VRM4ULoader"),
		Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmSkeletalMeshComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmSkeletalMeshComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
