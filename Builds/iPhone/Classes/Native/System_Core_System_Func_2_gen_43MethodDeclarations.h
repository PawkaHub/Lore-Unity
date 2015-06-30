#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Byte>
struct Func_2_t5657;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_13.h"

// System.Void System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Byte>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_2__ctor_m34149_gshared (Func_2_t5657 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_2__ctor_m34149(__this, ___object, ___method, method) (( void (*) (Func_2_t5657 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m34149_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Byte>::Invoke(T)
extern "C" uint8_t Func_2_Invoke_m34151_gshared (Func_2_t5657 * __this, KeyValuePair_2_t1591  ___arg1, const MethodInfo* method);
#define Func_2_Invoke_m34151(__this, ___arg1, method) (( uint8_t (*) (Func_2_t5657 *, KeyValuePair_2_t1591 , const MethodInfo*))Func_2_Invoke_m34151_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Byte>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_2_BeginInvoke_m34153_gshared (Func_2_t5657 * __this, KeyValuePair_2_t1591  ___arg1, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_2_BeginInvoke_m34153(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t5657 *, KeyValuePair_2_t1591 , AsyncCallback_t449 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m34153_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>,System.Byte>::EndInvoke(System.IAsyncResult)
extern "C" uint8_t Func_2_EndInvoke_m34155_gshared (Func_2_t5657 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_2_EndInvoke_m34155(__this, ___result, method) (( uint8_t (*) (Func_2_t5657 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m34155_gshared)(__this, ___result, method)
