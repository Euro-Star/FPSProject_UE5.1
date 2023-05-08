// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4UImporter/Private/AnimGraphNode_VrmSpringBone.h"
#include "VRM4U/Public/AnimNode_VrmSpringBone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimGraphNode_VrmSpringBone() {}
// Cross Module References
	ANIMGRAPH_API UClass* Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase();
	UPackage* Z_Construct_UPackage__Script_VRM4UImporter();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone();
	VRM4UIMPORTER_API UClass* Z_Construct_UClass_UAnimGraphNode_VrmSpringBone();
	VRM4UIMPORTER_API UClass* Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_NoRegister();
// End Cross Module References
	void UAnimGraphNode_VrmSpringBone::StaticRegisterNativesUAnimGraphNode_VrmSpringBone()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAnimGraphNode_VrmSpringBone);
	UClass* Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_NoRegister()
	{
		return UAnimGraphNode_VrmSpringBone::StaticClass();
	}
	struct Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewLive_MetaData[];
#endif
		static void NewProp_bPreviewLive_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewLive;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPreviewForeground_MetaData[];
#endif
		static void NewProp_bPreviewForeground_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPreviewForeground;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimGraphNode_SkeletalControlBase,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4UImporter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/*\nclass FVrmSpringBoneEditMode : public FAnimNodeEditMode\n{\npublic:\n\x09//IAnimNodeEditMode interface\n\x09virtual void EnterMode(class UAnimGraphNode_Base* InEditorNode, struct FAnimNode_Base* InRuntimeNode) override;\n\x09virtual void ExitMode() override;\n\x09virtual FVector GetWidgetLocation() const override;\n\x09virtual FWidget::EWidgetMode GetWidgetMode() const override;\n\x09virtual void DoTranslation(FVector& InTranslation) override;\n\n\x09static const FEditorModeID VrmSpringBone;\n\nprivate:\n\x09struct FAnimNode_VrmSpringBone* RuntimeNode;\n\x09""class UAnimGraphNode_VrmSpringBone* GraphNode;\n};\n*/" },
		{ "IncludePath", "AnimGraphNode_VrmSpringBone.h" },
		{ "Keywords", "Modify Transform" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmSpringBone.h" },
		{ "ToolTip", "class FVrmSpringBoneEditMode : public FAnimNodeEditMode\n{\npublic:\n       //IAnimNodeEditMode interface\n       virtual void EnterMode(class UAnimGraphNode_Base* InEditorNode, struct FAnimNode_Base* InRuntimeNode) override;\n       virtual void ExitMode() override;\n       virtual FVector GetWidgetLocation() const override;\n       virtual FWidget::EWidgetMode GetWidgetMode() const override;\n       virtual void DoTranslation(FVector& InTranslation) override;\n\n       static const FEditorModeID VrmSpringBone;\n\nprivate:\n       struct FAnimNode_VrmSpringBone* RuntimeNode;\n       class UAnimGraphNode_VrmSpringBone* GraphNode;\n};" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::NewProp_Node_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmSpringBone.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UAnimGraphNode_VrmSpringBone, Node), Z_Construct_UScriptStruct_FAnimNode_VrmSpringBone, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::NewProp_Node_MetaData)) }; // 2180365387
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::NewProp_bPreviewLive_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmSpringBone.h" },
	};
#endif
	void Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::NewProp_bPreviewLive_SetBit(void* Obj)
	{
		((UAnimGraphNode_VrmSpringBone*)Obj)->bPreviewLive = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::NewProp_bPreviewLive = { "bPreviewLive", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimGraphNode_VrmSpringBone), &Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::NewProp_bPreviewLive_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::NewProp_bPreviewLive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::NewProp_bPreviewLive_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::NewProp_bPreviewForeground_MetaData[] = {
		{ "Category", "Preview" },
		{ "ModuleRelativePath", "Private/AnimGraphNode_VrmSpringBone.h" },
	};
#endif
	void Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::NewProp_bPreviewForeground_SetBit(void* Obj)
	{
		((UAnimGraphNode_VrmSpringBone*)Obj)->bPreviewForeground = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::NewProp_bPreviewForeground = { "bPreviewForeground", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UAnimGraphNode_VrmSpringBone), &Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::NewProp_bPreviewForeground_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::NewProp_bPreviewForeground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::NewProp_bPreviewForeground_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::NewProp_Node,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::NewProp_bPreviewLive,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::NewProp_bPreviewForeground,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAnimGraphNode_VrmSpringBone>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::ClassParams = {
		&UAnimGraphNode_VrmSpringBone::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAnimGraphNode_VrmSpringBone()
	{
		if (!Z_Registration_Info_UClass_UAnimGraphNode_VrmSpringBone.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAnimGraphNode_VrmSpringBone.OuterSingleton, Z_Construct_UClass_UAnimGraphNode_VrmSpringBone_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UAnimGraphNode_VrmSpringBone.OuterSingleton;
	}
	template<> VRM4UIMPORTER_API UClass* StaticClass<UAnimGraphNode_VrmSpringBone>()
	{
		return UAnimGraphNode_VrmSpringBone::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAnimGraphNode_VrmSpringBone);
	UAnimGraphNode_VrmSpringBone::~UAnimGraphNode_VrmSpringBone() {}
	struct Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmSpringBone_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmSpringBone_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UAnimGraphNode_VrmSpringBone, UAnimGraphNode_VrmSpringBone::StaticClass, TEXT("UAnimGraphNode_VrmSpringBone"), &Z_Registration_Info_UClass_UAnimGraphNode_VrmSpringBone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAnimGraphNode_VrmSpringBone), 18817302U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmSpringBone_h_2881327458(TEXT("/Script/VRM4UImporter"),
		Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmSpringBone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4UImporter_Private_AnimGraphNode_VrmSpringBone_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
