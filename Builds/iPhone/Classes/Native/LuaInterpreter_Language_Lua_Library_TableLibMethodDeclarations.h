#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.Library.TableLib
struct TableLib_t3564;
// Language.Lua.LuaTable
struct LuaTable_t1077;
// Language.Lua.LuaValue
struct LuaValue_t1075;
// Language.Lua.LuaValue[]
struct LuaValueU5BU5D_t3570;

// System.Void Language.Lua.Library.TableLib::RegisterModule(Language.Lua.LuaTable)
extern "C" void TableLib_RegisterModule_m10716 (Object_t * __this /* static, unused */, LuaTable_t1077 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Library.TableLib::RegisterFunctions(Language.Lua.LuaTable)
extern "C" void TableLib_RegisterFunctions_m10717 (Object_t * __this /* static, unused */, LuaTable_t1077 * ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.TableLib::concat(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * TableLib_concat_m10718 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.TableLib::insert(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * TableLib_insert_m10719 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.TableLib::remove(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * TableLib_remove_m10720 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.TableLib::removeitem(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * TableLib_removeitem_m10721 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.TableLib::maxn(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * TableLib_maxn_m10722 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.TableLib::sort(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * TableLib_sort_m10723 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.TableLib::getn(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * TableLib_getn_m10724 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
