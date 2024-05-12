// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FAIStimulus;
#ifdef VERMILYA_HARLAN_ED_AgentController_generated_h
#error "AgentController.generated.h already included, missing '#pragma once' in AgentController.h"
#endif
#define VERMILYA_HARLAN_ED_AgentController_generated_h

#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_AgentController_h_16_SPARSE_DATA
#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_AgentController_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTargetPositionUpdate);


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_AgentController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTargetPositionUpdate);


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_AgentController_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAgentController(); \
	friend struct Z_Construct_UClass_AAgentController_Statics; \
public: \
	DECLARE_CLASS(AAgentController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Vermilya_Harlan_ED"), NO_API) \
	DECLARE_SERIALIZER(AAgentController)


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_AgentController_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAAgentController(); \
	friend struct Z_Construct_UClass_AAgentController_Statics; \
public: \
	DECLARE_CLASS(AAgentController, AAIController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Vermilya_Harlan_ED"), NO_API) \
	DECLARE_SERIALIZER(AAgentController)


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_AgentController_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAgentController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAgentController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAgentController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAgentController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAgentController(AAgentController&&); \
	NO_API AAgentController(const AAgentController&); \
public:


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_AgentController_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAgentController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAgentController(AAgentController&&); \
	NO_API AAgentController(const AAgentController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAgentController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAgentController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAgentController)


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_AgentController_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__behaviorTree() { return STRUCT_OFFSET(AAgentController, behaviorTree); } \
	FORCEINLINE static uint32 __PPO__playerKeyName() { return STRUCT_OFFSET(AAgentController, playerKeyName); } \
	FORCEINLINE static uint32 __PPO__sightConfig() { return STRUCT_OFFSET(AAgentController, sightConfig); }


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_AgentController_h_13_PROLOG
#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_AgentController_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_AgentController_h_16_PRIVATE_PROPERTY_OFFSET \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_AgentController_h_16_SPARSE_DATA \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_AgentController_h_16_RPC_WRAPPERS \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_AgentController_h_16_INCLASS \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_AgentController_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_AgentController_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_AgentController_h_16_PRIVATE_PROPERTY_OFFSET \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_AgentController_h_16_SPARSE_DATA \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_AgentController_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_AgentController_h_16_INCLASS_NO_PURE_DECLS \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_AgentController_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VERMILYA_HARLAN_ED_API UClass* StaticClass<class AAgentController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_AgentController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
