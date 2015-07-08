#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<AsyncVoid>
struct Task_1_t732;
// System.Threading.Tasks.Task
struct Task_t344;
// System.Action`1<System.Threading.Tasks.Task`1<AsyncVoid>>
struct Action_1_t6541;
// System.AggregateException
struct AggregateException_t727;
// AsyncVoid
#include "AssemblyU2DCSharp_AsyncVoid.h"

// System.Void System.Threading.Tasks.Task`1<AsyncVoid>::.ctor()
extern "C" void Task_1__ctor_m29164_gshared (Task_1_t732 * __this, const MethodInfo* method);
#define Task_1__ctor_m29164(__this, method) (( void (*) (Task_1_t732 *, const MethodInfo*))Task_1__ctor_m29164_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<AsyncVoid>::get_Result()
extern "C" AsyncVoid_t350  Task_1_get_Result_m29165_gshared (Task_1_t732 * __this, const MethodInfo* method);
#define Task_1_get_Result_m29165(__this, method) (( AsyncVoid_t350  (*) (Task_1_t732 *, const MethodInfo*))Task_1_get_Result_m29165_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<AsyncVoid>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t344 * Task_1_ContinueWith_m29166_gshared (Task_1_t732 * __this, Action_1_t6541 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m29166(__this, ___continuation, method) (( Task_t344 * (*) (Task_1_t732 *, Action_1_t6541 *, const MethodInfo*))Task_1_ContinueWith_m29166_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<AsyncVoid>::RunContinuations()
extern "C" void Task_1_RunContinuations_m29167_gshared (Task_1_t732 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m29167(__this, method) (( void (*) (Task_1_t732 *, const MethodInfo*))Task_1_RunContinuations_m29167_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<AsyncVoid>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m29168_gshared (Task_1_t732 * __this, AsyncVoid_t350  ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m29168(__this, ___result, method) (( bool (*) (Task_1_t732 *, AsyncVoid_t350 , const MethodInfo*))Task_1_TrySetResult_m29168_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<AsyncVoid>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m29169_gshared (Task_1_t732 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m29169(__this, method) (( bool (*) (Task_1_t732 *, const MethodInfo*))Task_1_TrySetCanceled_m29169_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<AsyncVoid>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m29170_gshared (Task_1_t732 * __this, AggregateException_t727 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m29170(__this, ___exception, method) (( bool (*) (Task_1_t732 *, AggregateException_t727 *, const MethodInfo*))Task_1_TrySetException_m29170_gshared)(__this, ___exception, method)
