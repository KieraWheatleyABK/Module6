// Copyright Epic Games, Inc. All Rights Reserved.

#include "Module6GameMode.h"
#include "Module6Character.h"
#include "UObject/ConstructorHelpers.h"

AModule6GameMode::AModule6GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
