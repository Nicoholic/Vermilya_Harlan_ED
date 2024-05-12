// Fill out your copyright notice in the Description page of Project Settings.


#include "Both/CharacterAnimation.h"
#include "Animation/AnimSequenceBase.h"
#include "../../Vermilya_Harlan_ED.h"

void UCharacterAnimation::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	APawn* Pawn = TryGetPawnOwner();

	if (nullptr != Pawn)
	{
		// is valid

		Velocity = Pawn->GetVelocity().Size();

	}
	else
	{
		// is not valid
	}

}

void UCharacterAnimation::AttackAnim_Implementation()
{
	PlaySlotAnimationAsDynamicMontage(AttackAnime, FName("Action"));
}

void UCharacterAnimation::PreviewUpdate_Implementation()
{
	
}

void UCharacterAnimation::HurtAnimation_Implementation(float percent)
{
	PlaySlotAnimationAsDynamicMontage(HurtAsset, FName("Action"));
}

void UCharacterAnimation::DeadAnimation_Implementation(float percent)
{
	int32 index = FMath::RandRange(0, MultiDeathAssets.Num() - 1);
	DeathAsset = MultiDeathAssets[index];
}
