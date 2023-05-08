// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FStructMocopiData;
#ifdef VRM4UCAPTURE_VrmMocopiReceiver_generated_h
#error "VrmMocopiReceiver.generated.h already included, missing '#pragma once' in VrmMocopiReceiver.h"
#endif
#define VRM4UCAPTURE_VrmMocopiReceiver_generated_h

#define FPSProject_Plugins_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_34_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStructMocopiData_Statics; \
	VRM4UCAPTURE_API static class UScriptStruct* StaticStruct();


template<> VRM4UCAPTURE_API UScriptStruct* StaticStruct<struct FStructMocopiData>();

#define FPSProject_Plugins_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_135_DELEGATE \
struct VrmMocopiReceiver_eventVrmMocopiReceiverDelegate_Parms \
{ \
	FStructMocopiData data; \
}; \
static inline void FVrmMocopiReceiverDelegate_DelegateWrapper(const FMulticastScriptDelegate& VrmMocopiReceiverDelegate, FStructMocopiData data) \
{ \
	VrmMocopiReceiver_eventVrmMocopiReceiverDelegate_Parms Parms; \
	Parms.data=data; \
	VrmMocopiReceiverDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FPSProject_Plugins_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_99_SPARSE_DATA
#define FPSProject_Plugins_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_99_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentTime); \
	DECLARE_FUNCTION(execGetLatestFrameData); \
	DECLARE_FUNCTION(execGetNextFrameData); \
	DECLARE_FUNCTION(execSetBufferNum); \
	DECLARE_FUNCTION(execSetAddress); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execListen);


#define FPSProject_Plugins_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentTime); \
	DECLARE_FUNCTION(execGetLatestFrameData); \
	DECLARE_FUNCTION(execGetNextFrameData); \
	DECLARE_FUNCTION(execSetBufferNum); \
	DECLARE_FUNCTION(execSetAddress); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execListen);


#define FPSProject_Plugins_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_99_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVrmMocopiReceiver(); \
	friend struct Z_Construct_UClass_UVrmMocopiReceiver_Statics; \
public: \
	DECLARE_CLASS(UVrmMocopiReceiver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRM4UCapture"), NO_API) \
	DECLARE_SERIALIZER(UVrmMocopiReceiver)


#define FPSProject_Plugins_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_99_INCLASS \
private: \
	static void StaticRegisterNativesUVrmMocopiReceiver(); \
	friend struct Z_Construct_UClass_UVrmMocopiReceiver_Statics; \
public: \
	DECLARE_CLASS(UVrmMocopiReceiver, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/VRM4UCapture"), NO_API) \
	DECLARE_SERIALIZER(UVrmMocopiReceiver)


#define FPSProject_Plugins_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_99_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrmMocopiReceiver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrmMocopiReceiver) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrmMocopiReceiver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrmMocopiReceiver); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVrmMocopiReceiver(UVrmMocopiReceiver&&); \
	NO_API UVrmMocopiReceiver(const UVrmMocopiReceiver&); \
public:


#define FPSProject_Plugins_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_99_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVrmMocopiReceiver(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVrmMocopiReceiver(UVrmMocopiReceiver&&); \
	NO_API UVrmMocopiReceiver(const UVrmMocopiReceiver&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVrmMocopiReceiver); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVrmMocopiReceiver); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVrmMocopiReceiver)


#define FPSProject_Plugins_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_99_PRIVATE_PROPERTY_OFFSET
#define FPSProject_Plugins_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_96_PROLOG
#define FPSProject_Plugins_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_99_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSProject_Plugins_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_99_PRIVATE_PROPERTY_OFFSET \
	FPSProject_Plugins_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_99_SPARSE_DATA \
	FPSProject_Plugins_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_99_RPC_WRAPPERS \
	FPSProject_Plugins_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_99_INCLASS \
	FPSProject_Plugins_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_99_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPSProject_Plugins_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_99_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSProject_Plugins_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_99_PRIVATE_PROPERTY_OFFSET \
	FPSProject_Plugins_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_99_SPARSE_DATA \
	FPSProject_Plugins_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_99_RPC_WRAPPERS_NO_PURE_DECLS \
	FPSProject_Plugins_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_99_INCLASS_NO_PURE_DECLS \
	FPSProject_Plugins_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h_99_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class VrmMocopiReceiver."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VRM4UCAPTURE_API UClass* StaticClass<class UVrmMocopiReceiver>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPSProject_Plugins_VRM4U_Source_VRM4UCapture_Public_VrmMocopiReceiver_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
