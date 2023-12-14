// Fill out your copyright notice in the Description page of Project Settings.


#include "UMyGameInstance.h"

void
UMyGameInstance::CollectPackage ()
{
	bIsPackageCollected = true;
}

void
UMyGameInstance::DeliverPackage ()
{
	bIsPackageDelivered = true;
}

void
UMyGameInstance::SetRemainingTime (float NewTime)
{
	RemainingTime = NewTime;
}

float
UMyGameInstance::GetRemainingTime () const
{
	return RemainingTime;
}
