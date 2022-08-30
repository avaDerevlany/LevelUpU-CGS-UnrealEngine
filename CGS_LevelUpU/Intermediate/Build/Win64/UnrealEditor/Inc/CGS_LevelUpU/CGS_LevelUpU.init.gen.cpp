// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCGS_LevelUpU_init() {}
	CGS_LEVELUPU_API UFunction* Z_Construct_UDelegateFunction_CGS_LevelUpU_OnOverlapBeginEvent__DelegateSignature();
	CGS_LEVELUPU_API UFunction* Z_Construct_UDelegateFunction_CGS_LevelUpU_OnOverlapEndEvent__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CGS_LevelUpU;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CGS_LevelUpU()
	{
		if (!Z_Registration_Info_UPackage__Script_CGS_LevelUpU.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_CGS_LevelUpU_OnOverlapBeginEvent__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CGS_LevelUpU_OnOverlapEndEvent__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CGS_LevelUpU",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x29EAF92C,
				0x8966664E,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CGS_LevelUpU.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CGS_LevelUpU.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CGS_LevelUpU(Z_Construct_UPackage__Script_CGS_LevelUpU, TEXT("/Script/CGS_LevelUpU"), Z_Registration_Info_UPackage__Script_CGS_LevelUpU, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x29EAF92C, 0x8966664E));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
