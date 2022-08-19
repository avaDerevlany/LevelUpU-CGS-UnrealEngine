// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SideSliddingDoor.generated.h"

class ATriggerBox;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CGS_LEVELUPU_API USideSliddingDoor : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USideSliddingDoor();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
		float slideAmount = 300;
	//UPROPERTY(EditAnywhere)
	float startXpos;
	//UPROPERTY(EditAnywhere)
	float endXpos;

	UPROPERTY(EditAnywhere)
		float timeToSlideClosed =7.0f;

	UPROPERTY(EditAnywhere)
		float timeToSlideOpen = 1.0f;

	float currentSlideTime = 0.0f;

	UPROPERTY(EditAnywhere)
		ATriggerBox* trigger;

	UPROPERTY(EditAnywhere)
		AActor* doorKey;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;


private:
	bool closeDoor;
	bool openDoor;
	bool completed;

	void CloseDoor(float DeltaTime);
	void OpenDoor(float DeltaTime);
};
