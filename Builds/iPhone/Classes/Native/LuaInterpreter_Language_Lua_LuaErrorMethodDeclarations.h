#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.LuaError
struct LuaError_t3805;
// System.String
struct String_t;
// System.Exception
struct Exception_t496;
// System.Object[]
struct ObjectU5BU5D_t21;

// System.Void Language.Lua.LuaError::.ctor(System.String)
extern "C" void LuaError__ctor_m11153 (LuaError_t3805 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaError::.ctor(System.String,System.Exception)
extern "C" void LuaError__ctor_m11154 (LuaError_t3805 * __this, String_t* ___message, Exception_t496 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaError::.ctor(System.String,System.Object[])
extern "C" void LuaError__ctor_m11155 (LuaError_t3805 * __this, String_t* ___messageformat, ObjectU5BU5D_t21* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
