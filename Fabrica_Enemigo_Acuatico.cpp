// Fill out your copyright notice in the Description page of Project Settings.


#include "Fabrica_Enemigo_Acuatico.h"
#include "Enemigo_Acuatico.h"	

AEnemigo* AFabrica_Enemigo_Acuatico::CrearEnemigo(UWorld* World, int  TipoEnemigo, FVector Posicion)
{
	if (!World) return nullptr;
	return World->SpawnActor<AEnemigo_Acuatico>(AEnemigo_Acuatico::StaticClass(), Posicion, FRotator::ZeroRotator);
		
	
}