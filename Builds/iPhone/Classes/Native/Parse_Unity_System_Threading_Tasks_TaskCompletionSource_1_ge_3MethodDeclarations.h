#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>
struct TaskCompletionSource_1_t1678;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t1688;
// System.Threading.Tasks.Task
struct Task_t723;
// System.AggregateException
struct AggregateException_t1669;
// System.Exception
struct Exception_t468;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::.ctor()
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0MethodDeclarations.h"
#define TaskCompletionSource_1__ctor_m8969(__this, method) (( void (*) (TaskCompletionSource_1_t1678 *, const MethodInfo*))TaskCompletionSource_1__ctor_m8449_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::get_Task()
#define TaskCompletionSource_1_get_Task_m8970(__this, method) (( Task_1_t1688 * (*) (TaskCompletionSource_1_t1678 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m8451_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::set_Task(System.Threading.Tasks.Task`1<T>)
#define TaskCompletionSource_1_set_Task_m66053(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1678 *, Task_1_t1688 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m36970_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::TrySetResult(T)
#define TaskCompletionSource_1_TrySetResult_m8958(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1678 *, Task_t723 *, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m36971_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::TrySetException(System.AggregateException)
#define TaskCompletionSource_1_TrySetException_m66054(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1678 *, AggregateException_t1669 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m36972_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::TrySetException(System.Exception)
#define TaskCompletionSource_1_TrySetException_m66055(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1678 *, Exception_t468 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m36973_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::TrySetCanceled()
#define TaskCompletionSource_1_TrySetCanceled_m66056(__this, method) (( bool (*) (TaskCompletionSource_1_t1678 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m36974_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::SetResult(T)
#define TaskCompletionSource_1_SetResult_m66057(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1678 *, Task_t723 *, const MethodInfo*))TaskCompletionSource_1_SetResult_m8894_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::SetException(System.AggregateException)
#define TaskCompletionSource_1_SetException_m66058(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1678 *, AggregateException_t1669 *, const MethodInfo*))TaskCompletionSource_1_SetException_m36975_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::SetException(System.Exception)
#define TaskCompletionSource_1_SetException_m66059(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1678 *, Exception_t468 *, const MethodInfo*))TaskCompletionSource_1_SetException_m36976_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task>::SetCanceled()
#define TaskCompletionSource_1_SetCanceled_m66060(__this, method) (( void (*) (TaskCompletionSource_1_t1678 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m8450_gshared)(__this, method)
