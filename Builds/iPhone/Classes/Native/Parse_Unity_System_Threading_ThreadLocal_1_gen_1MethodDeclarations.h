#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.ThreadLocal`1<System.Object>
struct ThreadLocal_1_t5569;
// System.Collections.Generic.IDictionary`2<System.Int64,System.Object>
struct IDictionary_2_t5567;
// System.Object
struct Object_t;
// System.Func`1<System.Object>
struct Func_1_t1576;

// System.Collections.Generic.IDictionary`2<System.Int64,T> System.Threading.ThreadLocal`1<System.Object>::get_ThreadLocalData()
extern "C" Object_t* ThreadLocal_1_get_ThreadLocalData_m33167_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ThreadLocal_1_get_ThreadLocalData_m33167(__this /* static, unused */, method) (( Object_t* (*) (Object_t * /* static, unused */, const MethodInfo*))ThreadLocal_1_get_ThreadLocalData_m33167_gshared)(__this /* static, unused */, method)
// System.Void System.Threading.ThreadLocal`1<System.Object>::.ctor(System.Func`1<T>)
extern "C" void ThreadLocal_1__ctor_m33168_gshared (ThreadLocal_1_t5569 * __this, Func_1_t1576 * ___valueFactory, const MethodInfo* method);
#define ThreadLocal_1__ctor_m33168(__this, ___valueFactory, method) (( void (*) (ThreadLocal_1_t5569 *, Func_1_t1576 *, const MethodInfo*))ThreadLocal_1__ctor_m33168_gshared)(__this, ___valueFactory, method)
// T System.Threading.ThreadLocal`1<System.Object>::get_Value()
extern "C" Object_t * ThreadLocal_1_get_Value_m33169_gshared (ThreadLocal_1_t5569 * __this, const MethodInfo* method);
#define ThreadLocal_1_get_Value_m33169(__this, method) (( Object_t * (*) (ThreadLocal_1_t5569 *, const MethodInfo*))ThreadLocal_1_get_Value_m33169_gshared)(__this, method)
// System.Void System.Threading.ThreadLocal`1<System.Object>::set_Value(T)
extern "C" void ThreadLocal_1_set_Value_m33170_gshared (ThreadLocal_1_t5569 * __this, Object_t * ___value, const MethodInfo* method);
#define ThreadLocal_1_set_Value_m33170(__this, ___value, method) (( void (*) (ThreadLocal_1_t5569 *, Object_t *, const MethodInfo*))ThreadLocal_1_set_Value_m33170_gshared)(__this, ___value, method)
// System.Void System.Threading.ThreadLocal`1<System.Object>::Finalize()
extern "C" void ThreadLocal_1_Finalize_m33171_gshared (ThreadLocal_1_t5569 * __this, const MethodInfo* method);
#define ThreadLocal_1_Finalize_m33171(__this, method) (( void (*) (ThreadLocal_1_t5569 *, const MethodInfo*))ThreadLocal_1_Finalize_m33171_gshared)(__this, method)
// System.Void System.Threading.ThreadLocal`1<System.Object>::CheckDisposed()
extern "C" void ThreadLocal_1_CheckDisposed_m33172_gshared (ThreadLocal_1_t5569 * __this, const MethodInfo* method);
#define ThreadLocal_1_CheckDisposed_m33172(__this, method) (( void (*) (ThreadLocal_1_t5569 *, const MethodInfo*))ThreadLocal_1_CheckDisposed_m33172_gshared)(__this, method)
// System.Void System.Threading.ThreadLocal`1<System.Object>::Dispose()
extern "C" void ThreadLocal_1_Dispose_m33173_gshared (ThreadLocal_1_t5569 * __this, const MethodInfo* method);
#define ThreadLocal_1_Dispose_m33173(__this, method) (( void (*) (ThreadLocal_1_t5569 *, const MethodInfo*))ThreadLocal_1_Dispose_m33173_gshared)(__this, method)
// System.Void System.Threading.ThreadLocal`1<System.Object>::.cctor()
extern "C" void ThreadLocal_1__cctor_m33174_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ThreadLocal_1__cctor_m33174(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))ThreadLocal_1__cctor_m33174_gshared)(__this /* static, unused */, method)
