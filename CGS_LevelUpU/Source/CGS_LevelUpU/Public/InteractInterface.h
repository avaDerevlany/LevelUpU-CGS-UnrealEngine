// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInteractInterface : public UInterface
{
	GENERATED_BODY()
};


UENUM(BlueprintType)
enum class EInteractionType : uint8
{
	None			UMETA(DisplayName = "No Interaction"),
	Once			UMETA(DisplayName = "Interact Once"),
	Collect			UMETA(DisplayName = "Interact T oCollect"),
	Unlimited		UMETA(DisplayName = "Unlimited Interactions"),
};


class CGS_LEVELUPU_API IInteractInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Interact")
		const bool CanInteractWith();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Interact")
		EInteractionType GetInteractionType();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Interact")
		void Interact();
};
