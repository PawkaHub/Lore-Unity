﻿#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t119;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t6220;
// System.Object[]
struct ObjectU5BU5D_t21;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1775;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Byte,System.Collections.DictionaryEntry>
struct Transform_1_t7307;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.Object,System.Byte>
struct  Dictionary_2_t7308  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::table
	Int32U5BU5D_t119* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::linkSlots
	LinkU5BU5D_t6220* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::keySlots
	ObjectU5BU5D_t21* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::valueSlots
	ByteU5BU5D_t25* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::serialization_info
	SerializationInfo_t3296 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t7308_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Object,System.Byte>::<>f__am$cacheB
	Transform_1_t7307 * ___U3CU3Ef__amU24cacheB_15;
};
