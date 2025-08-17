// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ObstaclesAssaultGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeObstaclesAssaultGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
OBSTACLESASSAULT_API UClass* Z_Construct_UClass_AObstaclesAssaultGameMode();
OBSTACLESASSAULT_API UClass* Z_Construct_UClass_AObstaclesAssaultGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_ObstaclesAssault();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AObstaclesAssaultGameMode ************************************************
void AObstaclesAssaultGameMode::StaticRegisterNativesAObstaclesAssaultGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AObstaclesAssaultGameMode;
UClass* AObstaclesAssaultGameMode::GetPrivateStaticClass()
{
	using TClass = AObstaclesAssaultGameMode;
	if (!Z_Registration_Info_UClass_AObstaclesAssaultGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ObstaclesAssaultGameMode"),
			Z_Registration_Info_UClass_AObstaclesAssaultGameMode.InnerSingleton,
			StaticRegisterNativesAObstaclesAssaultGameMode,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_AObstaclesAssaultGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AObstaclesAssaultGameMode_NoRegister()
{
	return AObstaclesAssaultGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AObstaclesAssaultGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a third person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ObstaclesAssaultGameMode.h" },
		{ "ModuleRelativePath", "ObstaclesAssaultGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a third person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstaclesAssaultGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AObstaclesAssaultGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ObstaclesAssault,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AObstaclesAssaultGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AObstaclesAssaultGameMode_Statics::ClassParams = {
	&AObstaclesAssaultGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AObstaclesAssaultGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AObstaclesAssaultGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AObstaclesAssaultGameMode()
{
	if (!Z_Registration_Info_UClass_AObstaclesAssaultGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AObstaclesAssaultGameMode.OuterSingleton, Z_Construct_UClass_AObstaclesAssaultGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AObstaclesAssaultGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AObstaclesAssaultGameMode);
AObstaclesAssaultGameMode::~AObstaclesAssaultGameMode() {}
// ********** End Class AObstaclesAssaultGameMode **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_ObstaclesAssault_Source_ObstaclesAssault_ObstaclesAssaultGameMode_h__Script_ObstaclesAssault_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AObstaclesAssaultGameMode, AObstaclesAssaultGameMode::StaticClass, TEXT("AObstaclesAssaultGameMode"), &Z_Registration_Info_UClass_AObstaclesAssaultGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AObstaclesAssaultGameMode), 3254651540U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ObstaclesAssault_Source_ObstaclesAssault_ObstaclesAssaultGameMode_h__Script_ObstaclesAssault_305826927(TEXT("/Script/ObstaclesAssault"),
	Z_CompiledInDeferFile_FID_ObstaclesAssault_Source_ObstaclesAssault_ObstaclesAssaultGameMode_h__Script_ObstaclesAssault_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ObstaclesAssault_Source_ObstaclesAssault_ObstaclesAssaultGameMode_h__Script_ObstaclesAssault_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
