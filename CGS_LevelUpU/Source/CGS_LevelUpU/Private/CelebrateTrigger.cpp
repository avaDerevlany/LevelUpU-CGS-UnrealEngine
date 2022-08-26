// Fill out your copyright notice in the Description page of Project Settings.


#include "CelebrateTrigger.h"

ACelebrateTrigger::ACelebrateTrigger()
{

}

void ACelebrateTrigger::OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor)
{
    if (OtherActor && (OtherActor != this))
    {
		if (GetWorld()->GetFirstLocalPlayerFromController())
		{
			APawn* playerPawn = GetWorld()->GetFirstPlayerController()->GetPawn();
			if (playerPawn)
			{
				
			}
		}
    }
}