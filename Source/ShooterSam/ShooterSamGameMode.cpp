// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShooterSamGameMode.h"

#include "Kismet/GameplayStatics.h"
#include "ShooterSamCharacter.h"
#include "ShooterAI.h"

AShooterSamGameMode::AShooterSamGameMode()
{
	// stub
}

void AShooterSamGameMode::BeginPlay()
{
	Super::BeginPlay();

	AShooterSamCharacter* Player = Cast<AShooterSamCharacter>(UGameplayStatics::GetPlayerPawn(this, 0));

	int index = 0;

	TArray<AActor*> ShooterAIActors;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), AShooterAI::StaticClass(), ShooterAIActors);

	/*for (int LoopIndex = 0; LoopIndex < ShooterAIActors.Num(); LoopIndex++)
	{
		AShooterAI* ShooterAI = Cast<AShooterAI>(ShooterAIActors[LoopIndex]);
		if (ShooterAI) {
			ShooterAI->StartBehaviorTree(Player);
		}
	}*/
	
	for (AActor* ShooterAIActor : ShooterAIActors) {
		AShooterAI* ShooterAI = Cast<AShooterAI>(ShooterAIActor);
		if (ShooterAI) {
			ShooterAI->StartBehaviorTree(Player);
		}
	}
}
