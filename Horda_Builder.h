// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Horda_Enemigos.h"
#include "Horda_Builder.generated.h"

class AHorda_Enemigos;
class Directo_Horda;	

UCLASS()
class BOY_ADVENTURE_API AHorda_Builder : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AHorda_Builder();

	TArray<AActor*> EnemigosHorda;
	virtual AHorda_Enemigos* ObtenerHorda();
	void ConstruirHorda(AHorda_Builder* Builder );

	virtual void AgregarEnemigoTerrestre(FVector Pos) PURE_VIRTUAL(AHordaBuilder::AgregarEnemigoTerrestre, );
	virtual void AgregarEnemigoAereo(FVector Pos) PURE_VIRTUAL(AHordaBuilder::AgregarEnemigoAereo, );
	virtual void AgregarEnemigoAcuatico(FVector Pos) PURE_VIRTUAL(AHordaBuilder::AgregarEnemigoAcuatico, );


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
