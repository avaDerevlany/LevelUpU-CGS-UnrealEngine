// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CGS_LevelUpU/Public/SideSliddingDoor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSideSliddingDoor() {}
// Cross Module References
	CGS_LEVELUPU_API UClass* Z_Construct_UClass_USideSliddingDoor_NoRegister();
	CGS_LEVELUPU_API UClass* Z_Construct_UClass_USideSliddingDoor();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CGS_LevelUpU();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void USideSliddingDoor::StaticRegisterNativesUSideSliddingDoor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USideSliddingDoor);
	UClass* Z_Construct_UClass_USideSliddingDoor_NoRegister()
	{
		return USideSliddingDoor::StaticClass();
	}
	struct Z_Construct_UClass_USideSliddingDoor_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_timeToSlideClosed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_timeToSlideClosed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_timeToSlideOpen_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_timeToSlideOpen;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_trigger_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_trigger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_doorKey_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_doorKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USideSliddingDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CGS_LevelUpU,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USideSliddingDoor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SideSliddingDoor.h" },
		{ "ModuleRelativePath", "Public/SideSliddingDoor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USideSliddingDoor_Statics::NewProp_slideAmount_MetaData[] = {
		{ "Category", "SideSliddingDoor" },
		{ "ModuleRelativePath", "Public/SideSliddingDoor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USideSliddingDoor_Statics::NewProp_slideAmount = { "slideAmount", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USideSliddingDoor, slideAmount), METADATA_PARAMS(Z_Construct_UClass_USideSliddingDoor_Statics::NewProp_slideAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USideSliddingDoor_Statics::NewProp_slideAmount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USideSliddingDoor_Statics::NewProp_timeToSlideClosed_MetaData[] = {
		{ "Category", "SideSliddingDoor" },
		{ "ModuleRelativePath", "Public/SideSliddingDoor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USideSliddingDoor_Statics::NewProp_timeToSlideClosed = { "timeToSlideClosed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USideSliddingDoor, timeToSlideClosed), METADATA_PARAMS(Z_Construct_UClass_USideSliddingDoor_Statics::NewProp_timeToSlideClosed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USideSliddingDoor_Statics::NewProp_timeToSlideClosed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USideSliddingDoor_Statics::NewProp_timeToSlideOpen_MetaData[] = {
		{ "Category", "SideSliddingDoor" },
		{ "ModuleRelativePath", "Public/SideSliddingDoor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USideSliddingDoor_Statics::NewProp_timeToSlideOpen = { "timeToSlideOpen", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USideSliddingDoor, timeToSlideOpen), METADATA_PARAMS(Z_Construct_UClass_USideSliddingDoor_Statics::NewProp_timeToSlideOpen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USideSliddingDoor_Statics::NewProp_timeToSlideOpen_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USideSliddingDoor_Statics::NewProp_trigger_MetaData[] = {
		{ "Category", "SideSliddingDoor" },
		{ "ModuleRelativePath", "Public/SideSliddingDoor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USideSliddingDoor_Statics::NewProp_trigger = { "trigger", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USideSliddingDoor, trigger), Z_Construct_UClass_ATriggerBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USideSliddingDoor_Statics::NewProp_trigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USideSliddingDoor_Statics::NewProp_trigger_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USideSliddingDoor_Statics::NewProp_doorKey_MetaData[] = {
		{ "Category", "SideSliddingDoor" },
		{ "ModuleRelativePath", "Public/SideSliddingDoor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USideSliddingDoor_Statics::NewProp_doorKey = { "doorKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USideSliddingDoor, doorKey), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USideSliddingDoor_Statics::NewProp_doorKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USideSliddingDoor_Statics::NewProp_doorKey_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USideSliddingDoor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USideSliddingDoor_Statics::NewProp_slideAmount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USideSliddingDoor_Statics::NewProp_timeToSlideClosed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USideSliddingDoor_Statics::NewProp_timeToSlideOpen,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USideSliddingDoor_Statics::NewProp_trigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USideSliddingDoor_Statics::NewProp_doorKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USideSliddingDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USideSliddingDoor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USideSliddingDoor_Statics::ClassParams = {
		&USideSliddingDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USideSliddingDoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USideSliddingDoor_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USideSliddingDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USideSliddingDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USideSliddingDoor()
	{
		if (!Z_Registration_Info_UClass_USideSliddingDoor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USideSliddingDoor.OuterSingleton, Z_Construct_UClass_USideSliddingDoor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USideSliddingDoor.OuterSingleton;
	}
	template<> CGS_LEVELUPU_API UClass* StaticClass<USideSliddingDoor>()
	{
		return USideSliddingDoor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USideSliddingDoor);
	struct Z_CompiledInDeferFile_FID_CGS_LevelUpU_Source_CGS_LevelUpU_Public_SideSliddingDoor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CGS_LevelUpU_Source_CGS_LevelUpU_Public_SideSliddingDoor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USideSliddingDoor, USideSliddingDoor::StaticClass, TEXT("USideSliddingDoor"), &Z_Registration_Info_UClass_USideSliddingDoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USideSliddingDoor), 663164983U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CGS_LevelUpU_Source_CGS_LevelUpU_Public_SideSliddingDoor_h_1930055103(TEXT("/Script/CGS_LevelUpU"),
		Z_CompiledInDeferFile_FID_CGS_LevelUpU_Source_CGS_LevelUpU_Public_SideSliddingDoor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CGS_LevelUpU_Source_CGS_LevelUpU_Public_SideSliddingDoor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
