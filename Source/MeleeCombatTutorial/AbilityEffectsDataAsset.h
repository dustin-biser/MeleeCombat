// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AbilityEffectsDataAsset.generated.h"


class UNiagaraSystem;
class UFMODEvent;

USTRUCT(BlueprintType)
struct FAbilityEffectSpawnData  
{
	GENERATED_USTRUCT_BODY();

public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	UNiagaraSystem* Effect;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FVector LocationOffset;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	FRotator RotationOffset;
};

/**
 *  Data Asset containing Hit Effects and Sounds spawned during ability damage events.
 */
UCLASS()
class MELEECOMBATTUTORIAL_API UAbilityEffectsDataAsset : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:

	/** Hit effect particles spawned on ability/attack damage events. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Ability Hit Effects")
	TArray<FAbilityEffectSpawnData> HitEffects;

	/** Hit sound played during ability/attack damage events. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Ability Hit Effects")
	UFMODEvent* HitEffectSound;

	/** Sound played when ability/attack kills an Actor. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Ability Hit Effects")
	UFMODEvent* HitKillsActorSound;

	/** Effects to attach to damaged Actor during intial burst damage tick. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Burst Damage Only")
	TArray<FAbilityEffectSpawnData> AttachedBurstEffects;

	/** Effects to spawn when ability intersects level geometry (rather than damaging an Actor). */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "On Overlap Level Geometry")
	TArray<FAbilityEffectSpawnData> EffectsOnLevelOverlap;
};
