#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.LuaMultiValue
struct LuaMultiValue_t2641;
// Language.Lua.LuaValue[]
struct LuaValueU5BU5D_t2640;
// System.Object
struct Object_t;
// System.String
struct String_t;
// Language.Lua.LuaValue
struct LuaValue_t748;

// System.Void Language.Lua.LuaMultiValue::.ctor(Language.Lua.LuaValue[])
extern "C" void LuaMultiValue__ctor_m11958 (LuaMultiValue_t2641 * __this, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue[] Language.Lua.LuaMultiValue::get_Values()
extern "C" LuaValueU5BU5D_t2640* LuaMultiValue_get_Values_m11959 (LuaMultiValue_t2641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaMultiValue::set_Values(Language.Lua.LuaValue[])
extern "C" void LuaMultiValue_set_Values_m11960 (LuaMultiValue_t2641 * __this, LuaValueU5BU5D_t2640* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Language.Lua.LuaMultiValue::get_Value()
extern "C" Object_t * LuaMultiValue_get_Value_m11961 (LuaMultiValue_t2641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.LuaMultiValue::GetTypeCode()
extern "C" String_t* LuaMultiValue_GetTypeCode_m11962 (LuaMultiValue_t2641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaMultiValue::WrapLuaValues(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * LuaMultiValue_WrapLuaValues_m11963 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue[] Language.Lua.LuaMultiValue::UnWrapLuaValues(Language.Lua.LuaValue[])
extern "C" LuaValueU5BU5D_t2640* LuaMultiValue_UnWrapLuaValues_m11964 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Language.Lua.LuaMultiValue::ContainsMultiValue(Language.Lua.LuaValue[])
extern "C" bool LuaMultiValue_ContainsMultiValue_m11965 (Object_t * __this /* static, unused */, LuaValueU5BU5D_t2640* ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
