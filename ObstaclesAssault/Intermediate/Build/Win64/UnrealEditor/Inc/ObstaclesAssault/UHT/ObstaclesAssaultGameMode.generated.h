// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ObstaclesAssaultGameMode.h"

#ifdef OBSTACLESASSAULT_ObstaclesAssaultGameMode_generated_h
#error "ObstaclesAssaultGameMode.generated.h already included, missing '#pragma once' in ObstaclesAssaultGameMode.h"
#endif
#define OBSTACLESASSAULT_ObstaclesAssaultGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AObstaclesAssaultGameMode ************************************************
OBSTACLESASSAULT_API UClass* Z_Construct_UClass_AObstaclesAssaultGameMode_NoRegister();

#define FID_ObstaclesAssault_Source_ObstaclesAssault_ObstaclesAssaultGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAObstaclesAssaultGameMode(); \
	friend struct Z_Construct_UClass_AObstaclesAssaultGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OBSTACLESASSAULT_API UClass* Z_Construct_UClass_AObstaclesAssaultGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AObstaclesAssaultGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObstaclesAssault"), Z_Construct_UClass_AObstaclesAssaultGameMode_NoRegister) \
	DECLARE_SERIALIZER(AObstaclesAssaultGameMode)


#define FID_ObstaclesAssault_Source_ObstaclesAssault_ObstaclesAssaultGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AObstaclesAssaultGameMode(AObstaclesAssaultGameMode&&) = delete; \
	AObstaclesAssaultGameMode(const AObstaclesAssaultGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObstaclesAssaultGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObstaclesAssaultGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AObstaclesAssaultGameMode) \
	NO_API virtual ~AObstaclesAssaultGameMode();


#define FID_ObstaclesAssault_Source_ObstaclesAssault_ObstaclesAssaultGameMode_h_12_PROLOG
#define FID_ObstaclesAssault_Source_ObstaclesAssault_ObstaclesAssaultGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ObstaclesAssault_Source_ObstaclesAssault_ObstaclesAssaultGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_ObstaclesAssault_Source_ObstaclesAssault_ObstaclesAssaultGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AObstaclesAssaultGameMode;

// ********** End Class AObstaclesAssaultGameMode **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ObstaclesAssault_Source_ObstaclesAssault_ObstaclesAssaultGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
