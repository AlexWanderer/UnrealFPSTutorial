// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"

#include "FPSHUD.h"

#include "GameFramework/GameMode.h"
#include "FPSGameMode.generated.h"

/**
 * 
 */
UCLASS()
class FPSPROJECT_API AFPSGameMode : public AGameMode
{
	GENERATED_BODY()
	
	public:

		//Constructor
		AFPSGameMode(const FObjectInitializer& ObjectInitializer);

		//The function that gets called at the start of the game.
		virtual void StartPlay() override;

		
	
	
};
