// Fill out your copyright notice in the Description page of Project Settings.


#include "CameraTriggerBox.h"
#include "DrawDebugHelpers.h"
#include "CustomPlayerCharacter.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/KismetMathLibrary.h"

#define print(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 1.5, FColor::Green,text)
#define printFString(text, fstring) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Green, FString::Printf(TEXT(text), fstring))

ACameraTriggerBox::ACameraTriggerBox()
{
    //Register Events
    OnActorBeginOverlap.AddDynamic(this, &ACameraTriggerBox::OnOverlapBegin);
    OnActorEndOverlap.AddDynamic(this, &ACameraTriggerBox::OnOverlapEnd);
}

void ACameraTriggerBox::BeginPlay()
{
    //DrawDebugBox(GetWorld(), GetActorLocation(), GetComponentsBoundingBox().GetExtent(), FColor::Purple, true, -1, 0, 5);

    triggerAttractor = false;
    player = nullptr;
}

void ACameraTriggerBox::Tick(float DeltaTime)
{
    if (triggerAttractor)
    {
        UpdateAttractorRotation(true);
    }
}

void ACameraTriggerBox::OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor)
{
    // check if Actors do not equal nullptr and that 
    if (OtherActor && (OtherActor != this))
    {
        // print to screen using above defined method when actor enters trigger box
        print("Overlap Begin");
        printFString("Overlapped Actor = %s", *OverlappedActor->GetName());

        triggerAttractor = true;
        player = Cast<ACustomPlayerCharacter>(OtherActor);
        UpdateAttractorRotation(triggerAttractor);
    }
}

void ACameraTriggerBox::OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor)
{
    if (OtherActor && (OtherActor != this))
    {
        // print to screen using above defined method when actor leaves trigger box
        print("Overlap Ended");
        printFString("%s has left the Trigger Box", *OtherActor->GetName());

        // return player character to normal 3rd person
        triggerAttractor = false;
        UpdateAttractorRotation(triggerAttractor);
    }
}

void ACameraTriggerBox::UpdateAttractorRotation(bool setAttractor)
{
    print("UpdateAttractorRotation");
    if (setAttractor)
    {
        // set player character to look at attractor
        if (player && attractor)
        {
            USpringArmComponent* springArm = player->FindComponentByClass<USpringArmComponent>();
            if (springArm)
            {
                FRotator lookAtRotation = UKismetMathLibrary::FindLookAtRotation(player->GetActorLocation(), attractor->GetActorLocation());
                
                // make it a little up
                lookAtRotation.Pitch -= 20.0f;
                springArm->SetRelativeRotation(lookAtRotation);

                if (springArm->bInheritYaw)
                {
                    springArm->bInheritYaw = 0;
                    springArm->bUsePawnControlRotation = 0;
                }

                    printFString("rotation %f", lookAtRotation.Pitch);
            }
        }
    }
    else
    {
        if (player)
        {
            USpringArmComponent* springArm = player->FindComponentByClass<USpringArmComponent>();
            if (springArm)
            {
                springArm->bInheritYaw = 1;
                springArm->bUsePawnControlRotation = 1;

            }

            player = nullptr;
        }
    }
}
