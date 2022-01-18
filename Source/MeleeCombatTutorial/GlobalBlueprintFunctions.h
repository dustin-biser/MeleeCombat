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
};
