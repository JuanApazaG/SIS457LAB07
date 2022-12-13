// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameCapsule.h"
#include "CapsuleOfMultiplication.generated.h"

/**
 * 
 */
UCLASS()
class ARKANOID04_API ACapsuleOfMultiplication : public AGameCapsule
{
	GENERATED_BODY()
	
protected:
	virtual void BeginPlay() override;
};
