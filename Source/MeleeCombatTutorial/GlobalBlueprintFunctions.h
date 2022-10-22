// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GlobalBlueprintFunctions.generated.h"

/**
 * 
 */
UCLASS()
class MELEECOMBATTUTORIAL_API UGlobalBlueprintFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
	UFUNCTION(BlueprintCallable, Category = "Miscellaneous")
	static void SetCameraIsMovableWhenPaused(const UObject* WorldContextObject, bool bIsMovable);

	UFUNCTION(BlueprintPure, Category = "Utilities|Array", Meta = (DisplayName = "Sort (Integer Array) (Copy)"))
	static TArray<int32> SortIntegerArray(const TArray<int32>& IntegerArray, const bool Reversed = false);
};
