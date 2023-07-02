// Copyright Epic Games, Inc. All Rights Reserved.

#include "Uniwersum_v0_0_1_UE5GameMode.h"
#include "Uniwersum_v0_0_1_UE5Character.h"
#include "UObject/ConstructorHelpers.h"

AUniwersum_v0_0_1_UE5GameMode::AUniwersum_v0_0_1_UE5GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
