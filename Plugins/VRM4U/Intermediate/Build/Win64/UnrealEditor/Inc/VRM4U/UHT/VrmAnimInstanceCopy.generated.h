// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "VrmAnimInstanceCopy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
class USkinnedMeshComponent;
class UVrmAssetListObject;
class UVrmMetaObject;
#ifdef VRM4U_VrmAnimInstanceCopy_generated_h
#error "VrmAnimInstanceCopy.generated.h already included, missing '#pragma once' in VrmAnimInstanceCopy.h"
#endif
#define VRM4U_VrmAnimInstanceCopy_generated_h

#define FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_20_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FVrmAnimInstanceCopyProxy_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FAnimInstanceProxy Super;


template<> VRM4U_API UScriptStruct* StaticStruct<struct FVrmAnimInstanceCopyProxy>();

#define FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_55_SPARSE_DATA
#define FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_55_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetVrmSpringBoneIgnoreWingBone); \
	DECLARE_FUNCTION(execSetVrmSpringBoneBool); \
	DECLARE_FUNCTION(execSetVrmSpringBoneParam); \
	DECLARE_FUNCTION(execSetSkeletalMeshCopyDataForCustomSpring); \
	DECLARE_FUNCTION(execSetSkeletalMeshCopyData);


#define FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetVrmSpringBoneIgnoreWingBone); \
	DECLARE_FUNCTION(execSetVrmSpringBoneBool); \
	DECLARE_FUNCTION(execSetVrmSpringBoneParam); \
	DECLARE_FUNCTION(execSetSkeletalMeshCopyDataForCustomSpring); \
	DECLARE_FUNCTION(execSetSkeletalMeshCopyData);


#define FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_55_ACCESSORS
#define FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVrmAnimInstanceCopy(); \
	friend struct Z_Construct_UClass_UVrmAnimInstanceCopy_Statics; \
public: \
	DECLARE_CLASS(UVrmAnimInstanceCopy, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/VRM4U"), NO_API) \
	DECLARE_SERIALIZER(UVrmAnimInstanceCopy)


#define FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUVrmAnimInstanceCopy(); \
	friend struct Z_Construct_UClass_UVrmAnimInstanceCopy_Statics; \
public: \
	DECLARE_CLASS(UVrmAnimInstanceCopy, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/VRM4U"), NO_API) \
	DECLARE_SERIALIZER(UVrmAnimInstanceCopy)


#define FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrmAnimInstanceCopy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrmAnimInstanceCopy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrmAnimInstanceCopy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrmAnimInstanceCopy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVrmAnimInstanceCopy(UVrmAnimInstanceCopy&&); \
	NO_API UVrmAnimInstanceCopy(const UVrmAnimInstanceCopy&); \
public: \
	NO_API virtual ~UVrmAnimInstanceCopy();


#define FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrmAnimInstanceCopy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVrmAnimInstanceCopy(UVrmAnimInstanceCopy&&); \
	NO_API UVrmAnimInstanceCopy(const UVrmAnimInstanceCopy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrmAnimInstanceCopy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrmAnimInstanceCopy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrmAnimInstanceCopy) \
	NO_API virtual ~UVrmAnimInstanceCopy();


#define FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_52_PROLOG
#define FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_55_SPARSE_DATA \
	FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_55_RPC_WRAPPERS \
	FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_55_ACCESSORS \
	FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_55_INCLASS \
	FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_55_SPARSE_DATA \
	FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_55_ACCESSORS \
	FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_55_INCLASS_NO_PURE_DECLS \
	FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h_55_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VrmAnimInstanceCopy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VRM4U_API UClass* StaticClass<class UVrmAnimInstanceCopy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_SideProject_FPSProjectCopy_FPSProject_5_1_Plugins_VRM4U_Source_VRM4U_Public_VrmAnimInstanceCopy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
