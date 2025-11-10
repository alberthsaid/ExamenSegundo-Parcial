// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Fabrica_Enemigo.h"
#include "Enemigo_Acuatico.h"
#include "Fabrica_Enemigo_Acuatico.generated.h"

/**
 * 
 */
UCLASS()
class BOY_ADVENTURE_API AFabrica_Enemigo_Acuatico : public AFabrica_Enemigo
{
	GENERATED_BODY()
public:

	virtual AEnemigo* CrearEnemigo(UWorld* World,int TipoEnemigo, FVector Posicion) override;
};
