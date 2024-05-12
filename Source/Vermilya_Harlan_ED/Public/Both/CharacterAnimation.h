// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "CharacterAnimation.generated.h"

/**
 * 
 */
UCLASS()
class VERMILYA_HARLAN_ED_API UCharacterAnimation : public UAnimInstance
{
	GENERATED_BODY()

protected:
	void NativeUpdateAnimation(float DeltaSeconds) override;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Default);
	float Velocity;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Default)
		class UAnimSequenceBase* AttackAnime;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Default)
		class UAnimSequenceBase* HurtAsset;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Default)
		class UAnimSequenceBase* DeathAsset;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = Default)
		TArray<UAnimSequenceBase*> MultiDeathAssets;
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void AttackAnim();
	virtual void AttackAnim_Implementation();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void PreviewUpdate();
	virtual void PreviewUpdate_Implementation();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void HurtAnimation(float percent);
	virtual void HurtAnimation_Implementation(float percent);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
		void DeadAnimation(float percent);
	virtual void DeadAnimation_Implementation(float percent);


};
