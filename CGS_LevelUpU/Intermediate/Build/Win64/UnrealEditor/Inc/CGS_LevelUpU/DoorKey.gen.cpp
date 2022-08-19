// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CGS_LevelUpU/Public/DoorKey.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDoorKey() {}
// Cross Module References
	CGS_LEVELUPU_API UClass* Z_Construct_UClass_UDoorKey_NoRegister();
	CGS_LEVELUPU_API UClass* Z_Construct_UClass_UDoorKey();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_CGS_LevelUpU();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerBox_NoRegister();
// End Cross Module References
	void UDoorKey::StaticRegisterNativesUDoorKey()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDoorKey);
	UClass* Z_Construct_UClass_UDoorKey_NoRegister()
	{
		return UDoorKey::StaticClass();
	}
	struct Z_Construct_UClass_UDoorKey_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_trigger_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_trigger;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDoorKey_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_CGS_LevelUpU,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorKey_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "DoorKey.h" },
		{ "ModuleRelativePath", "Public/DoorKey.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDoorKey_Statics::NewProp_trigger_MetaData[] = {
		{ "Category", "DoorKey" },
		{ "ModuleRelativePath", "Public/DoorKey.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDoorKey_Statics::NewProp_trigger = { "trigger", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDoorKey, trigger), Z_Construct_UClass_ATriggerBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UDoorKey_Statics::NewProp_trigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorKey_Statics::NewProp_trigger_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDoorKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDoorKey_Statics::NewProp_trigger,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDoorKey_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDoorKey>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UDoorKey_Statics::ClassParams = {
		&UDoorKey::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDoorKey_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDoorKey_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDoorKey_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDoorKey_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDoorKey()
	{
		if (!Z_Registration_Info_UClass_UDoorKey.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDoorKey.OuterSingleton, Z_Construct_UClass_UDoorKey_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UDoorKey.OuterSingleton;
	}
	template<> CGS_LEVELUPU_API UClass* StaticClass<UDoorKey>()
	{
		return UDoorKey::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDoorKey);
	struct Z_CompiledInDeferFile_FID_CGS_LevelUpU_Source_CGS_LevelUpU_Public_DoorKey_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CGS_LevelUpU_Source_CGS_LevelUpU_Public_DoorKey_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UDoorKey, UDoorKey::StaticClass, TEXT("UDoorKey"), &Z_Registration_Info_UClass_UDoorKey, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDoorKey), 1093973199U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CGS_LevelUpU_Source_CGS_LevelUpU_Public_DoorKey_h_1747613169(TEXT("/Script/CGS_LevelUpU"),
		Z_CompiledInDeferFile_FID_CGS_LevelUpU_Source_CGS_LevelUpU_Public_DoorKey_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CGS_LevelUpU_Source_CGS_LevelUpU_Public_DoorKey_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
