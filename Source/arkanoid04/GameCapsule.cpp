// Fill out your copyright notice in the Description page of Project Settings.


#include "GameCapsule.h"

AGameCapsule::AGameCapsule()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshCapsule(TEXT("StaticMesh'/Game/Meshes/SM_Capsule.SM_Capsule'"));
	GetStaticMeshComponent()->SetStaticMesh(MeshCapsule.Object);
	GetStaticMeshComponent()->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
	GetStaticMeshComponent()->SetRelativeScale3D_Direct(FVector(0.5f, 1.25f, 0.5f));
	SetActorEnableCollision(true);
}

void AGameCapsule::BeginPlay()
{
	Super::BeginPlay();
}

void AGameCapsule::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

FString AGameCapsule::GetCapsuleName()
{

	return CapsuleName;
}
