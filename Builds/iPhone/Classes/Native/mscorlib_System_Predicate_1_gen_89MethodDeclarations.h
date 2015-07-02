﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<Language.Lua.LuaValue>
struct Predicate_1_t5992;
// System.Object
struct Object_t;
// Language.Lua.LuaValue
struct LuaValue_t748;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<Language.Lua.LuaValue>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_17MethodDeclarations.h"
#define Predicate_1__ctor_m39285(__this, ___object, ___method, method) (( void (*) (Predicate_1_t5992 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m22656_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<Language.Lua.LuaValue>::Invoke(T)
#define Predicate_1_Invoke_m39286(__this, ___obj, method) (( bool (*) (Predicate_1_t5992 *, LuaValue_t748 *, const MethodInfo*))Predicate_1_Invoke_m22657_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<Language.Lua.LuaValue>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m39287(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t5992 *, LuaValue_t748 *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m22658_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<Language.Lua.LuaValue>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m39288(__this, ___result, method) (( bool (*) (Predicate_1_t5992 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m22659_gshared)(__this, ___result, method)