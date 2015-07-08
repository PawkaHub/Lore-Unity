#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.LuaFunction
struct LuaFunction_t3806;
// Language.Lua.LuaFunc
struct LuaFunc_t3790;
// System.Object
struct Object_t;
// System.String
struct String_t;
// Language.Lua.LuaValue
struct LuaValue_t1334;
// Language.Lua.LuaValue[]
struct LuaValueU5BU5D_t3808;

// System.Void Language.Lua.LuaFunction::.ctor(Language.Lua.LuaFunc)
extern "C" void LuaFunction__ctor_m11156 (LuaFunction_t3806 * __this, LuaFunc_t3790 * ___function, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaFunc Language.Lua.LuaFunction::get_Function()
extern "C" LuaFunc_t3790 * LuaFunction_get_Function_m11157 (LuaFunction_t3806 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaFunction::set_Function(Language.Lua.LuaFunc)
extern "C" void LuaFunction_set_Function_m11158 (LuaFunction_t3806 * __this, LuaFunc_t3790 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Language.Lua.LuaFunction::get_Value()
extern "C" Object_t * LuaFunction_get_Value_m11159 (LuaFunction_t3806 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.LuaFunction::GetTypeCode()
extern "C" String_t* LuaFunction_GetTypeCode_m11160 (LuaFunction_t3806 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaFunction::Invoke(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * LuaFunction_Invoke_m11161 (LuaFunction_t3806 * __this, LuaValueU5BU5D_t3808* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
