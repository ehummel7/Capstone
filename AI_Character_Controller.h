// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "AI_Character_Controller.generated.h"

/**
 * 
 */
UCLASS()
class CAPSTONE_API AAI_Character_Controller : public AAIController
{
	GENERATED_BODY()

public:
	AAI_Character_Controller();

	virtual void BeginPlay() override;

	virtual void Possess();

	virtual void Tick(float DeltaTime) override;
	
	virtual FRotator GetControlRotation() const override;

	UFUNCTION()
		void OnPawnDetected(TArray<AActor*> DetectedPawns);
};
