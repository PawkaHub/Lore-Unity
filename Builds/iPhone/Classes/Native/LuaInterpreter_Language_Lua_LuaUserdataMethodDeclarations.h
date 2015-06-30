#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.LuaUserdata
struct LuaUserdata_t2626;
// System.Object
struct Object_t;
// Language.Lua.LuaTable
struct LuaTable_t750;
// System.String
struct String_t;

// System.Void Language.Lua.LuaUserdata::.ctor(System.Object)
extern "C" void LuaUserdata__ctor_m12018 (LuaUserdata_t2626 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaUserdata::.ctor(System.Object,Language.Lua.LuaTable)
extern "C" void LuaUserdata__ctor_m12019 (LuaUserdata_t2626 * __this, Object_t * ___obj, LuaTable_t750 * ___metatable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Language.Lua.LuaUserdata::get_Value()
extern "C" Object_t * LuaUserdata_get_Value_m12020 (LuaUserdata_t2626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaTable Language.Lua.LuaUserdata::get_MetaTable()
extern "C" LuaTable_t750 * LuaUserdata_get_MetaTable_m12021 (LuaUserdata_t2626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaUserdata::set_MetaTable(Language.Lua.LuaTable)
extern "C" void LuaUserdata_set_MetaTable_m12022 (LuaUserdata_t2626 * __this, LuaTable_t750 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.LuaUserdata::GetTypeCode()
extern "C" String_t* LuaUserdata_GetTypeCode_m12023 (LuaUserdata_t2626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.LuaUserdata::ToString()
extern "C" String_t* LuaUserdata_ToString_m12024 (LuaUserdata_t2626 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
