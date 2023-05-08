// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4UImporter/Private/AnimGraphNode_VrmModifyBoneList.h"
#include "VRM4U/Public/AnimNode_VrmModifyBoneList.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_VrmModifyBoneList() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	UPackage* Z_Construct_UPackage__Script_VRM4UImporter();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList();
	VRM4UIMPORTER_API UClass* Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneList();
	VRM4UIMPORTER_API UClass* Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneList_NoRegister();
// End Cross Module References
	void UAnimGraphNode_VrmModifyBoneList::StaticRegisterNativesUAnimGraphNode_VrmModifyBoneList()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_VrmModifyBoneList);
	UClass* Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneList_NoRegister()
	{
		return UAnimGraphNode_VrmModifyBoneList::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneList_Statics
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
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneList_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4UImporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneList_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_VrmModifyBoneList.h" },
		{ "Keywords", "Modify Transform" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmModifyBoneList.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneList_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmModifyBoneList.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneList_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_VrmModifyBoneList, Node), Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneList, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneList_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneList_Statics::NewProp_Node_MetaData)) }; // 2184702911
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneList_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneList_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_VrmModifyBoneList>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneList_Statics::ClassParams = {
		&UAnimGraphNode_VrmModifyBoneList::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneList_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneList_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneList_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneList_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneList()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_VrmModifyBoneList.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_VrmModifyBoneList.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneList_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_VrmModifyBoneList.OuterSingleton;
	}
	template<> VRM4UIMPORTER_API UClass* StaticClass<UAnimGraphNode_VrmModifyBoneList>()
	{
		return UAnimGraphNode_VrmModifyBoneList::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_VrmModifyBoneList);
	UAnimGraphNode_VrmModifyBoneList::~UAnimGraphNode_VrmModifyBoneList() {}
	struct Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmModifyBoneList_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmModifyBoneList_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneList, UAnimGraphNode_VrmModifyBoneList::StaticClass, TEXT("UAnimGraphNode_VrmModifyBoneList"), &Z_Registration_Info_UClass_UAnimGraphNode_VrmModifyBoneList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_VrmModifyBoneList), 1664368480U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmModifyBoneList_h_3358941191(TEXT("/Script/VRM4UImporter"),
		Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmModifyBoneList_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmModifyBoneList_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
