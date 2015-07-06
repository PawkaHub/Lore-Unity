#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Language.Lua.LuaFunc
struct LuaFunc_t3552;
// System.Object
struct Object_t;
// Language.Lua.LuaValue
struct LuaValue_t1075;
// Language.Lua.LuaValue[]
struct LuaValueU5BU5D_t3570;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void Language.Lua.LuaFunc::.ctor(System.Object,System.IntPtr)
extern "C" void LuaFunc__ctor_m10924 (LuaFunc_t3552 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaFunc::Invoke(Language.Lua.LuaValue[])
extern "C" LuaValue_t1075 * LuaFunc_Invoke_m10925 (LuaFunc_t3552 * __this, LuaValueU5BU5D_t3570* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" LuaValue_t1075 * pinvoke_delegate_wrapper_LuaFunc_t3552(Il2CppObject* delegate, LuaValueU5BU5D_t3570* ___args);
// System.IAsyncResult Language.Lua.LuaFunc::BeginInvoke(Language.Lua.LuaValue[],System.AsyncCallback,System.Object)
extern "C" Object_t * LuaFunc_BeginInvoke_m10926 (LuaFunc_t3552 * __this, LuaValueU5BU5D_t3570* ___args, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Language.Lua.LuaValue Language.Lua.LuaFunc::EndInvoke(System.IAsyncResult)
extern "C" LuaValue_t1075 * LuaFunc_EndInvoke_m10927 (LuaFunc_t3552 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
