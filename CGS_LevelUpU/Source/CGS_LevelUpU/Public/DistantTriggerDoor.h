// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DistantTriggerDoor.generated.h"

class ATriggerBox;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CGS_LEVELUPU_API UDistantTriggerDoor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDistantTriggerDoor();

	UPROPERTY(EditAnywhere)
		FRotator desiredRotation = FRotator(0.0f, 0.0f, 90.0f);

	FRotator startRotation = FRotator::ZeroRotator;
	FRotator finalRotation = FRotator::ZeroRotator;

	UPROPERTY(EditAnywhere)
		float timeToRotate = 1.0f;

	float currentRotationTime = 0.0f;

	UPROPERTY(EditAnywhere)
		ATriggerBox* trigger;

	bool openDoor;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	void OpenDoor(float DeltaTime);

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
