// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomPlayerCharacter.h"

// Sets default values
ACustomPlayerCharacter::ACustomPlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	health = 10.0f;

	deathPause = false;
}

// Called when the game starts or when spawned
void ACustomPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACustomPlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!deathPause && !IsAlive())
	{
		OnDeath(false);
	}
}

// Called to bind functionality to input
void ACustomPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

const bool ACustomPlayerCharacter::IsAlive() const
{
	if (health > 0) return true;
	else return false;
}

const float ACustomPlayerCharacter::GetCurrentHealth() const
{
	return health;
}

void ACustomPlayerCharacter::TakeDamage(float amount)
{
	health -= amount;
}

void ACustomPlayerCharacter::OnDeath(bool isFallout)
{
	APlayerController* playerController = GetController<APlayerController>();
	if (playerController)
	{
		playerController->DisableInput(playerController);
	}

	deathPause = true;
	GetWorld()->GetTimerManager().SetTimer(restartLevelTimerHandle, this, &ACustomPlayerCharacter::OnDeathTimerFinished, timeRestartLevelAfterDeath, false);
}

void ACustomPlayerCharacter::OnDeathTimerFinished()
{
	APlayerController* playerController = GetController<APlayerController>();
	if (playerController)
	{
		playerController->RestartLevel();
		deathPause = false;
	}
}