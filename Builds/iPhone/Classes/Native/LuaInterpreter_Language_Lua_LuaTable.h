#pragma once
#include <stdint.h>
// System.Collections.Generic.List`1<Language.Lua.LuaValue>
struct List_1_t3576;
// System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue>
struct Dictionary_2_t3577;
// Language.Lua.LuaTable
struct LuaTable_t1077;
// System.Comparison`1<Language.Lua.LuaValue>
struct Comparison_1_t3578;
// Language.Lua.LuaValue
#include "LuaInterpreter_Language_Lua_LuaValue.h"
// Language.Lua.LuaTable
struct  LuaTable_t1077  : public LuaValue_t1075
{
	// System.Collections.Generic.List`1<Language.Lua.LuaValue> Language.Lua.LuaTable::list
	List_1_t3576 * ___list_0;
	// System.Collections.Generic.Dictionary`2<Language.Lua.LuaValue,Language.Lua.LuaValue> Language.Lua.LuaTable::dict
	Dictionary_2_t3577 * ___dict_1;
	// Language.Lua.LuaTable Language.Lua.LuaTable::<MetaTable>k__BackingField
	LuaTable_t1077 * ___U3CMetaTableU3Ek__BackingField_2;
};
struct LuaTable_t1077_StaticFields{
	// System.Comparison`1<Language.Lua.LuaValue> Language.Lua.LuaTable::<>f__am$cache3
	Comparison_1_t3578 * ___U3CU3Ef__amU24cache3_3;
};
