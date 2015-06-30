#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.Library.BaseLib
struct BaseLib_t2625;
// Language.Lua.LuaTable
struct LuaTable_t750;
// Language.Lua.LuaValue
struct LuaValue_t748;
// Language.Lua.LuaValue[]
struct LuaValueU5BU5D_t2640;

// System.Void Language.Lua.Library.BaseLib::RegisterFunctions(Language.Lua.LuaTable)
extern "C" void BaseLib_RegisterFunctions_m11829 (Object_t * __this /* static, unused */, LuaTable_t750 * ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::print(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * BaseLib_print_m11830 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::type(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * BaseLib_type_m11831 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::tostring(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * BaseLib_tostring_m11832 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::tonumber(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * BaseLib_tonumber_m11833 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::setmetatable(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * BaseLib_setmetatable_m11834 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::getmetatable(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * BaseLib_getmetatable_m11835 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::rawget(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * BaseLib_rawget_m11836 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::rawset(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * BaseLib_rawset_m11837 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::ipairs(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * BaseLib_ipairs_m11838 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::pairs(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * BaseLib_pairs_m11839 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::next(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * BaseLib_next_m11840 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::assert(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * BaseLib_assert_m11841 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::error(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * BaseLib_error_m11842 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::select(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * BaseLib_select_m11843 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::dofile(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * BaseLib_dofile_m11844 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::loadstring(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * BaseLib_loadstring_m11845 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::unpack(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * BaseLib_unpack_m11846 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::pcall(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * BaseLib_pcall_m11847 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.Library.BaseLib::<ipairs>m__1(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * BaseLib_U3CipairsU3Em__1_m11848 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
