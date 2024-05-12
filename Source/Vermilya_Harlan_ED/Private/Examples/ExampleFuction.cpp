// Fill out your copyright notice in the Description page of Project Settings.


#include "Examples/ExampleFuction.h"
#include "../../Vermilya_Harlan_ED.h"
// Sets default values
AExampleFuction::AExampleFuction()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AExampleFuction::BeginPlay()
{
	Super::BeginPlay();

	GetWorld()->SpawnActor<APawn>(ClassType, GetActorTransform());
	
}

float AExampleFuction::PureFunction() const
{
	return 3.14f;
}

// Called every frame
void AExampleFuction::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AExampleFuction::BlueprintCallable()
{

	UE_LOG(Game, Error, TEXT("BluePrintCallable C++ Fuction"));
}

void AExampleFuction::BluePrintNativeEvent_Implementation()
{
	UE_LOG(Game, Warning, TEXT("BlueNativeEvent C++ Fuction"));
}

//void AExampleFuction::BluePrintImplementableEvent()
//{
//	UE_LOG(Game, Error, TEXT("BluePrintImplementableEvent C++ Fuction"));
//}

// Called to bind functionality to input
void AExampleFuction::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

