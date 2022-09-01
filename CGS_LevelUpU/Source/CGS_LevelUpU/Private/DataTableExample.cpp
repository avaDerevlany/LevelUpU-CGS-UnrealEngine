// Fill out your copyright notice in the Description page of Project Settings.


#include "DataTableExample.h"

// Sets default values
ADataTableExample::ADataTableExample()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ADataTableExample::BeginPlay()
{
	Super::BeginPlay();
	
	if (effectsTable)
	{
		static const FString contextString(TEXT("Effect Context"));
		FEffectStats* effectStats = effectsTable->FindRow<FEffectStats>(FName(selectedEffect), contextString, true);

		effectType = effectStats->effectType;
		effectStrength = effectStats->effectStrength;
		description = effectStats->effectDescription;
	}
}

// Called every frame
void ADataTableExample::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

