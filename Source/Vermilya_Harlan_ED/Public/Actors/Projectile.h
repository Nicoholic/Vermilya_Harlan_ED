// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
//last include 
#include "Projectile.generated.h"


UCLASS()
class VERMILYA_HARLAN_ED_API AProjectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AProjectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly);
	class USphereComponent* SphereCollision;
	FVector size = FVector(.18f, .18f, .18f);
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly);
	class UStaticMeshComponent* SphereMesh;
	UPROPERTY(EditdefaultsOnly, BlueprintReadOnly)
		class UProjectileMovementComponent* ProjectileMovement;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	float bulletDMG = 1.0f;

	AController* OwningController;

private:
	UFUNCTION()
	void HandleHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);

	UFUNCTION()
		void OverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyindex, bool bFrameSweep, const FHitResult& SweepResult);
};
