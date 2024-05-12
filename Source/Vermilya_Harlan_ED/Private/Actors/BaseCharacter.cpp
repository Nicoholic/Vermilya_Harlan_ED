// Fill out your copyright notice in the Description page of Project Settings.


#include "Actors/BaseCharacter.h"
#include "Components/ChildActorComponent.h"
#include "Both/CharacterAnimation.h"
#include "Actors/Rifle.h"
#include "Actors/HealthComponent.h"

// Sets default values
ABaseCharacter::ABaseCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	GetMesh()->SetRelativeRotation(FRotator(0.f, -90.f, 0.f));
	GetMesh()->SetRelativeLocation(FVector(0.f, 0.f, -90.f));
	childActor = CreateDefaultSubobject<UChildActorComponent>(FName("Child Actor"));
	childActor->SetupAttachment(GetMesh());

    childActor->SetChildActorClass(WeaponClass);
    childActor->SetupAttachment(GetMesh(), FName("PlaceWeaponHere"));
    Health = CreateDefaultSubobject<UHealthComponent>(FName("Health"));

   
    //childActor->SetRelativeLocation(FVector(0.f, 0.f, 0.f));
}

// Called when the game starts or when spawned
void ABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
   


    rifle = Cast<ARifle>(childActor->GetChildActor());
    if (!rifle)
    {
        ABaseCharacter::K2_DestroyActor();
    }
    Attack = Cast<UCharacterAnimation>(GetMesh()->GetAnimInstance());
    if (!Attack)
    {
        ABaseCharacter::K2_DestroyActor();
    }

    FActorSpawnParameters SpawnParams;
    ARifle* SpawnedActor = GetWorld()->SpawnActor<ARifle>(ARifle::StaticClass(), GetActorLocation(), GetActorRotation(), SpawnParams);


    rifle->shootRifle.AddDynamic(this, &ABaseCharacter::AttackSync);

    Health->hitAnim.AddDynamic(Attack, &UCharacterAnimation::HurtAnimation);
    Health->isDeadDelegate.AddDynamic(this, &ABaseCharacter::HandleDead);
}

// Called every frame
void ABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

    

}

void ABaseCharacter::AttackSync()
{
	Attack->AttackAnim();
}

void ABaseCharacter::HandleDead(float percent)
{
    Attack->DeadAnimation(percent);
    SetActorEnableCollision(false);
    rifle->IsDead();
}



