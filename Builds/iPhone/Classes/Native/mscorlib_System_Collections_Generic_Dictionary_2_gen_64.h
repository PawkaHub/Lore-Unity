#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t119;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t6220;
// System.Object[]
struct ObjectU5BU5D_t21;
// System.DateTime[]
struct DateTimeU5BU5D_t5712;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1775;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.DateTime,System.Collections.DictionaryEntry>
struct Transform_1_t8167;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>
struct  Dictionary_2_t8168  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::table
	Int32U5BU5D_t119* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::linkSlots
	LinkU5BU5D_t6220* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::keySlots
	ObjectU5BU5D_t21* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::valueSlots
	DateTimeU5BU5D_t5712* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::serialization_info
	SerializationInfo_t3296 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t8168_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Object,System.DateTime>::<>f__am$cacheB
	Transform_1_t8167 * ___U3CU3Ef__amU24cacheB_15;
};
