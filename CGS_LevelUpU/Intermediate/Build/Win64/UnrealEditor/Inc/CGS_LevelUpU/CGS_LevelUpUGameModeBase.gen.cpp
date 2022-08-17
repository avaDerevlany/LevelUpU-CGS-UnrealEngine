// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CGS_LevelUpU/CGS_LevelUpUGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCGS_LevelUpUGameModeBase() {}
// Cross Module References
	CGS_LEVELUPU_API UClass* Z_Construct_UClass_ACGS_LevelUpUGameModeBase_NoRegister();
	CGS_LEVELUPU_API UClass* Z_Construct_UClass_ACGS_LevelUpUGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_CGS_LevelUpU();
// End Cross Module References
	void ACGS_LevelUpUGameModeBase::StaticRegisterNativesACGS_LevelUpUGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACGS_LevelUpUGameModeBase);
	UClass* Z_Construct_UClass_ACGS_LevelUpUGameModeBase_NoRegister()
	{
		return ACGS_LevelUpUGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ACGS_LevelUpUGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACGS_LevelUpUGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_CGS_LevelUpU,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACGS_LevelUpUGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CGS_LevelUpUGameModeBase.h" },
		{ "ModuleRelativePath", "CGS_LevelUpUGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACGS_LevelUpUGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACGS_LevelUpUGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACGS_LevelUpUGameModeBase_Statics::ClassParams = {
		&ACGS_LevelUpUGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ACGS_LevelUpUGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACGS_LevelUpUGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACGS_LevelUpUGameModeBase()
	{
		if (!Z_Registration_Info_UClass_ACGS_LevelUpUGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACGS_LevelUpUGameModeBase.OuterSingleton, Z_Construct_UClass_ACGS_LevelUpUGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACGS_LevelUpUGameModeBase.OuterSingleton;
	}
	template<> CGS_LEVELUPU_API UClass* StaticClass<ACGS_LevelUpUGameModeBase>()
	{
		return ACGS_LevelUpUGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACGS_LevelUpUGameModeBase);
	struct Z_CompiledInDeferFile_FID_CGS_LevelUpU_Source_CGS_LevelUpU_CGS_LevelUpUGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CGS_LevelUpU_Source_CGS_LevelUpU_CGS_LevelUpUGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACGS_LevelUpUGameModeBase, ACGS_LevelUpUGameModeBase::StaticClass, TEXT("ACGS_LevelUpUGameModeBase"), &Z_Registration_Info_UClass_ACGS_LevelUpUGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACGS_LevelUpUGameModeBase), 812670874U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CGS_LevelUpU_Source_CGS_LevelUpU_CGS_LevelUpUGameModeBase_h_2658940903(TEXT("/Script/CGS_LevelUpU"),
		Z_CompiledInDeferFile_FID_CGS_LevelUpU_Source_CGS_LevelUpU_CGS_LevelUpUGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CGS_LevelUpU_Source_CGS_LevelUpU_CGS_LevelUpUGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
