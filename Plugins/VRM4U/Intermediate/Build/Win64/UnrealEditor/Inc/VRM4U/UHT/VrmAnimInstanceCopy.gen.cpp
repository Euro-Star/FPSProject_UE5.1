// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmAnimInstanceCopy.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmAnimInstanceCopy() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkinnedMeshComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceProxy();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	VRM4U_API UClass* Z_Construct_UClass_UVrmAnimInstanceCopy();
	VRM4U_API UClass* Z_Construct_UClass_UVrmAnimInstanceCopy_NoRegister();
	VRM4U_API UClass* Z_Construct_UClass_UVrmAssetListObject_NoRegister();
	VRM4U_API UClass* Z_Construct_UClass_UVrmMetaObject_NoRegister();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVrmAnimInstanceCopyProxy();
// End Cross Module References

static_assert(std::is_polymorphic<FVrmAnimInstanceCopyProxy>() == std::is_polymorphic<FAnimInstanceProxy>(), "USTRUCT FVrmAnimInstanceCopyProxy cannot be polymorphic unless super FAnimInstanceProxy is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VrmAnimInstanceCopyProxy;
class UScriptStruct* FVrmAnimInstanceCopyProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VrmAnimInstanceCopyProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VrmAnimInstanceCopyProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVrmAnimInstanceCopyProxy, Z_Construct_UPackage__Script_VRM4U(), TEXT("VrmAnimInstanceCopyProxy"));
	}
	return Z_Registration_Info_UScriptStruct_VrmAnimInstanceCopyProxy.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVrmAnimInstanceCopyProxy>()
{
	return FVrmAnimInstanceCopyProxy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVrmAnimInstanceCopyProxy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmAnimInstanceCopyProxy_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VrmAnimInstanceCopy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVrmAnimInstanceCopyProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVrmAnimInstanceCopyProxy>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVrmAnimInstanceCopyProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		Z_Construct_UScriptStruct_FAnimInstanceProxy,
		&NewStructOps,
		"VrmAnimInstanceCopyProxy",
		sizeof(FVrmAnimInstanceCopyProxy),
		alignof(FVrmAnimInstanceCopyProxy),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVrmAnimInstanceCopyProxy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmAnimInstanceCopyProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVrmAnimInstanceCopyProxy()
	{
		if (!Z_Registration_Info_UScriptStruct_VrmAnimInstanceCopyProxy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VrmAnimInstanceCopyProxy.InnerSingleton, Z_Construct_UScriptStruct_FVrmAnimInstanceCopyProxy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VrmAnimInstanceCopyProxy.InnerSingleton;
	}
	DEFINE_FUNCTION(UVrmAnimInstanceCopy::execSetVrmSpringBoneIgnoreWingBone)
	{
		P_GET_TARRAY_REF(FName,Z_Param_Out_boneNameList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVrmSpringBoneIgnoreWingBone(Z_Param_Out_boneNameList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmAnimInstanceCopy::execSetVrmSpringBoneBool)
	{
		P_GET_UBOOL(Z_Param_bIgnoreVrmSpringBone);
		P_GET_UBOOL(Z_Param_bIgnorePhysicsCollision);
		P_GET_UBOOL(Z_Param_bIgnoreVRMCollision);
		P_GET_UBOOL(Z_Param_bIgnoreWind);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVrmSpringBoneBool(Z_Param_bIgnoreVrmSpringBone,Z_Param_bIgnorePhysicsCollision,Z_Param_bIgnoreVRMCollision,Z_Param_bIgnoreWind);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmAnimInstanceCopy::execSetVrmSpringBoneParam)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_gravityScale);
		P_GET_STRUCT(FVector,Z_Param_gravityAdd);
		P_GET_PROPERTY(FFloatProperty,Z_Param_stiffnessScale);
		P_GET_PROPERTY(FFloatProperty,Z_Param_stiffnessAdd);
		P_GET_PROPERTY(FFloatProperty,Z_Param_randomWindRange);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVrmSpringBoneParam(Z_Param_gravityScale,Z_Param_gravityAdd,Z_Param_stiffnessScale,Z_Param_stiffnessAdd,Z_Param_randomWindRange);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmAnimInstanceCopy::execSetSkeletalMeshCopyDataForCustomSpring)
	{
		P_GET_OBJECT(UVrmMetaObject,Z_Param_dstMetaForCustomSpring);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSkeletalMeshCopyDataForCustomSpring(Z_Param_dstMetaForCustomSpring);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmAnimInstanceCopy::execSetSkeletalMeshCopyData)
	{
		P_GET_OBJECT(UVrmAssetListObject,Z_Param_dstAssetList);
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_srcSkeletalMesh);
		P_GET_OBJECT(USkinnedMeshComponent,Z_Param_srcSkinnedMesh);
		P_GET_OBJECT(UVrmAssetListObject,Z_Param_srcAssetList);
		P_GET_OBJECT(UVrmMetaObject,Z_Param_srcVrmMetaOption);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSkeletalMeshCopyData(Z_Param_dstAssetList,Z_Param_srcSkeletalMesh,Z_Param_srcSkinnedMesh,Z_Param_srcAssetList,Z_Param_srcVrmMetaOption);
		P_NATIVE_END;
	}
	void UVrmAnimInstanceCopy::StaticRegisterNativesUVrmAnimInstanceCopy()
	{
		UClass* Class = UVrmAnimInstanceCopy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetSkeletalMeshCopyData", &UVrmAnimInstanceCopy::execSetSkeletalMeshCopyData },
			{ "SetSkeletalMeshCopyDataForCustomSpring", &UVrmAnimInstanceCopy::execSetSkeletalMeshCopyDataForCustomSpring },
			{ "SetVrmSpringBoneBool", &UVrmAnimInstanceCopy::execSetVrmSpringBoneBool },
			{ "SetVrmSpringBoneIgnoreWingBone", &UVrmAnimInstanceCopy::execSetVrmSpringBoneIgnoreWingBone },
			{ "SetVrmSpringBoneParam", &UVrmAnimInstanceCopy::execSetVrmSpringBoneParam },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics
	{
		struct VrmAnimInstanceCopy_eventSetSkeletalMeshCopyData_Parms
		{
			UVrmAssetListObject* dstAssetList;
			USkeletalMeshComponent* srcSkeletalMesh;
			USkinnedMeshComponent* srcSkinnedMesh;
			UVrmAssetListObject* srcAssetList;
			UVrmMetaObject* srcVrmMetaOption;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_dstAssetList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_srcSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_srcSkeletalMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_srcSkinnedMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_srcSkinnedMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_srcAssetList;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_srcVrmMetaOption;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::NewProp_dstAssetList = { "dstAssetList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmAnimInstanceCopy_eventSetSkeletalMeshCopyData_Parms, dstAssetList), Z_Construct_UClass_UVrmAssetListObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::NewProp_srcSkeletalMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::NewProp_srcSkeletalMesh = { "srcSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmAnimInstanceCopy_eventSetSkeletalMeshCopyData_Parms, srcSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::NewProp_srcSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::NewProp_srcSkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::NewProp_srcSkinnedMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::NewProp_srcSkinnedMesh = { "srcSkinnedMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmAnimInstanceCopy_eventSetSkeletalMeshCopyData_Parms, srcSkinnedMesh), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::NewProp_srcSkinnedMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::NewProp_srcSkinnedMesh_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::NewProp_srcAssetList = { "srcAssetList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmAnimInstanceCopy_eventSetSkeletalMeshCopyData_Parms, srcAssetList), Z_Construct_UClass_UVrmAssetListObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::NewProp_srcVrmMetaOption = { "srcVrmMetaOption", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmAnimInstanceCopy_eventSetSkeletalMeshCopyData_Parms, srcVrmMetaOption), Z_Construct_UClass_UVrmMetaObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::NewProp_dstAssetList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::NewProp_srcSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::NewProp_srcSkinnedMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::NewProp_srcAssetList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::NewProp_srcVrmMetaOption,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmAnimInstanceCopy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmAnimInstanceCopy, nullptr, "SetSkeletalMeshCopyData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::VrmAnimInstanceCopy_eventSetSkeletalMeshCopyData_Parms), Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyDataForCustomSpring_Statics
	{
		struct VrmAnimInstanceCopy_eventSetSkeletalMeshCopyDataForCustomSpring_Parms
		{
			UVrmMetaObject* dstMetaForCustomSpring;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_dstMetaForCustomSpring;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyDataForCustomSpring_Statics::NewProp_dstMetaForCustomSpring = { "dstMetaForCustomSpring", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmAnimInstanceCopy_eventSetSkeletalMeshCopyDataForCustomSpring_Parms, dstMetaForCustomSpring), Z_Construct_UClass_UVrmMetaObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyDataForCustomSpring_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyDataForCustomSpring_Statics::NewProp_dstMetaForCustomSpring,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyDataForCustomSpring_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmAnimInstanceCopy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyDataForCustomSpring_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmAnimInstanceCopy, nullptr, "SetSkeletalMeshCopyDataForCustomSpring", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyDataForCustomSpring_Statics::VrmAnimInstanceCopy_eventSetSkeletalMeshCopyDataForCustomSpring_Parms), Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyDataForCustomSpring_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyDataForCustomSpring_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyDataForCustomSpring_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyDataForCustomSpring_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyDataForCustomSpring()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyDataForCustomSpring_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics
	{
		struct VrmAnimInstanceCopy_eventSetVrmSpringBoneBool_Parms
		{
			bool bIgnoreVrmSpringBone;
			bool bIgnorePhysicsCollision;
			bool bIgnoreVRMCollision;
			bool bIgnoreWind;
		};
		static void NewProp_bIgnoreVrmSpringBone_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreVrmSpringBone;
		static void NewProp_bIgnorePhysicsCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnorePhysicsCollision;
		static void NewProp_bIgnoreVRMCollision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreVRMCollision;
		static void NewProp_bIgnoreWind_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreWind;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::NewProp_bIgnoreVrmSpringBone_SetBit(void* Obj)
	{
		((VrmAnimInstanceCopy_eventSetVrmSpringBoneBool_Parms*)Obj)->bIgnoreVrmSpringBone = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::NewProp_bIgnoreVrmSpringBone = { "bIgnoreVrmSpringBone", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmAnimInstanceCopy_eventSetVrmSpringBoneBool_Parms), &Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::NewProp_bIgnoreVrmSpringBone_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::NewProp_bIgnorePhysicsCollision_SetBit(void* Obj)
	{
		((VrmAnimInstanceCopy_eventSetVrmSpringBoneBool_Parms*)Obj)->bIgnorePhysicsCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::NewProp_bIgnorePhysicsCollision = { "bIgnorePhysicsCollision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmAnimInstanceCopy_eventSetVrmSpringBoneBool_Parms), &Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::NewProp_bIgnorePhysicsCollision_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::NewProp_bIgnoreVRMCollision_SetBit(void* Obj)
	{
		((VrmAnimInstanceCopy_eventSetVrmSpringBoneBool_Parms*)Obj)->bIgnoreVRMCollision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::NewProp_bIgnoreVRMCollision = { "bIgnoreVRMCollision", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmAnimInstanceCopy_eventSetVrmSpringBoneBool_Parms), &Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::NewProp_bIgnoreVRMCollision_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::NewProp_bIgnoreWind_SetBit(void* Obj)
	{
		((VrmAnimInstanceCopy_eventSetVrmSpringBoneBool_Parms*)Obj)->bIgnoreWind = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::NewProp_bIgnoreWind = { "bIgnoreWind", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(VrmAnimInstanceCopy_eventSetVrmSpringBoneBool_Parms), &Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::NewProp_bIgnoreWind_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::NewProp_bIgnoreVrmSpringBone,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::NewProp_bIgnorePhysicsCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::NewProp_bIgnoreVRMCollision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::NewProp_bIgnoreWind,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "CPP_Default_bIgnorePhysicsCollision", "false" },
		{ "CPP_Default_bIgnoreVRMCollision", "false" },
		{ "CPP_Default_bIgnoreVrmSpringBone", "false" },
		{ "CPP_Default_bIgnoreWind", "false" },
		{ "ModuleRelativePath", "Public/VrmAnimInstanceCopy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmAnimInstanceCopy, nullptr, "SetVrmSpringBoneBool", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::VrmAnimInstanceCopy_eventSetVrmSpringBoneBool_Parms), Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneIgnoreWingBone_Statics
	{
		struct VrmAnimInstanceCopy_eventSetVrmSpringBoneIgnoreWingBone_Parms
		{
			TArray<FName> boneNameList;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_boneNameList_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_boneNameList_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_boneNameList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneIgnoreWingBone_Statics::NewProp_boneNameList_Inner = { "boneNameList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneIgnoreWingBone_Statics::NewProp_boneNameList_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneIgnoreWingBone_Statics::NewProp_boneNameList = { "boneNameList", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmAnimInstanceCopy_eventSetVrmSpringBoneIgnoreWingBone_Parms, boneNameList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneIgnoreWingBone_Statics::NewProp_boneNameList_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneIgnoreWingBone_Statics::NewProp_boneNameList_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneIgnoreWingBone_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneIgnoreWingBone_Statics::NewProp_boneNameList_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneIgnoreWingBone_Statics::NewProp_boneNameList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneIgnoreWingBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "ModuleRelativePath", "Public/VrmAnimInstanceCopy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneIgnoreWingBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmAnimInstanceCopy, nullptr, "SetVrmSpringBoneIgnoreWingBone", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneIgnoreWingBone_Statics::VrmAnimInstanceCopy_eventSetVrmSpringBoneIgnoreWingBone_Parms), Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneIgnoreWingBone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneIgnoreWingBone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneIgnoreWingBone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneIgnoreWingBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneIgnoreWingBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneIgnoreWingBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam_Statics
	{
		struct VrmAnimInstanceCopy_eventSetVrmSpringBoneParam_Parms
		{
			float gravityScale;
			FVector gravityAdd;
			float stiffnessScale;
			float stiffnessAdd;
			float randomWindRange;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_gravityScale;
		static const UECodeGen_Private::FStructPropertyParams NewProp_gravityAdd;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_stiffnessScale;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_stiffnessAdd;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_randomWindRange;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam_Statics::NewProp_gravityScale = { "gravityScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmAnimInstanceCopy_eventSetVrmSpringBoneParam_Parms, gravityScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam_Statics::NewProp_gravityAdd = { "gravityAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmAnimInstanceCopy_eventSetVrmSpringBoneParam_Parms, gravityAdd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam_Statics::NewProp_stiffnessScale = { "stiffnessScale", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmAnimInstanceCopy_eventSetVrmSpringBoneParam_Parms, stiffnessScale), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam_Statics::NewProp_stiffnessAdd = { "stiffnessAdd", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmAnimInstanceCopy_eventSetVrmSpringBoneParam_Parms, stiffnessAdd), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam_Statics::NewProp_randomWindRange = { "randomWindRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmAnimInstanceCopy_eventSetVrmSpringBoneParam_Parms, randomWindRange), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam_Statics::NewProp_gravityScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam_Statics::NewProp_gravityAdd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam_Statics::NewProp_stiffnessScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam_Statics::NewProp_stiffnessAdd,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam_Statics::NewProp_randomWindRange,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam_Statics::Function_MetaDataParams[] = {
		{ "Category", "VRM4U" },
		{ "CPP_Default_gravityAdd", "" },
		{ "CPP_Default_gravityScale", "1.000000" },
		{ "CPP_Default_randomWindRange", "0.200000" },
		{ "CPP_Default_stiffnessAdd", "0.000000" },
		{ "CPP_Default_stiffnessScale", "1.000000" },
		{ "ModuleRelativePath", "Public/VrmAnimInstanceCopy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmAnimInstanceCopy, nullptr, "SetVrmSpringBoneParam", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam_Statics::VrmAnimInstanceCopy_eventSetVrmSpringBoneParam_Parms), Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrmAnimInstanceCopy);
	UClass* Z_Construct_UClass_UVrmAnimInstanceCopy_NoRegister()
	{
		return UVrmAnimInstanceCopy::StaticClass();
	}
	struct Z_Construct_UClass_UVrmAnimInstanceCopy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAttachedParent_MetaData[];
#endif
		static void NewProp_bUseAttachedParent_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAttachedParent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SrcSkeletalMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SrcSkeletalMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SrcAsSkinnedMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SrcAsSkinnedMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SrcVrmAssetList_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SrcVrmAssetList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SrcVrmMetaOverride_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SrcVrmMetaOverride;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DstVrmAssetList_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DstVrmAssetList;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DstVrmMetaForCustomSpring_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DstVrmMetaForCustomSpring;
		static const UECodeGen_Private::FNamePropertyParams NewProp_InitialMorphName_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialMorphName_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InitialMorphName;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InitialMorphValue_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InitialMorphValue_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_InitialMorphValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseAnimStop_MetaData[];
#endif
		static void NewProp_bUseAnimStop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAnimStop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAnimStop_MetaData[];
#endif
		static void NewProp_bAnimStop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnimStop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCopyStop_MetaData[];
#endif
		static void NewProp_bCopyStop_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCopyStop;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIgnoreCenterLocation_MetaData[];
#endif
		static void NewProp_bIgnoreCenterLocation_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnoreCenterLocation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterLocationScaleByHeightScale_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CenterLocationScaleByHeightScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CenterLocationOffset_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_CenterLocationOffset;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyData, "SetSkeletalMeshCopyData" }, // 231878175
		{ &Z_Construct_UFunction_UVrmAnimInstanceCopy_SetSkeletalMeshCopyDataForCustomSpring, "SetSkeletalMeshCopyDataForCustomSpring" }, // 2787197470
		{ &Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneBool, "SetVrmSpringBoneBool" }, // 3547584328
		{ &Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneIgnoreWingBone, "SetVrmSpringBoneIgnoreWingBone" }, // 1361371450
		{ &Z_Construct_UFunction_UVrmAnimInstanceCopy_SetVrmSpringBoneParam, "SetVrmSpringBoneParam" }, // 1547471305
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "VrmAnimInstanceCopy.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmAnimInstanceCopy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bUseAttachedParent_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmAnimInstanceCopy.h" },
		{ "NeverAsPin", "" },
	};
#endif
	void Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bUseAttachedParent_SetBit(void* Obj)
	{
		((UVrmAnimInstanceCopy*)Obj)->bUseAttachedParent = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bUseAttachedParent = { "bUseAttachedParent", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVrmAnimInstanceCopy), &Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bUseAttachedParent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bUseAttachedParent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bUseAttachedParent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_SrcSkeletalMeshComponent_MetaData[] = {
		{ "Category", "Rendering" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VrmAnimInstanceCopy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_SrcSkeletalMeshComponent = { "SrcSkeletalMeshComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmAnimInstanceCopy, SrcSkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_SrcSkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_SrcSkeletalMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_SrcAsSkinnedMeshComponent_MetaData[] = {
		{ "Category", "Rendering" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VrmAnimInstanceCopy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_SrcAsSkinnedMeshComponent = { "SrcAsSkinnedMeshComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmAnimInstanceCopy, SrcAsSkinnedMeshComponent), Z_Construct_UClass_USkinnedMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_SrcAsSkinnedMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_SrcAsSkinnedMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_SrcVrmAssetList_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmAnimInstanceCopy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_SrcVrmAssetList = { "SrcVrmAssetList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmAnimInstanceCopy, SrcVrmAssetList), Z_Construct_UClass_UVrmAssetListObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_SrcVrmAssetList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_SrcVrmAssetList_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_SrcVrmMetaOverride_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmAnimInstanceCopy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_SrcVrmMetaOverride = { "SrcVrmMetaOverride", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmAnimInstanceCopy, SrcVrmMetaOverride), Z_Construct_UClass_UVrmMetaObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_SrcVrmMetaOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_SrcVrmMetaOverride_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_DstVrmAssetList_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmAnimInstanceCopy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_DstVrmAssetList = { "DstVrmAssetList", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmAnimInstanceCopy, DstVrmAssetList), Z_Construct_UClass_UVrmAssetListObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_DstVrmAssetList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_DstVrmAssetList_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_DstVrmMetaForCustomSpring_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmAnimInstanceCopy.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_DstVrmMetaForCustomSpring = { "DstVrmMetaForCustomSpring", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmAnimInstanceCopy, DstVrmMetaForCustomSpring), Z_Construct_UClass_UVrmMetaObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_DstVrmMetaForCustomSpring_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_DstVrmMetaForCustomSpring_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_InitialMorphName_Inner = { "InitialMorphName", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_InitialMorphName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmAnimInstanceCopy.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_InitialMorphName = { "InitialMorphName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmAnimInstanceCopy, InitialMorphName), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_InitialMorphName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_InitialMorphName_MetaData)) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_InitialMorphValue_Inner = { "InitialMorphValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_InitialMorphValue_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmAnimInstanceCopy.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_InitialMorphValue = { "InitialMorphValue", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmAnimInstanceCopy, InitialMorphValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_InitialMorphValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_InitialMorphValue_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bUseAnimStop_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmAnimInstanceCopy.h" },
	};
#endif
	void Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bUseAnimStop_SetBit(void* Obj)
	{
		((UVrmAnimInstanceCopy*)Obj)->bUseAnimStop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bUseAnimStop = { "bUseAnimStop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVrmAnimInstanceCopy), &Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bUseAnimStop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bUseAnimStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bUseAnimStop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bAnimStop_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmAnimInstanceCopy.h" },
	};
#endif
	void Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bAnimStop_SetBit(void* Obj)
	{
		((UVrmAnimInstanceCopy*)Obj)->bAnimStop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bAnimStop = { "bAnimStop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVrmAnimInstanceCopy), &Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bAnimStop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bAnimStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bAnimStop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bCopyStop_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmAnimInstanceCopy.h" },
	};
#endif
	void Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bCopyStop_SetBit(void* Obj)
	{
		((UVrmAnimInstanceCopy*)Obj)->bCopyStop = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bCopyStop = { "bCopyStop", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVrmAnimInstanceCopy), &Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bCopyStop_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bCopyStop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bCopyStop_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bIgnoreCenterLocation_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmAnimInstanceCopy.h" },
	};
#endif
	void Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bIgnoreCenterLocation_SetBit(void* Obj)
	{
		((UVrmAnimInstanceCopy*)Obj)->bIgnoreCenterLocation = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bIgnoreCenterLocation = { "bIgnoreCenterLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UVrmAnimInstanceCopy), &Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bIgnoreCenterLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bIgnoreCenterLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bIgnoreCenterLocation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_CenterLocationScaleByHeightScale_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmAnimInstanceCopy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_CenterLocationScaleByHeightScale = { "CenterLocationScaleByHeightScale", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmAnimInstanceCopy, CenterLocationScaleByHeightScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_CenterLocationScaleByHeightScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_CenterLocationScaleByHeightScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_CenterLocationOffset_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmAnimInstanceCopy.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_CenterLocationOffset = { "CenterLocationOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmAnimInstanceCopy, CenterLocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_CenterLocationOffset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_CenterLocationOffset_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bUseAttachedParent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_SrcSkeletalMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_SrcAsSkinnedMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_SrcVrmAssetList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_SrcVrmMetaOverride,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_DstVrmAssetList,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_DstVrmMetaForCustomSpring,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_InitialMorphName_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_InitialMorphName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_InitialMorphValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_InitialMorphValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bUseAnimStop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bAnimStop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bCopyStop,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_bIgnoreCenterLocation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_CenterLocationScaleByHeightScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::NewProp_CenterLocationOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmAnimInstanceCopy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::ClassParams = {
		&UVrmAnimInstanceCopy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVrmAnimInstanceCopy()
	{
		if (!Z_Registration_Info_UClass_UVrmAnimInstanceCopy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrmAnimInstanceCopy.OuterSingleton, Z_Construct_UClass_UVrmAnimInstanceCopy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVrmAnimInstanceCopy.OuterSingleton;
	}
	template<> VRM4U_API UClass* StaticClass<UVrmAnimInstanceCopy>()
	{
		return UVrmAnimInstanceCopy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmAnimInstanceCopy);
	UVrmAnimInstanceCopy::~UVrmAnimInstanceCopy() {}
	struct Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_Statics::ScriptStructInfo[] = {
		{ FVrmAnimInstanceCopyProxy::StaticStruct, Z_Construct_UScriptStruct_FVrmAnimInstanceCopyProxy_Statics::NewStructOps, TEXT("VrmAnimInstanceCopyProxy"), &Z_Registration_Info_UScriptStruct_VrmAnimInstanceCopyProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVrmAnimInstanceCopyProxy), 2238797635U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVrmAnimInstanceCopy, UVrmAnimInstanceCopy::StaticClass, TEXT("UVrmAnimInstanceCopy"), &Z_Registration_Info_UClass_UVrmAnimInstanceCopy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrmAnimInstanceCopy), 4142379174U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_3430416569(TEXT("/Script/VRM4U"),
		Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
