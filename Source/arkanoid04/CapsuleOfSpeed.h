// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameCapsule.h"
#include "CapsuleOfSpeed.generated.h"

/**
 * 
 */
UCLASS()
class ARKANOID04_API ACapsuleOfSpeed : public AGameCapsule
{
	GENERATED_BODY()
	

protected:

	virtual void BeginPlay() override;
};
