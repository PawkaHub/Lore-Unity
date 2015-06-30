#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.Library.TableLib
struct TableLib_t2634;
// Language.Lua.LuaTable
struct LuaTable_t750;
// Language.Lua.LuaValue
struct LuaValue_t748;
// Language.Lua.LuaValue[]
struct LuaValueU5BU5D_t2640;

// System.Void Language.Lua.Library.TableLib::RegisterModule(Language.Lua.LuaTable)
extern "C" void TableLib_RegisterModule_m11925 (Object_t * __this /* static, unused */, LuaTable_t750 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Library.TableLib::RegisterFunctions(Language.Lua.LuaTable)
extern "C" void TableLib_RegisterFunctions_m11926 (Object_t * __this /* static, unused */, LuaTable_t750 * ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.TableLib::concat(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * TableLib_concat_m11927 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.TableLib::insert(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * TableLib_insert_m11928 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.TableLib::remove(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * TableLib_remove_m11929 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.TableLib::removeitem(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * TableLib_removeitem_m11930 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.TableLib::maxn(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * TableLib_maxn_m11931 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.TableLib::sort(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * TableLib_sort_m11932 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.TableLib::getn(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * TableLib_getn_m11933 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
