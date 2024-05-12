// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionTypes.h"
#include "AgentController.generated.h"

/**
 * 
 */
UCLASS()
class VERMILYA_HARLAN_ED_API AAgentController : public AAIController
{
	GENERATED_BODY()

public:

	UFUNCTION()
	void TargetPositionUpdate(AActor* aptr, FAIStimulus stimulus);


private:
	
	virtual void OnPosses(APawn* pawn);

protected:

	UPROPERTY()
	class UBehaviorTree* behaviorTree;

	UPROPERTY()
	FName playerKeyName;

	UPROPERTY()
	class UAISenseConfig_Sight* sightConfig;
};
