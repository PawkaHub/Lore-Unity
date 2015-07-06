#pragma once
#include <stdint.h>
// System.Int32[]
struct Int32U5BU5D_t119;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t5982;
// Language.Lua.LuaValue[]
struct LuaValueU5BU5D_t3570;
// System.Collections.Generic.IEqualityComparer`1<Language.Lua.LuaValue>
struct IEqualityComparer_1_t9252;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3058;
// System.Collections.Generic.Dictionary`2/Transform`1<Language.Lua.LuaValue,Language.Lua.LuaValue,System.Collections.DictionaryEntry>
struct Transform_1_t9253;
// System.Object
#include "mscorlib_System_Object.h"
// System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>
struct  Dictionary_2_t3577  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::table
	Int32U5BU5D_t119* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::linkSlots
	LinkU5BU5D_t5982* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::keySlots
	LuaValueU5BU5D_t3570* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::valueSlots
	LuaValueU5BU5D_t3570* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::serialization_info
	SerializationInfo_t3058 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t3577_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>::<>f__am$cacheB
	Transform_1_t9253 * ___U3CU3Ef__amU24cacheB_15;
};
