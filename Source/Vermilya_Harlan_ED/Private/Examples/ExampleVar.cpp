// Fill out your copyright notice in the Description page of Project Settings.


#include "Examples/ExampleVar.h"
#include "../../Vermilya_Harlan_ED.h"

// Sets default values
AExampleVar::AExampleVar()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = false;
	ClassType = AExampleVar::StaticClass();

	//same thing as bind in BP
	OnExampleDelegate.AddDynamic(this, &AExampleVar::ExampleBoundFuction);

	ValueArray.Add(3);
	ValueArray.Add(4);

	PointerArray.Add(this);
	PointerArray.Add(nullptr);
}

// Called when the game starts or when spawned
void AExampleVar::BeginPlay()
{
	Super::BeginPlay();

	//same thing as call in BP

	OnExampleDelegate.Broadcast(this);
	
}

// Called every frame
void AExampleVar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AExampleVar::ExampleBoundFuction(AActor* OtherActor)
{
	UE_LOG(Game, Error, TEXT("Function called by delegate"));
}

