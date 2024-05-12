// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Examples/ExampleInterface.h"

#include "ExampleActorWithUserInterface.generated.h"

UCLASS()
class VERMILYA_HARLAN_ED_API AExampleActorWithUserInterface : public AActor, public IExampleInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AExampleActorWithUserInterface();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	void BlueprintCallable() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
