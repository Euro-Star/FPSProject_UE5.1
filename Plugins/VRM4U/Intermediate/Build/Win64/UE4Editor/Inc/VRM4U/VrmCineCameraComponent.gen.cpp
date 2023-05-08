// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmCineCameraComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmCineCameraComponent() {}
// Cross Module References
	VRM4U_API UClass* Z_Construct_UClass_UVrmCineCameraComponent_NoRegister();
	VRM4U_API UClass* Z_Construct_UClass_UVrmCineCameraComponent();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_UCineCameraComponent();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	void UVrmCineCameraComponent::StaticRegisterNativesUVrmCineCameraComponent()
	{
	}
	UClass* Z_Construct_UClass_UVrmCineCameraComponent_NoRegister()
	{
		return UVrmCineCameraComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVrmCineCameraComponent_Statics
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
	UObject* (*const Z_Construct_UClass_UVrmCineCameraComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCineCameraComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmCineCameraComponent_Statics::Class_MetaDataParams[] = {
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmCineCameraComponent_Statics::NewProp_OffCenterProjectionOffset_MetaData[] = {
		{ "Category", "Vrm Camera Settings" },
		{ "ModuleRelativePath", "Public/VrmCineCameraComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmCineCameraComponent_Statics::NewProp_OffCenterProjectionOffset = { "OffCenterProjectionOffset", nullptr, (EPropertyFlags)0x0010000200000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmCineCameraComponent, OffCenterProjectionOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UVrmCineCameraComponent_Statics::NewProp_OffCenterProjectionOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmCineCameraComponent_Statics::NewProp_OffCenterProjectionOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmCineCameraComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmCineCameraComponent_Statics::NewProp_OffCenterProjectionOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmCineCameraComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmCineCameraComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVrmCineCameraComponent_Statics::ClassParams = {
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVrmCineCameraComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVrmCineCameraComponent, 2105750162);
	template<> VRM4U_API UClass* StaticClass<UVrmCineCameraComponent>()
	{
		return UVrmCineCameraComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVrmCineCameraComponent(Z_Construct_UClass_UVrmCineCameraComponent, &UVrmCineCameraComponent::StaticClass, TEXT("/Script/VRM4U"), TEXT("UVrmCineCameraComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmCineCameraComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
