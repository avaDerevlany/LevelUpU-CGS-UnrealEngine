// Fill out your copyright notice in the Description page of Project Settings.


#include "EventTriggeredDoor.h"
#include "EventTriggerBox.h"

// Sets default values for this component's properties
UEventTriggeredDoor::UEventTriggeredDoor()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UEventTriggeredDoor::BeginPlay()
{
	Super::BeginPlay();

	startRotation = GetOwner()->GetActorRotation();
	finalRotation = GetOwner()->GetActorRotation() + desiredRotation;;
	openDoor = false;
	currentRotationTime = 0.0f;

	AEventTriggerBox* eTrigger = Cast<AEventTriggerBox>(eventTrigger);
	if (eTrigger)
	{
		eTrigger->onOverlapBeginEvent.AddDynamic(this, &UEventTriggeredDoor::TriggerDoorOpen);
	}
}


// Called every frame
void UEventTriggeredDoor::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (openDoor)
	{
		if (currentRotationTime < timeToRotate)
		{
			OpenDoor(DeltaTime);
		}
		else openDoor = false;
	}
}

void UEventTriggeredDoor::OpenDoor(float DeltaTime)
{
	currentRotationTime += DeltaTime;
	const float timeRatio = FMath::Clamp(currentRotationTime / timeToRotate, 0.0f, 1.0f);
	const FRotator currentRotation = FMath::Lerp(startRotation, finalRotation, timeRatio);
	GetOwner()->SetActorRotation(currentRotation);
}

void UEventTriggeredDoor::TriggerDoorOpen()
{
	openDoor = true;
}

