// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CapsuleCreator.h"
#include "HelpCapsule.generated.h"

/**
 * 
 */
UCLASS()
class ARKANOID04_API AHelpCapsule : public ACapsuleCreator
{
	GENERATED_BODY()
public:

	//Creacion de capsulas. Es puramente virtual por lo que no necesita una implementacion
	virtual AGameCapsule* CreateCapsule(FString NameCapsule) override;

};
