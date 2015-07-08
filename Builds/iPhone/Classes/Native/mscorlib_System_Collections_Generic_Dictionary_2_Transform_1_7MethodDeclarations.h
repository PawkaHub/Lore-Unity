#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Int32,System.Byte>
struct Transform_1_t6262;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Int32,System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m25069_gshared (Transform_1_t6262 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m25069(__this, ___object, ___method, method) (( void (*) (Transform_1_t6262 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m25069_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Int32,System.Byte>::Invoke(TKey,TValue)
extern "C" uint8_t Transform_1_Invoke_m25070_gshared (Transform_1_t6262 * __this, uint8_t ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m25070(__this, ___key, ___value, method) (( uint8_t (*) (Transform_1_t6262 *, uint8_t, int32_t, const MethodInfo*))Transform_1_Invoke_m25070_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Int32,System.Byte>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m25071_gshared (Transform_1_t6262 * __this, uint8_t ___key, int32_t ___value, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m25071(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t6262 *, uint8_t, int32_t, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m25071_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Int32,System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" uint8_t Transform_1_EndInvoke_m25072_gshared (Transform_1_t6262 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m25072(__this, ___result, method) (( uint8_t (*) (Transform_1_t6262 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m25072_gshared)(__this, ___result, method)
