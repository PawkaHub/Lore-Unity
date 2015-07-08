#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1949;
// System.Threading.Tasks.Task
struct Task_t344;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int32>>
struct Action_1_t6529;
// System.AggregateException
struct AggregateException_t727;

// System.Void System.Threading.Tasks.Task`1<System.Int32>::.ctor()
extern "C" void Task_1__ctor_m29101_gshared (Task_1_t1949 * __this, const MethodInfo* method);
#define Task_1__ctor_m29101(__this, method) (( void (*) (Task_1_t1949 *, const MethodInfo*))Task_1__ctor_m29101_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Int32>::get_Result()
extern "C" int32_t Task_1_get_Result_m8869_gshared (Task_1_t1949 * __this, const MethodInfo* method);
#define Task_1_get_Result_m8869(__this, method) (( int32_t (*) (Task_1_t1949 *, const MethodInfo*))Task_1_get_Result_m8869_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int32>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t344 * Task_1_ContinueWith_m29102_gshared (Task_1_t1949 * __this, Action_1_t6529 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m29102(__this, ___continuation, method) (( Task_t344 * (*) (Task_1_t1949 *, Action_1_t6529 *, const MethodInfo*))Task_1_ContinueWith_m29102_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Int32>::RunContinuations()
extern "C" void Task_1_RunContinuations_m29103_gshared (Task_1_t1949 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m29103(__this, method) (( void (*) (Task_1_t1949 *, const MethodInfo*))Task_1_RunContinuations_m29103_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m29104_gshared (Task_1_t1949 * __this, int32_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m29104(__this, ___result, method) (( bool (*) (Task_1_t1949 *, int32_t, const MethodInfo*))Task_1_TrySetResult_m29104_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m29105_gshared (Task_1_t1949 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m29105(__this, method) (( bool (*) (Task_1_t1949 *, const MethodInfo*))Task_1_TrySetCanceled_m29105_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m29106_gshared (Task_1_t1949 * __this, AggregateException_t727 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m29106(__this, ___exception, method) (( bool (*) (Task_1_t1949 *, AggregateException_t727 *, const MethodInfo*))Task_1_TrySetException_m29106_gshared)(__this, ___exception, method)
