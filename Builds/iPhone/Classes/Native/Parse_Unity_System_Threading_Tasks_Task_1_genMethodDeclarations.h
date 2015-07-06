#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t1700;
// System.Threading.Tasks.Task
struct Task_t723;
// System.Action`1<System.Threading.Tasks.Task`1<System.Boolean>>
struct Action_1_t6774;
// System.AggregateException
struct AggregateException_t1669;

// System.Void System.Threading.Tasks.Task`1<System.Boolean>::.ctor()
// System.Threading.Tasks.Task`1<System.Byte>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_16MethodDeclarations.h"
#define Task_1__ctor_m36983(__this, method) (( void (*) (Task_1_t1700 *, const MethodInfo*))Task_1__ctor_m36984_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Boolean>::get_Result()
#define Task_1_get_Result_m8485(__this, method) (( bool (*) (Task_1_t1700 *, const MethodInfo*))Task_1_get_Result_m36985_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Boolean>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m36986(__this, ___continuation, method) (( Task_t723 * (*) (Task_1_t1700 *, Action_1_t6774 *, const MethodInfo*))Task_1_ContinueWith_m36987_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Boolean>::RunContinuations()
#define Task_1_RunContinuations_m36988(__this, method) (( void (*) (Task_1_t1700 *, const MethodInfo*))Task_1_RunContinuations_m36989_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetResult(T)
#define Task_1_TrySetResult_m36990(__this, ___result, method) (( bool (*) (Task_1_t1700 *, bool, const MethodInfo*))Task_1_TrySetResult_m36991_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetCanceled()
#define Task_1_TrySetCanceled_m36992(__this, method) (( bool (*) (Task_1_t1700 *, const MethodInfo*))Task_1_TrySetCanceled_m36993_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m36994(__this, ___exception, method) (( bool (*) (Task_1_t1700 *, AggregateException_t1669 *, const MethodInfo*))Task_1_TrySetException_m36995_gshared)(__this, ___exception, method)
