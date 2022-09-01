// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractableButton.h"
#include "InteractInterface.h"

#define print(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green,text)

// Sets default values for this component's properties
UInteractableButton::UInteractableButton()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UInteractableButton::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UInteractableButton::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

const bool UInteractableButton::CanInteractWith()
{
	if (interactionType == EInteractionType::None) return false;
	else if (interactionType == EInteractionType::Once && numberOfInteractions > 1) return false;
	else if (interactionType == EInteractionType::Collect && numberOfInteractions > 1) return false;
	else return true;
}

EInteractionType UInteractableButton::GetInteractionType()
{
	return interactionType;
}

void UInteractableButton::Interact()
{
	print("Interacted with button");
}