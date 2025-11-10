// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Horda_Builder.h"
#include "Horda_Basica_Builder.generated.h"
//#include "Horda_Enemigos.h"

class Horda_Enemigos;
class AEnemigo_Acuatico;
class AEnemigo_Aereo;
class AEnemigo_Terrestre;

/**
 * 
 */
UCLASS()
class BOY_ADVENTURE_API AHorda_Basica_Builder : public AHorda_Builder
{
	GENERATED_BODY()
	
public:
	AHorda_Basica_Builder();
	virtual void AgregarEnemigoTerrestre(FVector Pos) override;
	virtual void AgregarEnemigoAereo(FVector Pos) override;
	virtual void AgregarEnemigoAcuatico(FVector Pos) override;
	AHorda_Enemigos* HordaActual;
};
