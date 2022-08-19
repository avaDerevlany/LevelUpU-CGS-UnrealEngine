// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CGS_LevelUpU/Public/DownSlidingDoorComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDownSlidingDoorComponent() {}
// Cross Module References
	CGS_LEVELUPU_API UClass* Z_Construct_UClass_UDownSlidingDoorComponent_NoRegister();
	CGS_LEVELUPU_API UClass* Z_Construct_UClass_UDownSlidingDoorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CGS_LevelUpU();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox_NoRegister();
// End Cross Module References
	void UDownSlidingDoorComponent::StaticRegisterNativesUDownSlidingDoorComponent()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDownSlidingDoorComponent);
	UClass* Z_Construct_UClass_UDownSlidingDoorComponent_NoRegister()
	{
		return UDownSlidingDoorComponent::StaticClass();
	}
	struct Z_Construct_UClass_UDownSlidingDoorComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_slideAmount_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_slideAmount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_timeToSlide_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_timeToSlide;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_trigger_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_trigger;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDownSlidingDoorComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CGS_LevelUpU,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDownSlidingDoorComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DownSlidingDoorComponent.h" },
		{ "ModuleRelativePath", "Public/DownSlidingDoorComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDownSlidingDoorComponent_Statics::NewProp_slideAmount_MetaData[] = {
		{ "Category", "DownSlidingDoorComponent" },
		{ "ModuleRelativePath", "Public/DownSlidingDoorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDownSlidingDoorComponent_Statics::NewProp_slideAmount = { "slideAmount", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDownSlidingDoorComponent, slideAmount), METADATA_PARAMS(Z_Construct_UClass_UDownSlidingDoorComponent_Statics::NewProp_slideAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDownSlidingDoorComponent_Statics::NewProp_slideAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDownSlidingDoorComponent_Statics::NewProp_timeToSlide_MetaData[] = {
		{ "Category", "DownSlidingDoorComponent" },
		{ "ModuleRelativePath", "Public/DownSlidingDoorComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDownSlidingDoorComponent_Statics::NewProp_timeToSlide = { "timeToSlide", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDownSlidingDoorComponent, timeToSlide), METADATA_PARAMS(Z_Construct_UClass_UDownSlidingDoorComponent_Statics::NewProp_timeToSlide_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDownSlidingDoorComponent_Statics::NewProp_timeToSlide_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDownSlidingDoorComponent_Statics::NewProp_trigger_MetaData[] = {
		{ "Category", "DownSlidingDoorComponent" },
		{ "ModuleRelativePath", "Public/DownSlidingDoorComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDownSlidingDoorComponent_Statics::NewProp_trigger = { "trigger", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDownSlidingDoorComponent, trigger), Z_Construct_UClass_ATriggerBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDownSlidingDoorComponent_Statics::NewProp_trigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDownSlidingDoorComponent_Statics::NewProp_trigger_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDownSlidingDoorComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDownSlidingDoorComponent_Statics::NewProp_slideAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDownSlidingDoorComponent_Statics::NewProp_timeToSlide,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDownSlidingDoorComponent_Statics::NewProp_trigger,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDownSlidingDoorComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDownSlidingDoorComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDownSlidingDoorComponent_Statics::ClassParams = {
		&UDownSlidingDoorComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDownSlidingDoorComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDownSlidingDoorComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDownSlidingDoorComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDownSlidingDoorComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDownSlidingDoorComponent()
	{
		if (!Z_Registration_Info_UClass_UDownSlidingDoorComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDownSlidingDoorComponent.OuterSingleton, Z_Construct_UClass_UDownSlidingDoorComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDownSlidingDoorComponent.OuterSingleton;
	}
	template<> CGS_LEVELUPU_API UClass* StaticClass<UDownSlidingDoorComponent>()
	{
		return UDownSlidingDoorComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDownSlidingDoorComponent);
	struct Z_CompiledInDeferFile_FID_CGS_LevelUpU_Source_CGS_LevelUpU_Public_DownSlidingDoorComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CGS_LevelUpU_Source_CGS_LevelUpU_Public_DownSlidingDoorComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDownSlidingDoorComponent, UDownSlidingDoorComponent::StaticClass, TEXT("UDownSlidingDoorComponent"), &Z_Registration_Info_UClass_UDownSlidingDoorComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDownSlidingDoorComponent), 1717467202U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CGS_LevelUpU_Source_CGS_LevelUpU_Public_DownSlidingDoorComponent_h_3377199951(TEXT("/Script/CGS_LevelUpU"),
		Z_CompiledInDeferFile_FID_CGS_LevelUpU_Source_CGS_LevelUpU_Public_DownSlidingDoorComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CGS_LevelUpU_Source_CGS_LevelUpU_Public_DownSlidingDoorComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
