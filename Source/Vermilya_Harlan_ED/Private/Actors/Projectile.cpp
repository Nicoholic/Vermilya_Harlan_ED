// Fill out your copyright notice in the Description page of Project Settings.

//this must be first 
#include "Actors/Projectile.h"

#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "../../Vermilya_Harlan_ED.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "GameFramework/Character.h"

//C:\Users\harla\OneDrive\Documents\Unreal Projects\Vermilya_Harlan_ED\Source\Vermilya_Harlan_ED\Vermilya_Harlan_ED.h
// Sets default values
AProjectile::AProjectile()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	SphereCollision = CreateDefaultSubobject<USphereComponent>("SphereCollision");

	//this is how you set as root componet 
	//just like dragging the collision sphere onto the root 
	SetRootComponent(SphereCollision);

	//add dynamic is like the bind event
	SphereCollision->OnComponentBeginOverlap.AddDynamic(this, &AProjectile::OverlapBegin);
	SphereCollision->SetRelativeScale3D(FVector(.18f, .18f, .18f));

	SphereMesh = CreateDefaultSubobject<UStaticMeshComponent>("SphereMesh");

	SphereMesh->SetupAttachment(SphereCollision);
	SphereMesh->SetRelativeScale3D(FVector(.6f, .6f, .6f));

	SphereMesh->SetCollisionProfileName("NoCollision");

	ProjectileMovement = CreateDefaultSubobject<UProjectileMovementComponent>("ProjectileMovement");
	ProjectileMovement->InitialSpeed = 1900;
	ProjectileMovement->MaxSpeed = 2100;
	ProjectileMovement->ProjectileGravityScale = 0;


	//bad habit 
	//only allowed here 
	static ConstructorHelpers::FObjectFinder<UStaticMesh> Asset(TEXT("StaticMesh'/Engine/BasicShapes/Sphere.Sphere'"));
	SphereMesh->SetStaticMesh(Asset.Object);
	//end bad habit


}

// Called when the game starts or when spawned
void AProjectile::BeginPlay()
{
	Super::BeginPlay();

	OwningController = Cast<AController>(GetOwner());

	FTimerHandle TimerHandle;

	GetWorld()->GetTimerManager().SetTimer(TimerHandle, this, &AProjectile::K2_DestroyActor, 3.f);



	if (OwningController)
	{

	}

	else
	{
		UE_LOG(LogTemp, Error, TEXT("Owning controller is not valid"));

	}
}

// Called every frame
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProjectile::HandleHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit)
{
	//This will never get called 
	//UE_LOG(Game, Warning, TEXT("Hello"));

	ACharacter* HitCharacter = Cast<ACharacter>(OtherActor);

	if (HitCharacter)
	{
		HitCharacter->TakeDamage(bulletDMG, FDamageEvent(), GetInstigatorController(), this);
	}

	Destroy();
}

void AProjectile::OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyindex, bool bFrameSweep, const FHitResult& SweepResult)
{
	



	// Create a damage event (optional, you can set it to nullptr if not needed)
	FDamageEvent DamageEvent;

	// Call TakeDamage on the character
	OtherActor->TakeDamage(bulletDMG, DamageEvent, OwningController, this);

	// Destroy the projectile after applying damage
	Destroy();



}

