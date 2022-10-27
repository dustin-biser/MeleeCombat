// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GlobalHitEffectDataAsset.generated.h"

/**
 * 
 */
UCLASS()
class MELEECOMBATTUTORIAL_API UGlobalHitEffectDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 NumScreenShakeFramesOnActorDeath;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	int32 NumHitPauseFramesOnActorDeath;
};
