// Fill out your copyright notice in the Description page of Project Settings.


#include "SideSliddingDoor.h"
#include "Engine/TriggerBox.h"
#include "Engine/World.h"
#include "DoorKey.h"

// Sets default values for this component's properties
USideSliddingDoor::USideSliddingDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void USideSliddingDoor::BeginPlay()
{
	Super::BeginPlay();

	startXpos = GetOwner()->GetActorLocation().X;
	endXpos = startXpos - slideAmount;

	openDoor = false;
	closeDoor = false;
	completed = false;

	currentSlideTime = 0.0f;
}


// Called every frame
void USideSliddingDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!closeDoor && !openDoor)
	{
		if (GetWorld()->GetFirstLocalPlayerFromController())
		{
			APawn* playerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
			if (playerPawn && trigger && trigger->IsOverlappingActor(playerPawn))
			{
				openDoor = false;
				closeDoor = true;
			}
		}
	}

	if (closeDoor)
	{
		// close door
		if (currentSlideTime < timeToSlideClosed)
		{
			CloseDoor(DeltaTime);
		}
		else if (GetWorld()->GetFirstLocalPlayerFromController())
		{
			APawn* playerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
			if (playerPawn && trigger && trigger->IsOverlappingActor(playerPawn))
			{
				openDoor = true;
				closeDoor = false;
				currentSlideTime = 0.0f;
			}

			else if (doorKey && doorKey->FindComponentByClass<UDoorKey>() && doorKey->FindComponentByClass<UDoorKey>()->IsKeyCollected())
			{
				openDoor = true;
				closeDoor = false;
				currentSlideTime = 0.0f;
				trigger->SetActorHiddenInGame(true);
				trigger->SetActorEnableCollision(false);
				trigger->SetActorTickEnabled(false);

				completed = true;
			}
		}
	}

	if (openDoor)
	{
		// openDoor
		if (currentSlideTime < timeToSlideOpen)
		{
			OpenDoor(DeltaTime);
		}
		else if (!completed)
		{
			openDoor = false;
			closeDoor = true;
			currentSlideTime = 0.0f;
		}
	}
}

void USideSliddingDoor::CloseDoor(float DeltaTime)
{
	currentSlideTime += DeltaTime;
	const float timeRatio = FMath::Clamp(currentSlideTime / timeToSlideClosed, 0.0f, 1.0f);
	const float currentSlide = FMath::Lerp(startXpos, endXpos, timeRatio);
	const FVector transformVector = FVector(currentSlide, GetOwner()->GetActorLocation().Y, GetOwner()->GetActorLocation().Z);
	GetOwner()->SetActorLocation(transformVector);
}

void USideSliddingDoor::OpenDoor(float DeltaTime)
{
	currentSlideTime += DeltaTime;
	const float timeRatio = FMath::Clamp(currentSlideTime / timeToSlideOpen, 0.0f, 1.0f);
	const float currentSlide = FMath::Lerp(endXpos, startXpos, timeRatio);
	const FVector transformVector = FVector(currentSlide, GetOwner()->GetActorLocation().Y, GetOwner()->GetActorLocation().Z);
	GetOwner()->SetActorLocation(transformVector);
}

