// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Enemigo.h"
#include "Fabrica_Enemigo.generated.h"

UCLASS()
class BOY_ADVENTURE_API AFabrica_Enemigo : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AFabrica_Enemigo();
	virtual AEnemigo* CrearEnemigo(UWorld* World, int TipoEnemigo, FVector Posicion)
		PURE_VIRTUAL(AFabricaEnemigo::CrearEnemigo, return nullptr;);

	AEnemigo* Generar(UWorld* World, int TipoEnemigo, FVector Posicion)
	{
		AEnemigo* Nuevo = CrearEnemigo(World, TipoEnemigo, Posicion);
		UE_LOG(LogTemp, Warning, TEXT("Generando enemigo %s"), TipoEnemigo);
		return Nuevo;
	}

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
