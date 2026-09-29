// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"

#include "ShooterSamCharacter.h"

#include "ShooterAI.generated.h"

/**
 * 
 */
UCLASS()
class SHOOTERSAM_API AShooterAI : public AAIController
{
	GENERATED_BODY()
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	APawn* PlayerPawn;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere) UBehaviorTree* EnemyAIBehaviorTree;

	AShooterSamCharacter* PlayerCharacter;
	AShooterSamCharacter* MyCharacter;

	void StartBehaviorTree(AShooterSamCharacter* Player);

};
