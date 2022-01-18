// Fill out your copyright notice in the Description page of Project Settings.


#include "GlobalBlueprintFunctions.h"

void UGlobalBlueprintFunctions::SetCameraIsMovableWhenPaused(const UObject* WorldContextObject, bool bIsMovable)
{
	if (ensure(WorldContextObject))
	{
		WorldContextObject->GetWorld()->bIsCameraMoveableWhenPaused = bIsMovable;
	}
}
