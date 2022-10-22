// Fill out your copyright notice in the Description page of Project Settings.


#include "GlobalBlueprintFunctions.h"

void UGlobalBlueprintFunctions::SetCameraIsMovableWhenPaused(const UObject* WorldContextObject, bool bIsMovable)
{
	if (ensure(WorldContextObject))
	{
		WorldContextObject->GetWorld()->bIsCameraMoveableWhenPaused = bIsMovable;
	}
}

TArray<int32> UGlobalBlueprintFunctions::SortIntegerArray(const TArray<int32>& IntegerArray, const bool Reversed /*= false*/)
{
	TArray<int32> Array = IntegerArray;
	if (!Reversed)
	{
		Array.Sort([](const int32 A, const int32 B)
			{
				return A < B;
			});
	}
	else
	{
		Array.Sort([](const int32 A, const int32 B)
			{
				return A > B;
			});
	}
	return Array;
}
