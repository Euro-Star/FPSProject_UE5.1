// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmNetworkBPFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmNetworkBPFunctionLibrary() {}
// Cross Module References
	VRM4U_API UClass* Z_Construct_UClass_UVrmNetworkBPFunctionLibrary_NoRegister();
	VRM4U_API UClass* Z_Construct_UClass_UVrmNetworkBPFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
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
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AddressTable_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AddressTable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics::NewProp_AddressTable_Inner = { "AddressTable", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics::NewProp_AddressTable = { "AddressTable", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(VrmNetworkBPFunctionLibrary_eventVRMGetIPAddressTable_Parms, AddressTable), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics::NewProp_AddressTable_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics::NewProp_AddressTable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmNetworkBPFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmNetworkBPFunctionLibrary, nullptr, "VRMGetIPAddressTable", nullptr, nullptr, sizeof(VrmNetworkBPFunctionLibrary_eventVRMGetIPAddressTable_Parms), Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVrmNetworkBPFunctionLibrary_NoRegister()
	{
		return UVrmNetworkBPFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVrmNetworkBPFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrmNetworkBPFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVrmNetworkBPFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVrmNetworkBPFunctionLibrary_VRMGetIPAddressTable, "VRMGetIPAddressTable" }, // 3719841578
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmNetworkBPFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VrmNetworkBPFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/VrmNetworkBPFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmNetworkBPFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmNetworkBPFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVrmNetworkBPFunctionLibrary_Statics::ClassParams = {
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVrmNetworkBPFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVrmNetworkBPFunctionLibrary, 3300348678);
	template<> VRM4U_API UClass* StaticClass<UVrmNetworkBPFunctionLibrary>()
	{
		return UVrmNetworkBPFunctionLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVrmNetworkBPFunctionLibrary(Z_Construct_UClass_UVrmNetworkBPFunctionLibrary, &UVrmNetworkBPFunctionLibrary::StaticClass, TEXT("/Script/VRM4U"), TEXT("UVrmNetworkBPFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmNetworkBPFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
