// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsuleCreator.h"

// Sets default values
ACapsuleCreator::ACapsuleCreator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACapsuleCreator::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACapsuleCreator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

AGameCapsule* ACapsuleCreator::OrdenCapsule(FString Category)
{
	AGameCapsule* Capsules = CreateCapsule(Category);
	return Capsules;
}
