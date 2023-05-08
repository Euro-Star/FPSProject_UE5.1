// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmAnimInstance() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeleton_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceProxy();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	VRM4U_API UClass* Z_Construct_UClass_UVrmAnimInstance();
	VRM4U_API UClass* Z_Construct_UClass_UVrmAnimInstance_NoRegister();
	VRM4U_API UClass* Z_Construct_UClass_UVrmMetaObject_NoRegister();
	VRM4U_API UEnum* Z_Construct_UEnum_VRM4U_EVRMBlendShapeGroup();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVrmAnimInstanceProxy();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EVRMBlendShapeGroup;
	static UEnum* EVRMBlendShapeGroup_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EVRMBlendShapeGroup.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EVRMBlendShapeGroup.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_VRM4U_EVRMBlendShapeGroup, Z_Construct_UPackage__Script_VRM4U(), TEXT("EVRMBlendShapeGroup"));
		}
		return Z_Registration_Info_UEnum_EVRMBlendShapeGroup.OuterSingleton;
	}
	template<> VRM4U_API UEnum* StaticEnum<EVRMBlendShapeGroup>()
	{
		return EVRMBlendShapeGroup_StaticEnum();
	}
	struct Z_Construct_UEnum_VRM4U_EVRMBlendShapeGroup_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_VRM4U_EVRMBlendShapeGroup_Statics::Enumerators[] = {
		{ "EVRMBlendShapeGroup::BSG_Neutoral", (int64)EVRMBlendShapeGroup::BSG_Neutoral },
		{ "EVRMBlendShapeGroup::BSG_A", (int64)EVRMBlendShapeGroup::BSG_A },
		{ "EVRMBlendShapeGroup::BSG_I", (int64)EVRMBlendShapeGroup::BSG_I },
		{ "EVRMBlendShapeGroup::BSG_U", (int64)EVRMBlendShapeGroup::BSG_U },
		{ "EVRMBlendShapeGroup::BSG_E", (int64)EVRMBlendShapeGroup::BSG_E },
		{ "EVRMBlendShapeGroup::BSG_O", (int64)EVRMBlendShapeGroup::BSG_O },
		{ "EVRMBlendShapeGroup::BSG_Blink", (int64)EVRMBlendShapeGroup::BSG_Blink },
		{ "EVRMBlendShapeGroup::BSG_Joy", (int64)EVRMBlendShapeGroup::BSG_Joy },
		{ "EVRMBlendShapeGroup::BSG_Angry", (int64)EVRMBlendShapeGroup::BSG_Angry },
		{ "EVRMBlendShapeGroup::BSG_Sorrow", (int64)EVRMBlendShapeGroup::BSG_Sorrow },
		{ "EVRMBlendShapeGroup::BSG_Fun", (int64)EVRMBlendShapeGroup::BSG_Fun },
		{ "EVRMBlendShapeGroup::BSG_LookUp", (int64)EVRMBlendShapeGroup::BSG_LookUp },
		{ "EVRMBlendShapeGroup::BSG_LookDown", (int64)EVRMBlendShapeGroup::BSG_LookDown },
		{ "EVRMBlendShapeGroup::BSG_LookLeft", (int64)EVRMBlendShapeGroup::BSG_LookLeft },
		{ "EVRMBlendShapeGroup::BSG_LookRight", (int64)EVRMBlendShapeGroup::BSG_LookRight },
		{ "EVRMBlendShapeGroup::BSG_Blink_L", (int64)EVRMBlendShapeGroup::BSG_Blink_L },
		{ "EVRMBlendShapeGroup::BSG_Blink_R", (int64)EVRMBlendShapeGroup::BSG_Blink_R },
		{ "EVRMBlendShapeGroup::Num", (int64)EVRMBlendShapeGroup::Num },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_VRM4U_EVRMBlendShapeGroup_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "BSG_A.DisplayName", "01_A" },
		{ "BSG_A.Name", "EVRMBlendShapeGroup::BSG_A" },
		{ "BSG_Angry.DisplayName", "08_Angry" },
		{ "BSG_Angry.Name", "EVRMBlendShapeGroup::BSG_Angry" },
		{ "BSG_Blink.DisplayName", "06_Blink" },
		{ "BSG_Blink.Name", "EVRMBlendShapeGroup::BSG_Blink" },
		{ "BSG_Blink_L.DisplayName", "15_Blink_L" },
		{ "BSG_Blink_L.Name", "EVRMBlendShapeGroup::BSG_Blink_L" },
		{ "BSG_Blink_R.DisplayName", "16_Blink_R" },
		{ "BSG_Blink_R.Name", "EVRMBlendShapeGroup::BSG_Blink_R" },
		{ "BSG_E.DisplayName", "04_E" },
		{ "BSG_E.Name", "EVRMBlendShapeGroup::BSG_E" },
		{ "BSG_Fun.DisplayName", "10_Fun" },
		{ "BSG_Fun.Name", "EVRMBlendShapeGroup::BSG_Fun" },
		{ "BSG_I.DisplayName", "02_I" },
		{ "BSG_I.Name", "EVRMBlendShapeGroup::BSG_I" },
		{ "BSG_Joy.DisplayName", "07_Joy" },
		{ "BSG_Joy.Name", "EVRMBlendShapeGroup::BSG_Joy" },
		{ "BSG_LookDown.DisplayName", "12_LookDown" },
		{ "BSG_LookDown.Name", "EVRMBlendShapeGroup::BSG_LookDown" },
		{ "BSG_LookLeft.DisplayName", "13_LookLeft" },
		{ "BSG_LookLeft.Name", "EVRMBlendShapeGroup::BSG_LookLeft" },
		{ "BSG_LookRight.DisplayName", "14_LookRight" },
		{ "BSG_LookRight.Name", "EVRMBlendShapeGroup::BSG_LookRight" },
		{ "BSG_LookUp.DisplayName", "11_LookUp" },
		{ "BSG_LookUp.Name", "EVRMBlendShapeGroup::BSG_LookUp" },
		{ "BSG_Neutoral.DisplayName", "00_Neutoral" },
		{ "BSG_Neutoral.Name", "EVRMBlendShapeGroup::BSG_Neutoral" },
		{ "BSG_O.DisplayName", "05_O" },
		{ "BSG_O.Name", "EVRMBlendShapeGroup::BSG_O" },
		{ "BSG_Sorrow.DisplayName", "09_Sorrow" },
		{ "BSG_Sorrow.Name", "EVRMBlendShapeGroup::BSG_Sorrow" },
		{ "BSG_U.DisplayName", "03_U" },
		{ "BSG_U.Name", "EVRMBlendShapeGroup::BSG_U" },
		{ "ModuleRelativePath", "Public/VrmAnimInstance.h" },
		{ "Num.Hidden", "" },
		{ "Num.Name", "EVRMBlendShapeGroup::Num" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_VRM4U_EVRMBlendShapeGroup_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		"EVRMBlendShapeGroup",
		"EVRMBlendShapeGroup",
		Z_Construct_UEnum_VRM4U_EVRMBlendShapeGroup_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_VRM4U_EVRMBlendShapeGroup_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_VRM4U_EVRMBlendShapeGroup_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_VRM4U_EVRMBlendShapeGroup_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_VRM4U_EVRMBlendShapeGroup()
	{
		if (!Z_Registration_Info_UEnum_EVRMBlendShapeGroup.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EVRMBlendShapeGroup.InnerSingleton, Z_Construct_UEnum_VRM4U_EVRMBlendShapeGroup_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EVRMBlendShapeGroup.InnerSingleton;
	}

static_assert(std::is_polymorphic<FVrmAnimInstanceProxy>() == std::is_polymorphic<FAnimInstanceProxy>(), "USTRUCT FVrmAnimInstanceProxy cannot be polymorphic unless super FAnimInstanceProxy is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_VrmAnimInstanceProxy;
class UScriptStruct* FVrmAnimInstanceProxy::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_VrmAnimInstanceProxy.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_VrmAnimInstanceProxy.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FVrmAnimInstanceProxy, Z_Construct_UPackage__Script_VRM4U(), TEXT("VrmAnimInstanceProxy"));
	}
	return Z_Registration_Info_UScriptStruct_VrmAnimInstanceProxy.OuterSingleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVrmAnimInstanceProxy>()
{
	return FVrmAnimInstanceProxy::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FVrmAnimInstanceProxy_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmAnimInstanceProxy_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/VrmAnimInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVrmAnimInstanceProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVrmAnimInstanceProxy>();
	}
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVrmAnimInstanceProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		Z_Construct_UScriptStruct_FAnimInstanceProxy,
		&NewStructOps,
		"VrmAnimInstanceProxy",
		sizeof(FVrmAnimInstanceProxy),
		alignof(FVrmAnimInstanceProxy),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVrmAnimInstanceProxy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmAnimInstanceProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVrmAnimInstanceProxy()
	{
		if (!Z_Registration_Info_UScriptStruct_VrmAnimInstanceProxy.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_VrmAnimInstanceProxy.InnerSingleton, Z_Construct_UScriptStruct_FVrmAnimInstanceProxy_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_VrmAnimInstanceProxy.InnerSingleton;
	}
	DEFINE_FUNCTION(UVrmAnimInstance::execSetVrmData)
	{
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_baseSkeletalMesh);
		P_GET_OBJECT(UVrmMetaObject,Z_Param_meta);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVrmData(Z_Param_baseSkeletalMesh,Z_Param_meta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UVrmAnimInstance::execSetMorphTargetVRM)
	{
		P_GET_ENUM(EVRMBlendShapeGroup,Z_Param_type);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMorphTargetVRM(EVRMBlendShapeGroup(Z_Param_type),Z_Param_Value);
		P_NATIVE_END;
	}
	void UVrmAnimInstance::StaticRegisterNativesUVrmAnimInstance()
	{
		UClass* Class = UVrmAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMorphTargetVRM", &UVrmAnimInstance::execSetMorphTargetVRM },
			{ "SetVrmData", &UVrmAnimInstance::execSetVrmData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVrmAnimInstance_SetMorphTargetVRM_Statics
	{
		struct VrmAnimInstance_eventSetMorphTargetVRM_Parms
		{
			EVRMBlendShapeGroup type;
			float Value;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVrmAnimInstance_SetMorphTargetVRM_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVrmAnimInstance_SetMorphTargetVRM_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmAnimInstance_eventSetMorphTargetVRM_Parms, type), Z_Construct_UEnum_VRM4U_EVRMBlendShapeGroup, METADATA_PARAMS(nullptr, 0) }; // 471152828
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UVrmAnimInstance_SetMorphTargetVRM_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmAnimInstance_eventSetMorphTargetVRM_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmAnimInstance_SetMorphTargetVRM_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmAnimInstance_SetMorphTargetVRM_Statics::NewProp_type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmAnimInstance_SetMorphTargetVRM_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmAnimInstance_SetMorphTargetVRM_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmAnimInstance_SetMorphTargetVRM_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "Comment", "//virtual USkeleton* GetTargetSkeleton() const override;\n" },
		{ "ModuleRelativePath", "Public/VrmAnimInstance.h" },
		{ "ToolTip", "virtual USkeleton* GetTargetSkeleton() const override;" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmAnimInstance_SetMorphTargetVRM_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmAnimInstance, nullptr, "SetMorphTargetVRM", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmAnimInstance_SetMorphTargetVRM_Statics::VrmAnimInstance_eventSetMorphTargetVRM_Parms), Z_Construct_UFunction_UVrmAnimInstance_SetMorphTargetVRM_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmAnimInstance_SetMorphTargetVRM_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmAnimInstance_SetMorphTargetVRM_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmAnimInstance_SetMorphTargetVRM_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmAnimInstance_SetMorphTargetVRM()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmAnimInstance_SetMorphTargetVRM_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVrmAnimInstance_SetVrmData_Statics
	{
		struct VrmAnimInstance_eventSetVrmData_Parms
		{
			USkeletalMeshComponent* baseSkeletalMesh;
			UVrmMetaObject* meta;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_baseSkeletalMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_baseSkeletalMesh;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_meta;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmAnimInstance_SetVrmData_Statics::NewProp_baseSkeletalMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmAnimInstance_SetVrmData_Statics::NewProp_baseSkeletalMesh = { "baseSkeletalMesh", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmAnimInstance_eventSetVrmData_Parms, baseSkeletalMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVrmAnimInstance_SetVrmData_Statics::NewProp_baseSkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmAnimInstance_SetVrmData_Statics::NewProp_baseSkeletalMesh_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVrmAnimInstance_SetVrmData_Statics::NewProp_meta = { "meta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(VrmAnimInstance_eventSetVrmData_Parms, meta), Z_Construct_UClass_UVrmMetaObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVrmAnimInstance_SetVrmData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmAnimInstance_SetVrmData_Statics::NewProp_baseSkeletalMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVrmAnimInstance_SetVrmData_Statics::NewProp_meta,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVrmAnimInstance_SetVrmData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/VrmAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UVrmAnimInstance_SetVrmData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVrmAnimInstance, nullptr, "SetVrmData", nullptr, nullptr, sizeof(Z_Construct_UFunction_UVrmAnimInstance_SetVrmData_Statics::VrmAnimInstance_eventSetVrmData_Parms), Z_Construct_UFunction_UVrmAnimInstance_SetVrmData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmAnimInstance_SetVrmData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVrmAnimInstance_SetVrmData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UVrmAnimInstance_SetVrmData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVrmAnimInstance_SetVrmData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UVrmAnimInstance_SetVrmData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UVrmAnimInstance);
	UClass* Z_Construct_UClass_UVrmAnimInstance_NoRegister()
	{
		return UVrmAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UVrmAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MetaObject_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MetaObject;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseSkeleton_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseSkeleton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BaseSkeletalMeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseSkeletalMeshComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransHandLeft_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransHandLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransHandRight_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransHandRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TransHead_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TransHead;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentHandLeft_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentHandLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentHandRight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentHandRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentHead_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentHead;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentHandJointTargetLeft_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentHandJointTargetLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ComponentHandJointTargetRight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ComponentHandJointTargetRight;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrmAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVrmAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVrmAnimInstance_SetMorphTargetVRM, "SetMorphTargetVRM" }, // 1985833090
		{ &Z_Construct_UFunction_UVrmAnimInstance_SetVrmData, "SetVrmData" }, // 690144500
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "VrmAnimInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_MetaObject_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_MetaObject = { "MetaObject", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmAnimInstance, MetaObject), Z_Construct_UClass_UVrmMetaObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_MetaObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_MetaObject_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_BaseSkeleton_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_BaseSkeleton = { "BaseSkeleton", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmAnimInstance, BaseSkeleton), Z_Construct_UClass_USkeleton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_BaseSkeleton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_BaseSkeleton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_BaseSkeletalMeshComponent_MetaData[] = {
		{ "Category", "Rendering" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VrmAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_BaseSkeletalMeshComponent = { "BaseSkeletalMeshComponent", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmAnimInstance, BaseSkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_BaseSkeletalMeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_BaseSkeletalMeshComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_TransHandLeft_MetaData[] = {
		{ "Category", "Tracking" },
		{ "ModuleRelativePath", "Public/VrmAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_TransHandLeft = { "TransHandLeft", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmAnimInstance, TransHandLeft), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_TransHandLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_TransHandLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_TransHandRight_MetaData[] = {
		{ "Category", "Tracking" },
		{ "ModuleRelativePath", "Public/VrmAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_TransHandRight = { "TransHandRight", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmAnimInstance, TransHandRight), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_TransHandRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_TransHandRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_TransHead_MetaData[] = {
		{ "Category", "Tracking" },
		{ "ModuleRelativePath", "Public/VrmAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_TransHead = { "TransHead", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmAnimInstance, TransHead), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_TransHead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_TransHead_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_ComponentHandLeft_MetaData[] = {
		{ "Category", "Tracking" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VrmAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_ComponentHandLeft = { "ComponentHandLeft", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmAnimInstance, ComponentHandLeft), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_ComponentHandLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_ComponentHandLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_ComponentHandRight_MetaData[] = {
		{ "Category", "Tracking" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VrmAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_ComponentHandRight = { "ComponentHandRight", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmAnimInstance, ComponentHandRight), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_ComponentHandRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_ComponentHandRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_ComponentHead_MetaData[] = {
		{ "Category", "Tracking" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VrmAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_ComponentHead = { "ComponentHead", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmAnimInstance, ComponentHead), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_ComponentHead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_ComponentHead_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_ComponentHandJointTargetLeft_MetaData[] = {
		{ "Category", "Tracking" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VrmAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_ComponentHandJointTargetLeft = { "ComponentHandJointTargetLeft", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmAnimInstance, ComponentHandJointTargetLeft), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_ComponentHandJointTargetLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_ComponentHandJointTargetLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_ComponentHandJointTargetRight_MetaData[] = {
		{ "Category", "Tracking" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/VrmAnimInstance.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_ComponentHandJointTargetRight = { "ComponentHandJointTargetRight", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(UVrmAnimInstance, ComponentHandJointTargetRight), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_ComponentHandJointTargetRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_ComponentHandJointTargetRight_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmAnimInstance_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_MetaObject,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_BaseSkeleton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_BaseSkeletalMeshComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_TransHandLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_TransHandRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_TransHead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_ComponentHandLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_ComponentHandRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_ComponentHead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_ComponentHandJointTargetLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmAnimInstance_Statics::NewProp_ComponentHandJointTargetRight,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmAnimInstance>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UVrmAnimInstance_Statics::ClassParams = {
		&UVrmAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UVrmAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UVrmAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVrmAnimInstance()
	{
		if (!Z_Registration_Info_UClass_UVrmAnimInstance.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UVrmAnimInstance.OuterSingleton, Z_Construct_UClass_UVrmAnimInstance_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UVrmAnimInstance.OuterSingleton;
	}
	template<> VRM4U_API UClass* StaticClass<UVrmAnimInstance>()
	{
		return UVrmAnimInstance::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmAnimInstance);
	UVrmAnimInstance::~UVrmAnimInstance() {}
	struct Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_Statics::EnumInfo[] = {
		{ EVRMBlendShapeGroup_StaticEnum, TEXT("EVRMBlendShapeGroup"), &Z_Registration_Info_UEnum_EVRMBlendShapeGroup, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 471152828U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_Statics::ScriptStructInfo[] = {
		{ FVrmAnimInstanceProxy::StaticStruct, Z_Construct_UScriptStruct_FVrmAnimInstanceProxy_Statics::NewStructOps, TEXT("VrmAnimInstanceProxy"), &Z_Registration_Info_UScriptStruct_VrmAnimInstanceProxy, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FVrmAnimInstanceProxy), 3442782896U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UVrmAnimInstance, UVrmAnimInstance::StaticClass, TEXT("UVrmAnimInstance"), &Z_Registration_Info_UClass_UVrmAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UVrmAnimInstance), 3559396338U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_2900200830(TEXT("/Script/VRM4U"),
		Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_Statics::ClassInfo),
		Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstance_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
