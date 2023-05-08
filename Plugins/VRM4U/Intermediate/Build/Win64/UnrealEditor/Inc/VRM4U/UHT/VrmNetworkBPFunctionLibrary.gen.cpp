// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmNetworkBPFunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmNetworkBPFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	VRM4U_API UClass* Z_Construct_UClass_UVrmNetworkBPFunctionLibrary();
	VRM4U_API UClass* Z_Construct_UClass_UVrmNetworkBPFunctionLibrary_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UVrmNetworkBPFunctionLibrary::execVRMGetIPAddressTable)
	{
		P_GET_TARRAY_REF(FString,Z_Param_Out_AddressTable);
		P_FINISH;
		P_NATIVE_BEGIN;
		UVrmNetworkBPFunctionLibrary::VRMGetIPAddressTable(Z_Param_Out_AddressTable);
		P_NATIVE_END;
	}
	void UVrmNetworkBPFunctionLibrary::StaticRegisterNativesUVrmNetworkBPFunctionLibrary()
	{
		UClass* Class = UVrmNetworkBPFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "VRMGetIPAddressTable", &UVrmNetworkBPFunctionLibrary::execVRMGetIPAddressTable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics
	{
		struct VrmNetworkBPFunctionLibrary_eventVRMGetIPAddressTable_Parms
		{
			TArray<FString> AddressTable;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_AddressTable_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_AddressTable;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics::NewProp_AddressTable_Inner = { "AddressTable", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics::NewProp_AddressTable = { "AddressTable", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmNetworkBPFunctionLibrary_eventVRMGetIPAddressTable_Parms, AddressTable), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics::NewProp_AddressTable_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics::NewProp_AddressTable,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmNetworkBPFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmNetworkBPFunctionLibrary, nullptr, "VRMGetIPAddressTable", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics::VrmNetworkBPFunctionLibrary_eventVRMGetIPAddressTable_Parms), Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrmNetworkBPFunctionLibrary);
	UClass* Z_Construct_UClass_UVrmNetworkBPFunctionLibrary_NoRegister()
	{
		return UVrmNetworkBPFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVrmNetworkBPFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrmNetworkBPFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVrmNetworkBPFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable, "VRMGetIPAddressTable" }, // 2807668105
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmNetworkBPFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VrmNetworkBPFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/VrmNetworkBPFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmNetworkBPFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmNetworkBPFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrmNetworkBPFunctionLibrary_Statics::ClassParams = {
		&UVrmNetworkBPFunctionLibrary::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UVrmNetworkBPFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmNetworkBPFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVrmNetworkBPFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_UVrmNetworkBPFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrmNetworkBPFunctionLibrary.OuterSingleton, Z_Construct_UClass_UVrmNetworkBPFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVrmNetworkBPFunctionLibrary.OuterSingleton;
	}
	template<> VRM4U_API UClass* StaticClass<UVrmNetworkBPFunctionLibrary>()
	{
		return UVrmNetworkBPFunctionLibrary::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmNetworkBPFunctionLibrary);
	UVrmNetworkBPFunctionLibrary::~UVrmNetworkBPFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmNetworkBPFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmNetworkBPFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVrmNetworkBPFunctionLibrary, UVrmNetworkBPFunctionLibrary::StaticClass, TEXT("UVrmNetworkBPFunctionLibrary"), &Z_Registration_Info_UClass_UVrmNetworkBPFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrmNetworkBPFunctionLibrary), 4204136761U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmNetworkBPFunctionLibrary_h_1831530366(TEXT("/Script/VRM4U"),
		Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmNetworkBPFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmNetworkBPFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
