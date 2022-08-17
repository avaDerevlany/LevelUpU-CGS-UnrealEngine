// Fill out your copyright notice in the Description page of Project Settings.

#include "DoorInteractor.h"
#include "InteractableDoorActor.h"


AInteractableDoorActor::AInteractableDoorActor()
{
	doorInteractor = CreateAbstractDefaultSubobject<UDoorInteractor>(TEXT("DoorInteractor"));
}