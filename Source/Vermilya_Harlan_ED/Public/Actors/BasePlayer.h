// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actors/BaseCharacter.h"
#include "BasePlayer.generated.h"

class USpringArmComponent;
class UCameraComponent;
/**
 * 
 */
UCLASS()
class VERMILYA_HARLAN_ED_API ABasePlayer : public ABaseCharacter
{
	GENERATED_BODY()
public:
	ABasePlayer();
	
	
protected:
	virtual void BeginPlay() override;

	virtual void HandleDead(float percent) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	class USpringArmComponent* SpringArm;
	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	class UCameraComponent* CoreCam;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
		TSubclassOf<class UGameHUD> HUD;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite)
	class APlayerController* playerCon;

	void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
private:
	void InputAxisMoveForward(float AxisValue);
	void InputAxisMoveRight(float AxisValue);
	void Shoot();
};
