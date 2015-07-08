#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t119;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t6220;
// ExitGames.Client.Photon.Hashtable[]
struct HashtableU5BU5D_t6635;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t6585;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,ExitGames.Client.Photon.Hashtable,System.Collections.DictionaryEntry>
struct Transform_1_t6636;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>
struct  Dictionary_2_t454  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::table
	Int32U5BU5D_t119* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::linkSlots
	LinkU5BU5D_t6220* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::keySlots
	Int32U5BU5D_t119* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::valueSlots
	HashtableU5BU5D_t6635* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::serialization_info
	SerializationInfo_t3296 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t454_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Int32,ExitGames.Client.Photon.Hashtable>::<>f__am$cacheB
	Transform_1_t6636 * ___U3CU3Ef__amU24cacheB_15;
};
