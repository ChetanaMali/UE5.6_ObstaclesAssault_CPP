// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ObstaclesAssaultPlayerController.h"

#ifdef OBSTACLESASSAULT_ObstaclesAssaultPlayerController_generated_h
#error "ObstaclesAssaultPlayerController.generated.h already included, missing '#pragma once' in ObstaclesAssaultPlayerController.h"
#endif
#define OBSTACLESASSAULT_ObstaclesAssaultPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AObstaclesAssaultPlayerController ****************************************
OBSTACLESASSAULT_API UClass* Z_Construct_UClass_AObstaclesAssaultPlayerController_NoRegister();

#define FID_ObstaclesAssault_Source_ObstaclesAssault_ObstaclesAssaultPlayerController_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAObstaclesAssaultPlayerController(); \
	friend struct Z_Construct_UClass_AObstaclesAssaultPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend OBSTACLESASSAULT_API UClass* Z_Construct_UClass_AObstaclesAssaultPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(AObstaclesAssaultPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ObstaclesAssault"), Z_Construct_UClass_AObstaclesAssaultPlayerController_NoRegister) \
	DECLARE_SERIALIZER(AObstaclesAssaultPlayerController)


#define FID_ObstaclesAssault_Source_ObstaclesAssault_ObstaclesAssaultPlayerController_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AObstaclesAssaultPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	AObstaclesAssaultPlayerController(AObstaclesAssaultPlayerController&&) = delete; \
	AObstaclesAssaultPlayerController(const AObstaclesAssaultPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AObstaclesAssaultPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AObstaclesAssaultPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AObstaclesAssaultPlayerController) \
	NO_API virtual ~AObstaclesAssaultPlayerController();


#define FID_ObstaclesAssault_Source_ObstaclesAssault_ObstaclesAssaultPlayerController_h_16_PROLOG
#define FID_ObstaclesAssault_Source_ObstaclesAssault_ObstaclesAssaultPlayerController_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_ObstaclesAssault_Source_ObstaclesAssault_ObstaclesAssaultPlayerController_h_19_INCLASS_NO_PURE_DECLS \
	FID_ObstaclesAssault_Source_ObstaclesAssault_ObstaclesAssaultPlayerController_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AObstaclesAssaultPlayerController;

// ********** End Class AObstaclesAssaultPlayerController ******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_ObstaclesAssault_Source_ObstaclesAssault_ObstaclesAssaultPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
