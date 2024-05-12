// Fill out your copyright notice in the Description page of Project Settings.

//this must be first
#include "Actors/BasePlayer.h"
#include "Both/CharacterAnimation.h"
#include "Actors/Rifle.h"

#include "GameFramework/SpringArmComponent.h"
#include "Camera/CameraComponent.h"
#include "Both/GameHUD.h"
#include "Actors/HealthComponent.h"




ABasePlayer::ABasePlayer()
{
	GetMesh()->SetRelativeRotation(FRotator(0.0f, -90.0f,0.0f ));
	GetMesh()->SetRelativeLocation(FVector(0.0f, 0.0f, -90.0f));
	//set spring arm 
	SpringArm = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
	SpringArm->SetRelativeLocation(FVector(0.f,80.0f,90.f));
	SpringArm->TargetArmLength = 285.0f;
	SpringArm->SetupAttachment(GetRootComponent());
	SpringArm->bUsePawnControlRotation = true;

	CoreCam = CreateDefaultSubobject<UCameraComponent>("CoreCam");
	CoreCam->SetupAttachment(SpringArm);
	

	playerCon = Cast<APlayerController>(GetController());
}

void ABasePlayer::SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//Turning 
	PlayerInputComponent->BindAxis("TurnRight", this, &ABasePlayer::AddControllerYawInput);

	//look up & down 
	PlayerInputComponent->BindAxis("LookUp", this, &ABasePlayer::AddControllerPitchInput);
	

	//Movement
	PlayerInputComponent->BindAxis("MoveForward", this, &ABasePlayer::InputAxisMoveForward);

	//move right 
	PlayerInputComponent->BindAxis("MoveRight", this, &ABasePlayer::InputAxisMoveRight);

	//attack 
	PlayerInputComponent->BindAction("AttackInput", IE_Pressed, this, &ABasePlayer::Shoot);
}

void ABasePlayer::InputAxisMoveForward(float AxisValue)
{
	
	
	AddMovementInput(FRotator(0.f, GetControlRotation().Yaw, 0.f).Vector() , AxisValue);

}

void ABasePlayer::InputAxisMoveRight(float AxisValue)
{
	//AddMovementInput(FRotator(0.f, GetControlRotation().Yaw + 90.f, 0.f).Vector(), AxisValue);
	AddMovementInput(FRotationMatrix(FRotator(0, GetControlRotation().Yaw, 0.f)).GetScaledAxis(EAxis::Y), AxisValue);
}

void ABasePlayer::Shoot()
{
	rifle->Shoot();

	//Attack->AttackAnim();
}

void ABasePlayer::BeginPlay()
{
	Super::BeginPlay();

	 playerCon = Cast<APlayerController>(GetController());

	 

	 UTexture2D* CrosshairTexture = LoadObject<UTexture2D>(nullptr, TEXT("Material'/Game/Art/M_crosshair.M_crosshair'"));
	if (playerCon)
	{
		UGameHUD* widget = CreateWidget<UGameHUD, APlayerController>(playerCon, HUD);
		widget->AddToViewport();

		//if not work put in if check on if widget is vaild 
		if (widget)
		{
			widget->SetCrosshair(CrosshairTexture);
		}
		Health->hitAnim.AddDynamic(widget, &UGameHUD::SetHealth);
	}
	else
	{
		ABasePlayer::K2_DestroyActor();
	}


}

void ABasePlayer::HandleDead(float percent) 
{
	Super::HandleDead(percent);
	DisableInput(playerCon);
}
