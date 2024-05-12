// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/Rifle.h"
#include "Components/SkeletalMeshComponent.h"
#include "../../Vermilya_Harlan_ED.h"

// Sets default values
ARifle::ARifle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	SkeletionMesh = CreateDefaultSubobject<USkeletalMeshComponent>(FName("Rifle"));
	pawn = CreateDefaultSubobject<APawn>(FName("Parent Pawn"));
	SetRootComponent(SkeletionMesh);
	shotTimerFloat = 2.0f;

}

void ARifle::ResetCanShoot()
{
	shootDelay = false;


}

void ARifle::Shoot()
{
	if (CanShoot() == true)
	{
		shootDelay = true;
		FActorSpawnParameters spawnBullet;

		spawnBullet.Owner = pawn->GetController();
		spawnBullet.Instigator = pawn;
		GetWorld()->SpawnActor<AActor>(ProjectileClass, SkeletionMesh->GetSocketLocation(SpawnSocketName), pawn->GetBaseAimRotation(), spawnBullet);
		GetWorld()->GetTimerManager().SetTimer(shotCoolDownTimerHandler, this, &ARifle::ResetCanShoot, shotTimerFloat, false);
		rifleActor.Broadcast();
		shootRifle.Broadcast();
	}
}

bool ARifle::CanShoot() const
{
	if (!shootDelay && isAlive)
	{
		return true;
	}

	return !shootDelay;
}

void ARifle::ActionStopped()
{

	shootDelay = false;
	//shootRifle.Broadcast();

}

void ARifle::AttackAnimSync()
{
}

void ARifle::IsDead()
{
	isAlive = false;
}

// Called when the game starts or when spawned
void ARifle::BeginPlay()
{
	Super::BeginPlay();
	pawn = Cast<APawn>(GetParentActor());
}

// Called every frame
void ARifle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

