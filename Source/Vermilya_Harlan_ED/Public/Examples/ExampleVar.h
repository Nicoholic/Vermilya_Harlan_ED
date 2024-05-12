// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

//no code can go above 
//must be the last include 
#include "ExampleVar.generated.h"

//decalre delegate type
//make known our required type
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FVaraibleDelegate, AActor*, OtherActor);

UCLASS()
class VERMILYA_HARLAN_ED_API AExampleVar : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AExampleVar();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Variable|ReadOnly")
		bool VisibleAnywhere;

	UPROPERTY(VisibleDefaultsOnly, BlueprintReadOnly, Category = "Variable|ReadOnly")
		uint8 VisibleDefaultsOnly;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Variable|ReadOnly")
		int32 VisibleInstanceOnlyOdd;

	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "Variable|ReadOnly")
		int64 VisibleInstanceOnly;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Variable|ReadWrite")
		float EditAnywhere;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Variable|ReadWrite")
		FName EditDefaultsOnlyOdd;

	UPROPERTY(EditInstanceOnly, BlueprintReadWrite, Category = "Variable|ReadWrite")
		FString EditInstanceOnlyOdd;


	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Variable|ReadWrite")
		FText EditDefaultsOnly;

	UPROPERTY(EditInstanceOnly, Category = "Variable|ReadWrite")
		FVector EditInstanceOnly;

	//class referance 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Variable|ClassReference")
		TSubclassOf<AActor> ClassType;
	


	//create delegate / event dispatcher
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = Variable )
	FVaraibleDelegate OnExampleDelegate;



	//Array 
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Variable|Array")
		TArray<int32> ValueArray;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Variable|Array")
		TArray<UObject *> PointerArray;
public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UFUNCTION()
	void ExampleBoundFuction(AActor* OtherActor);

};
