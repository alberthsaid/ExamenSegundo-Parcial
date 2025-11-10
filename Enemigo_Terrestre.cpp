// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo_Terrestre.h"

AEnemigo_Terrestre::AEnemigo_Terrestre()
{

	if (MallaEnemigo)
	{
		static ConstructorHelpers::FObjectFinder<UMaterial> Material(TEXT("Material'/Game/StarterContent/Materials/M_Metal_Rust.M_Metal_Rust'"));

		if (Material.Succeeded())
		{
			MallaEnemigo->SetMaterial(0, Material.Object);
		}
	}
	FloatSpeed = 3.0f;	
	bPuedeMoverse = FMath::RandBool();
}