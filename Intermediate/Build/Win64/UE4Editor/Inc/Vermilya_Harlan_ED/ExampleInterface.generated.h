// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VERMILYA_HARLAN_ED_ExampleInterface_generated_h
#error "ExampleInterface.generated.h already included, missing '#pragma once' in ExampleInterface.h"
#endif
#define VERMILYA_HARLAN_ED_ExampleInterface_generated_h

#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleInterface_h_13_SPARSE_DATA
#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleInterface_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execBlueprintCallable);


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execBlueprintCallable);


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VERMILYA_HARLAN_ED_API UExampleInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExampleInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VERMILYA_HARLAN_ED_API, UExampleInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExampleInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	VERMILYA_HARLAN_ED_API UExampleInterface(UExampleInterface&&); \
	VERMILYA_HARLAN_ED_API UExampleInterface(const UExampleInterface&); \
public:


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	VERMILYA_HARLAN_ED_API UExampleInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	VERMILYA_HARLAN_ED_API UExampleInterface(UExampleInterface&&); \
	VERMILYA_HARLAN_ED_API UExampleInterface(const UExampleInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(VERMILYA_HARLAN_ED_API, UExampleInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UExampleInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UExampleInterface)


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUExampleInterface(); \
	friend struct Z_Construct_UClass_UExampleInterface_Statics; \
public: \
	DECLARE_CLASS(UExampleInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Vermilya_Harlan_ED"), VERMILYA_HARLAN_ED_API) \
	DECLARE_SERIALIZER(UExampleInterface)


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleInterface_h_13_GENERATED_UINTERFACE_BODY() \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IExampleInterface() {} \
public: \
	typedef UExampleInterface UClassType; \
	typedef IExampleInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IExampleInterface() {} \
public: \
	typedef UExampleInterface UClassType; \
	typedef IExampleInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleInterface_h_10_PROLOG
#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleInterface_h_13_SPARSE_DATA \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleInterface_h_13_RPC_WRAPPERS \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleInterface_h_13_SPARSE_DATA \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VERMILYA_HARLAN_ED_API UClass* StaticClass<class UExampleInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Vermilya_Harlan_ED_Source_Vermilya_Harlan_ED_Public_Examples_ExampleInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
