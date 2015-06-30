#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t119;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t4893;
// PhotonPlayer[]
struct PhotonPlayerU5BU5D_t419;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t5169;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1322;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,PhotonPlayer,System.Collections.DictionaryEntry>
struct Transform_1_t5170;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.Int32,PhotonPlayer>
struct  Dictionary_2_t418  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Int32,PhotonPlayer>::table
	Int32U5BU5D_t119* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Int32,PhotonPlayer>::linkSlots
	LinkU5BU5D_t4893* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Int32,PhotonPlayer>::keySlots
	Int32U5BU5D_t119* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Int32,PhotonPlayer>::valueSlots
	PhotonPlayerU5BU5D_t419* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,PhotonPlayer>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,PhotonPlayer>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,PhotonPlayer>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,PhotonPlayer>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,PhotonPlayer>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Int32,PhotonPlayer>::serialization_info
	SerializationInfo_t1322 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,PhotonPlayer>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t418_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Int32,PhotonPlayer>::<>f__am$cacheB
	Transform_1_t5170 * ___U3CU3Ef__amU24cacheB_15;
};
