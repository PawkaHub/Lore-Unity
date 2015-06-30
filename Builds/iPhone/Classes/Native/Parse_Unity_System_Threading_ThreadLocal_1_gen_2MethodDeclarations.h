#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.ThreadLocal`1<System.Byte>
struct ThreadLocal_1_t5682;
// System.Collections.Generic.IDictionary`2<System.Int64,System.Byte>
struct IDictionary_2_t5681;
// System.Func`1<System.Byte>
struct Func_1_t5263;

// System.Collections.Generic.IDictionary`2<System.Int64,T> System.Threading.ThreadLocal`1<System.Byte>::get_ThreadLocalData()
extern "C" Object_t* ThreadLocal_1_get_ThreadLocalData_m34522_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ThreadLocal_1_get_ThreadLocalData_m34522(__this /* static, unused */, method) (( Object_t* (*) (Object_t * /* static, unused */, const MethodInfo*))ThreadLocal_1_get_ThreadLocalData_m34522_gshared)(__this /* static, unused */, method)
// System.Void System.Threading.ThreadLocal`1<System.Byte>::.ctor(System.Func`1<T>)
extern "C" void ThreadLocal_1__ctor_m34523_gshared (ThreadLocal_1_t5682 * __this, Func_1_t5263 * ___valueFactory, const MethodInfo* method);
#define ThreadLocal_1__ctor_m34523(__this, ___valueFactory, method) (( void (*) (ThreadLocal_1_t5682 *, Func_1_t5263 *, const MethodInfo*))ThreadLocal_1__ctor_m34523_gshared)(__this, ___valueFactory, method)
// T System.Threading.ThreadLocal`1<System.Byte>::get_Value()
extern "C" uint8_t ThreadLocal_1_get_Value_m34524_gshared (ThreadLocal_1_t5682 * __this, const MethodInfo* method);
#define ThreadLocal_1_get_Value_m34524(__this, method) (( uint8_t (*) (ThreadLocal_1_t5682 *, const MethodInfo*))ThreadLocal_1_get_Value_m34524_gshared)(__this, method)
// System.Void System.Threading.ThreadLocal`1<System.Byte>::set_Value(T)
extern "C" void ThreadLocal_1_set_Value_m34525_gshared (ThreadLocal_1_t5682 * __this, uint8_t ___value, const MethodInfo* method);
#define ThreadLocal_1_set_Value_m34525(__this, ___value, method) (( void (*) (ThreadLocal_1_t5682 *, uint8_t, const MethodInfo*))ThreadLocal_1_set_Value_m34525_gshared)(__this, ___value, method)
// System.Void System.Threading.ThreadLocal`1<System.Byte>::Finalize()
extern "C" void ThreadLocal_1_Finalize_m34527_gshared (ThreadLocal_1_t5682 * __this, const MethodInfo* method);
#define ThreadLocal_1_Finalize_m34527(__this, method) (( void (*) (ThreadLocal_1_t5682 *, const MethodInfo*))ThreadLocal_1_Finalize_m34527_gshared)(__this, method)
// System.Void System.Threading.ThreadLocal`1<System.Byte>::CheckDisposed()
extern "C" void ThreadLocal_1_CheckDisposed_m34529_gshared (ThreadLocal_1_t5682 * __this, const MethodInfo* method);
#define ThreadLocal_1_CheckDisposed_m34529(__this, method) (( void (*) (ThreadLocal_1_t5682 *, const MethodInfo*))ThreadLocal_1_CheckDisposed_m34529_gshared)(__this, method)
// System.Void System.Threading.ThreadLocal`1<System.Byte>::Dispose()
extern "C" void ThreadLocal_1_Dispose_m34531_gshared (ThreadLocal_1_t5682 * __this, const MethodInfo* method);
#define ThreadLocal_1_Dispose_m34531(__this, method) (( void (*) (ThreadLocal_1_t5682 *, const MethodInfo*))ThreadLocal_1_Dispose_m34531_gshared)(__this, method)
// System.Void System.Threading.ThreadLocal`1<System.Byte>::.cctor()
extern "C" void ThreadLocal_1__cctor_m34533_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define ThreadLocal_1__cctor_m34533(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))ThreadLocal_1__cctor_m34533_gshared)(__this /* static, unused */, method)
