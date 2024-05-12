// Fill out your copyright notice in the Description page of Project Settings.


#include "Both/GameHUD.h"
#include "Components/ProgressBar.h"
#include "Components/Image.h"




void UGameHUD::SetHealth_Implementation(float percent)
{
	//HealthBar = <UProgressBar>(GetWidgetFromName(TEXT("HealthBar")));
	
	
		HealthBar->SetPercent(percent);
	
}

void UGameHUD::SetCrosshair(class UTexture2D* CrosshairTexture)
{
    Color = FLinearColor::Green;

    EnemyColor = FLinearColor::Red;


    if (crosshair)
    {
        DynamicMaterial = UMaterialInstanceDynamic::Create(CrosshairMaterial, this);
        if (DynamicMaterial)
        {
            DynamicMaterial->SetTextureParameterValue("crosshair", CrosshairTexture);
            crosshair->SetBrushFromMaterial(DynamicMaterial);

        }
    }
}
