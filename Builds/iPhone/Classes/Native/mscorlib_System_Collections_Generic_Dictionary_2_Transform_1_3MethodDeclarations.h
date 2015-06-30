#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Byte>
struct Transform_1_t4916;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m23083_gshared (Transform_1_t4916 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m23083(__this, ___object, ___method, method) (( void (*) (Transform_1_t4916 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m23083_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Byte>::Invoke(TKey,TValue)
extern "C" uint8_t Transform_1_Invoke_m23084_gshared (Transform_1_t4916 * __this, uint8_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m23084(__this, ___key, ___value, method) (( uint8_t (*) (Transform_1_t4916 *, uint8_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m23084_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Byte>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m23085_gshared (Transform_1_t4916 * __this, uint8_t ___key, Object_t * ___value, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m23085(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t4916 *, uint8_t, Object_t *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m23085_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" uint8_t Transform_1_EndInvoke_m23086_gshared (Transform_1_t4916 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m23086(__this, ___result, method) (( uint8_t (*) (Transform_1_t4916 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m23086_gshared)(__this, ___result, method)
