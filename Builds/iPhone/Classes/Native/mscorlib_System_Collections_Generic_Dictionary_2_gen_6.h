#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t119;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t6220;
// System.String[]
struct StringU5BU5D_t20;
// RoomInfo[]
struct RoomInfoU5BU5D_t451;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t6192;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,RoomInfo,System.Collections.DictionaryEntry>
struct Transform_1_t6624;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,RoomInfo>
struct  Dictionary_2_t450  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,RoomInfo>::table
	Int32U5BU5D_t119* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,RoomInfo>::linkSlots
	LinkU5BU5D_t6220* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,RoomInfo>::keySlots
	StringU5BU5D_t20* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,RoomInfo>::valueSlots
	RoomInfoU5BU5D_t451* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,RoomInfo>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,RoomInfo>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,RoomInfo>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,RoomInfo>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,RoomInfo>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,RoomInfo>::serialization_info
	SerializationInfo_t3296 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,RoomInfo>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t450_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,RoomInfo>::<>f__am$cacheB
	Transform_1_t6624 * ___U3CU3Ef__amU24cacheB_15;
};
