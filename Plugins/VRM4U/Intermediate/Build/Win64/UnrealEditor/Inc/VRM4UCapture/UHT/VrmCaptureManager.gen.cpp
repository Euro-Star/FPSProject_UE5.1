// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4UCapture/Public/VrmCaptureManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmCaptureManager() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VRM4UCapture();
	VRM4UCAPTURE_API UClass* Z_Construct_UClass_UVrmCaptureManager();
	VRM4UCAPTURE_API UClass* Z_Construct_UClass_UVrmCaptureManager_NoRegister();
	VRM4UCAPTURE_API UClass* Z_Construct_UClass_UVrmMocopiReceiver_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVrmCaptureManager::execCreateVrmMocopiReceiver)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_ReceiveIPAddress);
		P_GET_PROPERTY(FIntProperty,Z_Param_Port);
		P_GET_UBOOL(Z_Param_bMulticastLoopback);
		P_GET_UBOOL(Z_Param_bStartListening);
		P_GET_PROPERTY(FStrProperty,Z_Param_ServerName);
		P_GET_OBJECT(UObject,Z_Param_Outer);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UVrmMocopiReceiver**)Z_Param__Result=UVrmCaptureManager::CreateVrmMocopiReceiver(Z_Param_ReceiveIPAddress,Z_Param_Port,Z_Param_bMulticastLoopback,Z_Param_bStartListening,Z_Param_ServerName,Z_Param_Outer);
		P_NATIVE_END;
	}
	void UVrmCaptureManager::StaticRegisterNativesUVrmCaptureManager()
	{
		UClass* Class = UVrmCaptureManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateVrmMocopiReceiver", &UVrmCaptureManager::execCreateVrmMocopiReceiver },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVrmCaptureManager_CreateVrmMocopiReceiver_Statics
	{
		struct VrmCaptureManager_eventCreateVrmMocopiReceiver_Parms
		{
			FString ReceiveIPAddress;
			int32 Port;
			bool bMulticastLoopback;
			bool bStartListening;
			FString ServerName;
			UObject* Outer;
			UVrmMocopiReceiver* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReceiveIPAddress;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Port;
		static void NewProp_bMulticastLoopback_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bMulticastLoopback;
		static void NewProp_bStartListening_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartListening;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ServerName;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Outer;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVrmCaptureManager_CreateVrmMocopiReceiver_Statics::NewProp_ReceiveIPAddress = { "ReceiveIPAddress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmCaptureManager_eventCreateVrmMocopiReceiver_Parms, ReceiveIPAddress), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UVrmCaptureManager_CreateVrmMocopiReceiver_Statics::NewProp_Port = { "Port", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmCaptureManager_eventCreateVrmMocopiReceiver_Parms, Port), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmCaptureManager_CreateVrmMocopiReceiver_Statics::NewProp_bMulticastLoopback_SetBit(void* Obj)
	{
		((VrmCaptureManager_eventCreateVrmMocopiReceiver_Parms*)Obj)->bMulticastLoopback = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmCaptureManager_CreateVrmMocopiReceiver_Statics::NewProp_bMulticastLoopback = { "bMulticastLoopback", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmCaptureManager_eventCreateVrmMocopiReceiver_Parms), &Z_Construct_UFunction_UVrmCaptureManager_CreateVrmMocopiReceiver_Statics::NewProp_bMulticastLoopback_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmCaptureManager_CreateVrmMocopiReceiver_Statics::NewProp_bStartListening_SetBit(void* Obj)
	{
		((VrmCaptureManager_eventCreateVrmMocopiReceiver_Parms*)Obj)->bStartListening = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmCaptureManager_CreateVrmMocopiReceiver_Statics::NewProp_bStartListening = { "bStartListening", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmCaptureManager_eventCreateVrmMocopiReceiver_Parms), &Z_Construct_UFunction_UVrmCaptureManager_CreateVrmMocopiReceiver_Statics::NewProp_bStartListening_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVrmCaptureManager_CreateVrmMocopiReceiver_Statics::NewProp_ServerName = { "ServerName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmCaptureManager_eventCreateVrmMocopiReceiver_Parms, ServerName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmCaptureManager_CreateVrmMocopiReceiver_Statics::NewProp_Outer = { "Outer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmCaptureManager_eventCreateVrmMocopiReceiver_Parms, Outer), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmCaptureManager_CreateVrmMocopiReceiver_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmCaptureManager_eventCreateVrmMocopiReceiver_Parms, ReturnValue), Z_Construct_UClass_UVrmMocopiReceiver_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmCaptureManager_CreateVrmMocopiReceiver_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmCaptureManager_CreateVrmMocopiReceiver_Statics::NewProp_ReceiveIPAddress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmCaptureManager_CreateVrmMocopiReceiver_Statics::NewProp_Port,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmCaptureManager_CreateVrmMocopiReceiver_Statics::NewProp_bMulticastLoopback,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmCaptureManager_CreateVrmMocopiReceiver_Statics::NewProp_bStartListening,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmCaptureManager_CreateVrmMocopiReceiver_Statics::NewProp_ServerName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmCaptureManager_CreateVrmMocopiReceiver_Statics::NewProp_Outer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmCaptureManager_CreateVrmMocopiReceiver_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmCaptureManager_CreateVrmMocopiReceiver_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "CPP_Default_Outer", "None" },
		{ "ModuleRelativePath", "Public/VrmCaptureManager.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmCaptureManager_CreateVrmMocopiReceiver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmCaptureManager, nullptr, "CreateVrmMocopiReceiver", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmCaptureManager_CreateVrmMocopiReceiver_Statics::VrmCaptureManager_eventCreateVrmMocopiReceiver_Parms), Z_Construct_UFunction_UVrmCaptureManager_CreateVrmMocopiReceiver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmCaptureManager_CreateVrmMocopiReceiver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmCaptureManager_CreateVrmMocopiReceiver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmCaptureManager_CreateVrmMocopiReceiver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmCaptureManager_CreateVrmMocopiReceiver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmCaptureManager_CreateVrmMocopiReceiver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrmCaptureManager);
	UClass* Z_Construct_UClass_UVrmCaptureManager_NoRegister()
	{
		return UVrmCaptureManager::StaticClass();
	}
	struct Z_Construct_UClass_UVrmCaptureManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrmCaptureManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4UCapture,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVrmCaptureManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVrmCaptureManager_CreateVrmMocopiReceiver, "CreateVrmMocopiReceiver" }, // 194208861
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmCaptureManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VrmCaptureManager.h" },
		{ "ModuleRelativePath", "Public/VrmCaptureManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmCaptureManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmCaptureManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrmCaptureManager_Statics::ClassParams = {
		&UVrmCaptureManager::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVrmCaptureManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmCaptureManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVrmCaptureManager()
	{
		if (!Z_Registration_Info_UClass_UVrmCaptureManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrmCaptureManager.OuterSingleton, Z_Construct_UClass_UVrmCaptureManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVrmCaptureManager.OuterSingleton;
	}
	template<> VRM4UCAPTURE_API UClass* StaticClass<UVrmCaptureManager>()
	{
		return UVrmCaptureManager::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmCaptureManager);
	UVrmCaptureManager::~UVrmCaptureManager() {}
	struct Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4UCapture_Public_VrmCaptureManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4UCapture_Public_VrmCaptureManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVrmCaptureManager, UVrmCaptureManager::StaticClass, TEXT("UVrmCaptureManager"), &Z_Registration_Info_UClass_UVrmCaptureManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrmCaptureManager), 2053820638U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4UCapture_Public_VrmCaptureManager_h_3285020694(TEXT("/Script/VRM4UCapture"),
		Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4UCapture_Public_VrmCaptureManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4UCapture_Public_VrmCaptureManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
