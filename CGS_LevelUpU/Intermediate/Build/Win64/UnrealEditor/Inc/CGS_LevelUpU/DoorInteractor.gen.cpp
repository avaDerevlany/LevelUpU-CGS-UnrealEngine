// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CGS_LevelUpU/Public/DoorInteractor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorInteractor() {}
// Cross Module References
	CGS_LEVELUPU_API UClass* Z_Construct_UClass_UDoorInteractor_NoRegister();
	CGS_LEVELUPU_API UClass* Z_Construct_UClass_UDoorInteractor();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CGS_LevelUpU();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UDoorInteractor::StaticRegisterNativesUDoorInteractor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDoorInteractor);
	UClass* Z_Construct_UClass_UDoorInteractor_NoRegister()
	{
		return UDoorInteractor::StaticClass();
	}
	struct Z_Construct_UClass_UDoorInteractor_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_frontTrigger_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_frontTrigger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_backTrigger_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_backTrigger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_movementCurve_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_movementCurve;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_doorKey_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_doorKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDoorInteractor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CGS_LevelUpU,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorInteractor_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DoorInteractor.h" },
		{ "ModuleRelativePath", "Public/DoorInteractor.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorInteractor_Statics::NewProp_desiredRotation_MetaData[] = {
		{ "Category", "DoorInteractor" },
		{ "ModuleRelativePath", "Public/DoorInteractor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDoorInteractor_Statics::NewProp_desiredRotation = { "desiredRotation", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorInteractor, desiredRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UDoorInteractor_Statics::NewProp_desiredRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorInteractor_Statics::NewProp_desiredRotation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorInteractor_Statics::NewProp_timeToRotate_MetaData[] = {
		{ "Category", "DoorInteractor" },
		{ "ModuleRelativePath", "Public/DoorInteractor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UDoorInteractor_Statics::NewProp_timeToRotate = { "timeToRotate", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorInteractor, timeToRotate), METADATA_PARAMS(Z_Construct_UClass_UDoorInteractor_Statics::NewProp_timeToRotate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorInteractor_Statics::NewProp_timeToRotate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorInteractor_Statics::NewProp_frontTrigger_MetaData[] = {
		{ "Category", "DoorInteractor" },
		{ "ModuleRelativePath", "Public/DoorInteractor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDoorInteractor_Statics::NewProp_frontTrigger = { "frontTrigger", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorInteractor, frontTrigger), Z_Construct_UClass_ATriggerBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDoorInteractor_Statics::NewProp_frontTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorInteractor_Statics::NewProp_frontTrigger_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorInteractor_Statics::NewProp_backTrigger_MetaData[] = {
		{ "Category", "DoorInteractor" },
		{ "ModuleRelativePath", "Public/DoorInteractor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDoorInteractor_Statics::NewProp_backTrigger = { "backTrigger", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorInteractor, backTrigger), Z_Construct_UClass_ATriggerBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDoorInteractor_Statics::NewProp_backTrigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorInteractor_Statics::NewProp_backTrigger_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorInteractor_Statics::NewProp_movementCurve_MetaData[] = {
		{ "Category", "DoorInteractor" },
		{ "ModuleRelativePath", "Public/DoorInteractor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDoorInteractor_Statics::NewProp_movementCurve = { "movementCurve", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorInteractor, movementCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UDoorInteractor_Statics::NewProp_movementCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorInteractor_Statics::NewProp_movementCurve_MetaData)) }; // 1196190759
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorInteractor_Statics::NewProp_doorKey_MetaData[] = {
		{ "Category", "DoorInteractor" },
		{ "ModuleRelativePath", "Public/DoorInteractor.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDoorInteractor_Statics::NewProp_doorKey = { "doorKey", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorInteractor, doorKey), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDoorInteractor_Statics::NewProp_doorKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorInteractor_Statics::NewProp_doorKey_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDoorInteractor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorInteractor_Statics::NewProp_desiredRotation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorInteractor_Statics::NewProp_timeToRotate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorInteractor_Statics::NewProp_frontTrigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorInteractor_Statics::NewProp_backTrigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorInteractor_Statics::NewProp_movementCurve,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorInteractor_Statics::NewProp_doorKey,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDoorInteractor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoorInteractor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDoorInteractor_Statics::ClassParams = {
		&UDoorInteractor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDoorInteractor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDoorInteractor_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDoorInteractor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorInteractor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDoorInteractor()
	{
		if (!Z_Registration_Info_UClass_UDoorInteractor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDoorInteractor.OuterSingleton, Z_Construct_UClass_UDoorInteractor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDoorInteractor.OuterSingleton;
	}
	template<> CGS_LEVELUPU_API UClass* StaticClass<UDoorInteractor>()
	{
		return UDoorInteractor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDoorInteractor);
	struct Z_CompiledInDeferFile_FID_CGS_LevelUpU_Source_CGS_LevelUpU_Public_DoorInteractor_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CGS_LevelUpU_Source_CGS_LevelUpU_Public_DoorInteractor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDoorInteractor, UDoorInteractor::StaticClass, TEXT("UDoorInteractor"), &Z_Registration_Info_UClass_UDoorInteractor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDoorInteractor), 2052436567U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CGS_LevelUpU_Source_CGS_LevelUpU_Public_DoorInteractor_h_2895014186(TEXT("/Script/CGS_LevelUpU"),
		Z_CompiledInDeferFile_FID_CGS_LevelUpU_Source_CGS_LevelUpU_Public_DoorInteractor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CGS_LevelUpU_Source_CGS_LevelUpU_Public_DoorInteractor_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
