// Fill out your copyright notice in the Description page of Project Settings.


#include "Fabrica_Enemigo_Terrestre.h"

AEnemigo* AFabrica_Enemigo_Terrestre::CrearEnemigo(UWorld* World, int TipoEnemigo, FVector Posicion)
{
	if (!World) return nullptr;	
	
			return World->SpawnActor<AEnemigo_Terrestre>(AEnemigo_Terrestre::StaticClass(), Posicion, FRotator::ZeroRotator);
		

}