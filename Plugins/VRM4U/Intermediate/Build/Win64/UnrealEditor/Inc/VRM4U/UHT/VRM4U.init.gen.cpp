// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRM4U_init() {}
	VRM4U_API UFunction* Z_Construct_UDelegateFunction_UVrmCameraCheckComponent_VrmCameraCheckDelegate__DelegateSignature();
	VRM4U_API UFunction* Z_Construct_UDelegateFunction_UVrmDropFilesComponent_OnDropFiles__DelegateSignature();
	VRM4U_API UFunction* Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmGlobalTimeChangeEventDelegate__DelegateSignature();
	VRM4U_API UFunction* Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmPIEEventDelegate__DelegateSignature();
	VRM4U_API UFunction* Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionChangedEventDelegate__DelegateSignature();
	VRM4U_API UFunction* Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionObjectEventDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_VRM4U;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_VRM4U()
	{
		if (!Z_Registration_Info_UPackage__Script_VRM4U.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UVrmCameraCheckComponent_VrmCameraCheckDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UVrmDropFilesComponent_OnDropFiles__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmGlobalTimeChangeEventDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmPIEEventDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionChangedEventDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_UVrmEditorEventComponent_VrmSelectionObjectEventDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/VRM4U",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xA130B103,
				0x7843AC70,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_VRM4U.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_VRM4U.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_VRM4U(Z_Construct_UPackage__Script_VRM4U, TEXT("/Script/VRM4U"), Z_Registration_Info_UPackage__Script_VRM4U, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA130B103, 0x7843AC70));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
