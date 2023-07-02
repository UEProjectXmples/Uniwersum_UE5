#include "UniwersumGameMode.h"
// Fill out your copyright notice in the Description page of Project Settings.

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"

AUniwersumGameMode::AUniwersumGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/_MAIN/Blueprints/BP_EldredCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}