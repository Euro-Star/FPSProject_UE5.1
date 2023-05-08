// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VRM4U_AnimSubsystem.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 
#ifdef VRM4U_VRM4U_AnimSubsystem_generated_h
#error "VRM4U_AnimSubsystem.generated.h already included, missing '#pragma once' in VRM4U_AnimSubsystem.h"
#endif
#define VRM4U_VRM4U_AnimSubsystem_generated_h

#define FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVrmTransformData_Statics; \
	VRM4U_API static class UScriptStruct* StaticStruct();


template<> VRM4U_API UScriptStruct* StaticStruct<struct FVrmTransformData>();

#define FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h_38_SPARSE_DATA
#define FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h_38_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetRawData); \
	DECLARE_FUNCTION(execSetBoneTransform); \
	DECLARE_FUNCTION(execGetRawdataByPort); \
	DECLARE_FUNCTION(execGetRawdataByIndex); \
	DECLARE_FUNCTION(execGetBoneByPort); \
	DECLARE_FUNCTION(execGetBoneByIndex); \
	DECLARE_FUNCTION(execClear);


#define FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetRawData); \
	DECLARE_FUNCTION(execSetBoneTransform); \
	DECLARE_FUNCTION(execGetRawdataByPort); \
	DECLARE_FUNCTION(execGetRawdataByIndex); \
	DECLARE_FUNCTION(execGetBoneByPort); \
	DECLARE_FUNCTION(execGetBoneByIndex); \
	DECLARE_FUNCTION(execClear);


#define FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h_38_ACCESSORS
#define FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h_38_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVRM4U_AnimSubsystem(); \
	friend struct Z_Construct_UClass_UVRM4U_AnimSubsystem_Statics; \
public: \
	DECLARE_CLASS(UVRM4U_AnimSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRM4U"), NO_API) \
	DECLARE_SERIALIZER(UVRM4U_AnimSubsystem)


#define FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h_38_INCLASS \
private: \
	static void StaticRegisterNativesUVRM4U_AnimSubsystem(); \
	friend struct Z_Construct_UClass_UVRM4U_AnimSubsystem_Statics; \
public: \
	DECLARE_CLASS(UVRM4U_AnimSubsystem, UEngineSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRM4U"), NO_API) \
	DECLARE_SERIALIZER(UVRM4U_AnimSubsystem)


#define FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h_38_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRM4U_AnimSubsystem(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVRM4U_AnimSubsystem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRM4U_AnimSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRM4U_AnimSubsystem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRM4U_AnimSubsystem(UVRM4U_AnimSubsystem&&); \
	NO_API UVRM4U_AnimSubsystem(const UVRM4U_AnimSubsystem&); \
public: \
	NO_API virtual ~UVRM4U_AnimSubsystem();


#define FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h_38_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVRM4U_AnimSubsystem() { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVRM4U_AnimSubsystem(UVRM4U_AnimSubsystem&&); \
	NO_API UVRM4U_AnimSubsystem(const UVRM4U_AnimSubsystem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVRM4U_AnimSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVRM4U_AnimSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UVRM4U_AnimSubsystem) \
	NO_API virtual ~UVRM4U_AnimSubsystem();


#define FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h_35_PROLOG
#define FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h_38_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h_38_SPARSE_DATA \
	FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h_38_RPC_WRAPPERS \
	FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h_38_ACCESSORS \
	FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h_38_INCLASS \
	FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h_38_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h_38_SPARSE_DATA \
	FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h_38_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h_38_ACCESSORS \
	FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h_38_INCLASS_NO_PURE_DECLS \
	FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h_38_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VRM4U_API UClass* StaticClass<class UVRM4U_AnimSubsystem>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VRM4U_AnimSubsystem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
