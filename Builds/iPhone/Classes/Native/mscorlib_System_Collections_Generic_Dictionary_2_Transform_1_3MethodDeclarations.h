#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Byte>
struct Transform_1_t6242;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m24862_gshared (Transform_1_t6242 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m24862(__this, ___object, ___method, method) (( void (*) (Transform_1_t6242 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m24862_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Byte>::Invoke(TKey,TValue)
extern "C" uint8_t Transform_1_Invoke_m24863_gshared (Transform_1_t6242 * __this, uint8_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m24863(__this, ___key, ___value, method) (( uint8_t (*) (Transform_1_t6242 *, uint8_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m24863_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Byte>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m24864_gshared (Transform_1_t6242 * __this, uint8_t ___key, Object_t * ___value, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m24864(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t6242 *, uint8_t, Object_t *, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m24864_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Byte,System.Object,System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" uint8_t Transform_1_EndInvoke_m24865_gshared (Transform_1_t6242 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m24865(__this, ___result, method) (( uint8_t (*) (Transform_1_t6242 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m24865_gshared)(__this, ___result, method)
