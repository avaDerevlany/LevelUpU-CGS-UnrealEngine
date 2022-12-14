// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DownSlidingDoorComponent.generated.h"

class ATriggerBox;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CGS_LEVELUPU_API UDownSlidingDoorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDownSlidingDoorComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
		float slideAmount = 300;
	//UPROPERTY(EditAnywhere)
	float startZpos;
	//UPROPERTY(EditAnywhere)
	float endZpos;

	UPROPERTY(EditAnywhere)
		float timeToSlide = 1.0f;

	float currentSlideTime = 0.0f;

	UPROPERTY(EditAnywhere)
		ATriggerBox* trigger;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	void SlideDown(float DeltaTime);
	bool slideDoor;
		
};
