#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<Parse.ParseObject>
struct Task_1_t1724;
// Parse.ParseObject
struct ParseObject_t1552;
// System.Threading.Tasks.Task
struct Task_t723;
// System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseObject>>
struct Action_1_t6998;
// System.AggregateException
struct AggregateException_t1669;

// System.Void System.Threading.Tasks.Task`1<Parse.ParseObject>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m39326(__this, method) (( void (*) (Task_1_t1724 *, const MethodInfo*))Task_1__ctor_m36937_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<Parse.ParseObject>::get_Result()
#define Task_1_get_Result_m8878(__this, method) (( ParseObject_t1552 * (*) (Task_1_t1724 *, const MethodInfo*))Task_1_get_Result_m36938_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Parse.ParseObject>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m39327(__this, ___continuation, method) (( Task_t723 * (*) (Task_1_t1724 *, Action_1_t6998 *, const MethodInfo*))Task_1_ContinueWith_m36940_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<Parse.ParseObject>::RunContinuations()
#define Task_1_RunContinuations_m39328(__this, method) (( void (*) (Task_1_t1724 *, const MethodInfo*))Task_1_RunContinuations_m36942_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseObject>::TrySetResult(T)
#define Task_1_TrySetResult_m39329(__this, ___result, method) (( bool (*) (Task_1_t1724 *, ParseObject_t1552 *, const MethodInfo*))Task_1_TrySetResult_m36944_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseObject>::TrySetCanceled()
#define Task_1_TrySetCanceled_m39330(__this, method) (( bool (*) (Task_1_t1724 *, const MethodInfo*))Task_1_TrySetCanceled_m36946_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseObject>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m39331(__this, ___exception, method) (( bool (*) (Task_1_t1724 *, AggregateException_t1669 *, const MethodInfo*))Task_1_TrySetException_m36948_gshared)(__this, ___exception, method)
