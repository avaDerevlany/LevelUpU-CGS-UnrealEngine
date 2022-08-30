// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "Delegates/Delegate.h"
#include "EventTriggerBox.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnOverlapBeginEvent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnOverlapEndEvent);

/**
 * 
 */
UCLASS()
class CGS_LEVELUPU_API AEventTriggerBox : public ATriggerBox
{
	GENERATED_BODY()
		
protected:
	virtual void BeginPlay();

public:

	AEventTriggerBox();

	UFUNCTION()
		void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);

	UFUNCTION()
		void OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor);

	UPROPERTY()
		FOnOverlapBeginEvent onOverlapBeginEvent;

	UPROPERTY()
		FOnOverlapBeginEvent onOverlapEndEvent;
	
};
