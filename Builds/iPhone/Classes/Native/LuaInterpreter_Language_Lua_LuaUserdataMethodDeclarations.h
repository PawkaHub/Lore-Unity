#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.LuaUserdata
struct LuaUserdata_t3792;
// System.Object
struct Object_t;
// Language.Lua.LuaTable
struct LuaTable_t1336;
// System.String
struct String_t;

// System.Void Language.Lua.LuaUserdata::.ctor(System.Object)
extern "C" void LuaUserdata__ctor_m11228 (LuaUserdata_t3792 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaUserdata::.ctor(System.Object,Language.Lua.LuaTable)
extern "C" void LuaUserdata__ctor_m11229 (LuaUserdata_t3792 * __this, Object_t * ___obj, LuaTable_t1336 * ___metatable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Language.Lua.LuaUserdata::get_Value()
extern "C" Object_t * LuaUserdata_get_Value_m11230 (LuaUserdata_t3792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaTable Language.Lua.LuaUserdata::get_MetaTable()
extern "C" LuaTable_t1336 * LuaUserdata_get_MetaTable_m11231 (LuaUserdata_t3792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaUserdata::set_MetaTable(Language.Lua.LuaTable)
extern "C" void LuaUserdata_set_MetaTable_m11232 (LuaUserdata_t3792 * __this, LuaTable_t1336 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.LuaUserdata::GetTypeCode()
extern "C" String_t* LuaUserdata_GetTypeCode_m11233 (LuaUserdata_t3792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.LuaUserdata::ToString()
extern "C" String_t* LuaUserdata_ToString_m11234 (LuaUserdata_t3792 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
