// Fill out your copyright notice in the Description page of Project Settings.

#include "InteractableDoorActor.h"
#include "DoorInteractor.h"


AInteractableDoorActor::AInteractableDoorActor()
{
	doorInteractor = CreateAbstractDefaultSubobject<UDoorInteractor>(TEXT("DoorInteractor"));
}