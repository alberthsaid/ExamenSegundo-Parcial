// Fill out your copyright notice in the Description page of Project Settings.


#include "Horda_Basica_Builder.h"
#include "Fabrica_Enemigo_Aereo.h"
#include "Fabrica_Enemigo_Acuatico.h"
#include "Fabrica_Enemigo_Terrestre.h"
#include "Horda_Enemigos.h"
#include "Enemigo.h"
class Horda_Enemigos;

AHorda_Basica_Builder::AHorda_Basica_Builder()
{
	
}
void AHorda_Basica_Builder::AgregarEnemigoTerrestre(FVector Pos)
{
	AFabrica_Enemigo_Terrestre* FabricaTerrestre = GetWorld()->SpawnActor<AFabrica_Enemigo_Terrestre>(AFabrica_Enemigo_Terrestre::StaticClass());
	AEnemigo* EnemigoTerrestre = FabricaTerrestre->CrearEnemigo(GetWorld(), 1, Pos);
	HordaActual->AgregarEnemigo(Cast<AActor>(EnemigoTerrestre));
	for (int a = 0; a < 10; a++)
	{
		FVector SpawnLocation(a * 400 - 1450.0f, 1180.0f, 130.0f);
		AEnemigo_Terrestre* EnemigoTerrestre = GetWorld()->SpawnActor<AEnemigo_Terrestre>(AEnemigo_Terrestre::StaticClass(), SpawnLocation, FRotator::ZeroRotator);

	}
}
void AHorda_Basica_Builder::AgregarEnemigoAereo(FVector Pos)
{
	AFabrica_Enemigo_Aereo* FabricaAerea = GetWorld()->SpawnActor<AFabrica_Enemigo_Aereo>(AFabrica_Enemigo_Aereo::StaticClass());
	AEnemigo* EnemigoAereo = FabricaAerea->CrearEnemigo(GetWorld(), 1, Pos);
	HordaActual->AgregarEnemigo(Cast<AActor>(EnemigoAereo));
	for (int a = 0; a < 10; a++)
	{
		FVector SpawnLocation(a * 400 - 1450.0f, 1180.0f, 130.0f);
		AEnemigo_Aereo* EnemigoAereo = GetWorld()->SpawnActor<AEnemigo_Aereo>(AEnemigo_Aereo::StaticClass(), SpawnLocation, FRotator::ZeroRotator);

	}
}
void AHorda_Basica_Builder::AgregarEnemigoAcuatico(FVector Pos)
{
	AFabrica_Enemigo_Acuatico* FabricaAcuatica = GetWorld()->SpawnActor<AFabrica_Enemigo_Acuatico>(AFabrica_Enemigo_Acuatico::StaticClass());
	AEnemigo* EnemigoAcuatico = FabricaAcuatica->CrearEnemigo(GetWorld(), 1, Pos);
	HordaActual->AgregarEnemigo(Cast<AActor>(EnemigoAcuatico));
	for (int a = 0; a < 10; a++)
	{
		FVector SpawnLocation(a * 400 - 1450.0f, 1180.0f, 130.0f);
		AEnemigo_Acuatico* EnemigoAcuatico = GetWorld()->SpawnActor<AEnemigo_Acuatico>(AEnemigo_Acuatico::StaticClass(), SpawnLocation, FRotator::ZeroRotator);

	}
}
