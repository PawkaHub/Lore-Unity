#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.Library.StringLib
struct StringLib_t3563;
// Language.Lua.LuaTable
struct LuaTable_t1077;
// Language.Lua.LuaValue
struct LuaValue_t1075;
// Language.Lua.LuaValue[]
struct LuaValueU5BU5D_t3570;

// System.Void Language.Lua.Library.StringLib::RegisterModule(Language.Lua.LuaTable)
extern "C" void StringLib_RegisterModule_m10705 (Object_t * __this /* static, unused */, LuaTable_t1077 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Library.StringLib::RegisterFunctions(Language.Lua.LuaTable)
extern "C" void StringLib_RegisterFunctions_m10706 (Object_t * __this /* static, unused */, LuaTable_t1077 * ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.StringLib::byte(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * StringLib_byte_m10707 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.StringLib::char(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * StringLib_char_m10708 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.StringLib::format(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * StringLib_format_m10709 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.StringLib::sub(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * StringLib_sub_m10710 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.StringLib::rep(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * StringLib_rep_m10711 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.StringLib::reverse(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * StringLib_reverse_m10712 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.StringLib::len(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * StringLib_len_m10713 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.StringLib::lower(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * StringLib_lower_m10714 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.StringLib::upper(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * StringLib_upper_m10715 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
