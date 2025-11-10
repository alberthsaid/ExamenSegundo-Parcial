// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Director_Horda.h"
#include "Facade.generated.h"

UCLASS()
class BOY_ADVENTURE_API AFacade : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFacade();
	void IniciarHorda(UWorld*World);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void ConstruirHorda(UWorld* Worlr,int TipoEnemigo, FVector Posicion);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//void CrearEnemigo(FString Tipo, FVector Posicion);

};
