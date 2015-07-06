#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1723;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t723;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_t1760;
// System.AggregateException
struct AggregateException_t1669;

// System.Void System.Threading.Tasks.Task`1<System.Object>::.ctor()
extern "C" void Task_1__ctor_m36937_gshared (Task_1_t1723 * __this, const MethodInfo* method);
#define Task_1__ctor_m36937(__this, method) (( void (*) (Task_1_t1723 *, const MethodInfo*))Task_1__ctor_m36937_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Object>::get_Result()
extern "C" Object_t * Task_1_get_Result_m36938_gshared (Task_1_t1723 * __this, const MethodInfo* method);
#define Task_1_get_Result_m36938(__this, method) (( Object_t * (*) (Task_1_t1723 *, const MethodInfo*))Task_1_get_Result_m36938_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t723 * Task_1_ContinueWith_m36940_gshared (Task_1_t1723 * __this, Action_1_t1760 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m36940(__this, ___continuation, method) (( Task_t723 * (*) (Task_1_t1723 *, Action_1_t1760 *, const MethodInfo*))Task_1_ContinueWith_m36940_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Object>::RunContinuations()
extern "C" void Task_1_RunContinuations_m36942_gshared (Task_1_t1723 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m36942(__this, method) (( void (*) (Task_1_t1723 *, const MethodInfo*))Task_1_RunContinuations_m36942_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m36944_gshared (Task_1_t1723 * __this, Object_t * ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m36944(__this, ___result, method) (( bool (*) (Task_1_t1723 *, Object_t *, const MethodInfo*))Task_1_TrySetResult_m36944_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m36946_gshared (Task_1_t1723 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m36946(__this, method) (( bool (*) (Task_1_t1723 *, const MethodInfo*))Task_1_TrySetCanceled_m36946_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m36948_gshared (Task_1_t1723 * __this, AggregateException_t1669 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m36948(__this, ___exception, method) (( bool (*) (Task_1_t1723 *, AggregateException_t1669 *, const MethodInfo*))Task_1_TrySetException_m36948_gshared)(__this, ___exception, method)
