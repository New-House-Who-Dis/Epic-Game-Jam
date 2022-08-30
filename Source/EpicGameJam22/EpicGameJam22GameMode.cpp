// Copyright Epic Games, Inc. All Rights Reserved.

#include "EpicGameJam22GameMode.h"
#include "EpicGameJam22Character.h"
#include "UObject/ConstructorHelpers.h"

AEpicGameJam22GameMode::AEpicGameJam22GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
