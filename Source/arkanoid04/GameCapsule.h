// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "GameCapsule.generated.h"

/**
 * 
 */
UCLASS()
class ARKANOID04_API AGameCapsule : public AStaticMeshActor
{
	GENERATED_BODY()

public:

	AGameCapsule();

protected:

	virtual void BeginPlay() override;
	//Nombre de la capsula
	FString CapsuleName;

public:

	virtual void Tick(float DeltaTime) override;

	FString GetCapsuleName();
};
