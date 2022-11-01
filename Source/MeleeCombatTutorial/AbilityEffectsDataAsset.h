// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "AbilityEffectsDataAsset.generated.h"


class UNiagaraSystem;
class UFMODEvent;

USTRUCT(BlueprintType)
struct FEffectSpawnData  
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

	/** Hit effect particles spawned on ability/attack hit events. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Impact Hit Effects")
	TArray<FEffectSpawnData> HitEffects;

	/** Hit sound played during ability/attack hit events. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Impact Hit Effects")
	UFMODEvent* HitEffectSound;

	/** Burst effect particles spawned durinmg burst damage events. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Burst Damage Effects")
	TArray<FEffectSpawnData> BurstDamageEffects;

	/** Burst sound played during ability/attack burst damage events. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Burst Damage Effects")
	UFMODEvent* BurstDamageSound;

	
};
