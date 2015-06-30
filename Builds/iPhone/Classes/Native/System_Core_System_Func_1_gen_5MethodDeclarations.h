#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`1<System.Byte>
struct Func_1_t5263;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`1<System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_1__ctor_m28364_gshared (Func_1_t5263 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_1__ctor_m28364(__this, ___object, ___method, method) (( void (*) (Func_1_t5263 *, Object_t *, IntPtr_t, const MethodInfo*))Func_1__ctor_m28364_gshared)(__this, ___object, ___method, method)
// TResult System.Func`1<System.Byte>::Invoke()
extern "C" uint8_t Func_1_Invoke_m28366_gshared (Func_1_t5263 * __this, const MethodInfo* method);
#define Func_1_Invoke_m28366(__this, method) (( uint8_t (*) (Func_1_t5263 *, const MethodInfo*))Func_1_Invoke_m28366_gshared)(__this, method)
// System.IAsyncResult System.Func`1<System.Byte>::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * Func_1_BeginInvoke_m28368_gshared (Func_1_t5263 * __this, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_1_BeginInvoke_m28368(__this, ___callback, ___object, method) (( Object_t * (*) (Func_1_t5263 *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Func_1_BeginInvoke_m28368_gshared)(__this, ___callback, ___object, method)
// TResult System.Func`1<System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" uint8_t Func_1_EndInvoke_m28370_gshared (Func_1_t5263 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_1_EndInvoke_m28370(__this, ___result, method) (( uint8_t (*) (Func_1_t5263 *, Object_t *, const MethodInfo*))Func_1_EndInvoke_m28370_gshared)(__this, ___result, method)
