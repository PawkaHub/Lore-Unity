#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t119;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t6220;
// System.String[]
struct StringU5BU5D_t20;
// System.DateTime[]
struct DateTimeU5BU5D_t5712;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_t6192;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Collections.Generic.Dictionary`2/Transform`1<System.String,System.DateTime,System.Collections.DictionaryEntry>
struct Transform_1_t8161;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.String,System.DateTime>
struct  Dictionary_2_t8162  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::table
	Int32U5BU5D_t119* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::linkSlots
	LinkU5BU5D_t6220* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::keySlots
	StringU5BU5D_t20* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::valueSlots
	DateTimeU5BU5D_t5712* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::serialization_info
	SerializationInfo_t3296 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t8162_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.String,System.DateTime>::<>f__am$cacheB
	Transform_1_t8161 * ___U3CU3Ef__amU24cacheB_15;
};
