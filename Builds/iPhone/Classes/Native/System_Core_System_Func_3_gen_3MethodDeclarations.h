#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`3<System.Object,System.Double,System.Double>
struct Func_3_t6040;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`3<System.Object,System.Double,System.Double>::.ctor(System.Object,System.IntPtr)
extern "C" void Func_3__ctor_m40099_gshared (Func_3_t6040 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Func_3__ctor_m40099(__this, ___object, ___method, method) (( void (*) (Func_3_t6040 *, Object_t *, IntPtr_t, const MethodInfo*))Func_3__ctor_m40099_gshared)(__this, ___object, ___method, method)
// TResult System.Func`3<System.Object,System.Double,System.Double>::Invoke(T1,T2)
extern "C" double Func_3_Invoke_m40100_gshared (Func_3_t6040 * __this, Object_t * ___arg1, double ___arg2, const MethodInfo* method);
#define Func_3_Invoke_m40100(__this, ___arg1, ___arg2, method) (( double (*) (Func_3_t6040 *, Object_t *, double, const MethodInfo*))Func_3_Invoke_m40100_gshared)(__this, ___arg1, ___arg2, method)
// System.IAsyncResult System.Func`3<System.Object,System.Double,System.Double>::BeginInvoke(T1,T2,System.AsyncCallback,System.Object)
extern "C" Object_t * Func_3_BeginInvoke_m40101_gshared (Func_3_t6040 * __this, Object_t * ___arg1, double ___arg2, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Func_3_BeginInvoke_m40101(__this, ___arg1, ___arg2, ___callback, ___object, method) (( Object_t * (*) (Func_3_t6040 *, Object_t *, double, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Func_3_BeginInvoke_m40101_gshared)(__this, ___arg1, ___arg2, ___callback, ___object, method)
// TResult System.Func`3<System.Object,System.Double,System.Double>::EndInvoke(System.IAsyncResult)
extern "C" double Func_3_EndInvoke_m40102_gshared (Func_3_t6040 * __this, Object_t * ___result, const MethodInfo* method);
#define Func_3_EndInvoke_m40102(__this, ___result, method) (( double (*) (Func_3_t6040 *, Object_t *, const MethodInfo*))Func_3_EndInvoke_m40102_gshared)(__this, ___result, method)
