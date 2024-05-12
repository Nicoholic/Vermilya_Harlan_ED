// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VERMILYA_HARLAN_ED_CharacterAnimation_generated_h
#error "CharacterAnimation.generated.h already included, missing '#pragma once' in CharacterAnimation.h"
#endif
#define VERMILYA_HARLAN_ED_CharacterAnimation_generated_h

#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_CharacterAnimation_h_15_SPARSE_DATA
#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_CharacterAnimation_h_15_RPC_WRAPPERS \
	virtual void DeadAnimation_Implementation(float percent); \
	virtual void HurtAnimation_Implementation(float percent); \
	virtual void PreviewUpdate_Implementation(); \
	virtual void AttackAnim_Implementation(); \
 \
	DECLARE_FUNCTION(execDeadAnimation); \
	DECLARE_FUNCTION(execHurtAnimation); \
	DECLARE_FUNCTION(execPreviewUpdate); \
	DECLARE_FUNCTION(execAttackAnim);


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_CharacterAnimation_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDeadAnimation); \
	DECLARE_FUNCTION(execHurtAnimation); \
	DECLARE_FUNCTION(execPreviewUpdate); \
	DECLARE_FUNCTION(execAttackAnim);


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_CharacterAnimation_h_15_EVENT_PARMS \
	struct CharacterAnimation_eventDeadAnimation_Parms \
	{ \
		float percent; \
	}; \
	struct CharacterAnimation_eventHurtAnimation_Parms \
	{ \
		float percent; \
	};


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_CharacterAnimation_h_15_CALLBACK_WRAPPERS
#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_CharacterAnimation_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterAnimation(); \
	friend struct Z_Construct_UClass_UCharacterAnimation_Statics; \
public: \
	DECLARE_CLASS(UCharacterAnimation, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Vermilya_Harlan_ED"), NO_API) \
	DECLARE_SERIALIZER(UCharacterAnimation)


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_CharacterAnimation_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUCharacterAnimation(); \
	friend struct Z_Construct_UClass_UCharacterAnimation_Statics; \
public: \
	DECLARE_CLASS(UCharacterAnimation, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Vermilya_Harlan_ED"), NO_API) \
	DECLARE_SERIALIZER(UCharacterAnimation)


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_CharacterAnimation_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterAnimation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterAnimation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterAnimation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterAnimation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterAnimation(UCharacterAnimation&&); \
	NO_API UCharacterAnimation(const UCharacterAnimation&); \
public:


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_CharacterAnimation_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterAnimation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterAnimation(UCharacterAnimation&&); \
	NO_API UCharacterAnimation(const UCharacterAnimation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterAnimation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterAnimation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterAnimation)


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_CharacterAnimation_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Velocity() { return STRUCT_OFFSET(UCharacterAnimation, Velocity); } \
	FORCEINLINE static uint32 __PPO__AttackAnime() { return STRUCT_OFFSET(UCharacterAnimation, AttackAnime); } \
	FORCEINLINE static uint32 __PPO__HurtAsset() { return STRUCT_OFFSET(UCharacterAnimation, HurtAsset); } \
	FORCEINLINE static uint32 __PPO__DeathAsset() { return STRUCT_OFFSET(UCharacterAnimation, DeathAsset); } \
	FORCEINLINE static uint32 __PPO__MultiDeathAssets() { return STRUCT_OFFSET(UCharacterAnimation, MultiDeathAssets); }


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_CharacterAnimation_h_12_PROLOG \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_CharacterAnimation_h_15_EVENT_PARMS


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_CharacterAnimation_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_CharacterAnimation_h_15_PRIVATE_PROPERTY_OFFSET \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_CharacterAnimation_h_15_SPARSE_DATA \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_CharacterAnimation_h_15_RPC_WRAPPERS \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_CharacterAnimation_h_15_CALLBACK_WRAPPERS \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_CharacterAnimation_h_15_INCLASS \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_CharacterAnimation_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_CharacterAnimation_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_CharacterAnimation_h_15_PRIVATE_PROPERTY_OFFSET \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_CharacterAnimation_h_15_SPARSE_DATA \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_CharacterAnimation_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_CharacterAnimation_h_15_CALLBACK_WRAPPERS \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_CharacterAnimation_h_15_INCLASS_NO_PURE_DECLS \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_CharacterAnimation_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VERMILYA_HARLAN_ED_API UClass* StaticClass<class UCharacterAnimation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_CharacterAnimation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
