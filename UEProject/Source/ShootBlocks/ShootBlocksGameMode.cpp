// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShootBlocksGameMode.h"
#include "ShootBlocksCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShootBlocksGameMode::AShootBlocksGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
