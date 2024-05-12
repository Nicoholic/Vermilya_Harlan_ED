// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"

//must be the last include in this file 
#include "BaseCharacter.generated.h"

UCLASS()
class VERMILYA_HARLAN_ED_API ABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABaseCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UChildActorComponent* childActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Deafult)
		TSubclassOf<AActor> WeaponClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Deafult)
		class ARifle* rifle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Deafult)
		class UCharacterAnimation* Attack;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		class UHealthComponent* Health;


public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
		void AttackSync();

	UFUNCTION()
		virtual void HandleDead(float percent);

};
