#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.Library.OSLib
struct OSLib_t2632;
// Language.Lua.LuaTable
struct LuaTable_t750;
// Language.Lua.LuaValue
struct LuaValue_t748;
// Language.Lua.LuaValue[]
struct LuaValueU5BU5D_t2640;

// System.Void Language.Lua.Library.OSLib::RegisterModule(Language.Lua.LuaTable)
extern "C" void OSLib_RegisterModule_m11903 (Object_t * __this /* static, unused */, LuaTable_t750 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Library.OSLib::RegisterFunctions(Language.Lua.LuaTable)
extern "C" void OSLib_RegisterFunctions_m11904 (Object_t * __this /* static, unused */, LuaTable_t750 * ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.OSLib::clock(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * OSLib_clock_m11905 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.OSLib::date(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * OSLib_date_m11906 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.OSLib::time(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * OSLib_time_m11907 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.OSLib::execute(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * OSLib_execute_m11908 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.OSLib::exit(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * OSLib_exit_m11909 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.OSLib::getenv(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * OSLib_getenv_m11910 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.OSLib::remove(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * OSLib_remove_m11911 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.OSLib::rename(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * OSLib_rename_m11912 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.OSLib::tmpname(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * OSLib_tmpname_m11913 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
