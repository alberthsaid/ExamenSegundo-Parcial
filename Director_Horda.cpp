// Fill out your copyright notice in the Description page of Project Settings.


#include "Director_Horda.h"

// Sets default values
ADirector_Horda::ADirector_Horda()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}
void ADirector_Horda::ConstruirHorda(AHorda_Builder* HordaBuilder)
{

	HordaBuilder->AgregarEnemigoTerrestre(FVector(100, 0, 0));
	HordaBuilder->AgregarEnemigoAereo(FVector(200, 0, 100));
	HordaBuilder->AgregarEnemigoAcuatico(FVector(300, 0, -100));
}
// Called when the game starts or when spawned

