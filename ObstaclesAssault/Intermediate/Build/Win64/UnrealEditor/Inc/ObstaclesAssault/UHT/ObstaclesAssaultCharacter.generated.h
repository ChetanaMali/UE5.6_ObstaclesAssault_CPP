// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ObstaclesAssaultCharacter.h"

#ifdef OBSTACLESASSAULT_ObstaclesAssaultCharacter_generated_h
#error "ObstaclesAssaultCharacter.generated.h already included, missing '#pragma once' in ObstaclesAssaultCharacter.h"
#endif
#define OBSTACLESASSAULT_ObstaclesAssaultCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AObstaclesAssaultCharacter ***********************************************
#define FID_ObstaclesAssault_Source_ObstaclesAssault_ObstaclesAssaultCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoLook); \
	DECLARE_FUNCTION(execDoMove);


OBSTACLESASSAULT_API UClass* Z_Construct_UClass_AObstaclesAssaultCharacter_NoRegister();

#define FID_ObstaclesAssault_Source_ObstaclesAssault_ObstaclesAssaultCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAObstaclesAssaultCharacter(); \
	friend struct Z_Construct_UClass_AObstaclesAssaultCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OBSTACLESASSAULT_API UClass* Z_Construct_UClass_AObstaclesAssaultCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AObstaclesAssaultCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObstaclesAssault"), Z_Construct_UClass_AObstaclesAssaultCharacter_NoRegister) \
	DECLARE_SERIALIZER(AObstaclesAssaultCharacter)


#define FID_ObstaclesAssault_Source_ObstaclesAssault_ObstaclesAssaultCharacter_h_24_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AObstaclesAssaultCharacter(AObstaclesAssaultCharacter&&) = delete; \
	AObstaclesAssaultCharacter(const AObstaclesAssaultCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObstaclesAssaultCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObstaclesAssaultCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AObstaclesAssaultCharacter) \
	NO_API virtual ~AObstaclesAssaultCharacter();


#define FID_ObstaclesAssault_Source_ObstaclesAssault_ObstaclesAssaultCharacter_h_21_PROLOG
#define FID_ObstaclesAssault_Source_ObstaclesAssault_ObstaclesAssaultCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ObstaclesAssault_Source_ObstaclesAssault_ObstaclesAssaultCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_ObstaclesAssault_Source_ObstaclesAssault_ObstaclesAssaultCharacter_h_24_INCLASS_NO_PURE_DECLS \
	FID_ObstaclesAssault_Source_ObstaclesAssault_ObstaclesAssaultCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AObstaclesAssaultCharacter;

// ********** End Class AObstaclesAssaultCharacter *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ObstaclesAssault_Source_ObstaclesAssault_ObstaclesAssaultCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
