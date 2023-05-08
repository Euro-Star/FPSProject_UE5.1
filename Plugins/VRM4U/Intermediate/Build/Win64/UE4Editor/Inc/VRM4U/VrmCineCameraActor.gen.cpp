// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmCineCameraActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmCineCameraActor() {}
// Cross Module References
	VRM4U_API UClass* Z_Construct_UClass_AVrmCineCameraActor_NoRegister();
	VRM4U_API UClass* Z_Construct_UClass_AVrmCineCameraActor();
	CINEMATICCAMERA_API UClass* Z_Construct_UClass_ACineCameraActor();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	VRM4U_API UClass* Z_Construct_UClass_UVrmCineCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AVrmCineCameraActor::execGetVrmCineCameraComponent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVrmCineCameraComponent**)Z_Param__Result=P_THIS->GetVrmCineCameraComponent();
		P_NATIVE_END;
	}
	void AVrmCineCameraActor::StaticRegisterNativesAVrmCineCameraActor()
	{
		UClass* Class = AVrmCineCameraActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetVrmCineCameraComponent", &AVrmCineCameraActor::execGetVrmCineCameraComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVrmCineCameraActor_GetVrmCineCameraComponent_Statics
	{
		struct VrmCineCameraActor_eventGetVrmCineCameraComponent_Parms
		{
			UVrmCineCameraComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVrmCineCameraActor_GetVrmCineCameraComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AVrmCineCameraActor_GetVrmCineCameraComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrmCineCameraActor_eventGetVrmCineCameraComponent_Parms, ReturnValue), Z_Construct_UClass_UVrmCineCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AVrmCineCameraActor_GetVrmCineCameraComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AVrmCineCameraActor_GetVrmCineCameraComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AVrmCineCameraActor_GetVrmCineCameraComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AVrmCineCameraActor_GetVrmCineCameraComponent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVrmCineCameraActor_GetVrmCineCameraComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/VrmCineCameraActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AVrmCineCameraActor_GetVrmCineCameraComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVrmCineCameraActor, nullptr, "GetVrmCineCameraComponent", nullptr, nullptr, sizeof(VrmCineCameraActor_eventGetVrmCineCameraComponent_Parms), Z_Construct_UFunction_AVrmCineCameraActor_GetVrmCineCameraComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AVrmCineCameraActor_GetVrmCineCameraComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVrmCineCameraActor_GetVrmCineCameraComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVrmCineCameraActor_GetVrmCineCameraComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVrmCineCameraActor_GetVrmCineCameraComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AVrmCineCameraActor_GetVrmCineCameraComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AVrmCineCameraActor_NoRegister()
	{
		return AVrmCineCameraActor::StaticClass();
	}
	struct Z_Construct_UClass_AVrmCineCameraActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVrmCineCameraActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACineCameraActor,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVrmCineCameraActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVrmCineCameraActor_GetVrmCineCameraComponent, "GetVrmCineCameraComponent" }, // 2939980047
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVrmCineCameraActor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Common" },
		{ "HideCategories", "Input Rendering AutoPlayerActivation Input Rendering AutoPlayerActivation Input Rendering" },
		{ "IncludePath", "VrmCineCameraActor.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmCineCameraActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVrmCineCameraActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVrmCineCameraActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AVrmCineCameraActor_Statics::ClassParams = {
		&AVrmCineCameraActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVrmCineCameraActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVrmCineCameraActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVrmCineCameraActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AVrmCineCameraActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVrmCineCameraActor, 1164907864);
	template<> VRM4U_API UClass* StaticClass<AVrmCineCameraActor>()
	{
		return AVrmCineCameraActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVrmCineCameraActor(Z_Construct_UClass_AVrmCineCameraActor, &AVrmCineCameraActor::StaticClass, TEXT("/Script/VRM4U"), TEXT("AVrmCineCameraActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVrmCineCameraActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
