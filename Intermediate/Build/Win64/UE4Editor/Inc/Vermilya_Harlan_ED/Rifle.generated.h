// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VERMILYA_HARLAN_ED_Rifle_generated_h
#error "Rifle.generated.h already included, missing '#pragma once' in Rifle.h"
#endif
#define VERMILYA_HARLAN_ED_Rifle_generated_h

#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_Rifle_h_9_DELEGATE \
static inline void FDelegate_DelegateWrapper(const FMulticastScriptDelegate& Delegate) \
{ \
	Delegate.ProcessMulticastDelegate<UObject>(NULL); \
}


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_Rifle_h_15_SPARSE_DATA
#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_Rifle_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execAttackAnimSync); \
	DECLARE_FUNCTION(execActionStopped); \
	DECLARE_FUNCTION(execCanShoot); \
	DECLARE_FUNCTION(execShoot);


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_Rifle_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execAttackAnimSync); \
	DECLARE_FUNCTION(execActionStopped); \
	DECLARE_FUNCTION(execCanShoot); \
	DECLARE_FUNCTION(execShoot);


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_Rifle_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesARifle(); \
	friend struct Z_Construct_UClass_ARifle_Statics; \
public: \
	DECLARE_CLASS(ARifle, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Vermilya_Harlan_ED"), NO_API) \
	DECLARE_SERIALIZER(ARifle)


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_Rifle_h_15_INCLASS \
private: \
	static void StaticRegisterNativesARifle(); \
	friend struct Z_Construct_UClass_ARifle_Statics; \
public: \
	DECLARE_CLASS(ARifle, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Vermilya_Harlan_ED"), NO_API) \
	DECLARE_SERIALIZER(ARifle)


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_Rifle_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ARifle(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ARifle) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARifle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARifle); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARifle(ARifle&&); \
	NO_API ARifle(const ARifle&); \
public:


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_Rifle_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ARifle(ARifle&&); \
	NO_API ARifle(const ARifle&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ARifle); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ARifle); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ARifle)


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_Rifle_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__isAlive() { return STRUCT_OFFSET(ARifle, isAlive); } \
	FORCEINLINE static uint32 __PPO__SkeletionMesh() { return STRUCT_OFFSET(ARifle, SkeletionMesh); } \
	FORCEINLINE static uint32 __PPO__ProjectileClass() { return STRUCT_OFFSET(ARifle, ProjectileClass); } \
	FORCEINLINE static uint32 __PPO__pawn() { return STRUCT_OFFSET(ARifle, pawn); } \
	FORCEINLINE static uint32 __PPO__SpawnSocketName() { return STRUCT_OFFSET(ARifle, SpawnSocketName); } \
	FORCEINLINE static uint32 __PPO__shootDelay() { return STRUCT_OFFSET(ARifle, shootDelay); } \
	FORCEINLINE static uint32 __PPO__shotTimerFloat() { return STRUCT_OFFSET(ARifle, shotTimerFloat); }


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_Rifle_h_12_PROLOG
#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_Rifle_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_Rifle_h_15_PRIVATE_PROPERTY_OFFSET \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_Rifle_h_15_SPARSE_DATA \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_Rifle_h_15_RPC_WRAPPERS \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_Rifle_h_15_INCLASS \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_Rifle_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_Rifle_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_Rifle_h_15_PRIVATE_PROPERTY_OFFSET \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_Rifle_h_15_SPARSE_DATA \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_Rifle_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_Rifle_h_15_INCLASS_NO_PURE_DECLS \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_Rifle_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VERMILYA_HARLAN_ED_API UClass* StaticClass<class ARifle>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Actors_Rifle_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
