#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.LuaMethodFunction
struct LuaMethodFunction_t2639;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Language.Lua.LuaValue
struct LuaValue_t748;
// Language.Lua.LuaValue[]
struct LuaValueU5BU5D_t2640;

// System.Void Language.Lua.LuaMethodFunction::.ctor(System.Object,System.Reflection.MethodInfo)
extern "C" void LuaMethodFunction__ctor_m11952 (LuaMethodFunction_t2639 * __this, Object_t * ___target, MethodInfo_t * ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Language.Lua.LuaMethodFunction::get_Target()
extern "C" Object_t * LuaMethodFunction_get_Target_m11953 (LuaMethodFunction_t2639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaMethodFunction::set_Target(System.Object)
extern "C" void LuaMethodFunction_set_Target_m11954 (LuaMethodFunction_t2639 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo Language.Lua.LuaMethodFunction::get_Method()
extern "C" MethodInfo_t * LuaMethodFunction_get_Method_m11955 (LuaMethodFunction_t2639 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaMethodFunction::set_Method(System.Reflection.MethodInfo)
extern "C" void LuaMethodFunction_set_Method_m11956 (LuaMethodFunction_t2639 * __this, MethodInfo_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaMethodFunction::InvokeMethod(Language.Lua.LuaValue[])
extern "C" LuaValue_t748 * LuaMethodFunction_InvokeMethod_m11957 (LuaMethodFunction_t2639 * __this, LuaValueU5BU5D_t2640* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
