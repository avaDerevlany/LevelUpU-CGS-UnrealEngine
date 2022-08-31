// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "CustomPlayerCharacter.generated.h"

UENUM(BlueprintType)
enum class ECharacterThrowState : uint8
{
	None			UMETA(DisplayName = "None"),
	/*RequestingPull	UMETA(DisplayName = "RequestingPull"),*/
	Pulling			UMETA(DisplayName = "Pulling"),
	Attached		UMETA(DisplayName = "Attached"),
	Throwing		UMETA(DisplayName = "Throwing"),
	Aiming			UMETA(DisplayName = "Aiming"),
};

UCLASS()
class CGS_LEVELUPU_API ACustomPlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ACustomPlayerCharacter();

	UFUNCTION(BlueprintCallable)
		const bool IsAlive() const;

	UFUNCTION(BlueprintCallable)
		const float GetCurrentHealth() const;

	UFUNCTION(BlueprintCallable)
	void TakeDamage(float amount);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	float health;

	void OnDeath(bool isFallout);

	UFUNCTION()
	void OnDeathTimerFinished();

	UPROPERTY(EditAnywhere)
	float timeRestartLevelAfterDeath = 2.0f;

	FTimerHandle restartLevelTimerHandle;

	bool deathPause;

	UPROPERTY(VisibleAnywhere, ReplicatedUsing = OnRep_CharacterThrowState, Category = "Throw")
		ECharacterThrowState CharacterThrowState = ECharacterThrowState::None;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
