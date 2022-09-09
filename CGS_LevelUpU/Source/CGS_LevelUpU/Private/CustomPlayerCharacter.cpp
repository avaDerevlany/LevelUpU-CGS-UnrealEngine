// Fill out your copyright notice in the Description page of Project Settings.


#include "CustomPlayerCharacter.h"
#include "DrawDebugHelpers.h"
#include "Kismet/GameplayStatics.h"
#include "ThrowableActor.h"

#define print(text) if (GEngine) GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Green,text)

// Sets default values
ACustomPlayerCharacter::ACustomPlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	health = 10.0f;

	deathPause = false;
}

// Called when the game starts or when spawned
void ACustomPlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACustomPlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!deathPause && !IsAlive())
	{
		if (isPlayer) OnDeath(false);
		else RemoveCharacter();
	}
	else if (!ThrowableActor)
	{
		if (isPlayer) SphereCastPlayerView();
	}
	
}

// Called to bind functionality to input
void ACustomPlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

const bool ACustomPlayerCharacter::IsAlive() const
{
	if (health > 0) return true;
	else return false;
}

const float ACustomPlayerCharacter::GetCurrentHealth() const
{
	return health;
}

void ACustomPlayerCharacter::TakeDamage(float amount)
{
	health -= amount;

	// set hitReact on animator
	// set DangerCube in levelBlueprint to take damage instead of calling anim stuff
	//UAnimInstance* animInstance = GetMesh()->GetAnimInstance();
}

void ACustomPlayerCharacter::OnDeath(bool isFallout)
{
	// set isAlive = false on animator

	APlayerController* playerController = GetController<APlayerController>();
	if (playerController)
	{
		playerController->DisableInput(playerController);
	}

	deathPause = true;
	GetWorld()->GetTimerManager().SetTimer(restartLevelTimerHandle, this, &ACustomPlayerCharacter::OnDeathTimerFinished, timeRestartLevelAfterDeath, false);
}

void ACustomPlayerCharacter::RemoveCharacter()
{
	this->Destroy();
}

void ACustomPlayerCharacter::OnDeathTimerFinished()
{
	APlayerController* playerController = GetController<APlayerController>();
	if (playerController)
	{
		playerController->RestartLevel();
		deathPause = false;
	}
}

void ACustomPlayerCharacter::TryToInteract()
{
	// check if there is an interactable item

	// if yes
	// interact with it

	print("Player clicked!");

	if (CharacterThrowState == ECharacterThrowState::None && ThrowableActor)
	{
		CharacterThrowState = ECharacterThrowState::Pulling;
		bool pulledSuccessfully = ThrowableActor->Pull(this);
		//ServerRequestPullObject(true);

		if (pulledSuccessfully)
		{
			//print("Ball Attached");
			//CharacterThrowState = ECharacterThrowState::Attached;
		}
		else
		{
			CharacterThrowState = ECharacterThrowState::None;
			print("Ball not Attached");
		}
	}
	else if (CharacterThrowState == ECharacterThrowState::Attached && ThrowableActor)
	{
		print("Throwing ball");

		if (ThrowableActor->GetRootComponent())
		{
			UPrimitiveComponent* RootPrimitiveComponent = Cast<UPrimitiveComponent>(ThrowableActor->GetRootComponent());
			if (RootPrimitiveComponent)
			{
				RootPrimitiveComponent->IgnoreActorWhenMoving(this, true);
			}
		}

		const FVector& Direction = GetActorForwardVector() * ThrowSpeed;

		ThrowableActor->Launch(Direction);
		CharacterThrowState = ECharacterThrowState::Throwing;
	}
	else if (CharacterThrowState == ECharacterThrowState::Throwing && ThrowableActor)
	{
		CharacterThrowState = ECharacterThrowState::None;

		MoveIgnoreActorRemove(ThrowableActor);
		if (ThrowableActor->GetRootComponent())
		{
			UPrimitiveComponent* RootPrimitiveComponent = Cast<UPrimitiveComponent>(ThrowableActor->GetRootComponent());
			if (RootPrimitiveComponent)
			{
				RootPrimitiveComponent->IgnoreActorWhenMoving(this, false);
			}
		}
		ThrowableActor = nullptr;
	}
}

// copy over throwable actor
void ACustomPlayerCharacter::SphereCastPlayerView()
{
	FVector Location;
	FRotator Rotation;
	if (!GetController())
	{
		return;
	}
	GetController()->GetPlayerViewPoint(Location, Rotation);
	const FVector PlayerViewForward = Rotation.Vector();
	const float AdditionalDistance = (Location - GetActorLocation()).Size();
	FVector EndPos = Location + (PlayerViewForward * (1000.0f + AdditionalDistance));

	const FVector CharacterForward = GetActorForwardVector();
	const float DotResult = FVector::DotProduct(PlayerViewForward, CharacterForward);
	//prevent picking up objects behind us, this is when the camera is looking directly at the characters front side
	if (DotResult < -0.23f)
	{
		if (ThrowableActor)
		{
			ThrowableActor->ToggleHighlight(false);
			ThrowableActor = nullptr;
		}
		return;
		//UE_LOG(LogTemp, Warning, TEXT("Dot Result: %f"), DotResult);
	}


	FHitResult HitResult;
	EDrawDebugTrace::Type DebugTrace = 1 ? EDrawDebugTrace::ForOneFrame : EDrawDebugTrace::None;
	TArray<AActor*> ActorsToIgnore;
	ActorsToIgnore.Add(this);

	UKismetSystemLibrary::SphereTraceSingle(GetWorld(), Location, EndPos, 70.0f, UEngineTypes::ConvertToTraceType(ECollisionChannel::ECC_Visibility), false, ActorsToIgnore, DebugTrace, HitResult, true);
	ProcessTraceResult(HitResult);

//#if ENABLE_DRAW_DEBUG
//	if (CVarDisplayTrace->GetBool())
//	{
//		static float FovDeg = 90.0f;
//		DrawDebugCamera(GetWorld(), Location, Rotation, FovDeg);
//		DrawDebugLine(GetWorld(), Location, EndPos, HitResult.bBlockingHit ? FColor::Red : FColor::White);
//		DrawDebugPoint(GetWorld(), EndPos, 70.0f, HitResult.bBlockingHit ? FColor::Red : FColor::White);
//	}
//#endif

}

void ACustomPlayerCharacter::ProcessTraceResult(const FHitResult& HitResult, bool bHighlight)
{
	//check if there was an existing throwable actor
	//remove the hightlight to avoid wrong feedback 
	AThrowableActor* HitThrowableActor = HitResult.bBlockingHit ? Cast<AThrowableActor>(HitResult.GetActor()) : nullptr;
	const bool IsSameActor = (ThrowableActor == HitThrowableActor);
	const bool IsValidTarget = HitThrowableActor && HitThrowableActor->IsIdle();

	//clean up old actor
	if (ThrowableActor && (!IsValidTarget || !IsSameActor))
	{
		ThrowableActor->ToggleHighlight(false);
		ThrowableActor = nullptr;
	}

	//no target, early out
	if (!IsValidTarget)
	{
		return;
	}

	//new target, set the variable and proceed
	if (!IsSameActor)
	{
		ThrowableActor = HitThrowableActor;
		if (bHighlight)
		{
			ThrowableActor->ToggleHighlight(true);
		}
	}

	//if (CharacterThrowState == ECharacterThrowState::RequestingPull)
	//{
	//	//don't allow for pulling objects while running/jogging
	//	if (GetVelocity().SizeSquared() < 100.0f)
	//	{
	//		//ServerPullObject(ThrowableActor);
	//		CharacterThrowState = ECharacterThrowState::Pulling;
	//		ThrowableActor->ToggleHighlight(false);
	//	}
	//}
}

void ACustomPlayerCharacter::OnThrowableAttached(AThrowableActor* InThrowableActor)
{
	CharacterThrowState = ECharacterThrowState::Attached;
	ThrowableActor = InThrowableActor;
	MoveIgnoreActorAdd(ThrowableActor);
}

void ACustomPlayerCharacter::ResetThrowableObject()
{
	//drop object
	if (ThrowableActor)
	{
		ThrowableActor->Drop();
	}
	CharacterThrowState = ECharacterThrowState::None;
	ThrowableActor = nullptr;
}