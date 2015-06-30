#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.LuaFunction
struct LuaFunction_t2638;
// Language.Lua.LuaFunc
struct LuaFunc_t2624;
// System.Object
struct Object_t;
// System.String
struct String_t;
// Language.Lua.LuaValue
struct LuaValue_t748;
// Language.Lua.LuaValue[]
struct LuaValueU5BU5D_t2640;

// System.Void Language.Lua.LuaFunction::.ctor(Language.Lua.LuaFunc)
extern "C" void LuaFunction__ctor_m11946 (LuaFunction_t2638 * __this, LuaFunc_t2624 * ___function, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaFunc Language.Lua.LuaFunction::get_Function()
extern "C" LuaFunc_t2624 * LuaFunction_get_Function_m11947 (LuaFunction_t2638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaFunction::set_Function(Language.Lua.LuaFunc)
extern "C" void LuaFunction_set_Function_m11948 (LuaFunction_t2638 * __this, LuaFunc_t2624 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Language.Lua.LuaFunction::get_Value()
extern "C" Object_t * LuaFunction_get_Value_m11949 (LuaFunction_t2638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.LuaFunction::GetTypeCode()
extern "C" String_t* LuaFunction_GetTypeCode_m11950 (LuaFunction_t2638 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaFunction::Invoke(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * LuaFunction_Invoke_m11951 (LuaFunction_t2638 * __this, LuaValueU5BU5D_t2640* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
