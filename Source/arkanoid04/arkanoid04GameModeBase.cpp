// Copyright Epic Games, Inc. All Rights Reserved.


#include "arkanoid04GameModeBase.h"
#include "HelpCapsule.h"

Aarkanoid04GameModeBase::Aarkanoid04GameModeBase()
{
}

void Aarkanoid04GameModeBase::BeginPlay()
{
	Super::BeginPlay();

	//Spawn de las capsulas de ayuda
	ACapsuleCreator* HC = GetWorld()->SpawnActor<AHelpCapsule>(AHelpCapsule::StaticClass());

	//Spawn de la capsula de vida
	AGameCapsule* Capsule = HC->OrdenCapsule("Healt");
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Turquoise, FString::Printf(TEXT("Capsula de %s"), *Capsule->GetCapsuleName()));

	//Spawn de la capsula de multiplicacion
	Capsule = HC->OrdenCapsule("Multiplication");
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Cyan, FString::Printf(TEXT("Capsula de %s"), *Capsule->GetCapsuleName()));

	//Spawn de la capsula de velocidad
	Capsule = HC->OrdenCapsule("Speed");
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green, FString::Printf(TEXT("Capsula de %s"), *Capsule->GetCapsuleName()));
}
