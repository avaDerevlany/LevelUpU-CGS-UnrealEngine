// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "DataTableExample.generated.h"

UENUM(BlueprintType)
enum class EEffectType : uint8
{
	None		UMETA(DisplayName = "None"),
	Speed		UMETA(DisplayName = "SpeedBuff"),
	Jump		UMETA(DisplayName = "JumpBuff"),
	Power		UMETA(DisplayName = "PowerBuff"),
};




USTRUCT(BlueprintType)
struct FEffectStats : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		EEffectType effectType;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		float effectStrength = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
		FString effectDescription = "";
};




UCLASS()
class CGS_LEVELUPU_API ADataTableExample : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADataTableExample();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Data")
		class UDataTable* effectsTable;


	// easier to search with in blueprint
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Data")
		EEffectType selectedEffect_BP = EEffectType::None;

	// easier to search with in c++
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Data")
		FName selectedEffect = "";



	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Data")
		EEffectType effectType = EEffectType::None;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Data")
		float effectStrength = 0;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Data")
		FString description = "";

};
