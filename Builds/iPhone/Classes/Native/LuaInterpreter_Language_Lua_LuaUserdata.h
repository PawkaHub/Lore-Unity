#pragma once
#include <stdint.h>
// System.Object
struct Object_t;
// Language.Lua.LuaTable
struct LuaTable_t1336;
// Language.Lua.LuaValue
#include "LuaInterpreter_Language_Lua_LuaValue.h"
// Language.Lua.LuaUserdata
struct  LuaUserdata_t3792  : public LuaValue_t1334
{
	// System.Object Language.Lua.LuaUserdata::Object
	Object_t * ___Object_0;
	// Language.Lua.LuaTable Language.Lua.LuaUserdata::<MetaTable>k__BackingField
	LuaTable_t1336 * ___U3CMetaTableU3Ek__BackingField_1;
};
