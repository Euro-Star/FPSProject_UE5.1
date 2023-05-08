// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4UImporter/Private/AnimGraphNode_VrmModifyHumanoidBone.h"
#include "VRM4U/Public/AnimNode_VrmModifyHumanoidBone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_VrmModifyHumanoidBone() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	UPackage* Z_Construct_UPackage__Script_VRM4UImporter();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone();
	VRM4UIMPORTER_API UClass* Z_Construct_UClass_UAnimGraphNode_VrmModifyHumanoidBone();
	VRM4UIMPORTER_API UClass* Z_Construct_UClass_UAnimGraphNode_VrmModifyHumanoidBone_NoRegister();
// End Cross Module References
	void UAnimGraphNode_VrmModifyHumanoidBone::StaticRegisterNativesUAnimGraphNode_VrmModifyHumanoidBone()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_VrmModifyHumanoidBone);
	UClass* Z_Construct_UClass_UAnimGraphNode_VrmModifyHumanoidBone_NoRegister()
	{
		return UAnimGraphNode_VrmModifyHumanoidBone::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_VrmModifyHumanoidBone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_VrmModifyHumanoidBone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4UImporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_VrmModifyHumanoidBone_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_VrmModifyHumanoidBone.h" },
		{ "Keywords", "Modify Transform" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmModifyHumanoidBone.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_VrmModifyHumanoidBone_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmModifyHumanoidBone.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_VrmModifyHumanoidBone_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_VrmModifyHumanoidBone, Node), Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_VrmModifyHumanoidBone_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmModifyHumanoidBone_Statics::NewProp_Node_MetaData)) }; // 798272958
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_VrmModifyHumanoidBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_VrmModifyHumanoidBone_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_VrmModifyHumanoidBone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_VrmModifyHumanoidBone>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_VrmModifyHumanoidBone_Statics::ClassParams = {
		&UAnimGraphNode_VrmModifyHumanoidBone::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_VrmModifyHumanoidBone_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmModifyHumanoidBone_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_VrmModifyHumanoidBone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmModifyHumanoidBone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_VrmModifyHumanoidBone()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_VrmModifyHumanoidBone.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_VrmModifyHumanoidBone.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_VrmModifyHumanoidBone_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_VrmModifyHumanoidBone.OuterSingleton;
	}
	template<> VRM4UIMPORTER_API UClass* StaticClass<UAnimGraphNode_VrmModifyHumanoidBone>()
	{
		return UAnimGraphNode_VrmModifyHumanoidBone::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_VrmModifyHumanoidBone);
	UAnimGraphNode_VrmModifyHumanoidBone::~UAnimGraphNode_VrmModifyHumanoidBone() {}
	struct Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmModifyHumanoidBone_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmModifyHumanoidBone_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_VrmModifyHumanoidBone, UAnimGraphNode_VrmModifyHumanoidBone::StaticClass, TEXT("UAnimGraphNode_VrmModifyHumanoidBone"), &Z_Registration_Info_UClass_UAnimGraphNode_VrmModifyHumanoidBone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_VrmModifyHumanoidBone), 1980889579U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmModifyHumanoidBone_h_83237461(TEXT("/Script/VRM4UImporter"),
		Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmModifyHumanoidBone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmModifyHumanoidBone_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
