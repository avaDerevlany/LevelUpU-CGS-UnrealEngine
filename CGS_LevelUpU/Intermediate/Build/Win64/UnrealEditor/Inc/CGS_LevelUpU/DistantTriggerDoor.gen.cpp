// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CGS_LevelUpU/Public/DistantTriggerDoor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistantTriggerDoor() {}
// Cross Module References
	CGS_LEVELUPU_API UClass* Z_Construct_UClass_UDistantTriggerDoor_NoRegister();
	CGS_LEVELUPU_API UClass* Z_Construct_UClass_UDistantTriggerDoor();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CGS_LevelUpU();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox_NoRegister();
// End Cross Module References
	void UDistantTriggerDoor::StaticRegisterNativesUDistantTriggerDoor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDistantTriggerDoor);
	UClass* Z_Construct_UClass_UDistantTriggerDoor_NoRegister()
	{
		return UDistantTriggerDoor::StaticClass();
	}
	struct Z_Construct_UClass_UDistantTriggerDoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_desiredRotation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_desiredRotation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_timeToRotate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_timeToRotate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_trigger_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_trigger;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDistantTriggerDoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CGS_LevelUpU,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistantTriggerDoor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DistantTriggerDoor.h" },
		{ "ModuleRelativePath", "Public/DistantTriggerDoor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistantTriggerDoor_Statics::NewProp_desiredRotation_MetaData[] = {
		{ "Category", "DistantTriggerDoor" },
		{ "ModuleRelativePath", "Public/DistantTriggerDoor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDistantTriggerDoor_Statics::NewProp_desiredRotation = { "desiredRotation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDistantTriggerDoor, desiredRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UDistantTriggerDoor_Statics::NewProp_desiredRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDistantTriggerDoor_Statics::NewProp_desiredRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistantTriggerDoor_Statics::NewProp_timeToRotate_MetaData[] = {
		{ "Category", "DistantTriggerDoor" },
		{ "ModuleRelativePath", "Public/DistantTriggerDoor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDistantTriggerDoor_Statics::NewProp_timeToRotate = { "timeToRotate", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDistantTriggerDoor, timeToRotate), METADATA_PARAMS(Z_Construct_UClass_UDistantTriggerDoor_Statics::NewProp_timeToRotate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDistantTriggerDoor_Statics::NewProp_timeToRotate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDistantTriggerDoor_Statics::NewProp_trigger_MetaData[] = {
		{ "Category", "DistantTriggerDoor" },
		{ "ModuleRelativePath", "Public/DistantTriggerDoor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDistantTriggerDoor_Statics::NewProp_trigger = { "trigger", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDistantTriggerDoor, trigger), Z_Construct_UClass_ATriggerBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDistantTriggerDoor_Statics::NewProp_trigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDistantTriggerDoor_Statics::NewProp_trigger_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDistantTriggerDoor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistantTriggerDoor_Statics::NewProp_desiredRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistantTriggerDoor_Statics::NewProp_timeToRotate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDistantTriggerDoor_Statics::NewProp_trigger,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDistantTriggerDoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDistantTriggerDoor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDistantTriggerDoor_Statics::ClassParams = {
		&UDistantTriggerDoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDistantTriggerDoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDistantTriggerDoor_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDistantTriggerDoor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDistantTriggerDoor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDistantTriggerDoor()
	{
		if (!Z_Registration_Info_UClass_UDistantTriggerDoor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDistantTriggerDoor.OuterSingleton, Z_Construct_UClass_UDistantTriggerDoor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDistantTriggerDoor.OuterSingleton;
	}
	template<> CGS_LEVELUPU_API UClass* StaticClass<UDistantTriggerDoor>()
	{
		return UDistantTriggerDoor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDistantTriggerDoor);
	struct Z_CompiledInDeferFile_FID_CGS_LevelUpU_Source_CGS_LevelUpU_Public_DistantTriggerDoor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CGS_LevelUpU_Source_CGS_LevelUpU_Public_DistantTriggerDoor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDistantTriggerDoor, UDistantTriggerDoor::StaticClass, TEXT("UDistantTriggerDoor"), &Z_Registration_Info_UClass_UDistantTriggerDoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDistantTriggerDoor), 1919184911U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CGS_LevelUpU_Source_CGS_LevelUpU_Public_DistantTriggerDoor_h_438545081(TEXT("/Script/CGS_LevelUpU"),
		Z_CompiledInDeferFile_FID_CGS_LevelUpU_Source_CGS_LevelUpU_Public_DistantTriggerDoor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CGS_LevelUpU_Source_CGS_LevelUpU_Public_DistantTriggerDoor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
