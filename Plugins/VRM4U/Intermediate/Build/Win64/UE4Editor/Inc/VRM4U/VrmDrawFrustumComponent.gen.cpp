// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmDrawFrustumComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmDrawFrustumComponent() {}
// Cross Module References
	VRM4U_API UClass* Z_Construct_UClass_UVrmDrawFrustumComponent_NoRegister();
	VRM4U_API UClass* Z_Construct_UClass_UVrmDrawFrustumComponent();
	ENGINE_API UClass* Z_Construct_UClass_UDrawFrustumComponent();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	void UVrmDrawFrustumComponent::StaticRegisterNativesUVrmDrawFrustumComponent()
	{
	}
	UClass* Z_Construct_UClass_UVrmDrawFrustumComponent_NoRegister()
	{
		return UVrmDrawFrustumComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVrmDrawFrustumComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OffCenterProjectionOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OffCenterProjectionOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrmDrawFrustumComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDrawFrustumComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmDrawFrustumComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\x09Utility component for drawing a view frustum. Origin is at the component location, frustum points down position X axis.\n */" },
		{ "HideCategories", "Object Object Mobility VirtualTexture Trigger" },
		{ "IncludePath", "VrmDrawFrustumComponent.h" },
		{ "ModuleRelativePath", "Public/VrmDrawFrustumComponent.h" },
		{ "ToolTip", "Utility component for drawing a view frustum. Origin is at the component location, frustum points down position X axis." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmDrawFrustumComponent_Statics::NewProp_OffCenterProjectionOffset_MetaData[] = {
		{ "Category", "DrawFrustumComponent" },
		{ "ModuleRelativePath", "Public/VrmDrawFrustumComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmDrawFrustumComponent_Statics::NewProp_OffCenterProjectionOffset = { "OffCenterProjectionOffset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmDrawFrustumComponent, OffCenterProjectionOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UVrmDrawFrustumComponent_Statics::NewProp_OffCenterProjectionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmDrawFrustumComponent_Statics::NewProp_OffCenterProjectionOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmDrawFrustumComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmDrawFrustumComponent_Statics::NewProp_OffCenterProjectionOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmDrawFrustumComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmDrawFrustumComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVrmDrawFrustumComponent_Statics::ClassParams = {
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVrmDrawFrustumComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVrmDrawFrustumComponent, 2126138396);
	template<> VRM4U_API UClass* StaticClass<UVrmDrawFrustumComponent>()
	{
		return UVrmDrawFrustumComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVrmDrawFrustumComponent(Z_Construct_UClass_UVrmDrawFrustumComponent, &UVrmDrawFrustumComponent::StaticClass, TEXT("/Script/VRM4U"), TEXT("UVrmDrawFrustumComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmDrawFrustumComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
