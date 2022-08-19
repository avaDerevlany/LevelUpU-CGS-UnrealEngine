// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DoorKey.generated.h"

class ATriggerBox;


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class CGS_LEVELUPU_API UDoorKey : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UDoorKey();

	bool IsKeyCollected();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	bool collected;

	UPROPERTY(EditAnywhere)
		ATriggerBox* trigger;

	void CollectKey();

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
};
