// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "CustomPlayerCharacter.h"
#include "CameraTriggerBox.generated.h"


/**
 * 
 */
UCLASS()
class CGS_LEVELUPU_API ACameraTriggerBox : public ATriggerBox
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

	bool triggerAttractor;
	ACustomPlayerCharacter* player;

	void UpdateAttractorRotation(bool setAttractor);

public:
	ACameraTriggerBox();

	UFUNCTION()
		void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);
	
	UFUNCTION()
		void OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor);

	UPROPERTY(EditAnywhere)
		AActor* attractor;

	virtual void Tick(float DeltaTime) override;

};
