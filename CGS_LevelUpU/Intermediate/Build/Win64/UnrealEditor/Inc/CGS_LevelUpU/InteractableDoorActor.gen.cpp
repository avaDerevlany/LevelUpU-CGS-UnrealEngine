// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CGS_LevelUpU/Public/InteractableDoorActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractableDoorActor() {}
// Cross Module References
	CGS_LEVELUPU_API UClass* Z_Construct_UClass_AInteractableDoorActor_NoRegister();
	CGS_LEVELUPU_API UClass* Z_Construct_UClass_AInteractableDoorActor();
	ENGINE_API UClass* Z_Construct_UClass_AStaticMeshActor();
	UPackage* Z_Construct_UPackage__Script_CGS_LevelUpU();
	CGS_LEVELUPU_API UClass* Z_Construct_UClass_UDoorInteractor_NoRegister();
// End Cross Module References
	void AInteractableDoorActor::StaticRegisterNativesAInteractableDoorActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AInteractableDoorActor);
	UClass* Z_Construct_UClass_AInteractableDoorActor_NoRegister()
	{
		return AInteractableDoorActor::StaticClass();
	}
	struct Z_Construct_UClass_AInteractableDoorActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_doorInteractor_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_doorInteractor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractableDoorActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AStaticMeshActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CGS_LevelUpU,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableDoorActor_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input" },
		{ "IncludePath", "InteractableDoorActor.h" },
		{ "ModuleRelativePath", "Public/InteractableDoorActor.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractableDoorActor_Statics::NewProp_doorInteractor_MetaData[] = {
		{ "Category", "InteractableDoorActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractableDoorActor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractableDoorActor_Statics::NewProp_doorInteractor = { "doorInteractor", nullptr, (EPropertyFlags)0x0020080002080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractableDoorActor, doorInteractor), Z_Construct_UClass_UDoorInteractor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractableDoorActor_Statics::NewProp_doorInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableDoorActor_Statics::NewProp_doorInteractor_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractableDoorActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractableDoorActor_Statics::NewProp_doorInteractor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractableDoorActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractableDoorActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AInteractableDoorActor_Statics::ClassParams = {
		&AInteractableDoorActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AInteractableDoorActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableDoorActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInteractableDoorActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractableDoorActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractableDoorActor()
	{
		if (!Z_Registration_Info_UClass_AInteractableDoorActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AInteractableDoorActor.OuterSingleton, Z_Construct_UClass_AInteractableDoorActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AInteractableDoorActor.OuterSingleton;
	}
	template<> CGS_LEVELUPU_API UClass* StaticClass<AInteractableDoorActor>()
	{
		return AInteractableDoorActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractableDoorActor);
	struct Z_CompiledInDeferFile_FID_CGS_LevelUpU_Source_CGS_LevelUpU_Public_InteractableDoorActor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CGS_LevelUpU_Source_CGS_LevelUpU_Public_InteractableDoorActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AInteractableDoorActor, AInteractableDoorActor::StaticClass, TEXT("AInteractableDoorActor"), &Z_Registration_Info_UClass_AInteractableDoorActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AInteractableDoorActor), 2364423737U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CGS_LevelUpU_Source_CGS_LevelUpU_Public_InteractableDoorActor_h_3806832834(TEXT("/Script/CGS_LevelUpU"),
		Z_CompiledInDeferFile_FID_CGS_LevelUpU_Source_CGS_LevelUpU_Public_InteractableDoorActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CGS_LevelUpU_Source_CGS_LevelUpU_Public_InteractableDoorActor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
