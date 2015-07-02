﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.LuaError
struct LuaError_t2637;
// System.String
struct String_t;
// System.Exception
struct Exception_t468;
// System.Object[]
struct ObjectU5BU5D_t21;

// System.Void Language.Lua.LuaError::.ctor(System.String)
extern "C" void LuaError__ctor_m11943 (LuaError_t2637 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaError::.ctor(System.String,System.Exception)
extern "C" void LuaError__ctor_m11944 (LuaError_t2637 * __this, String_t* ___message, Exception_t468 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Language.Lua.LuaError::.ctor(System.String,System.Object[])
extern "C" void LuaError__ctor_m11945 (LuaError_t2637 * __this, String_t* ___messageformat, ObjectU5BU5D_t21* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;