#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.Library.BaseLib
struct BaseLib_t3791;
// Language.Lua.LuaTable
struct LuaTable_t1336;
// Language.Lua.LuaValue
struct LuaValue_t1334;
// Language.Lua.LuaValue[]
struct LuaValueU5BU5D_t3808;

// System.Void Language.Lua.Library.BaseLib::RegisterFunctions(Language.Lua.LuaTable)
extern "C" void BaseLib_RegisterFunctions_m11039 (Object_t * __this /* static, unused */, LuaTable_t1336 * ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::print(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * BaseLib_print_m11040 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::type(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * BaseLib_type_m11041 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::tostring(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * BaseLib_tostring_m11042 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::tonumber(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * BaseLib_tonumber_m11043 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::setmetatable(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * BaseLib_setmetatable_m11044 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::getmetatable(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * BaseLib_getmetatable_m11045 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::rawget(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * BaseLib_rawget_m11046 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::rawset(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * BaseLib_rawset_m11047 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::ipairs(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * BaseLib_ipairs_m11048 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::pairs(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * BaseLib_pairs_m11049 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::next(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * BaseLib_next_m11050 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::assert(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * BaseLib_assert_m11051 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::error(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * BaseLib_error_m11052 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::select(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * BaseLib_select_m11053 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::dofile(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * BaseLib_dofile_m11054 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::loadstring(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * BaseLib_loadstring_m11055 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::unpack(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * BaseLib_unpack_m11056 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::pcall(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * BaseLib_pcall_m11057 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::<ipairs>m__1(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * BaseLib_U3CipairsU3Em__1_m11058 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3808* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
