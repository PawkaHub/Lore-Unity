#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct Task_1_t1703;
// System.Tuple`2<System.Net.HttpStatusCode,System.String>
struct Tuple_2_t1758;
// System.Threading.Tasks.Task
struct Task_t723;
// System.Action`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>>
struct Action_1_t1759;
// System.AggregateException
struct AggregateException_t1669;

// System.Void System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m37749(__this, method) (( void (*) (Task_1_t1703 *, const MethodInfo*))Task_1__ctor_m36937_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::get_Result()
#define Task_1_get_Result_m8460(__this, method) (( Tuple_2_t1758 * (*) (Task_1_t1703 *, const MethodInfo*))Task_1_get_Result_m36938_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m37750(__this, ___continuation, method) (( Task_t723 * (*) (Task_1_t1703 *, Action_1_t1759 *, const MethodInfo*))Task_1_ContinueWith_m36940_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::RunContinuations()
#define Task_1_RunContinuations_m37751(__this, method) (( void (*) (Task_1_t1703 *, const MethodInfo*))Task_1_RunContinuations_m36942_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetResult(T)
#define Task_1_TrySetResult_m37752(__this, ___result, method) (( bool (*) (Task_1_t1703 *, Tuple_2_t1758 *, const MethodInfo*))Task_1_TrySetResult_m36944_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m37753(__this, method) (( bool (*) (Task_1_t1703 *, const MethodInfo*))Task_1_TrySetCanceled_m36946_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m37754(__this, ___exception, method) (( bool (*) (Task_1_t1703 *, AggregateException_t1669 *, const MethodInfo*))Task_1_TrySetException_m36948_gshared)(__this, ___exception, method)
