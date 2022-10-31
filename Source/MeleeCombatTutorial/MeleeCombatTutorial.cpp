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

