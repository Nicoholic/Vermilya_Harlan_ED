// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VERMILYA_HARLAN_ED_BaseCharacter_generated_h
#error "BaseCharacter.generated.h already included, missing '#pragma once' in BaseCharacter.h"
#endif
#define VERMILYA_HARLAN_ED_BaseCharacter_generated_h

#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_BaseCharacter_h_14_SPARSE_DATA
#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_BaseCharacter_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleDead); \
	DECLARE_FUNCTION(execAttackSync);


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_BaseCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleDead); \
	DECLARE_FUNCTION(execAttackSync);


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_BaseCharacter_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Vermilya_Harlan_ED"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter)


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_BaseCharacter_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Vermilya_Harlan_ED"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter)


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_BaseCharacter_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABaseCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABaseCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public:


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_BaseCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseCharacter)


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_BaseCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__childActor() { return STRUCT_OFFSET(ABaseCharacter, childActor); } \
	FORCEINLINE static uint32 __PPO__WeaponClass() { return STRUCT_OFFSET(ABaseCharacter, WeaponClass); } \
	FORCEINLINE static uint32 __PPO__rifle() { return STRUCT_OFFSET(ABaseCharacter, rifle); } \
	FORCEINLINE static uint32 __PPO__Attack() { return STRUCT_OFFSET(ABaseCharacter, Attack); } \
	FORCEINLINE static uint32 __PPO__Health() { return STRUCT_OFFSET(ABaseCharacter, Health); }


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_BaseCharacter_h_11_PROLOG
#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_BaseCharacter_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_BaseCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_BaseCharacter_h_14_SPARSE_DATA \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_BaseCharacter_h_14_RPC_WRAPPERS \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_BaseCharacter_h_14_INCLASS \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_BaseCharacter_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_BaseCharacter_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_BaseCharacter_h_14_PRIVATE_PROPERTY_OFFSET \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_BaseCharacter_h_14_SPARSE_DATA \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_BaseCharacter_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_BaseCharacter_h_14_INCLASS_NO_PURE_DECLS \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_BaseCharacter_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VERMILYA_HARLAN_ED_API UClass* StaticClass<class ABaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_BaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
