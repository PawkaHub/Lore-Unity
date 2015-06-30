#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.ThreadLocal`1<System.Int32>
struct ThreadLocal_1_t1526;
// System.Collections.Generic.IDictionary`2<System.Int64,System.Int32>
struct IDictionary_2_t5785;
// System.Func`1<System.Int32>
struct Func_1_t1529;

// System.Collections.Generic.IDictionary`2<System.Int64,T> System.Threading.ThreadLocal`1<System.Int32>::get_ThreadLocalData()
extern "C" Object_t* ThreadLocal_1_get_ThreadLocalData_m36123_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ThreadLocal_1_get_ThreadLocalData_m36123(__this /* static, unused */, method) (( Object_t* (*) (Object_t * /* static, unused */, const MethodInfo*))ThreadLocal_1_get_ThreadLocalData_m36123_gshared)(__this /* static, unused */, method)
// System.Void System.Threading.ThreadLocal`1<System.Int32>::.ctor(System.Func`1<T>)
extern "C" void ThreadLocal_1__ctor_m7679_gshared (ThreadLocal_1_t1526 * __this, Func_1_t1529 * ___valueFactory, const MethodInfo* method);
#define ThreadLocal_1__ctor_m7679(__this, ___valueFactory, method) (( void (*) (ThreadLocal_1_t1526 *, Func_1_t1529 *, const MethodInfo*))ThreadLocal_1__ctor_m7679_gshared)(__this, ___valueFactory, method)
// T System.Threading.ThreadLocal`1<System.Int32>::get_Value()
extern "C" int32_t ThreadLocal_1_get_Value_m7681_gshared (ThreadLocal_1_t1526 * __this, const MethodInfo* method);
#define ThreadLocal_1_get_Value_m7681(__this, method) (( int32_t (*) (ThreadLocal_1_t1526 *, const MethodInfo*))ThreadLocal_1_get_Value_m7681_gshared)(__this, method)
// System.Void System.Threading.ThreadLocal`1<System.Int32>::set_Value(T)
extern "C" void ThreadLocal_1_set_Value_m7682_gshared (ThreadLocal_1_t1526 * __this, int32_t ___value, const MethodInfo* method);
#define ThreadLocal_1_set_Value_m7682(__this, ___value, method) (( void (*) (ThreadLocal_1_t1526 *, int32_t, const MethodInfo*))ThreadLocal_1_set_Value_m7682_gshared)(__this, ___value, method)
// System.Void System.Threading.ThreadLocal`1<System.Int32>::Finalize()
extern "C" void ThreadLocal_1_Finalize_m36124_gshared (ThreadLocal_1_t1526 * __this, const MethodInfo* method);
#define ThreadLocal_1_Finalize_m36124(__this, method) (( void (*) (ThreadLocal_1_t1526 *, const MethodInfo*))ThreadLocal_1_Finalize_m36124_gshared)(__this, method)
// System.Void System.Threading.ThreadLocal`1<System.Int32>::CheckDisposed()
extern "C" void ThreadLocal_1_CheckDisposed_m36125_gshared (ThreadLocal_1_t1526 * __this, const MethodInfo* method);
#define ThreadLocal_1_CheckDisposed_m36125(__this, method) (( void (*) (ThreadLocal_1_t1526 *, const MethodInfo*))ThreadLocal_1_CheckDisposed_m36125_gshared)(__this, method)
// System.Void System.Threading.ThreadLocal`1<System.Int32>::Dispose()
extern "C" void ThreadLocal_1_Dispose_m36126_gshared (ThreadLocal_1_t1526 * __this, const MethodInfo* method);
#define ThreadLocal_1_Dispose_m36126(__this, method) (( void (*) (ThreadLocal_1_t1526 *, const MethodInfo*))ThreadLocal_1_Dispose_m36126_gshared)(__this, method)
// System.Void System.Threading.ThreadLocal`1<System.Int32>::.cctor()
extern "C" void ThreadLocal_1__cctor_m36127_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ThreadLocal_1__cctor_m36127(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))ThreadLocal_1__cctor_m36127_gshared)(__this /* static, unused */, method)
