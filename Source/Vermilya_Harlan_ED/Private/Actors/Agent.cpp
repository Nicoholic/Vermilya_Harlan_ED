// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/Agent.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "../../Vermilya_Harlan_ED.h"
#include "Actors/Rifle.h"


AAgent::AAgent()
{
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	GetMesh()->SetRelativeRotation(FRotator(0.0f, -90.0f, 0.0f));
	GetMesh()->SetRelativeLocation(FVector(0.0f, 0.0f, -90.0f));

	red = FLinearColor::Red;
	name = "BodyColor";
}

void AAgent::BeginPlay()
{
	Super::BeginPlay();

	GetMesh()->SetVectorParameterValueOnMaterials(name, FVector(red));
		
}

void AAgent::Tick(float DeltaTime)
{

	Super::Tick(DeltaTime);

	rifle->Shoot();
}
