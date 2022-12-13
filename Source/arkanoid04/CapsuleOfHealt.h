// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameCapsule.h"
#include "CapsuleOfHealt.generated.h"

/**
 * 
 */
UCLASS()
class ARKANOID04_API ACapsuleOfHealt : public AGameCapsule
{
	GENERATED_BODY()
public:
	
	ACapsuleOfHealt();

protected:

	virtual void BeginPlay() override;

};
