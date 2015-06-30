#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>
struct TaskCompletionSource_1_t1535;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task[]>
struct Task_1_t1570;
// System.Threading.Tasks.Task[]
struct TaskU5BU5D_t1520;
// System.AggregateException
struct AggregateException_t1516;
// System.Exception
struct Exception_t468;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::.ctor()
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0MethodDeclarations.h"
#define TaskCompletionSource_1__ctor_m7693(__this, method) (( void (*) (TaskCompletionSource_1_t1535 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7334_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::get_Task()
#define TaskCompletionSource_1_get_Task_m7694(__this, method) (( Task_1_t1570 * (*) (TaskCompletionSource_1_t1535 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7336_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::set_Task(System.Threading.Tasks.Task`1<T>)
#define TaskCompletionSource_1_set_Task_m36406(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1535 *, Task_1_t1570 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m32984_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetResult(T)
#define TaskCompletionSource_1_TrySetResult_m7690(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1535 *, TaskU5BU5D_t1520*, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m32985_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetException(System.AggregateException)
#define TaskCompletionSource_1_TrySetException_m36407(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1535 *, AggregateException_t1516 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m32986_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetException(System.Exception)
#define TaskCompletionSource_1_TrySetException_m36408(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1535 *, Exception_t468 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m32987_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::TrySetCanceled()
#define TaskCompletionSource_1_TrySetCanceled_m36409(__this, method) (( bool (*) (TaskCompletionSource_1_t1535 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m32988_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetResult(T)
#define TaskCompletionSource_1_SetResult_m36410(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1535 *, TaskU5BU5D_t1520*, const MethodInfo*))TaskCompletionSource_1_SetResult_m7625_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetException(System.AggregateException)
#define TaskCompletionSource_1_SetException_m36411(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1535 *, AggregateException_t1516 *, const MethodInfo*))TaskCompletionSource_1_SetException_m32989_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetException(System.Exception)
#define TaskCompletionSource_1_SetException_m36412(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1535 *, Exception_t468 *, const MethodInfo*))TaskCompletionSource_1_SetException_m32990_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Threading.Tasks.Task[]>::SetCanceled()
#define TaskCompletionSource_1_SetCanceled_m36413(__this, method) (( void (*) (TaskCompletionSource_1_t1535 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7335_gshared)(__this, method)
