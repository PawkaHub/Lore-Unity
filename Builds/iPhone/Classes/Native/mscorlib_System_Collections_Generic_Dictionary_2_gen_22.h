﻿#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t119;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t4893;
// System.Object[]
struct ObjectU5BU5D_t21;
// Parse.Internal.ParseJSONCacheItem[]
struct ParseJSONCacheItemU5BU5D_t5712;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t4896;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1322;
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,Parse.Internal.ParseJSONCacheItem,System.Collections.DictionaryEntry>
struct Transform_1_t5713;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<System.Object,Parse.Internal.ParseJSONCacheItem>
struct  Dictionary_2_t1631  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<System.Object,Parse.Internal.ParseJSONCacheItem>::table
	Int32U5BU5D_t119* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<System.Object,Parse.Internal.ParseJSONCacheItem>::linkSlots
	LinkU5BU5D_t4893* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<System.Object,Parse.Internal.ParseJSONCacheItem>::keySlots
	ObjectU5BU5D_t21* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<System.Object,Parse.Internal.ParseJSONCacheItem>::valueSlots
	ParseJSONCacheItemU5BU5D_t5712* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Parse.Internal.ParseJSONCacheItem>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Parse.Internal.ParseJSONCacheItem>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Parse.Internal.ParseJSONCacheItem>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Parse.Internal.ParseJSONCacheItem>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,Parse.Internal.ParseJSONCacheItem>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<System.Object,Parse.Internal.ParseJSONCacheItem>::serialization_info
	SerializationInfo_t1322 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,Parse.Internal.ParseJSONCacheItem>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t1631_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<System.Object,Parse.Internal.ParseJSONCacheItem>::<>f__am$cacheB
	Transform_1_t5713 * ___U3CU3Ef__amU24cacheB_15;
};