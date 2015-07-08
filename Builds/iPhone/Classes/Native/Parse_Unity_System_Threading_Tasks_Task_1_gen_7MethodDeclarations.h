#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t1937;
// System.Threading.Tasks.Task
struct Task_t344;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>
struct Action_1_t2729;
// System.AggregateException
struct AggregateException_t727;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_4MethodDeclarations.h"
#define Task_1__ctor_m39430(__this, method) (( void (*) (Task_1_t1937 *, const MethodInfo*))Task_1__ctor_m28787_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::get_Result()
#define Task_1_get_Result_m9411(__this, method) (( Task_t344 * (*) (Task_1_t1937 *, const MethodInfo*))Task_1_get_Result_m28788_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m9413(__this, ___continuation, method) (( Task_t344 * (*) (Task_1_t1937 *, Action_1_t2729 *, const MethodInfo*))Task_1_ContinueWith_m28789_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::RunContinuations()
#define Task_1_RunContinuations_m39431(__this, method) (( void (*) (Task_1_t1937 *, const MethodInfo*))Task_1_RunContinuations_m28790_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::TrySetResult(T)
#define Task_1_TrySetResult_m39432(__this, ___result, method) (( bool (*) (Task_1_t1937 *, Task_t344 *, const MethodInfo*))Task_1_TrySetResult_m28791_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::TrySetCanceled()
#define Task_1_TrySetCanceled_m39433(__this, method) (( bool (*) (Task_1_t1937 *, const MethodInfo*))Task_1_TrySetCanceled_m28792_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m39434(__this, ___exception, method) (( bool (*) (Task_1_t1937 *, AggregateException_t727 *, const MethodInfo*))Task_1_TrySetException_m28793_gshared)(__this, ___exception, method)
