// Fill out your copyright notice in the Description page of Project Settings.


#include "Enemigo_Acuatico.h"

AEnemigo_Acuatico::AEnemigo_Acuatico()
{
	if (MallaEnemigo)
	{
		static ConstructorHelpers::FObjectFinder<UMaterial> Material(TEXT("Material'/Game/StarterContent/Materials/M_Water_Ocean.M_Water_Ocean'"));
		if (Material.Succeeded())
		{
			MallaEnemigo->SetMaterial(0, Material.Object);
		}
	}
	FloatSpeed = 4.0f;
	bPuedeMoverse = FMath::RandBool();
}