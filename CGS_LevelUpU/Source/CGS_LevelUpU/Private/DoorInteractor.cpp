// Fill out your copyright notice in the Description page of Project Settings.


#include "DoorInteractor.h"
#include "Engine/TriggerBox.h"
#include "Engine/World.h"
#include "DoorKey.h"

// Sets default values for this component's properties
UDoorInteractor::UDoorInteractor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UDoorInteractor::BeginPlay()
{
	Super::BeginPlay();

	startRotation = GetOwner()->GetActorRotation();

	desiredRotationFront = GetOwner()->GetActorRotation() + desiredRotation;
	desiredRotationBack = GetOwner()->GetActorRotation() - desiredRotation;

	//finalRotation = GetOwner()->GetActorRotation() + desiredRotation;

	currentRotationTime = 0.0f;

	openDoor = false;
	closeDoor = false;

}


// Called every frame
void UDoorInteractor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!openDoor && !closeDoor)
	{
		// if the door does not have a key, or the key is colected
		if (doorKey == nullptr || (doorKey && doorKey->FindComponentByClass<UDoorKey>() && doorKey->FindComponentByClass<UDoorKey>()->IsKeyCollected()))
		{
			if (GetWorld()->GetFirstLocalPlayerFromController())
			{
				APawn* playerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
				if (playerPawn && frontTrigger && frontTrigger->IsOverlappingActor(playerPawn))
				{
					openDoor = true;
					closeDoor = false;
					finalRotation = desiredRotationFront;
				}
				else if (playerPawn && backTrigger && backTrigger->IsOverlappingActor(playerPawn))
				{
					openDoor = true;
					closeDoor = false;
					finalRotation = desiredRotationBack;
				}
			}
		}
	}

	if (openDoor)
	{
		if (currentRotationTime < timeToRotate)
		{
			OpenDoor(DeltaTime);
		}
		// only if done opening
		else if (GetWorld()->GetFirstLocalPlayerFromController())
		{
			APawn* playerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
			if (playerPawn && frontTrigger && backTrigger && !frontTrigger->IsOverlappingActor(playerPawn) && !backTrigger->IsOverlappingActor(playerPawn))
			{
				openDoor = false;
				closeDoor = true;
				currentRotationTime = 0.0f;
			}
		}
	}

	if (closeDoor)
	{
		if (currentRotationTime < timeToRotate)
		{
			CloseDoor(DeltaTime);
		}
		else
		{
			openDoor = false;
			closeDoor = false;
			currentRotationTime = 0.0f;
		}
	}
}

void UDoorInteractor::OpenDoor(float DeltaTime)
{
	currentRotationTime += DeltaTime;
	const float timeRatio = FMath::Clamp(currentRotationTime / timeToRotate, 0.0f, 1.0f);
	const float rotationAlpha = movementCurve.GetRichCurveConst()->Eval(timeRatio);
	const FRotator currentRotation = FMath::Lerp(startRotation, finalRotation, rotationAlpha);
	GetOwner()->SetActorRotation(currentRotation);
}

void UDoorInteractor::CloseDoor(float DeltaTime)
{
	currentRotationTime += DeltaTime;
	const float timeRatio = FMath::Clamp(currentRotationTime / timeToRotate, 0.0f, 1.0f);
	const float rotationAlpha = movementCurve.GetRichCurveConst()->Eval(timeRatio);
	const FRotator currentRotation = FMath::Lerp(finalRotation, startRotation, rotationAlpha);
	GetOwner()->SetActorRotation(currentRotation);
}

