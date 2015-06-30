#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.Library.IOLib
struct IOLib_t2629;
// Language.Lua.LuaTable
struct LuaTable_t750;
// Language.Lua.LuaValue
struct LuaValue_t748;
// Language.Lua.LuaValue[]
struct LuaValueU5BU5D_t2640;

// System.Void Language.Lua.Library.IOLib::.cctor()
extern "C" void IOLib__cctor_m11860 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Library.IOLib::RegisterModule(Language.Lua.LuaTable)
extern "C" void IOLib_RegisterModule_m11861 (Object_t * __this /* static, unused */, LuaTable_t750 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Library.IOLib::RegisterFunctions(Language.Lua.LuaTable)
extern "C" void IOLib_RegisterFunctions_m11862 (Object_t * __this /* static, unused */, LuaTable_t750 * ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.IOLib::input(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * IOLib_input_m11863 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.IOLib::output(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * IOLib_output_m11864 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.IOLib::open(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * IOLib_open_m11865 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.IOLib::read(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * IOLib_read_m11866 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.IOLib::write(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * IOLib_write_m11867 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.IOLib::flush(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * IOLib_flush_m11868 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.IOLib::tmpfile(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * IOLib_tmpfile_m11869 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
