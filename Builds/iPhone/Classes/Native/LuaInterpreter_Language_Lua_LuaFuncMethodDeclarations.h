#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.LuaFunc
struct LuaFunc_t3790;
// System.Object
struct Object_t;
// Language.Lua.LuaValue
struct LuaValue_t1334;
// Language.Lua.LuaValue[]
struct LuaValueU5BU5D_t3808;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Language.Lua.LuaFunc::.ctor(System.Object,System.IntPtr)
extern "C" void LuaFunc__ctor_m11343 (LuaFunc_t3790 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaFunc::Invoke(Language.Lua.LuaValue[])
extern "C" LuaValue_t1334 * LuaFunc_Invoke_m11344 (LuaFunc_t3790 * __this, LuaValueU5BU5D_t3808* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" LuaValue_t1334 * pinvoke_delegate_wrapper_LuaFunc_t3790(Il2CppObject* delegate, LuaValueU5BU5D_t3808* ___args);
// System.IAsyncResult Language.Lua.LuaFunc::BeginInvoke(Language.Lua.LuaValue[],System.AsyncCallback,System.Object)
extern "C" Object_t * LuaFunc_BeginInvoke_m11345 (LuaFunc_t3790 * __this, LuaValueU5BU5D_t3808* ___args, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaFunc::EndInvoke(System.IAsyncResult)
extern "C" LuaValue_t1334 * LuaFunc_EndInvoke_m11346 (LuaFunc_t3790 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
