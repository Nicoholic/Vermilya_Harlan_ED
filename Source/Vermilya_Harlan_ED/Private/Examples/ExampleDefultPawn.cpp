// Fill out your copyright notice in the Description page of Project Settings.


#include "Examples/ExampleDefultPawn.h"
#include "../../Vermilya_Harlan_ED.h"
#include "EngineUtils.h"
#include "Examples/ExampleActorWithUserInterface.h"

// Sets default values
AExampleDefultPawn::AExampleDefultPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AExampleDefultPawn::BeginPlay()
{
	Super::BeginPlay();
	
	//UpCast
	AActor* Actor = this;
	//DownCast
	APawn* Pawn = Cast<APawn>(Actor);
	if (Pawn)
	{
		//vaild
		UE_LOG(Game, Log, TEXT("actor is %s"), *Pawn->GetName());
	}
	else
	{
		UE_LOG(Game, Error, TEXT("Numbers are %d or %f"), 4, 7.3f);
		//not valid
	}
	UE_LOG(Game, Warning, TEXT("Numbers are %d or %f"), *GetVelocity().ToString());


	for (TActorIterator<AExampleActorWithUserInterface> itr(GetWorld()); itr; ++itr)
	{
		 Actor = *itr;

		UExampleInterface* U = Cast< UExampleInterface>(Actor);
		if (U)
		{
			UE_LOG(Game, Warning, TEXT("I AM U"));
		}


		IExampleInterface* I = Cast<IExampleInterface>(Actor);
		if (I)
		{
			I->BlueprintCallable();
			UE_LOG(Game, Warning, TEXT("I AM I"));
		}
	}
}

// Called every frame
void AExampleDefultPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AExampleDefultPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

