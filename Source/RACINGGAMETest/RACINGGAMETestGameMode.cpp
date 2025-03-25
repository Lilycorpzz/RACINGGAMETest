// Copyright Epic Games, Inc. All Rights Reserved.

#include "RACINGGAMETestGameMode.h"
#include "RACINGGAMETestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ARACINGGAMETestGameMode::ARACINGGAMETestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
