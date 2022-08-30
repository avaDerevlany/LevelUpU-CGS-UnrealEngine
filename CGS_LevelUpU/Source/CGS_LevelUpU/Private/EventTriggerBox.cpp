// Fill out your copyright notice in the Description page of Project Settings.


#include "EventTriggerBox.h"

AEventTriggerBox::AEventTriggerBox()
{
	//Register Events
	OnActorBeginOverlap.AddDynamic(this, &AEventTriggerBox::OnOverlapBegin);
	OnActorEndOverlap.AddDynamic(this, &AEventTriggerBox::OnOverlapEnd);
}

void AEventTriggerBox::BeginPlay()
{
	Super::BeginPlay();
}

void AEventTriggerBox::OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor)
{
	if (OtherActor && (OtherActor != this))
	{
		onOverlapBeginEvent.Broadcast();
	}
}

void AEventTriggerBox::OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor)
{
	if (OtherActor && (OtherActor != this))
	{
		onOverlapEndEvent.Broadcast();
	}
}