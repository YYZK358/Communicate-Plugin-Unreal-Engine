// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CommunicateComponent.h"

#ifdef COMMUNICATEPLUGINS_CommunicateComponent_generated_h
#error "CommunicateComponent.generated.h already included, missing '#pragma once' in CommunicateComponent.h"
#endif
#define COMMUNICATEPLUGINS_CommunicateComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCommunicateTableRow;

// ********** Begin ScriptStruct FSelectCommunicateTableRow ****************************************
struct Z_Construct_UScriptStruct_FSelectCommunicateTableRow_Statics;
#define FID_test_CommunicatePlugins_CommunicatePlugins_HostProject_Plugins_CommunicatePlugins_Source_CommunicatePlugins_Public_CommunicateComponent_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FSelectCommunicateTableRow_Statics; \
	COMMUNICATEPLUGINS_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FSelectCommunicateTableRow;
// ********** End ScriptStruct FSelectCommunicateTableRow ******************************************

// ********** Begin ScriptStruct FCommunicateTableRow **********************************************
struct Z_Construct_UScriptStruct_FCommunicateTableRow_Statics;
#define FID_test_CommunicatePlugins_CommunicatePlugins_HostProject_Plugins_CommunicatePlugins_Source_CommunicatePlugins_Public_CommunicateComponent_h_32_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FCommunicateTableRow_Statics; \
	COMMUNICATEPLUGINS_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


struct FCommunicateTableRow;
// ********** End ScriptStruct FCommunicateTableRow ************************************************

// ********** Begin Class UCommunicateComponent ****************************************************
#define FID_test_CommunicatePlugins_CommunicatePlugins_HostProject_Plugins_CommunicatePlugins_Source_CommunicatePlugins_Public_CommunicateComponent_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUseSelect); \
	DECLARE_FUNCTION(execUpdateCommunicateCache); \
	DECLARE_FUNCTION(execGetCommunicateByIndex); \
	DECLARE_FUNCTION(execNextCommunicate); \
	DECLARE_FUNCTION(execGetCommunicate);


struct Z_Construct_UClass_UCommunicateComponent_Statics;
COMMUNICATEPLUGINS_API UClass* Z_Construct_UClass_UCommunicateComponent_NoRegister();

#define FID_test_CommunicatePlugins_CommunicatePlugins_HostProject_Plugins_CommunicatePlugins_Source_CommunicatePlugins_Public_CommunicateComponent_h_64_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCommunicateComponent(); \
	friend struct ::Z_Construct_UClass_UCommunicateComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend COMMUNICATEPLUGINS_API UClass* ::Z_Construct_UClass_UCommunicateComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UCommunicateComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CommunicatePlugins"), Z_Construct_UClass_UCommunicateComponent_NoRegister) \
	DECLARE_SERIALIZER(UCommunicateComponent)


#define FID_test_CommunicatePlugins_CommunicatePlugins_HostProject_Plugins_CommunicatePlugins_Source_CommunicatePlugins_Public_CommunicateComponent_h_64_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UCommunicateComponent(UCommunicateComponent&&) = delete; \
	UCommunicateComponent(const UCommunicateComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCommunicateComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCommunicateComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCommunicateComponent) \
	NO_API virtual ~UCommunicateComponent();


#define FID_test_CommunicatePlugins_CommunicatePlugins_HostProject_Plugins_CommunicatePlugins_Source_CommunicatePlugins_Public_CommunicateComponent_h_61_PROLOG
#define FID_test_CommunicatePlugins_CommunicatePlugins_HostProject_Plugins_CommunicatePlugins_Source_CommunicatePlugins_Public_CommunicateComponent_h_64_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_test_CommunicatePlugins_CommunicatePlugins_HostProject_Plugins_CommunicatePlugins_Source_CommunicatePlugins_Public_CommunicateComponent_h_64_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_test_CommunicatePlugins_CommunicatePlugins_HostProject_Plugins_CommunicatePlugins_Source_CommunicatePlugins_Public_CommunicateComponent_h_64_INCLASS_NO_PURE_DECLS \
	FID_test_CommunicatePlugins_CommunicatePlugins_HostProject_Plugins_CommunicatePlugins_Source_CommunicatePlugins_Public_CommunicateComponent_h_64_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UCommunicateComponent;

// ********** End Class UCommunicateComponent ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_test_CommunicatePlugins_CommunicatePlugins_HostProject_Plugins_CommunicatePlugins_Source_CommunicatePlugins_Public_CommunicateComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
