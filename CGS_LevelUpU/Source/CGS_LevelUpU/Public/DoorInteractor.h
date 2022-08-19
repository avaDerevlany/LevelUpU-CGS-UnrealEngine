// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DoorInteractor.generated.h"

class ATriggerBox;


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CGS_LEVELUPU_API UDoorInteractor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDoorInteractor();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	FRotator desiredRotation = FRotator::ZeroRotator;

	FRotator desiredRotationFront;
	FRotator desiredRotationBack;

	FRotator startRotation = FRotator::ZeroRotator;
	FRotator finalRotation = FRotator::ZeroRotator;

	UPROPERTY(EditAnywhere)
	float timeToRotate = 1.0f;

	float currentRotationTime = 0.0f;

	UPROPERTY(EditAnywhere)
		ATriggerBox* frontTrigger;

	UPROPERTY(EditAnywhere)
		ATriggerBox* backTrigger;

	UPROPERTY(EditAnywhere)
		FRuntimeFloatCurve movementCurve;

	UPROPERTY(EditAnywhere)
		AActor* doorKey;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
private:
	void OpenDoor(float DeltaTime);
	void CloseDoor(float DeltaTime);
	bool openDoor;
	bool closeDoor;
};
