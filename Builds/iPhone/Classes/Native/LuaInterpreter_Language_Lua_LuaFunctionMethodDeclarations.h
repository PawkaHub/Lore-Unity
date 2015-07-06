#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.LuaFunction
struct LuaFunction_t3568;
// Language.Lua.LuaFunc
struct LuaFunc_t3552;
// System.Object
struct Object_t;
// System.String
struct String_t;
// Language.Lua.LuaValue
struct LuaValue_t1075;
// Language.Lua.LuaValue[]
struct LuaValueU5BU5D_t3570;

// System.Void Language.Lua.LuaFunction::.ctor(Language.Lua.LuaFunc)
extern "C" void LuaFunction__ctor_m10737 (LuaFunction_t3568 * __this, LuaFunc_t3552 * ___function, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaFunc Language.Lua.LuaFunction::get_Function()
extern "C" LuaFunc_t3552 * LuaFunction_get_Function_m10738 (LuaFunction_t3568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaFunction::set_Function(Language.Lua.LuaFunc)
extern "C" void LuaFunction_set_Function_m10739 (LuaFunction_t3568 * __this, LuaFunc_t3552 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Language.Lua.LuaFunction::get_Value()
extern "C" Object_t * LuaFunction_get_Value_m10740 (LuaFunction_t3568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Language.Lua.LuaFunction::GetTypeCode()
extern "C" String_t* LuaFunction_GetTypeCode_m10741 (LuaFunction_t3568 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaFunction::Invoke(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * LuaFunction_Invoke_m10742 (LuaFunction_t3568 * __this, LuaValueU5BU5D_t3570* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
