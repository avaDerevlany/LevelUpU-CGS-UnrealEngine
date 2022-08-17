// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "InteractableDoorActor.generated.h"

class UDoorInteractor;

UCLASS()
class CGS_LEVELUPU_API AInteractableDoorActor : public AStaticMeshActor
{
	GENERATED_BODY()
	
public:
	AInteractableDoorActor();

protected:
	UPROPERTY(EditAnywhere, NoClear)
	UDoorInteractor* doorInteractor;

};
