// Fill out your copyright notice in the Description page of Project Settings.


#include "Facade.h"
#include "Director_Horda.h"
#include "Horda_Basica_Builder.h"

class Director_Horda;

// Sets default values
AFacade::AFacade()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AFacade::IniciarHorda(UWorld* World)
{
	if (!World) return;
	int TipoEnemigo = 1;
	FVector Posicion(0.0f, 0.0f, 0.0f);
	ConstruirHorda(World, TipoEnemigo, Posicion);
}
void AFacade::ConstruirHorda(UWorld* World,int TipoEnemigo,FVector Posicion)
{
	Director_Horda* Director = new Director_Horda();
	AHorda_Builder* Builder = World->SpawnActor<AHorda_Basica_Builder>(AHorda_Basica_Builder::StaticClass());
	Director->ConstruirHorda(Builder);
	AHorda_Enemigos* Horda = Builder->ObtenerHorda();
	
}
