// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4ULoader/Public/VrmLoaderComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmLoaderComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_VRM4ULoader();
	VRM4U_API UClass* Z_Construct_UClass_UVrmAssetListObject_NoRegister();
	VRM4ULOADER_API UClass* Z_Construct_UClass_UVrmLoaderComponent();
	VRM4ULOADER_API UClass* Z_Construct_UClass_UVrmLoaderComponent_NoRegister();
	VRM4ULOADER_API UFunction* Z_Construct_UDelegateFunction_UVrmLoaderComponent_OnFinishLoad__DelegateSignature();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UVrmLoaderComponent_OnFinishLoad__DelegateSignature_Statics
	{
		struct VrmLoaderComponent_eventOnFinishLoad_Parms
		{
			UVrmAssetListObject* AssetList;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UVrmLoaderComponent_OnFinishLoad__DelegateSignature_Statics::NewProp_AssetList = { "AssetList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmLoaderComponent_eventOnFinishLoad_Parms, AssetList), Z_Construct_UClass_UVrmAssetListObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UVrmLoaderComponent_OnFinishLoad__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UVrmLoaderComponent_OnFinishLoad__DelegateSignature_Statics::NewProp_AssetList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UVrmLoaderComponent_OnFinishLoad__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "//DECLARE_MULTICAST_DELEGATE_OneParam(FStaticOnDropFiles, FString);\n//static FStaticOnDropFiles\x09StaticOnDropFilesDelegate;\n" },
		{ "ModuleRelativePath", "Public/VrmLoaderComponent.h" },
		{ "ToolTip", "DECLARE_MULTICAST_DELEGATE_OneParam(FStaticOnDropFiles, FString);\nstatic FStaticOnDropFiles      StaticOnDropFilesDelegate;" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UVrmLoaderComponent_OnFinishLoad__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmLoaderComponent, nullptr, "OnFinishLoad__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_UVrmLoaderComponent_OnFinishLoad__DelegateSignature_Statics::VrmLoaderComponent_eventOnFinishLoad_Parms), Z_Construct_UDelegateFunction_UVrmLoaderComponent_OnFinishLoad__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVrmLoaderComponent_OnFinishLoad__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UVrmLoaderComponent_OnFinishLoad__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UVrmLoaderComponent_OnFinishLoad__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UVrmLoaderComponent_OnFinishLoad__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UVrmLoaderComponent_OnFinishLoad__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UVrmLoaderComponent::execLoadVRMFileAsync)
	{
		P_GET_OBJECT(UVrmAssetListObject,Z_Param_InVrmAsset);
		P_GET_PROPERTY(FStrProperty,Z_Param_filepath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoadVRMFileAsync(Z_Param_InVrmAsset,Z_Param_filepath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmLoaderComponent::execLoadVRMFile)
	{
		P_GET_OBJECT(UVrmAssetListObject,Z_Param_InVrmAsset);
		P_GET_OBJECT_REF(UVrmAssetListObject,Z_Param_Out_OutVrmAsset);
		P_GET_PROPERTY(FStrProperty,Z_Param_filepath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->LoadVRMFile(Z_Param_InVrmAsset,Z_Param_Out_OutVrmAsset,Z_Param_filepath);
		P_NATIVE_END;
	}
	void UVrmLoaderComponent::StaticRegisterNativesUVrmLoaderComponent()
	{
		UClass* Class = UVrmLoaderComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "LoadVRMFile", &UVrmLoaderComponent::execLoadVRMFile },
			{ "LoadVRMFileAsync", &UVrmLoaderComponent::execLoadVRMFileAsync },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics
	{
		struct VrmLoaderComponent_eventLoadVRMFile_Parms
		{
			const UVrmAssetListObject* InVrmAsset;
			UVrmAssetListObject* OutVrmAsset;
			FString filepath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVrmAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InVrmAsset;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OutVrmAsset;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filepath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::NewProp_InVrmAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::NewProp_InVrmAsset = { "InVrmAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmLoaderComponent_eventLoadVRMFile_Parms, InVrmAsset), Z_Construct_UClass_UVrmAssetListObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::NewProp_InVrmAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::NewProp_InVrmAsset_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::NewProp_OutVrmAsset = { "OutVrmAsset", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmLoaderComponent_eventLoadVRMFile_Parms, OutVrmAsset), Z_Construct_UClass_UVrmAssetListObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::NewProp_filepath = { "filepath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmLoaderComponent_eventLoadVRMFile_Parms, filepath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VrmLoaderComponent_eventLoadVRMFile_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmLoaderComponent_eventLoadVRMFile_Parms), &Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::NewProp_InVrmAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::NewProp_OutVrmAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::NewProp_filepath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "Comment", "//static const UVrmDropFilesComponent* getLatestActiveComponent() {\n//return s_LatestActiveComponent;\n//};\n" },
		{ "DynamicOutputParam", "OutVrmAsset" },
		{ "ModuleRelativePath", "Public/VrmLoaderComponent.h" },
		{ "ToolTip", "static const UVrmDropFilesComponent* getLatestActiveComponent() {\nreturn s_LatestActiveComponent;\n};" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmLoaderComponent, nullptr, "LoadVRMFile", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::VrmLoaderComponent_eventLoadVRMFile_Parms), Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync_Statics
	{
		struct VrmLoaderComponent_eventLoadVRMFileAsync_Parms
		{
			const UVrmAssetListObject* InVrmAsset;
			FString filepath;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InVrmAsset_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InVrmAsset;
		static const UECodeGen_Private::FStrPropertyParams NewProp_filepath;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync_Statics::NewProp_InVrmAsset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync_Statics::NewProp_InVrmAsset = { "InVrmAsset", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmLoaderComponent_eventLoadVRMFileAsync_Parms, InVrmAsset), Z_Construct_UClass_UVrmAssetListObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync_Statics::NewProp_InVrmAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync_Statics::NewProp_InVrmAsset_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync_Statics::NewProp_filepath = { "filepath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmLoaderComponent_eventLoadVRMFileAsync_Parms, filepath), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VrmLoaderComponent_eventLoadVRMFileAsync_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmLoaderComponent_eventLoadVRMFileAsync_Parms), &Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync_Statics::NewProp_InVrmAsset,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync_Statics::NewProp_filepath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "DynamicOutputParam", "OutVrmAsset" },
		{ "ModuleRelativePath", "Public/VrmLoaderComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmLoaderComponent, nullptr, "LoadVRMFileAsync", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync_Statics::VrmLoaderComponent_eventLoadVRMFileAsync_Parms), Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrmLoaderComponent);
	UClass* Z_Construct_UClass_UVrmLoaderComponent_NoRegister()
	{
		return UVrmLoaderComponent::StaticClass();
	}
	struct Z_Construct_UClass_UVrmLoaderComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OnFinishLoad_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFinishLoad;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AssetList_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AssetList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrmLoaderComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4ULoader,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVrmLoaderComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFile, "LoadVRMFile" }, // 2358965723
		{ &Z_Construct_UFunction_UVrmLoaderComponent_LoadVRMFileAsync, "LoadVRMFileAsync" }, // 1653073032
		{ &Z_Construct_UDelegateFunction_UVrmLoaderComponent_OnFinishLoad__DelegateSignature, "OnFinishLoad__DelegateSignature" }, // 1774306288
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmLoaderComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Utility" },
		{ "Comment", "/** Component to handle receiving notifications from the OS about application state (activated, suspended, termination, etc). */" },
		{ "HideCategories", "Activation Components|Activation Collision" },
		{ "IncludePath", "VrmLoaderComponent.h" },
		{ "ModuleRelativePath", "Public/VrmLoaderComponent.h" },
		{ "ToolTip", "Component to handle receiving notifications from the OS about application state (activated, suspended, termination, etc)." },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmLoaderComponent_Statics::NewProp_OnFinishLoad_MetaData[] = {
		{ "ModuleRelativePath", "Public/VrmLoaderComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UVrmLoaderComponent_Statics::NewProp_OnFinishLoad = { "OnFinishLoad", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmLoaderComponent, OnFinishLoad), Z_Construct_UDelegateFunction_UVrmLoaderComponent_OnFinishLoad__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UVrmLoaderComponent_Statics::NewProp_OnFinishLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmLoaderComponent_Statics::NewProp_OnFinishLoad_MetaData)) }; // 1774306288
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmLoaderComponent_Statics::NewProp_AssetList_MetaData[] = {
		{ "ModuleRelativePath", "Public/VrmLoaderComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmLoaderComponent_Statics::NewProp_AssetList = { "AssetList", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmLoaderComponent, AssetList), Z_Construct_UClass_UVrmAssetListObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmLoaderComponent_Statics::NewProp_AssetList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmLoaderComponent_Statics::NewProp_AssetList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmLoaderComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmLoaderComponent_Statics::NewProp_OnFinishLoad,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmLoaderComponent_Statics::NewProp_AssetList,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmLoaderComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmLoaderComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrmLoaderComponent_Statics::ClassParams = {
		&UVrmLoaderComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVrmLoaderComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVrmLoaderComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UVrmLoaderComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmLoaderComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVrmLoaderComponent()
	{
		if (!Z_Registration_Info_UClass_UVrmLoaderComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrmLoaderComponent.OuterSingleton, Z_Construct_UClass_UVrmLoaderComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVrmLoaderComponent.OuterSingleton;
	}
	template<> VRM4ULOADER_API UClass* StaticClass<UVrmLoaderComponent>()
	{
		return UVrmLoaderComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmLoaderComponent);
	UVrmLoaderComponent::~UVrmLoaderComponent() {}
	struct Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVrmLoaderComponent, UVrmLoaderComponent::StaticClass, TEXT("UVrmLoaderComponent"), &Z_Registration_Info_UClass_UVrmLoaderComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrmLoaderComponent), 1338772403U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_3026790964(TEXT("/Script/VRM4ULoader"),
		Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4ULoader_Public_VrmLoaderComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
