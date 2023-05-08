// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4UImporter/Private/AnimGraphNode_VrmModifyBoneListRetarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_VrmModifyBoneListRetarget() {}
// Cross Module References
	VRM4UIMPORTER_API UClass* Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_NoRegister();
	VRM4UIMPORTER_API UClass* Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	UPackage* Z_Construct_UPackage__Script_VRM4UImporter();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget();
// End Cross Module References
	void UAnimGraphNode_VrmModifyBoneListRetarget::StaticRegisterNativesUAnimGraphNode_VrmModifyBoneListRetarget()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_NoRegister()
	{
		return UAnimGraphNode_VrmModifyBoneListRetarget::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Node;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreviewLive_MetaData[];
#endif
		static void NewProp_bPreviewLive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreviewLive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreviewForeground_MetaData[];
#endif
		static void NewProp_bPreviewForeground_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreviewForeground;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4UImporter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_VrmModifyBoneListRetarget.h" },
		{ "Keywords", "Modify Transform" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmModifyBoneListRetarget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmModifyBoneListRetarget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_VrmModifyBoneListRetarget, Node), Z_Construct_UScriptStruct_FAnimNode_VrmModifyBoneListRetarget, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::NewProp_Node_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::NewProp_bPreviewLive_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmModifyBoneListRetarget.h" },
	};
#endif
	void Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::NewProp_bPreviewLive_SetBit(void* Obj)
	{
		((UAnimGraphNode_VrmModifyBoneListRetarget*)Obj)->bPreviewLive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::NewProp_bPreviewLive = { "bPreviewLive", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimGraphNode_VrmModifyBoneListRetarget), &Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::NewProp_bPreviewLive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::NewProp_bPreviewLive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::NewProp_bPreviewLive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::NewProp_bPreviewForeground_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmModifyBoneListRetarget.h" },
	};
#endif
	void Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::NewProp_bPreviewForeground_SetBit(void* Obj)
	{
		((UAnimGraphNode_VrmModifyBoneListRetarget*)Obj)->bPreviewForeground = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::NewProp_bPreviewForeground = { "bPreviewForeground", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAnimGraphNode_VrmModifyBoneListRetarget), &Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::NewProp_bPreviewForeground_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::NewProp_bPreviewForeground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::NewProp_bPreviewForeground_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::NewProp_Node,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::NewProp_bPreviewLive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::NewProp_bPreviewForeground,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_VrmModifyBoneListRetarget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::ClassParams = {
		&UAnimGraphNode_VrmModifyBoneListRetarget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimGraphNode_VrmModifyBoneListRetarget, 2501979214);
	template<> VRM4UIMPORTER_API UClass* StaticClass<UAnimGraphNode_VrmModifyBoneListRetarget>()
	{
		return UAnimGraphNode_VrmModifyBoneListRetarget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_VrmModifyBoneListRetarget(Z_Construct_UClass_UAnimGraphNode_VrmModifyBoneListRetarget, &UAnimGraphNode_VrmModifyBoneListRetarget::StaticClass, TEXT("/Script/VRM4UImporter"), TEXT("UAnimGraphNode_VrmModifyBoneListRetarget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_VrmModifyBoneListRetarget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
