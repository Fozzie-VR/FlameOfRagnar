// Copyright Epic Games, Inc. All Rights Reserved.

#include "FlameOfRagnarGameMode.h"
#include "FlameOfRagnarCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFlameOfRagnarGameMode::AFlameOfRagnarGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
