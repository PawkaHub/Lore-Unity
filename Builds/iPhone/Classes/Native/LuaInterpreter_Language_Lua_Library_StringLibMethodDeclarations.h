#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.Library.StringLib
struct StringLib_t3801;
// Language.Lua.LuaTable
struct LuaTable_t1336;
// Language.Lua.LuaValue
struct LuaValue_t1334;
// Language.Lua.LuaValue[]
struct LuaValueU5BU5D_t3808;

// System.Void Language.Lua.Library.StringLib::RegisterModule(Language.Lua.LuaTable)
extern "C" void StringLib_RegisterModule_m11124 (Object_t * __this /* static, unused */, LuaTable_t1336 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Library.StringLib::RegisterFunctions(Language.Lua.LuaTable)
extern "C" void StringLib_RegisterFunctions_m11125 (Object_t * __this /* static, unused */, LuaTable_t1336 * ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.StringLib::byte(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * StringLib_byte_m11126 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.StringLib::char(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * StringLib_char_m11127 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.StringLib::format(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * StringLib_format_m11128 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.StringLib::sub(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * StringLib_sub_m11129 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.StringLib::rep(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * StringLib_rep_m11130 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.StringLib::reverse(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * StringLib_reverse_m11131 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.StringLib::len(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * StringLib_len_m11132 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.StringLib::lower(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * StringLib_lower_m11133 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.StringLib::upper(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * StringLib_upper_m11134 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
