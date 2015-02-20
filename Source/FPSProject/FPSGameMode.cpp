// Fill out your copyright notice in the Description page of Project Settings.

#include "FPSProject.h"
#include "FPSGameMode.h"


AFPSGameMode::AFPSGameMode(const class FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	//Load the Blueprint of the FPSCharacter we created.
	static ConstructorHelpers::FObjectFinder<UBlueprint> PlayerPawnObject(TEXT("Blueprint'/Game/Blueprints/BP_FPSCharacter.BP_FPSCharacter'"));

	//Set the HUD we created as the default.
	HUDClass = AFPSHUD::StaticClass();

	//Set the pawn that will be created when the game starts as the blueprint that extends the FPS Character we created.
	if (PlayerPawnObject.Object != NULL)
	{
		DefaultPawnClass = (UClass*)PlayerPawnObject.Object->GeneratedClass;
	}
}


void AFPSGameMode::StartPlay()
{
	Super::StartPlay();

	StartMatch();

	//Test the function by printing Hello World.
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("HELLO WORLD"));
	}
}