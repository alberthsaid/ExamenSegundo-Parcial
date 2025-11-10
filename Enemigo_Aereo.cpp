// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo_Aereo.h"

AEnemigo_Aereo::AEnemigo_Aereo()
{
	
	if (MallaEnemigo)
	{
		static ConstructorHelpers::FObjectFinder<UMaterial> Material(TEXT("Material'/Game/StarterContent/Materials/M_Basic_Floor.M_Basic_Floor'"));
		
		if (Material.Succeeded())
		{
			MallaEnemigo->SetMaterial(0, Material.Object);
		}
	}

	FloatSpeed = 5.0f;
	bPuedeMoverse = FMath::RandBool ();
}

