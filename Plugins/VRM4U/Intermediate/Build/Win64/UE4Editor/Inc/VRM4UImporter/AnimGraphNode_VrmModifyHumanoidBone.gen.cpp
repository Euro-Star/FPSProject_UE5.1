// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4UImporter/Private/AnimGraphNode_VrmModifyHumanoidBone.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_VrmModifyHumanoidBone() {}
// Cross Module References
	VRM4UIMPORTER_API UClass* Z_Construct_UClass_UAnimGraphNode_VrmModifyHumanoidBone_NoRegister();
	VRM4UIMPORTER_API UClass* Z_Construct_UClass_UAnimGraphNode_VrmModifyHumanoidBone();
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	UPackage* Z_Construct_UPackage__Script_VRM4UImporter();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone();
// End Cross Module References
	void UAnimGraphNode_VrmModifyHumanoidBone::StaticRegisterNativesUAnimGraphNode_VrmModifyHumanoidBone()
	{
	}
	UClass* Z_Construct_UClass_UAnimGraphNode_VrmModifyHumanoidBone_NoRegister()
	{
		return UAnimGraphNode_VrmModifyHumanoidBone::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_VrmModifyHumanoidBone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Node;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_VrmModifyHumanoidBone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4UImporter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_VrmModifyHumanoidBone_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AnimGraphNode_VrmModifyHumanoidBone.h" },
		{ "Keywords", "Modify Transform" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmModifyHumanoidBone.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_VrmModifyHumanoidBone_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmModifyHumanoidBone.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_VrmModifyHumanoidBone_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAnimGraphNode_VrmModifyHumanoidBone, Node), Z_Construct_UScriptStruct_FAnimNode_VrmModifyHumanoidBone, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_VrmModifyHumanoidBone_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmModifyHumanoidBone_Statics::NewProp_Node_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_VrmModifyHumanoidBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_VrmModifyHumanoidBone_Statics::NewProp_Node,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_VrmModifyHumanoidBone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_VrmModifyHumanoidBone>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_VrmModifyHumanoidBone_Statics::ClassParams = {
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAnimGraphNode_VrmModifyHumanoidBone_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAnimGraphNode_VrmModifyHumanoidBone, 2277199116);
	template<> VRM4UIMPORTER_API UClass* StaticClass<UAnimGraphNode_VrmModifyHumanoidBone>()
	{
		return UAnimGraphNode_VrmModifyHumanoidBone::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAnimGraphNode_VrmModifyHumanoidBone(Z_Construct_UClass_UAnimGraphNode_VrmModifyHumanoidBone, &UAnimGraphNode_VrmModifyHumanoidBone::StaticClass, TEXT("/Script/VRM4UImporter"), TEXT("UAnimGraphNode_VrmModifyHumanoidBone"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_VrmModifyHumanoidBone);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
