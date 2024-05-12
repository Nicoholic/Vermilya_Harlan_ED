// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/BaseCharacter.h"
#include "Agent.generated.h"

/**
 *
 */
UCLASS()
class VERMILYA_HARLAN_ED_API AAgent : public ABaseCharacter
{
	GENERATED_BODY()


public:
	// Sets default values for this actor's properties
	AAgent();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "YourActor")
		FLinearColor red;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "YourActor")
		FName name;
};


