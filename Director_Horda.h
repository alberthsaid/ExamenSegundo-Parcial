// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Horda_Builder.h"
#include "Director_Horda.generated.h"

class AHorda_Builder;
UCLASS()
class BOY_ADVENTURE_API ADirector_Horda : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADirector_Horda();
	void ConstruirHorda(AHorda_Builder* HordaBuilder);
	



};
