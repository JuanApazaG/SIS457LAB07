
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameCapsule.h"
#include "CapsuleCreator.generated.h"

UCLASS()
class ARKANOID04_API ACapsuleCreator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACapsuleCreator();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Creacion de capsulas. Es puramente virtual por lo que no necesita una implementacion
	virtual AGameCapsule* CreateCapsule(FString NameCapsule) PURE_VIRTUAL(ACapsuleCreator::CreateCapsule, return nullptr;);

	//Ordena la creacion de una categoria especifica de capsula
	AGameCapsule* OrdenCapsule(FString Category);
};
