// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef LAB1_Lab1Character_generated_h
#error "Lab1Character.generated.h already included, missing '#pragma once' in Lab1Character.h"
#endif
#define LAB1_Lab1Character_generated_h

#define Lab1_Source_Lab1_Lab1Character_h_12_RPC_WRAPPERS
#define Lab1_Source_Lab1_Lab1Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Lab1_Source_Lab1_Lab1Character_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALab1Character(); \
	friend LAB1_API class UClass* Z_Construct_UClass_ALab1Character(); \
public: \
	DECLARE_CLASS(ALab1Character, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Lab1"), NO_API) \
	DECLARE_SERIALIZER(ALab1Character) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Lab1_Source_Lab1_Lab1Character_h_12_INCLASS \
private: \
	static void StaticRegisterNativesALab1Character(); \
	friend LAB1_API class UClass* Z_Construct_UClass_ALab1Character(); \
public: \
	DECLARE_CLASS(ALab1Character, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Lab1"), NO_API) \
	DECLARE_SERIALIZER(ALab1Character) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Lab1_Source_Lab1_Lab1Character_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALab1Character(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALab1Character) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALab1Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALab1Character); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALab1Character(ALab1Character&&); \
	NO_API ALab1Character(const ALab1Character&); \
public:


#define Lab1_Source_Lab1_Lab1Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALab1Character(ALab1Character&&); \
	NO_API ALab1Character(const ALab1Character&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALab1Character); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALab1Character); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALab1Character)


#define Lab1_Source_Lab1_Lab1Character_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SideViewCameraComponent() { return STRUCT_OFFSET(ALab1Character, SideViewCameraComponent); } \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(ALab1Character, CameraBoom); }


#define Lab1_Source_Lab1_Lab1Character_h_9_PROLOG
#define Lab1_Source_Lab1_Lab1Character_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Lab1_Source_Lab1_Lab1Character_h_12_PRIVATE_PROPERTY_OFFSET \
	Lab1_Source_Lab1_Lab1Character_h_12_RPC_WRAPPERS \
	Lab1_Source_Lab1_Lab1Character_h_12_INCLASS \
	Lab1_Source_Lab1_Lab1Character_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Lab1_Source_Lab1_Lab1Character_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Lab1_Source_Lab1_Lab1Character_h_12_PRIVATE_PROPERTY_OFFSET \
	Lab1_Source_Lab1_Lab1Character_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Lab1_Source_Lab1_Lab1Character_h_12_INCLASS_NO_PURE_DECLS \
	Lab1_Source_Lab1_Lab1Character_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Lab1_Source_Lab1_Lab1Character_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
