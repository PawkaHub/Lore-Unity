#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.LuaUserdata
struct LuaUserdata_t3554;
// System.Object
struct Object_t;
// Language.Lua.LuaTable
struct LuaTable_t1077;
// System.String
struct String_t;

// System.Void Language.Lua.LuaUserdata::.ctor(System.Object)
extern "C" void LuaUserdata__ctor_m10809 (LuaUserdata_t3554 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaUserdata::.ctor(System.Object,Language.Lua.LuaTable)
extern "C" void LuaUserdata__ctor_m10810 (LuaUserdata_t3554 * __this, Object_t * ___obj, LuaTable_t1077 * ___metatable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Language.Lua.LuaUserdata::get_Value()
extern "C" Object_t * LuaUserdata_get_Value_m10811 (LuaUserdata_t3554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaTable Language.Lua.LuaUserdata::get_MetaTable()
extern "C" LuaTable_t1077 * LuaUserdata_get_MetaTable_m10812 (LuaUserdata_t3554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaUserdata::set_MetaTable(Language.Lua.LuaTable)
extern "C" void LuaUserdata_set_MetaTable_m10813 (LuaUserdata_t3554 * __this, LuaTable_t1077 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.LuaUserdata::GetTypeCode()
extern "C" String_t* LuaUserdata_GetTypeCode_m10814 (LuaUserdata_t3554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.LuaUserdata::ToString()
extern "C" String_t* LuaUserdata_ToString_m10815 (LuaUserdata_t3554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
