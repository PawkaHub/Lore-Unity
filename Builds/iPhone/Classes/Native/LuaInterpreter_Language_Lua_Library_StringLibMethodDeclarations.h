#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.Library.StringLib
struct StringLib_t2633;
// Language.Lua.LuaTable
struct LuaTable_t750;
// Language.Lua.LuaValue
struct LuaValue_t748;
// Language.Lua.LuaValue[]
struct LuaValueU5BU5D_t2640;

// System.Void Language.Lua.Library.StringLib::RegisterModule(Language.Lua.LuaTable)
extern "C" void StringLib_RegisterModule_m11914 (Object_t * __this /* static, unused */, LuaTable_t750 * ___enviroment, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.Library.StringLib::RegisterFunctions(Language.Lua.LuaTable)
extern "C" void StringLib_RegisterFunctions_m11915 (Object_t * __this /* static, unused */, LuaTable_t750 * ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.StringLib::byte(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * StringLib_byte_m11916 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.StringLib::char(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * StringLib_char_m11917 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.StringLib::format(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * StringLib_format_m11918 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.StringLib::sub(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * StringLib_sub_m11919 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.StringLib::rep(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * StringLib_rep_m11920 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.StringLib::reverse(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * StringLib_reverse_m11921 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.StringLib::len(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * StringLib_len_m11922 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.StringLib::lower(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * StringLib_lower_m11923 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.StringLib::upper(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * StringLib_upper_m11924 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
