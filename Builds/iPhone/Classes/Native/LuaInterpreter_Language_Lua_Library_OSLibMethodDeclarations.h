#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.Library.OSLib
struct OSLib_t3800;
// Language.Lua.LuaTable
struct LuaTable_t1336;
// Language.Lua.LuaValue
struct LuaValue_t1334;
// Language.Lua.LuaValue[]
struct LuaValueU5BU5D_t3808;

// System.Void Language.Lua.Library.OSLib::RegisterModule(Language.Lua.LuaTable)
extern "C" void OSLib_RegisterModule_m11113 (Object_t * __this /* static, unused */, LuaTable_t1336 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Library.OSLib::RegisterFunctions(Language.Lua.LuaTable)
extern "C" void OSLib_RegisterFunctions_m11114 (Object_t * __this /* static, unused */, LuaTable_t1336 * ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.OSLib::clock(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * OSLib_clock_m11115 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.OSLib::date(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * OSLib_date_m11116 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.OSLib::time(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * OSLib_time_m11117 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.OSLib::execute(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * OSLib_execute_m11118 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.OSLib::exit(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * OSLib_exit_m11119 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.OSLib::getenv(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * OSLib_getenv_m11120 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.OSLib::remove(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * OSLib_remove_m11121 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.OSLib::rename(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * OSLib_rename_m11122 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.OSLib::tmpname(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * OSLib_tmpname_m11123 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
