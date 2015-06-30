#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1543;
// System.Threading.Tasks.Task
struct Task_t1418;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int32>>
struct Action_1_t5548;
// System.AggregateException
struct AggregateException_t1516;

// System.Void System.Threading.Tasks.Task`1<System.Int32>::.ctor()
extern "C" void Task_1__ctor_m33025_gshared (Task_1_t1543 * __this, const MethodInfo* method);
#define Task_1__ctor_m33025(__this, method) (( void (*) (Task_1_t1543 *, const MethodInfo*))Task_1__ctor_m33025_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Int32>::get_Result()
extern "C" int32_t Task_1_get_Result_m7319_gshared (Task_1_t1543 * __this, const MethodInfo* method);
#define Task_1_get_Result_m7319(__this, method) (( int32_t (*) (Task_1_t1543 *, const MethodInfo*))Task_1_get_Result_m7319_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int32>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1418 * Task_1_ContinueWith_m33026_gshared (Task_1_t1543 * __this, Action_1_t5548 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m33026(__this, ___continuation, method) (( Task_t1418 * (*) (Task_1_t1543 *, Action_1_t5548 *, const MethodInfo*))Task_1_ContinueWith_m33026_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Int32>::RunContinuations()
extern "C" void Task_1_RunContinuations_m33027_gshared (Task_1_t1543 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m33027(__this, method) (( void (*) (Task_1_t1543 *, const MethodInfo*))Task_1_RunContinuations_m33027_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m33028_gshared (Task_1_t1543 * __this, int32_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m33028(__this, ___result, method) (( bool (*) (Task_1_t1543 *, int32_t, const MethodInfo*))Task_1_TrySetResult_m33028_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m33029_gshared (Task_1_t1543 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m33029(__this, method) (( bool (*) (Task_1_t1543 *, const MethodInfo*))Task_1_TrySetCanceled_m33029_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m33030_gshared (Task_1_t1543 * __this, AggregateException_t1516 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m33030(__this, ___exception, method) (( bool (*) (Task_1_t1543 *, AggregateException_t1516 *, const MethodInfo*))Task_1_TrySetException_m33030_gshared)(__this, ___exception, method)
