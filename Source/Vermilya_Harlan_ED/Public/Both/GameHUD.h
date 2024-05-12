// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameHUD.generated.h"

/**
 * 
 */
UCLASS()
class VERMILYA_HARLAN_ED_API UGameHUD : public UUserWidget
{
	GENERATED_BODY()
protected:
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	class UProgressBar* HealthBar;

	UPROPERTY(BlueprintReadWrite);
	class UMaterialInstanceDynamic* DynamicMaterial;
	UPROPERTY(EditAnywhere, BlueprintReadWrite);
	FLinearColor Color;
	UPROPERTY(EditAnywhere, BlueprintReadWrite);
	FLinearColor EnemyColor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite);
	class UMaterialInterface* CrosshairMaterial;

	UPROPERTY(BlueprintReadWrite, meta = (BindWidget))
		class UImage* crosshair;


public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Health")
		void SetHealth(float health);
	virtual void SetHealth_Implementation(float percent);

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite);
	FVector Endpoint;

	UFUNCTION(BlueprintCallable, Category = "HUD")
	void SetCrosshair(class UTexture2D* CrosshairTexture);
};
