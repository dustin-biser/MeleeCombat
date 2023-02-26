// Copyright Epic Games, Inc. All Rights Reserved.

#include "MeleeCombatTutorial.h"
#include "Modules/ModuleManager.h"

IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, MeleeCombatTutorial, "MeleeCombatTutorial" );


///////////////////////////////////////////////////////////////////////////////
// Console Variables
///////////////////////////////////////////////////////////////////////////////

/* Debug Draw Damage Volumes */
static TAutoConsoleVariable<bool> CVarDrawDamageVolumes(
	TEXT("dev.DrawDamageVolumes"),
	false,
	TEXT("Toggle of drawing damage volumes associated with Attacks, Projectiles, and Special Abilities.\n"),
	ECVF_Scalability | ECVF_RenderThreadSafe);


/* Debug Draw Aim Assist */
static TAutoConsoleVariable<bool> CVarDebugAimAssist(
	TEXT("dev.DebugAimAssist"),
	false,
	TEXT("Toggle debug mode for player Aim Assist.\n"),
	ECVF_Scalability | ECVF_RenderThreadSafe);

/*  Debug Draw AI Player Avoidance Radius */
static TAutoConsoleVariable<bool> CVarDebugAIPlayerAvoidanceRadius(
	TEXT("dev.DebugAIPlayerAvoidanceRadius"),
	false,
	TEXT("Toggle debug mode to display the AI's avoidance range from the Player.\n"),
	ECVF_Scalability | ECVF_RenderThreadSafe);

/*  Debug Draw AI Navigation Targets*/
static TAutoConsoleVariable<bool> CVarDebugAINavigationTargets(
	TEXT("dev.DebugAINavigationTargets"),
	false,
	TEXT("Toggle debug mode to display AI navigation targets for movement.\n"),
	ECVF_Scalability | ECVF_RenderThreadSafe);

/* Time Dialation value for Toggle Debug Slow Mode. */
static TAutoConsoleVariable<float> CVarDebugSlowModePercent(
	TEXT("dev.DebugSlowModePercent"),
	0.15f,
	TEXT("Time dialation value for Debug Slow Mode.\n"),
	ECVF_Scalability | ECVF_RenderThreadSafe);

/*  Enable debug logging for Enemy Combat Director Attack Tokens */
static TAutoConsoleVariable<bool> CVarDebugEnemyAttackTokens(
	TEXT("dev.DebugEnemyAttackTokens"),
	false,
	TEXT("Toggle debug logging of Enemy Combat Director Attack Tokens.\n"),
	ECVF_Scalability | ECVF_RenderThreadSafe);


