#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t1702;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t723;
// System.Action`1<System.Threading.Tasks.Task`1<System.String>>
struct Action_1_t1881;
// System.AggregateException
struct AggregateException_t1669;

// System.Void System.Threading.Tasks.Task`1<System.String>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m36936(__this, method) (( void (*) (Task_1_t1702 *, const MethodInfo*))Task_1__ctor_m36937_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.String>::get_Result()
#define Task_1_get_Result_m8893(__this, method) (( String_t* (*) (Task_1_t1702 *, const MethodInfo*))Task_1_get_Result_m36938_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.String>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m36939(__this, ___continuation, method) (( Task_t723 * (*) (Task_1_t1702 *, Action_1_t1881 *, const MethodInfo*))Task_1_ContinueWith_m36940_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.String>::RunContinuations()
#define Task_1_RunContinuations_m36941(__this, method) (( void (*) (Task_1_t1702 *, const MethodInfo*))Task_1_RunContinuations_m36942_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.String>::TrySetResult(T)
#define Task_1_TrySetResult_m36943(__this, ___result, method) (( bool (*) (Task_1_t1702 *, String_t*, const MethodInfo*))Task_1_TrySetResult_m36944_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.String>::TrySetCanceled()
#define Task_1_TrySetCanceled_m36945(__this, method) (( bool (*) (Task_1_t1702 *, const MethodInfo*))Task_1_TrySetCanceled_m36946_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.String>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m36947(__this, ___exception, method) (( bool (*) (Task_1_t1702 *, AggregateException_t1669 *, const MethodInfo*))Task_1_TrySetException_m36948_gshared)(__this, ___exception, method)
