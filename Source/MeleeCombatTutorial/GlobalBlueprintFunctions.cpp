// Fill out your copyright notice in the Description page of Project Settings.


#include "GlobalBlueprintFunctions.h"

#include "Animation/AnimInstance.h"
#include "Animation/AnimMetaData.h"
#include "Animation/AnimMontage.h"
#include "Animation/AnimSequenceBase.h"

#include "Engine.h"

DEFINE_LOG_CATEGORY_STATIC(LogGlobalBlueprintLibrary, Verbose, All);

float UGlobalBlueprintFunctions::FrameCountToSeconds(int32 NumFrames)
{
	const float MaxTickRate = GEngine->GetMaxTickRate(0.001f, false);
	const float TargetFPS = GEngine->bUseFixedFrameRate ? GEngine->FixedFrameRate : FMath::Min(MaxTickRate, 60.0f);

	return NumFrames / TargetFPS;
}

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

void UGlobalBlueprintFunctions::GetMetaData(const UAnimSequenceBase* AnimationSequence, const UAnimInstance* AnimInstance, TArray<UAnimMetaData*>& MetaData)
{
	MetaData.Empty();
	if (AnimationSequence)
	{
		// Retrieve MetaData for Animation Sequence.
		MetaData = AnimationSequence->GetMetaData();

		if (MetaData.Num() == 0 && AnimInstance != nullptr)
		{
			// Check if have an AnimMontage instead
			if (const UAnimMontage* AnimMontage = Cast<const UAnimMontage>(AnimationSequence))
			{
				FName MontageSectionName = AnimInstance->Montage_GetCurrentSection();
				MetaData = AnimMontage->GetSectionMetaData(MontageSectionName);
			}
		}
	}
	else
	{
		UE_LOG(LogGlobalBlueprintLibrary, Warning, TEXT("Invalid Animation Sequence for GetMetaData"));
	}
}
