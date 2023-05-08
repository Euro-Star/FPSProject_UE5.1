// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRM4UCapture_init() {}
	VRM4UCAPTURE_API UFunction* Z_Construct_UDelegateFunction_UVrmMocopiReceiver_VrmMocopiReceiverDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_VRM4UCapture;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_VRM4UCapture()
	{
		if (!Z_Registration_Info_UPackage__Script_VRM4UCapture.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_UVrmMocopiReceiver_VrmMocopiReceiverDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/VRM4UCapture",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x3D089663,
				0x7F61468C,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_VRM4UCapture.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_VRM4UCapture.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_VRM4UCapture(Z_Construct_UPackage__Script_VRM4UCapture, TEXT("/Script/VRM4UCapture"), Z_Registration_Info_UPackage__Script_VRM4UCapture, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x3D089663, 0x7F61468C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
