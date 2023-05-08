// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VRM4U/Public/VrmMetaObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVrmMetaObject() {}
// Cross Module References
	VRM4U_API UEnum* Z_Construct_UEnum_VRM4U_EVRMConstraintType();
	UPackage* Z_Construct_UPackage__Script_VRM4U();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMConstraint();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMConstraintRoll();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMConstraintAim();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMConstraintRotation();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVrmBlendShapeGroup();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVrmBlendShape();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMColliderMeta();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMSpringColliderData();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMColliderGroupMeta();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	VRM4U_API UScriptStruct* Z_Construct_UScriptStruct_FVRMSpringMeta();
	VRM4U_API UClass* Z_Construct_UClass_UVrmMetaObject_NoRegister();
	VRM4U_API UClass* Z_Construct_UClass_UVrmMetaObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	VRM4U_API UClass* Z_Construct_UClass_UVrmAssetListObject_NoRegister();
// End Cross Module References
	static UEnum* EVRMConstraintType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_VRM4U_EVRMConstraintType, Z_Construct_UPackage__Script_VRM4U(), TEXT("EVRMConstraintType"));
		}
		return Singleton;
	}
	template<> VRM4U_API UEnum* StaticEnum<EVRMConstraintType>()
	{
		return EVRMConstraintType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EVRMConstraintType(EVRMConstraintType_StaticEnum, TEXT("/Script/VRM4U"), TEXT("EVRMConstraintType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_VRM4U_EVRMConstraintType_Hash() { return 3704850424U; }
	UEnum* Z_Construct_UEnum_VRM4U_EVRMConstraintType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_VRM4U();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EVRMConstraintType"), 0, Get_Z_Construct_UEnum_VRM4U_EVRMConstraintType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EVRMConstraintType::None", (int64)EVRMConstraintType::None },
				{ "EVRMConstraintType::Roll", (int64)EVRMConstraintType::Roll },
				{ "EVRMConstraintType::Aim", (int64)EVRMConstraintType::Aim },
				{ "EVRMConstraintType::Rotation", (int64)EVRMConstraintType::Rotation },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Aim.Name", "EVRMConstraintType::Aim" },
				{ "BlueprintType", "true" },
				{ "Comment", "//struct VRM4U_API FBVrmlendShapeGroup {\n//\x09TArray<FVrmBlendShape> \n//};\n" },
				{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
				{ "None.Name", "EVRMConstraintType::None" },
				{ "Roll.Name", "EVRMConstraintType::Roll" },
				{ "Rotation.Name", "EVRMConstraintType::Rotation" },
				{ "ToolTip", "struct VRM4U_API FBVrmlendShapeGroup {\n       TArray<FVrmBlendShape>\n};" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_VRM4U,
				nullptr,
				"EVRMConstraintType",
				"EVRMConstraintType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FVRMConstraint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VRM4U_API uint32 Get_Z_Construct_UScriptStruct_FVRMConstraint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMConstraint, Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMConstraint"), sizeof(FVRMConstraint), Get_Z_Construct_UScriptStruct_FVRMConstraint_Hash());
	}
	return Singleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMConstraint>()
{
	return FVRMConstraint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVRMConstraint(FVRMConstraint::StaticStruct, TEXT("/Script/VRM4U"), TEXT("VRMConstraint"), false, nullptr, nullptr);
static struct FScriptStruct_VRM4U_StaticRegisterNativesFVRMConstraint
{
	FScriptStruct_VRM4U_StaticRegisterNativesFVRMConstraint()
	{
		UScriptStruct::DeferCppStructOps<FVRMConstraint>(FName(TEXT("VRMConstraint")));
	}
} ScriptStruct_VRM4U_StaticRegisterNativesFVRMConstraint;
	struct Z_Construct_UScriptStruct_FVRMConstraint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_constraintRoll_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_constraintRoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_constraintAim_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_constraintAim;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_constraintRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_constraintRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMConstraint>();
	}
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_type_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMConstraint, type), Z_Construct_UEnum_VRM4U_EVRMConstraintType, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintRoll_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintRoll = { "constraintRoll", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMConstraint, constraintRoll), Z_Construct_UScriptStruct_FVRMConstraintRoll, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintRoll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintRoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintAim_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintAim = { "constraintAim", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMConstraint, constraintAim), Z_Construct_UScriptStruct_FVRMConstraintAim, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintAim_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintAim_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintRotation_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintRotation = { "constraintRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMConstraint, constraintRotation), Z_Construct_UScriptStruct_FVRMConstraintRotation, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMConstraint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintRoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintAim,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraint_Statics::NewProp_constraintRotation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMConstraint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VRMConstraint",
		sizeof(FVRMConstraint),
		alignof(FVRMConstraint),
		Z_Construct_UScriptStruct_FVRMConstraint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMConstraint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRMConstraint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVRMConstraint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRM4U();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VRMConstraint"), sizeof(FVRMConstraint), Get_Z_Construct_UScriptStruct_FVRMConstraint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVRMConstraint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVRMConstraint_Hash() { return 3511749429U; }
class UScriptStruct* FVRMConstraintRotation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VRM4U_API uint32 Get_Z_Construct_UScriptStruct_FVRMConstraintRotation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMConstraintRotation, Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMConstraintRotation"), sizeof(FVRMConstraintRotation), Get_Z_Construct_UScriptStruct_FVRMConstraintRotation_Hash());
	}
	return Singleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMConstraintRotation>()
{
	return FVRMConstraintRotation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVRMConstraintRotation(FVRMConstraintRotation::StaticStruct, TEXT("/Script/VRM4U"), TEXT("VRMConstraintRotation"), false, nullptr, nullptr);
static struct FScriptStruct_VRM4U_StaticRegisterNativesFVRMConstraintRotation
{
	FScriptStruct_VRM4U_StaticRegisterNativesFVRMConstraintRotation()
	{
		UScriptStruct::DeferCppStructOps<FVRMConstraintRotation>(FName(TEXT("VRMConstraintRotation")));
	}
} ScriptStruct_VRM4U_StaticRegisterNativesFVRMConstraintRotation;
	struct Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sourceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sourceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_source_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_source;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_weight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMConstraintRotation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_sourceName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_sourceName = { "sourceName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMConstraintRotation, sourceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_sourceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_sourceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_source_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMConstraintRotation, source), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_source_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_weight_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_weight = { "weight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMConstraintRotation, weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_weight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_sourceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::NewProp_weight,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VRMConstraintRotation",
		sizeof(FVRMConstraintRotation),
		alignof(FVRMConstraintRotation),
		Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRMConstraintRotation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVRMConstraintRotation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRM4U();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VRMConstraintRotation"), sizeof(FVRMConstraintRotation), Get_Z_Construct_UScriptStruct_FVRMConstraintRotation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVRMConstraintRotation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVRMConstraintRotation_Hash() { return 3060783659U; }
class UScriptStruct* FVRMConstraintAim::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VRM4U_API uint32 Get_Z_Construct_UScriptStruct_FVRMConstraintAim_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMConstraintAim, Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMConstraintAim"), sizeof(FVRMConstraintAim), Get_Z_Construct_UScriptStruct_FVRMConstraintAim_Hash());
	}
	return Singleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMConstraintAim>()
{
	return FVRMConstraintAim::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVRMConstraintAim(FVRMConstraintAim::StaticStruct, TEXT("/Script/VRM4U"), TEXT("VRMConstraintAim"), false, nullptr, nullptr);
static struct FScriptStruct_VRM4U_StaticRegisterNativesFVRMConstraintAim
{
	FScriptStruct_VRM4U_StaticRegisterNativesFVRMConstraintAim()
	{
		UScriptStruct::DeferCppStructOps<FVRMConstraintAim>(FName(TEXT("VRMConstraintAim")));
	}
} ScriptStruct_VRM4U_StaticRegisterNativesFVRMConstraintAim;
	struct Z_Construct_UScriptStruct_FVRMConstraintAim_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sourceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sourceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_source_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_source;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_aimAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_aimAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_weight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMConstraintAim>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_sourceName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_sourceName = { "sourceName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMConstraintAim, sourceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_sourceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_sourceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_source_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMConstraintAim, source), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_source_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_aimAxis_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_aimAxis = { "aimAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMConstraintAim, aimAxis), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_aimAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_aimAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_weight_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_weight = { "weight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMConstraintAim, weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_weight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_sourceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_aimAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::NewProp_weight,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VRMConstraintAim",
		sizeof(FVRMConstraintAim),
		alignof(FVRMConstraintAim),
		Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRMConstraintAim()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVRMConstraintAim_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRM4U();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VRMConstraintAim"), sizeof(FVRMConstraintAim), Get_Z_Construct_UScriptStruct_FVRMConstraintAim_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVRMConstraintAim_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVRMConstraintAim_Hash() { return 2690027290U; }
class UScriptStruct* FVRMConstraintRoll::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VRM4U_API uint32 Get_Z_Construct_UScriptStruct_FVRMConstraintRoll_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMConstraintRoll, Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMConstraintRoll"), sizeof(FVRMConstraintRoll), Get_Z_Construct_UScriptStruct_FVRMConstraintRoll_Hash());
	}
	return Singleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMConstraintRoll>()
{
	return FVRMConstraintRoll::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVRMConstraintRoll(FVRMConstraintRoll::StaticStruct, TEXT("/Script/VRM4U"), TEXT("VRMConstraintRoll"), false, nullptr, nullptr);
static struct FScriptStruct_VRM4U_StaticRegisterNativesFVRMConstraintRoll
{
	FScriptStruct_VRM4U_StaticRegisterNativesFVRMConstraintRoll()
	{
		UScriptStruct::DeferCppStructOps<FVRMConstraintRoll>(FName(TEXT("VRMConstraintRoll")));
	}
} ScriptStruct_VRM4U_StaticRegisterNativesFVRMConstraintRoll;
	struct Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sourceName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_sourceName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_source_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_source;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rollAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_rollAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_weight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMConstraintRoll>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_sourceName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_sourceName = { "sourceName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMConstraintRoll, sourceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_sourceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_sourceName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_source_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_source = { "source", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMConstraintRoll, source), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_source_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_source_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_rollAxis_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_rollAxis = { "rollAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMConstraintRoll, rollAxis), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_rollAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_rollAxis_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_weight_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_weight = { "weight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMConstraintRoll, weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_weight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_sourceName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_rollAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::NewProp_weight,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VRMConstraintRoll",
		sizeof(FVRMConstraintRoll),
		alignof(FVRMConstraintRoll),
		Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRMConstraintRoll()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVRMConstraintRoll_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRM4U();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VRMConstraintRoll"), sizeof(FVRMConstraintRoll), Get_Z_Construct_UScriptStruct_FVRMConstraintRoll_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVRMConstraintRoll_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVRMConstraintRoll_Hash() { return 203190127U; }
class UScriptStruct* FVrmBlendShapeGroup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VRM4U_API uint32 Get_Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVrmBlendShapeGroup, Z_Construct_UPackage__Script_VRM4U(), TEXT("VrmBlendShapeGroup"), sizeof(FVrmBlendShapeGroup), Get_Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Hash());
	}
	return Singleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVrmBlendShapeGroup>()
{
	return FVrmBlendShapeGroup::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVrmBlendShapeGroup(FVrmBlendShapeGroup::StaticStruct, TEXT("/Script/VRM4U"), TEXT("VrmBlendShapeGroup"), false, nullptr, nullptr);
static struct FScriptStruct_VRM4U_StaticRegisterNativesFVrmBlendShapeGroup
{
	FScriptStruct_VRM4U_StaticRegisterNativesFVrmBlendShapeGroup()
	{
		UScriptStruct::DeferCppStructOps<FVrmBlendShapeGroup>(FName(TEXT("VrmBlendShapeGroup")));
	}
} ScriptStruct_VRM4U_StaticRegisterNativesFVrmBlendShapeGroup;
	struct Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlendShape_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendShape_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlendShape;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVrmBlendShapeGroup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_name_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVrmBlendShapeGroup, name), METADATA_PARAMS(Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_BlendShape_Inner = { "BlendShape", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVrmBlendShape, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_BlendShape_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_BlendShape = { "BlendShape", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVrmBlendShapeGroup, BlendShape), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_BlendShape_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_BlendShape_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_MaterialList_Inner = { "MaterialList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_MaterialList_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_MaterialList = { "MaterialList", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVrmBlendShapeGroup, MaterialList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_MaterialList_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_MaterialList_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_BlendShape_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_BlendShape,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_MaterialList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::NewProp_MaterialList,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VrmBlendShapeGroup",
		sizeof(FVrmBlendShapeGroup),
		alignof(FVrmBlendShapeGroup),
		Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVrmBlendShapeGroup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRM4U();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VrmBlendShapeGroup"), sizeof(FVrmBlendShapeGroup), Get_Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVrmBlendShapeGroup_Hash() { return 3088145141U; }
class UScriptStruct* FVrmBlendShapeMaterialList::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VRM4U_API uint32 Get_Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList, Z_Construct_UPackage__Script_VRM4U(), TEXT("VrmBlendShapeMaterialList"), sizeof(FVrmBlendShapeMaterialList), Get_Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Hash());
	}
	return Singleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVrmBlendShapeMaterialList>()
{
	return FVrmBlendShapeMaterialList::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVrmBlendShapeMaterialList(FVrmBlendShapeMaterialList::StaticStruct, TEXT("/Script/VRM4U"), TEXT("VrmBlendShapeMaterialList"), false, nullptr, nullptr);
static struct FScriptStruct_VRM4U_StaticRegisterNativesFVrmBlendShapeMaterialList
{
	FScriptStruct_VRM4U_StaticRegisterNativesFVrmBlendShapeMaterialList()
	{
		UScriptStruct::DeferCppStructOps<FVrmBlendShapeMaterialList>(FName(TEXT("VrmBlendShapeMaterialList")));
	}
} ScriptStruct_VRM4U_StaticRegisterNativesFVrmBlendShapeMaterialList;
	struct Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_materialName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_materialName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_propertyName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_propertyName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_color;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// BlendShape Material\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
		{ "ToolTip", "BlendShape Material" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVrmBlendShapeMaterialList>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_materialName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_materialName = { "materialName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVrmBlendShapeMaterialList, materialName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_materialName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_materialName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_propertyName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_propertyName = { "propertyName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVrmBlendShapeMaterialList, propertyName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_propertyName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_propertyName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_color_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_color = { "color", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVrmBlendShapeMaterialList, color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_color_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_color_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_materialName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_propertyName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::NewProp_color,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VrmBlendShapeMaterialList",
		sizeof(FVrmBlendShapeMaterialList),
		alignof(FVrmBlendShapeMaterialList),
		Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRM4U();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VrmBlendShapeMaterialList"), sizeof(FVrmBlendShapeMaterialList), Get_Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVrmBlendShapeMaterialList_Hash() { return 3770304644U; }
class UScriptStruct* FVrmBlendShape::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VRM4U_API uint32 Get_Z_Construct_UScriptStruct_FVrmBlendShape_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVrmBlendShape, Z_Construct_UPackage__Script_VRM4U(), TEXT("VrmBlendShape"), sizeof(FVrmBlendShape), Get_Z_Construct_UScriptStruct_FVrmBlendShape_Hash());
	}
	return Singleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVrmBlendShape>()
{
	return FVrmBlendShape::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVrmBlendShape(FVrmBlendShape::StaticStruct, TEXT("/Script/VRM4U"), TEXT("VrmBlendShape"), false, nullptr, nullptr);
static struct FScriptStruct_VRM4U_StaticRegisterNativesFVrmBlendShape
{
	FScriptStruct_VRM4U_StaticRegisterNativesFVrmBlendShape()
	{
		UScriptStruct::DeferCppStructOps<FVrmBlendShape>(FName(TEXT("VrmBlendShape")));
	}
} ScriptStruct_VRM4U_StaticRegisterNativesFVrmBlendShape;
	struct Z_Construct_UScriptStruct_FVrmBlendShape_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_morphTargetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_morphTargetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nodeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_nodeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_meshName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_meshName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_meshID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_meshID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shapeIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_shapeIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_weight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShape_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// BlendShape\n" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
		{ "ToolTip", "BlendShape" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVrmBlendShape>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_morphTargetName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_morphTargetName = { "morphTargetName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVrmBlendShape, morphTargetName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_morphTargetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_morphTargetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_nodeName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_nodeName = { "nodeName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVrmBlendShape, nodeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_nodeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_nodeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_meshName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_meshName = { "meshName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVrmBlendShape, meshName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_meshName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_meshName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_meshID_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_meshID = { "meshID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVrmBlendShape, meshID), METADATA_PARAMS(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_meshID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_meshID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_shapeIndex_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_shapeIndex = { "shapeIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVrmBlendShape, shapeIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_shapeIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_shapeIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_weight_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_weight = { "weight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVrmBlendShape, weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_weight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVrmBlendShape_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_morphTargetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_nodeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_meshName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_meshID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_shapeIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVrmBlendShape_Statics::NewProp_weight,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVrmBlendShape_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VrmBlendShape",
		sizeof(FVrmBlendShape),
		alignof(FVrmBlendShape),
		Z_Construct_UScriptStruct_FVrmBlendShape_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVrmBlendShape_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVrmBlendShape()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVrmBlendShape_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRM4U();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VrmBlendShape"), sizeof(FVrmBlendShape), Get_Z_Construct_UScriptStruct_FVrmBlendShape_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVrmBlendShape_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVrmBlendShape_Hash() { return 3845657567U; }
class UScriptStruct* FVRMColliderMeta::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VRM4U_API uint32 Get_Z_Construct_UScriptStruct_FVRMColliderMeta_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMColliderMeta, Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMColliderMeta"), sizeof(FVRMColliderMeta), Get_Z_Construct_UScriptStruct_FVRMColliderMeta_Hash());
	}
	return Singleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMColliderMeta>()
{
	return FVRMColliderMeta::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVRMColliderMeta(FVRMColliderMeta::StaticStruct, TEXT("/Script/VRM4U"), TEXT("VRMColliderMeta"), false, nullptr, nullptr);
static struct FScriptStruct_VRM4U_StaticRegisterNativesFVRMColliderMeta
{
	FScriptStruct_VRM4U_StaticRegisterNativesFVRMColliderMeta()
	{
		UScriptStruct::DeferCppStructOps<FVRMColliderMeta>(FName(TEXT("VRMColliderMeta")));
	}
} ScriptStruct_VRM4U_StaticRegisterNativesFVRMColliderMeta;
	struct Z_Construct_UScriptStruct_FVRMColliderMeta_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bone_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_bone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_boneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_boneName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_collider_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_collider_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_collider;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMColliderMeta>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_bone_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_bone = { "bone", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMColliderMeta, bone), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_bone_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_bone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_boneName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_boneName = { "boneName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMColliderMeta, boneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_boneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_boneName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_collider_Inner = { "collider", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVRMSpringColliderData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_collider_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_collider = { "collider", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMColliderMeta, collider), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_collider_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_collider_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_bone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_boneName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_collider_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::NewProp_collider,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VRMColliderMeta",
		sizeof(FVRMColliderMeta),
		alignof(FVRMColliderMeta),
		Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRMColliderMeta()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVRMColliderMeta_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRM4U();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VRMColliderMeta"), sizeof(FVRMColliderMeta), Get_Z_Construct_UScriptStruct_FVRMColliderMeta_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVRMColliderMeta_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVRMColliderMeta_Hash() { return 3847131459U; }
class UScriptStruct* FVRMColliderGroupMeta::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VRM4U_API uint32 Get_Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMColliderGroupMeta, Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMColliderGroupMeta"), sizeof(FVRMColliderGroupMeta), Get_Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Hash());
	}
	return Singleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMColliderGroupMeta>()
{
	return FVRMColliderGroupMeta::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVRMColliderGroupMeta(FVRMColliderGroupMeta::StaticStruct, TEXT("/Script/VRM4U"), TEXT("VRMColliderGroupMeta"), false, nullptr, nullptr);
static struct FScriptStruct_VRM4U_StaticRegisterNativesFVRMColliderGroupMeta
{
	FScriptStruct_VRM4U_StaticRegisterNativesFVRMColliderGroupMeta()
	{
		UScriptStruct::DeferCppStructOps<FVRMColliderGroupMeta>(FName(TEXT("VRMColliderGroupMeta")));
	}
} ScriptStruct_VRM4U_StaticRegisterNativesFVRMColliderGroupMeta;
	struct Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_groupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_groupName;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_colliderGroup_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_colliderGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_colliderGroup;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMColliderGroupMeta>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_groupName_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_groupName = { "groupName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMColliderGroupMeta, groupName), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_groupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_groupName_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_colliderGroup_Inner = { "colliderGroup", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_colliderGroup_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_colliderGroup = { "colliderGroup", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMColliderGroupMeta, colliderGroup), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_colliderGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_colliderGroup_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_groupName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_colliderGroup_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::NewProp_colliderGroup,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VRMColliderGroupMeta",
		sizeof(FVRMColliderGroupMeta),
		alignof(FVRMColliderGroupMeta),
		Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRMColliderGroupMeta()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRM4U();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VRMColliderGroupMeta"), sizeof(FVRMColliderGroupMeta), Get_Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVRMColliderGroupMeta_Hash() { return 2794658914U; }
class UScriptStruct* FVRMSpringColliderData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VRM4U_API uint32 Get_Z_Construct_UScriptStruct_FVRMSpringColliderData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMSpringColliderData, Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMSpringColliderData"), sizeof(FVRMSpringColliderData), Get_Z_Construct_UScriptStruct_FVRMSpringColliderData_Hash());
	}
	return Singleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMSpringColliderData>()
{
	return FVRMSpringColliderData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVRMSpringColliderData(FVRMSpringColliderData::StaticStruct, TEXT("/Script/VRM4U"), TEXT("VRMSpringColliderData"), false, nullptr, nullptr);
static struct FScriptStruct_VRM4U_StaticRegisterNativesFVRMSpringColliderData
{
	FScriptStruct_VRM4U_StaticRegisterNativesFVRMSpringColliderData()
	{
		UScriptStruct::DeferCppStructOps<FVRMSpringColliderData>(FName(TEXT("VRMSpringColliderData")));
	}
} ScriptStruct_VRM4U_StaticRegisterNativesFVRMSpringColliderData;
	struct Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shapeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_shapeType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_radius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tail_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tail;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMSpringColliderData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_shapeType_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_shapeType = { "shapeType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMSpringColliderData, shapeType), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_shapeType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_shapeType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_offset_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_offset = { "offset", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMSpringColliderData, offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_offset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_radius_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_radius = { "radius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMSpringColliderData, radius), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_radius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_radius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_tail_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_tail = { "tail", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMSpringColliderData, tail), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_tail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_tail_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_shapeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_radius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::NewProp_tail,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VRMSpringColliderData",
		sizeof(FVRMSpringColliderData),
		alignof(FVRMSpringColliderData),
		Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRMSpringColliderData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVRMSpringColliderData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRM4U();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VRMSpringColliderData"), sizeof(FVRMSpringColliderData), Get_Z_Construct_UScriptStruct_FVRMSpringColliderData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVRMSpringColliderData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVRMSpringColliderData_Hash() { return 271460917U; }
class UScriptStruct* FVRMSpringMeta::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern VRM4U_API uint32 Get_Z_Construct_UScriptStruct_FVRMSpringMeta_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FVRMSpringMeta, Z_Construct_UPackage__Script_VRM4U(), TEXT("VRMSpringMeta"), sizeof(FVRMSpringMeta), Get_Z_Construct_UScriptStruct_FVRMSpringMeta_Hash());
	}
	return Singleton;
}
template<> VRM4U_API UScriptStruct* StaticStruct<FVRMSpringMeta>()
{
	return FVRMSpringMeta::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FVRMSpringMeta(FVRMSpringMeta::StaticStruct, TEXT("/Script/VRM4U"), TEXT("VRMSpringMeta"), false, nullptr, nullptr);
static struct FScriptStruct_VRM4U_StaticRegisterNativesFVRMSpringMeta
{
	FScriptStruct_VRM4U_StaticRegisterNativesFVRMSpringMeta()
	{
		UScriptStruct::DeferCppStructOps<FVRMSpringMeta>(FName(TEXT("VRMSpringMeta")));
	}
} ScriptStruct_VRM4U_StaticRegisterNativesFVRMSpringMeta;
	struct Z_Construct_UScriptStruct_FVRMSpringMeta_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_stiffness_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_stiffness;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gravityPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_gravityPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gravityDir_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gravityDir;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_dragForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_dragForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_hitRadius;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_bones_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bones_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_bones;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_boneNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_boneNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_boneNames;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ColliderIndexArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColliderIndexArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ColliderIndexArray;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ColliderGroupArrayVRM10_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColliderGroupArrayVRM10_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ColliderGroupArrayVRM10;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FVRMSpringMeta>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_stiffness_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_stiffness = { "stiffness", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMSpringMeta, stiffness), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_stiffness_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_stiffness_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_gravityPower_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_gravityPower = { "gravityPower", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMSpringMeta, gravityPower), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_gravityPower_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_gravityPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_gravityDir_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_gravityDir = { "gravityDir", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMSpringMeta, gravityDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_gravityDir_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_gravityDir_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_dragForce_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_dragForce = { "dragForce", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMSpringMeta, dragForce), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_dragForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_dragForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_hitRadius_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_hitRadius = { "hitRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMSpringMeta, hitRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_hitRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_hitRadius_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_bones_Inner = { "bones", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_bones_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)\n//int boneNum = 0;\n" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Rendering)\nint boneNum = 0;" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_bones = { "bones", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMSpringMeta, bones), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_bones_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_bones_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_boneNames_Inner = { "boneNames", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_boneNames_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_boneNames = { "boneNames", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMSpringMeta, boneNames), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_boneNames_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_boneNames_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderIndexArray_Inner = { "ColliderIndexArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderIndexArray_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderIndexArray = { "ColliderIndexArray", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMSpringMeta, ColliderIndexArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderIndexArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderIndexArray_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderGroupArrayVRM10_Inner = { "ColliderGroupArrayVRM10", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderGroupArrayVRM10_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderGroupArrayVRM10 = { "ColliderGroupArrayVRM10", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FVRMSpringMeta, ColliderGroupArrayVRM10), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderGroupArrayVRM10_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderGroupArrayVRM10_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_stiffness,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_gravityPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_gravityDir,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_dragForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_hitRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_bones_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_bones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_boneNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_boneNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderIndexArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderIndexArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderGroupArrayVRM10_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::NewProp_ColliderGroupArrayVRM10,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
		nullptr,
		&NewStructOps,
		"VRMSpringMeta",
		sizeof(FVRMSpringMeta),
		alignof(FVRMSpringMeta),
		Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FVRMSpringMeta()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FVRMSpringMeta_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_VRM4U();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("VRMSpringMeta"), sizeof(FVRMSpringMeta), Get_Z_Construct_UScriptStruct_FVRMSpringMeta_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FVRMSpringMeta_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FVRMSpringMeta_Hash() { return 1375514918U; }
	void UVrmMetaObject::StaticRegisterNativesUVrmMetaObject()
	{
	}
	UClass* Z_Construct_UClass_UVrmMetaObject_NoRegister()
	{
		return UVrmMetaObject::StaticClass();
	}
	struct Z_Construct_UClass_UVrmMetaObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_humanoidBoneTable_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_humanoidBoneTable_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_humanoidBoneTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_humanoidBoneTable;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BlendShapeGroup_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendShapeGroup_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlendShapeGroup;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VRMSpringMeta_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRMSpringMeta_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VRMSpringMeta;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VRMColliderMeta_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRMColliderMeta_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VRMColliderMeta;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VRMColliderGroupMeta_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRMColliderGroupMeta_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VRMColliderGroupMeta;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VRMConstraintMeta_ValueProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_VRMConstraintMeta_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VRMConstraintMeta_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_VRMConstraintMeta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VrmAssetListObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VrmAssetListObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVrmMetaObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_VRM4U,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmMetaObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "VrmMetaObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_humanoidBoneTable_ValueProp = { "humanoidBoneTable", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_humanoidBoneTable_Key_KeyProp = { "humanoidBoneTable_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_humanoidBoneTable_MetaData[] = {
		{ "Category", "Rendering" },
		{ "Comment", "// humanoid name -> model name\n" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
		{ "ToolTip", "humanoid name -> model name" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_humanoidBoneTable = { "humanoidBoneTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmMetaObject, humanoidBoneTable), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_humanoidBoneTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_humanoidBoneTable_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_BlendShapeGroup_Inner = { "BlendShapeGroup", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVrmBlendShapeGroup, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_BlendShapeGroup_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_BlendShapeGroup = { "BlendShapeGroup", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmMetaObject, BlendShapeGroup), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_BlendShapeGroup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_BlendShapeGroup_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMSpringMeta_Inner = { "VRMSpringMeta", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVRMSpringMeta, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMSpringMeta_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMSpringMeta = { "VRMSpringMeta", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmMetaObject, VRMSpringMeta), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMSpringMeta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMSpringMeta_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderMeta_Inner = { "VRMColliderMeta", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVRMColliderMeta, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderMeta_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderMeta = { "VRMColliderMeta", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmMetaObject, VRMColliderMeta), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderMeta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderMeta_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderGroupMeta_Inner = { "VRMColliderGroupMeta", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVRMColliderGroupMeta, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderGroupMeta_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderGroupMeta = { "VRMColliderGroupMeta", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmMetaObject, VRMColliderGroupMeta), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderGroupMeta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderGroupMeta_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMConstraintMeta_ValueProp = { "VRMConstraintMeta", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FVRMConstraint, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMConstraintMeta_Key_KeyProp = { "VRMConstraintMeta_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMConstraintMeta_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMConstraintMeta = { "VRMConstraintMeta", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmMetaObject, VRMConstraintMeta), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMConstraintMeta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMConstraintMeta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmMetaObject, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VrmAssetListObject_MetaData[] = {
		{ "Category", "Rendering" },
		{ "ModuleRelativePath", "Public/VrmMetaObject.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VrmAssetListObject = { "VrmAssetListObject", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UVrmMetaObject, VrmAssetListObject), Z_Construct_UClass_UVrmAssetListObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VrmAssetListObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VrmAssetListObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UVrmMetaObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_humanoidBoneTable_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_humanoidBoneTable_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_humanoidBoneTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_BlendShapeGroup_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_BlendShapeGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMSpringMeta_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMSpringMeta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderMeta_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderMeta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderGroupMeta_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMColliderGroupMeta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMConstraintMeta_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMConstraintMeta_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VRMConstraintMeta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_SkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UVrmMetaObject_Statics::NewProp_VrmAssetListObject,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVrmMetaObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVrmMetaObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVrmMetaObject_Statics::ClassParams = {
		&UVrmMetaObject::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UVrmMetaObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMetaObject_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UVrmMetaObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UVrmMetaObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVrmMetaObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVrmMetaObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVrmMetaObject, 1383044634);
	template<> VRM4U_API UClass* StaticClass<UVrmMetaObject>()
	{
		return UVrmMetaObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVrmMetaObject(Z_Construct_UClass_UVrmMetaObject, &UVrmMetaObject::StaticClass, TEXT("/Script/VRM4U"), TEXT("UVrmMetaObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVrmMetaObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
