// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ExampleFuction.generated.h"

UCLASS()
class VERMILYA_HARLAN_ED_API AExampleFuction : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AExampleFuction();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//pure Fuction 
	UFUNCTION(BlueprintCallable)
		float PureFunction() const;

	UFUNCTION(BlueprintCallable, BluePrintImplementableEvent)
		bool MultipleReturnValues(AActor* actor1, FRotator rotation, AActor*& actor2, int32 &index);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UFUNCTION(BlueprintCallable)
		void BlueprintCallable();
	UFUNCTION(BluePrintImplementableEvent, BlueprintCallable)
		void BluePrintImplementableEvent();


	UFUNCTION(BluePrintNativeEvent, BlueprintCallable)
		void BluePrintNativeEvent();

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSubclassOf<class ACharacter> ClassType;



	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
