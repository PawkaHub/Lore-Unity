#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.Library.BaseLib
struct BaseLib_t3553;
// Language.Lua.LuaTable
struct LuaTable_t1077;
// Language.Lua.LuaValue
struct LuaValue_t1075;
// Language.Lua.LuaValue[]
struct LuaValueU5BU5D_t3570;

// System.Void Language.Lua.Library.BaseLib::RegisterFunctions(Language.Lua.LuaTable)
extern "C" void BaseLib_RegisterFunctions_m10620 (Object_t * __this /* static, unused */, LuaTable_t1077 * ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::print(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * BaseLib_print_m10621 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::type(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * BaseLib_type_m10622 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::tostring(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * BaseLib_tostring_m10623 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::tonumber(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * BaseLib_tonumber_m10624 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::setmetatable(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * BaseLib_setmetatable_m10625 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::getmetatable(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * BaseLib_getmetatable_m10626 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::rawget(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * BaseLib_rawget_m10627 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::rawset(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * BaseLib_rawset_m10628 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::ipairs(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * BaseLib_ipairs_m10629 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::pairs(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * BaseLib_pairs_m10630 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::next(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * BaseLib_next_m10631 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::assert(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * BaseLib_assert_m10632 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::error(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * BaseLib_error_m10633 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::select(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * BaseLib_select_m10634 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::dofile(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * BaseLib_dofile_m10635 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::loadstring(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * BaseLib_loadstring_m10636 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::unpack(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * BaseLib_unpack_m10637 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::pcall(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * BaseLib_pcall_m10638 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::<ipairs>m__1(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * BaseLib_U3CipairsU3Em__1_m10639 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t3570* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
