// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmCameraCheckComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmCameraCheckComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	VRM4U_API UClass* Z_Construct_UClass_UVrmCameraCheckComponent();
	VRM4U_API UClass* Z_Construct_UClass_UVrmCameraCheckComponent_NoRegister();
	VRM4U_API UFunction* Z_Construct_UDelegateFunction_UVrmCameraCheckComponent_VrmCameraCheckDelegate__DelegateSignature();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UVrmCameraCheckComponent_VrmCameraCheckDelegate__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UVrmCameraCheckComponent_VrmCameraCheckDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VrmCameraCheckComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UVrmCameraCheckComponent_VrmCameraCheckDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmCameraCheckComponent, nullptr, "VrmCameraCheckDelegate__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UVrmCameraCheckComponent_VrmCameraCheckDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVrmCameraCheckComponent_VrmCameraCheckDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UVrmCameraCheckComponent_VrmCameraCheckDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UVrmCameraCheckComponent_VrmCameraCheckDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UVrmCameraCheckComponent::execSetCameraCheck)
	{
		P_GET_UBOOL(Z_Param_bCheckOn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCameraCheck(Z_Param_bCheckOn);
		P_NATIVE_END;
	}
	void UVrmCameraCheckComponent::StaticRegisterNativesUVrmCameraCheckComponent()
	{
		UClass* Class = UVrmCameraCheckComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetCameraCheck", &UVrmCameraCheckComponent::execSetCameraCheck },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics
	{
		struct VrmCameraCheckComponent_eventSetCameraCheck_Parms
		{
			bool bCheckOn;
		};
		static void NewProp_bCheckOn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCheckOn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics::NewProp_bCheckOn_SetBit(void* Obj)
	{
		((VrmCameraCheckComponent_eventSetCameraCheck_Parms*)Obj)->bCheckOn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics::NewProp_bCheckOn = { "bCheckOn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmCameraCheckComponent_eventSetCameraCheck_Parms), &Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics::NewProp_bCheckOn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics::NewProp_bCheckOn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "DynamicOutputParam", "OutVrmAsset" },
		{ "ModuleRelativePath", "Public/VrmCameraCheckComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmCameraCheckComponent, nullptr, "SetCameraCheck", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics::VrmCameraCheckComponent_eventSetCameraCheck_Parms), Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrmCameraCheckComponent);
	UClass* Z_Construct_UClass_UVrmCameraCheckComponent_NoRegister()
	{
		return UVrmCameraCheckComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVrmCameraCheckComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnCameraMove_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnCameraMove;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrmCameraCheckComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVrmCameraCheckComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVrmCameraCheckComponent_SetCameraCheck, "SetCameraCheck" }, // 3425765008
		{ &Z_Construct_UDelegateFunction_UVrmCameraCheckComponent_VrmCameraCheckDelegate__DelegateSignature, "VrmCameraCheckDelegate__DelegateSignature" }, // 917753064
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmCameraCheckComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "VrmCameraCheckComponent.h" },
		{ "ModuleRelativePath", "Public/VrmCameraCheckComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmCameraCheckComponent_Statics::NewProp_OnCameraMove_MetaData[] = {
		{ "ModuleRelativePath", "Public/VrmCameraCheckComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVrmCameraCheckComponent_Statics::NewProp_OnCameraMove = { "OnCameraMove", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmCameraCheckComponent, OnCameraMove), Z_Construct_UDelegateFunction_UVrmCameraCheckComponent_VrmCameraCheckDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVrmCameraCheckComponent_Statics::NewProp_OnCameraMove_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmCameraCheckComponent_Statics::NewProp_OnCameraMove_MetaData)) }; // 917753064
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmCameraCheckComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmCameraCheckComponent_Statics::NewProp_OnCameraMove,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmCameraCheckComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmCameraCheckComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrmCameraCheckComponent_Statics::ClassParams = {
		&UVrmCameraCheckComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVrmCameraCheckComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVrmCameraCheckComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVrmCameraCheckComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmCameraCheckComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVrmCameraCheckComponent()
	{
		if (!Z_Registration_Info_UClass_UVrmCameraCheckComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrmCameraCheckComponent.OuterSingleton, Z_Construct_UClass_UVrmCameraCheckComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVrmCameraCheckComponent.OuterSingleton;
	}
	template<> VRM4U_API UClass* StaticClass<UVrmCameraCheckComponent>()
	{
		return UVrmCameraCheckComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmCameraCheckComponent);
	UVrmCameraCheckComponent::~UVrmCameraCheckComponent() {}
	struct Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVrmCameraCheckComponent, UVrmCameraCheckComponent::StaticClass, TEXT("UVrmCameraCheckComponent"), &Z_Registration_Info_UClass_UVrmCameraCheckComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrmCameraCheckComponent), 2564265487U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_319026194(TEXT("/Script/VRM4U"),
		Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmCameraCheckComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
