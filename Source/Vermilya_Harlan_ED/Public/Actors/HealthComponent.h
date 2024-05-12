// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "../../Vermilya_Harlan_ED.h"
#include "HealthComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHealthChanged, float, NewHealth);

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class VERMILYA_HARLAN_ED_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UHealthComponent();
	float maxHealth;

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = Variable)
		FOnHealthChanged hitAnim;

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = Variable)
		FOnHealthChanged isDeadDelegate;
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

private:
	float CurrentHealth;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION()
		void HandleDamage(AActor* DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser);
};
