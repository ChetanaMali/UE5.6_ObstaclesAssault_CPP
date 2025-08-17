// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstaclesAssault_init() {}
	OBSTACLESASSAULT_API UFunction* Z_Construct_UDelegateFunction_ObstaclesAssault_OnEnemyDied__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_ObstaclesAssault;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_ObstaclesAssault()
	{
		if (!Z_Registration_Info_UPackage__Script_ObstaclesAssault.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_ObstaclesAssault_OnEnemyDied__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/ObstaclesAssault",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x77BF4A50,
				0xCF0088D2,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_ObstaclesAssault.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_ObstaclesAssault.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_ObstaclesAssault(Z_Construct_UPackage__Script_ObstaclesAssault, TEXT("/Script/ObstaclesAssault"), Z_Registration_Info_UPackage__Script_ObstaclesAssault, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x77BF4A50, 0xCF0088D2));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
