// Fill out your copyright notice in the Description page of Project Settings.


#include "SwitchCamersTriggerBox.h"
#include "CustomPlayerCharacter.h"
#include "GameFramework/SpringArmComponent.h"

ASwitchCamersTriggerBox::ASwitchCamersTriggerBox()
{
    //Register Events
    OnActorBeginOverlap.AddDynamic(this, &ASwitchCamersTriggerBox::OnOverlapBegin);
    OnActorEndOverlap.AddDynamic(this, &ASwitchCamersTriggerBox::OnOverlapEnd);
}

void ASwitchCamersTriggerBox::BeginPlay()
{
    //originalCamera = nullptr;
    player = nullptr;
}

//void ASwitchCamersTriggerBox::Tick(float DeltaTime)
//{
//
//}

void ASwitchCamersTriggerBox::OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor)
{
    // check if Actors do not equal nullptr and that 
    if (OtherActor && (OtherActor != this))
    {
        if (!player)
        {
            player = Cast<ACustomPlayerCharacter>(OtherActor);
        }
        
        if (switchToCamera)
        {
            //originalCamera = player->FindComponentByClass<ACameraActor>();
            GetWorld()->GetFirstPlayerController()->SetViewTargetWithBlend(switchToCamera, 0.5f);
        }
    }
}

void ASwitchCamersTriggerBox::OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor)
{
    // check if Actors do not equal nullptr and that 
    if (OtherActor && (OtherActor != this))
    {
        if (player)
        {
            GetWorld()->GetFirstPlayerController()->SetViewTargetWithBlend(player, 0.5f);
            //originalCamera = nullptr;
        }
    }
}