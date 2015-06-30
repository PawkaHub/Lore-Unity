#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<Language.Lua.LuaValue>
struct List_1_t2646;
// System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>
struct Dictionary_2_t2647;
// Language.Lua.LuaTable
struct LuaTable_t750;
// System.Comparison`1<Language.Lua.LuaValue>
struct Comparison_1_t2648;
// Language.Lua.LuaValue
#include "LuaInterpreter_Language_Lua_LuaValue.h"
// Language.Lua.LuaTable
struct  LuaTable_t750  : public LuaValue_t748
{
	// System.Collections.Generic.List`1<Language.Lua.LuaValue> Language.Lua.LuaTable::list
	List_1_t2646 * ___list_0;
	// System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue> Language.Lua.LuaTable::dict
	Dictionary_2_t2647 * ___dict_1;
	// Language.Lua.LuaTable Language.Lua.LuaTable::<MetaTable>k__BackingField
	LuaTable_t750 * ___U3CMetaTableU3Ek__BackingField_2;
};
struct LuaTable_t750_StaticFields{
	// System.Comparison`1<Language.Lua.LuaValue> Language.Lua.LuaTable::<>f__am$cache3
	Comparison_1_t2648 * ___U3CU3Ef__amU24cache3_3;
};
