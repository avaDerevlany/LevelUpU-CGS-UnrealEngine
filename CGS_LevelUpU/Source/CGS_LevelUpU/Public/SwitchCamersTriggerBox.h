// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "CustomPlayerCharacter.h"
#include "SwitchCamersTriggerBox.generated.h"

/**
 * 
 */
UCLASS()
class CGS_LEVELUPU_API ASwitchCamersTriggerBox : public ATriggerBox
{
	GENERATED_BODY()
protected:
	virtual void BeginPlay() override;

	//ACameraActor* originalCamera;
	ACustomPlayerCharacter* player;

	//void UpdateAttractorRotation(bool setAttractor);

public:
	ASwitchCamersTriggerBox();

	UFUNCTION()
		void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);

	UFUNCTION()
		void OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor);

	UPROPERTY(EditAnywhere)
		AActor* switchToCamera;

	//virtual void Tick(float DeltaTime) override;

};
