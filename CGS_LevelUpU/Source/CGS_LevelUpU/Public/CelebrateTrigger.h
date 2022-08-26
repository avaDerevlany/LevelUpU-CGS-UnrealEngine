// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "CelebrateTrigger.generated.h"

/**
 * 
 */
UCLASS()
class CGS_LEVELUPU_API ACelebrateTrigger : public ATriggerBox
{
	GENERATED_BODY()

public:
	ACelebrateTrigger();

	UFUNCTION()
		void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);
	
};
