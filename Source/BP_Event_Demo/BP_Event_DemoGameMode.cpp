// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "BP_Event_DemoGameMode.h"
#include "BP_Event_DemoCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABP_Event_DemoGameMode::ABP_Event_DemoGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
