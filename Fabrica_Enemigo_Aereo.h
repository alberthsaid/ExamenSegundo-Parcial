// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Fabrica_Enemigo.h"
#include "Enemigo_Aereo.h"
#include "Fabrica_Enemigo_Aereo.generated.h"

/**
 * 
 */
UCLASS()
class BOY_ADVENTURE_API AFabrica_Enemigo_Aereo : public AFabrica_Enemigo
{
	GENERATED_BODY()
	
	public:
		virtual AEnemigo* CrearEnemigo(UWorld* world,int Tipo, FVector Posicion) override;
};
