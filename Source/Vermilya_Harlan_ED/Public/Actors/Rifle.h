// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Rifle.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDelegate);


UCLASS()
class VERMILYA_HARLAN_ED_API ARifle : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARifle();
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = Variable)
		FDelegate rifleActor;

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = Variable)
		FDelegate shootRifle;

	UPROPERTY(BlueprintAssignable, BlueprintCallable)
		FDelegate fAgent;

	void ResetCanShoot();
	UFUNCTION()
		void Shoot();
	UFUNCTION(BlueprintPure)
		bool CanShoot() const;
	UFUNCTION()
		void ActionStopped();
	UFUNCTION()
		void AttackAnimSync();

	UFUNCTION()
		void IsDead();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	bool isAlive;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		class USkeletalMeshComponent* SkeletionMesh;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		TSubclassOf<AActor> ProjectileClass;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		class APawn* pawn;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		FName SpawnSocketName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		bool shootDelay;

	FTimerHandle shotCoolDownTimerHandler;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		float shotTimerFloat;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
