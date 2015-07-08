#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.Library.TableLib
struct TableLib_t3802;
// Language.Lua.LuaTable
struct LuaTable_t1336;
// Language.Lua.LuaValue
struct LuaValue_t1334;
// Language.Lua.LuaValue[]
struct LuaValueU5BU5D_t3808;

// System.Void Language.Lua.Library.TableLib::RegisterModule(Language.Lua.LuaTable)
extern "C" void TableLib_RegisterModule_m11135 (Object_t * __this /* static, unused */, LuaTable_t1336 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Library.TableLib::RegisterFunctions(Language.Lua.LuaTable)
extern "C" void TableLib_RegisterFunctions_m11136 (Object_t * __this /* static, unused */, LuaTable_t1336 * ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.TableLib::concat(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * TableLib_concat_m11137 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.TableLib::insert(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * TableLib_insert_m11138 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.TableLib::remove(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * TableLib_remove_m11139 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.TableLib::removeitem(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * TableLib_removeitem_m11140 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.TableLib::maxn(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * TableLib_maxn_m11141 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.TableLib::sort(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * TableLib_sort_m11142 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.TableLib::getn(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * TableLib_getn_m11143 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
