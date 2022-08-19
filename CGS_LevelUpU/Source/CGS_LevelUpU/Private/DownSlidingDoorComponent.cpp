// Fill out your copyright notice in the Description page of Project Settings.


#include "DownSlidingDoorComponent.h"
#include "Engine/TriggerBox.h"
#include "Engine/World.h"

// Sets default values for this component's properties
UDownSlidingDoorComponent::UDownSlidingDoorComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UDownSlidingDoorComponent::BeginPlay()
{
	Super::BeginPlay();

	startZpos = GetOwner()->GetActorLocation().Z;
	endZpos = startZpos - slideAmount;

	slideDoor = false;
	
}


// Called every frame
void UDownSlidingDoorComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!slideDoor)
	{
		if (GetWorld()->GetFirstLocalPlayerFromController())
		{
			APawn* playerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
			if (playerPawn && trigger && trigger->IsOverlappingActor(playerPawn))
			{
				slideDoor = true;
			}
		}
	}
	else
	{
		SlideDown(DeltaTime);
	}
}

void UDownSlidingDoorComponent::SlideDown(float DeltaTime)
{
	currentSlideTime += DeltaTime;
	const float timeRatio = FMath::Clamp(currentSlideTime / timeToSlide, 0.0f, 1.0f);
	//const float rotationAlpha = movementCurve.GetRichCurveConst()->Eval(timeRatio);
	const float currentSlide = FMath::Lerp(startZpos, endZpos, timeRatio);
	const FVector transformVector = FVector(GetOwner()->GetActorLocation().X, GetOwner()->GetActorLocation().Y, currentSlide);
	GetOwner()->SetActorLocation(transformVector);
}

