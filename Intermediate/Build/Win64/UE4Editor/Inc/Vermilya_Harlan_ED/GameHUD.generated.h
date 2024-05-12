// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
#ifdef VERMILYA_HARLAN_ED_GameHUD_generated_h
#error "GameHUD.generated.h already included, missing '#pragma once' in GameHUD.h"
#endif
#define VERMILYA_HARLAN_ED_GameHUD_generated_h

#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_GameHUD_h_15_SPARSE_DATA
#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_GameHUD_h_15_RPC_WRAPPERS \
	virtual void SetHealth_Implementation(float health); \
 \
	DECLARE_FUNCTION(execSetCrosshair); \
	DECLARE_FUNCTION(execSetHealth);


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_GameHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetCrosshair); \
	DECLARE_FUNCTION(execSetHealth);


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_GameHUD_h_15_EVENT_PARMS \
	struct GameHUD_eventSetHealth_Parms \
	{ \
		float health; \
	};


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_GameHUD_h_15_CALLBACK_WRAPPERS
#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_GameHUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameHUD(); \
	friend struct Z_Construct_UClass_UGameHUD_Statics; \
public: \
	DECLARE_CLASS(UGameHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Vermilya_Harlan_ED"), NO_API) \
	DECLARE_SERIALIZER(UGameHUD)


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_GameHUD_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUGameHUD(); \
	friend struct Z_Construct_UClass_UGameHUD_Statics; \
public: \
	DECLARE_CLASS(UGameHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Vermilya_Harlan_ED"), NO_API) \
	DECLARE_SERIALIZER(UGameHUD)


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_GameHUD_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameHUD) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameHUD); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameHUD(UGameHUD&&); \
	NO_API UGameHUD(const UGameHUD&); \
public:


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_GameHUD_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameHUD(UGameHUD&&); \
	NO_API UGameHUD(const UGameHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameHUD)


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_GameHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HealthBar() { return STRUCT_OFFSET(UGameHUD, HealthBar); } \
	FORCEINLINE static uint32 __PPO__DynamicMaterial() { return STRUCT_OFFSET(UGameHUD, DynamicMaterial); } \
	FORCEINLINE static uint32 __PPO__Color() { return STRUCT_OFFSET(UGameHUD, Color); } \
	FORCEINLINE static uint32 __PPO__EnemyColor() { return STRUCT_OFFSET(UGameHUD, EnemyColor); } \
	FORCEINLINE static uint32 __PPO__CrosshairMaterial() { return STRUCT_OFFSET(UGameHUD, CrosshairMaterial); } \
	FORCEINLINE static uint32 __PPO__crosshair() { return STRUCT_OFFSET(UGameHUD, crosshair); }


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_GameHUD_h_12_PROLOG \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_GameHUD_h_15_EVENT_PARMS


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_GameHUD_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_GameHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_GameHUD_h_15_SPARSE_DATA \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_GameHUD_h_15_RPC_WRAPPERS \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_GameHUD_h_15_CALLBACK_WRAPPERS \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_GameHUD_h_15_INCLASS \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_GameHUD_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_GameHUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_GameHUD_h_15_PRIVATE_PROPERTY_OFFSET \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_GameHUD_h_15_SPARSE_DATA \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_GameHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_GameHUD_h_15_CALLBACK_WRAPPERS \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_GameHUD_h_15_INCLASS_NO_PURE_DECLS \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_GameHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VERMILYA_HARLAN_ED_API UClass* StaticClass<class UGameHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Both_GameHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
