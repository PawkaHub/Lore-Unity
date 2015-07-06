#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.Library.OSLib
struct OSLib_t3562;
// Language.Lua.LuaTable
struct LuaTable_t1077;
// Language.Lua.LuaValue
struct LuaValue_t1075;
// Language.Lua.LuaValue[]
struct LuaValueU5BU5D_t3570;

// System.Void Language.Lua.Library.OSLib::RegisterModule(Language.Lua.LuaTable)
extern "C" void OSLib_RegisterModule_m10694 (Object_t * __this /* static, unused */, LuaTable_t1077 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Library.OSLib::RegisterFunctions(Language.Lua.LuaTable)
extern "C" void OSLib_RegisterFunctions_m10695 (Object_t * __this /* static, unused */, LuaTable_t1077 * ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.OSLib::clock(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * OSLib_clock_m10696 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.OSLib::date(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * OSLib_date_m10697 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.OSLib::time(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * OSLib_time_m10698 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.OSLib::execute(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * OSLib_execute_m10699 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.OSLib::exit(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * OSLib_exit_m10700 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.OSLib::getenv(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * OSLib_getenv_m10701 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.OSLib::remove(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * OSLib_remove_m10702 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.OSLib::rename(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * OSLib_rename_m10703 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.OSLib::tmpname(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * OSLib_tmpname_m10704 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
