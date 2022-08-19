// Fill out your copyright notice in the Description page of Project Settings.


#include "DistantTriggerDoor.h"
#include "Engine/TriggerBox.h"
#include "Engine/World.h"

// Sets default values for this component's properties
UDistantTriggerDoor::UDistantTriggerDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UDistantTriggerDoor::BeginPlay()
{
	Super::BeginPlay();

	startRotation = GetOwner()->GetActorRotation();
	openDoor = false;
	currentRotationTime = 0.0f;
	
}


// Called every frame
void UDistantTriggerDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!openDoor)
	{
		if (GetWorld()->GetFirstLocalPlayerFromController())
		{
			APawn* playerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
			if (playerPawn && trigger && trigger->IsOverlappingActor(playerPawn))
			{
				openDoor = true;
			}
		}
	}

	if (openDoor)
	{
		if (currentRotationTime < timeToRotate)
		{
			OpenDoor(DeltaTime);
		}
	}
}

void UDistantTriggerDoor::OpenDoor(float DeltaTime)
{
	currentRotationTime += DeltaTime;
	const float timeRatio = FMath::Clamp(currentRotationTime / timeToRotate, 0.0f, 1.0f);
	const FRotator currentRotation = FMath::Lerp(startRotation, finalRotation, timeRatio);
	GetOwner()->SetActorRotation(currentRotation);
}

