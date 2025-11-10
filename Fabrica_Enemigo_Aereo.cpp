// Fill out your copyright notice in the Description page of Project Settings.


#include "Fabrica_Enemigo_Aereo.h"

AEnemigo* AFabrica_Enemigo_Aereo::CrearEnemigo(UWorld* World,int Tipo, FVector Posicion)
{
	if (!World) return nullptr;
		
			return World->SpawnActor<AEnemigo_Aereo>(AEnemigo_Aereo::StaticClass(), Posicion, FRotator::ZeroRotator);

}