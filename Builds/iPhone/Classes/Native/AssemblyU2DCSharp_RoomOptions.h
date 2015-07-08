#pragma once
#include <stdint.h>
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t464;
// System.String[]
struct StringU5BU5D_t20;
// System.Object
#include "mscorlib_System_Object.h"
// RoomOptions
struct  RoomOptions_t458  : public Object_t
{
	// System.Boolean RoomOptions::isVisibleField
	bool ___isVisibleField_0;
	// System.Boolean RoomOptions::isOpenField
	bool ___isOpenField_1;
	// System.Byte RoomOptions::maxPlayers
	uint8_t ___maxPlayers_2;
	// System.Boolean RoomOptions::cleanupCacheOnLeaveField
	bool ___cleanupCacheOnLeaveField_3;
	// ExitGames.Client.Photon.Hashtable RoomOptions::customRoomProperties
	Hashtable_t464 * ___customRoomProperties_4;
	// System.String[] RoomOptions::customRoomPropertiesForLobby
	StringU5BU5D_t20* ___customRoomPropertiesForLobby_5;
	// System.Boolean RoomOptions::suppressRoomEventsField
	bool ___suppressRoomEventsField_6;
};
