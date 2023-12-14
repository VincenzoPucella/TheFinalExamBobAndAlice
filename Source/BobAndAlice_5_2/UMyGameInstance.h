// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "Engine/GameInstance.h"

/**
 * 
 */
UCLASS()
class BOBANDALICE_5_2_API UMyGameInstance : public UGameInstance
{
public:
	// Call this function when the package is collected
	UFUNCTION (BlueprintCallable, Category = "Game State")
	void CollectPackage ();

	// Call this function when the package is delivered
	UFUNCTION (BlueprintCallable, Category = "Game State")
	void DeliverPackage ();

	// Call this to set the remaining time
	UFUNCTION (BlueprintCallable, Category = "Game State")
	void SetRemainingTime (float NewTime);

	// Call this to get the remaining time
	UFUNCTION (BlueprintCallable, Category = "Game State")
	float GetRemainingTime () const;

	// Variables to keep track of the game state
	UPROPERTY (VisibleAnywhere, BlueprintReadWrite, Category = "Game State")
	bool bIsPackageCollected = false;

	UPROPERTY (VisibleAnywhere, BlueprintReadWrite, Category = "Game State")
	bool bIsPackageDelivered = false;

	UPROPERTY (VisibleAnywhere, BlueprintReadWrite, Category = "Game State")
	float RemainingTime = 0.0f;

	UMyGameInstance();
	~UMyGameInstance();
};
