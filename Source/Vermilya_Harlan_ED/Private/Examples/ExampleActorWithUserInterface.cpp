// Fill out your copyright notice in the Description page of Project Settings.


#include "Examples/ExampleActorWithUserInterface.h"
#include "../../Vermilya_Harlan_ED.h"
// Sets default values
AExampleActorWithUserInterface::AExampleActorWithUserInterface()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AExampleActorWithUserInterface::BeginPlay()
{
	Super::BeginPlay();
	
}

void AExampleActorWithUserInterface::BlueprintCallable()
{
	UE_LOG(Game, Error, TEXT("in C++ BlueprintCallable"))
}

// Called every frame
void AExampleActorWithUserInterface::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

