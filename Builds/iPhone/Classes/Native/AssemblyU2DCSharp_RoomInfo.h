#pragma once
#include <stdint.h>
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t436;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// RoomInfo
struct  RoomInfo_t472  : public Object_t
{
	// ExitGames.Client.Photon.Hashtable RoomInfo::customPropertiesField
	Hashtable_t436 * ___customPropertiesField_0;
	// System.Byte RoomInfo::maxPlayersField
	uint8_t ___maxPlayersField_1;
	// System.Boolean RoomInfo::openField
	bool ___openField_2;
	// System.Boolean RoomInfo::visibleField
	bool ___visibleField_3;
	// System.Boolean RoomInfo::autoCleanUpField
	bool ___autoCleanUpField_4;
	// System.String RoomInfo::nameField
	String_t* ___nameField_5;
	// System.Int32 RoomInfo::masterClientIdField
	int32_t ___masterClientIdField_6;
	// System.Boolean RoomInfo::<removedFromList>k__BackingField
	bool ___U3CremovedFromListU3Ek__BackingField_7;
	// System.Boolean RoomInfo::<serverSideMasterClient>k__BackingField
	bool ___U3CserverSideMasterClientU3Ek__BackingField_8;
	// System.Int32 RoomInfo::<playerCount>k__BackingField
	int32_t ___U3CplayerCountU3Ek__BackingField_9;
	// System.Boolean RoomInfo::<isLocalClientInside>k__BackingField
	bool ___U3CisLocalClientInsideU3Ek__BackingField_10;
};
