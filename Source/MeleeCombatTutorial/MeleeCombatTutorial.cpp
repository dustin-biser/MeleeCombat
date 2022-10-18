// Copyright Epic Games, Inc. All Rights Reserved.

#include "MeleeCombatTutorial.h"
#include "Modules/ModuleManager.h"

IMPLEMENT_PRIMARY_GAME_MODULE( FDefaultGameModuleImpl, MeleeCombatTutorial, "MeleeCombatTutorial" );


///////////////////////////////////////////////////////////////////////////////
// Console Variables
///////////////////////////////////////////////////////////////////////////////
static TAutoConsoleVariable<bool> CVarDrawDamageVolumes(
	TEXT("dev.DrawDamageVolumes"),
	false,
	TEXT("Toggle of drawing damage volumes associated with Anim Notify Active Sections.\n"),
	ECVF_Scalability | ECVF_RenderThreadSafe);

