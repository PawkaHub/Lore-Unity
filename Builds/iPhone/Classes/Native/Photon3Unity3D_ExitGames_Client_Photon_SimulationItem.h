#pragma once
#include <stdint.h>
// System.Diagnostics.Stopwatch
struct Stopwatch_t495;
// ExitGames.Client.Photon.PeerBase/MyAction
struct MyAction_t5087;
// System.Object
#include "mscorlib_System_Object.h"
// ExitGames.Client.Photon.SimulationItem
struct  SimulationItem_t5108  : public Object_t
{
	// System.Diagnostics.Stopwatch ExitGames.Client.Photon.SimulationItem::stopw
	Stopwatch_t495 * ___stopw_0;
	// System.Int32 ExitGames.Client.Photon.SimulationItem::TimeToExecute
	int32_t ___TimeToExecute_1;
	// ExitGames.Client.Photon.PeerBase/MyAction ExitGames.Client.Photon.SimulationItem::ActionToExecute
	MyAction_t5087 * ___ActionToExecute_2;
	// System.Int32 ExitGames.Client.Photon.SimulationItem::<Delay>k__BackingField
	int32_t ___U3CDelayU3Ek__BackingField_3;
};
