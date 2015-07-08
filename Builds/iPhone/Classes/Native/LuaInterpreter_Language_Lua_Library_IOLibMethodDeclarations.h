#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.Library.IOLib
struct IOLib_t3797;
// Language.Lua.LuaTable
struct LuaTable_t1336;
// Language.Lua.LuaValue
struct LuaValue_t1334;
// Language.Lua.LuaValue[]
struct LuaValueU5BU5D_t3808;

// System.Void Language.Lua.Library.IOLib::.cctor()
extern "C" void IOLib__cctor_m11070 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Library.IOLib::RegisterModule(Language.Lua.LuaTable)
extern "C" void IOLib_RegisterModule_m11071 (Object_t * __this /* static, unused */, LuaTable_t1336 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Library.IOLib::RegisterFunctions(Language.Lua.LuaTable)
extern "C" void IOLib_RegisterFunctions_m11072 (Object_t * __this /* static, unused */, LuaTable_t1336 * ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.IOLib::input(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * IOLib_input_m11073 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.IOLib::output(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * IOLib_output_m11074 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.IOLib::open(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * IOLib_open_m11075 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.IOLib::read(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * IOLib_read_m11076 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.IOLib::write(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * IOLib_write_m11077 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.IOLib::flush(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * IOLib_flush_m11078 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.IOLib::tmpfile(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * IOLib_tmpfile_m11079 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
