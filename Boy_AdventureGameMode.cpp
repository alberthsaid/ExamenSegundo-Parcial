// Copyright Epic Games, Inc. All Rights Reserved.

#include "Boy_AdventureGameMode.h"
#include "Boy_AdventureCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABoy_AdventureGameMode::ABoy_AdventureGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
