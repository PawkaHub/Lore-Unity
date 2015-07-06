#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.Library.IOLib
struct IOLib_t3559;
// Language.Lua.LuaTable
struct LuaTable_t1077;
// Language.Lua.LuaValue
struct LuaValue_t1075;
// Language.Lua.LuaValue[]
struct LuaValueU5BU5D_t3570;

// System.Void Language.Lua.Library.IOLib::.cctor()
extern "C" void IOLib__cctor_m10651 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Library.IOLib::RegisterModule(Language.Lua.LuaTable)
extern "C" void IOLib_RegisterModule_m10652 (Object_t * __this /* static, unused */, LuaTable_t1077 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Library.IOLib::RegisterFunctions(Language.Lua.LuaTable)
extern "C" void IOLib_RegisterFunctions_m10653 (Object_t * __this /* static, unused */, LuaTable_t1077 * ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.IOLib::input(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * IOLib_input_m10654 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.IOLib::output(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * IOLib_output_m10655 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.IOLib::open(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * IOLib_open_m10656 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.IOLib::read(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * IOLib_read_m10657 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.IOLib::write(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * IOLib_write_m10658 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.IOLib::flush(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * IOLib_flush_m10659 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.IOLib::tmpfile(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * IOLib_tmpfile_m10660 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
