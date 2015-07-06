#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1701;
// System.Threading.Tasks.Task
struct Task_t723;
// System.Action`1<System.Threading.Tasks.Task`1<System.Int32>>
struct Action_1_t6775;
// System.AggregateException
struct AggregateException_t1669;

// System.Void System.Threading.Tasks.Task`1<System.Int32>::.ctor()
extern "C" void Task_1__ctor_m37012_gshared (Task_1_t1701 * __this, const MethodInfo* method);
#define Task_1__ctor_m37012(__this, method) (( void (*) (Task_1_t1701 *, const MethodInfo*))Task_1__ctor_m37012_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Int32>::get_Result()
extern "C" int32_t Task_1_get_Result_m8433_gshared (Task_1_t1701 * __this, const MethodInfo* method);
#define Task_1_get_Result_m8433(__this, method) (( int32_t (*) (Task_1_t1701 *, const MethodInfo*))Task_1_get_Result_m8433_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Int32>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t723 * Task_1_ContinueWith_m37013_gshared (Task_1_t1701 * __this, Action_1_t6775 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m37013(__this, ___continuation, method) (( Task_t723 * (*) (Task_1_t1701 *, Action_1_t6775 *, const MethodInfo*))Task_1_ContinueWith_m37013_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Int32>::RunContinuations()
extern "C" void Task_1_RunContinuations_m37014_gshared (Task_1_t1701 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m37014(__this, method) (( void (*) (Task_1_t1701 *, const MethodInfo*))Task_1_RunContinuations_m37014_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m37015_gshared (Task_1_t1701 * __this, int32_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m37015(__this, ___result, method) (( bool (*) (Task_1_t1701 *, int32_t, const MethodInfo*))Task_1_TrySetResult_m37015_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m37016_gshared (Task_1_t1701 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m37016(__this, method) (( bool (*) (Task_1_t1701 *, const MethodInfo*))Task_1_TrySetCanceled_m37016_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Int32>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m37017_gshared (Task_1_t1701 * __this, AggregateException_t1669 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m37017(__this, ___exception, method) (( bool (*) (Task_1_t1701 *, AggregateException_t1669 *, const MethodInfo*))Task_1_TrySetException_m37017_gshared)(__this, ___exception, method)
