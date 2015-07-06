#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int32>
struct TaskCompletionSource_1_t1674;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1701;
// System.AggregateException
struct AggregateException_t1669;
// System.Exception
struct Exception_t468;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m8444_gshared (TaskCompletionSource_1_t1674 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m8444(__this, method) (( void (*) (TaskCompletionSource_1_t1674 *, const MethodInfo*))TaskCompletionSource_1__ctor_m8444_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::get_Task()
extern "C" Task_1_t1701 * TaskCompletionSource_1_get_Task_m8446_gshared (TaskCompletionSource_1_t1674 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m8446(__this, method) (( Task_1_t1701 * (*) (TaskCompletionSource_1_t1674 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m8446_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m37024_gshared (TaskCompletionSource_1_t1674 * __this, Task_1_t1701 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m37024(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1674 *, Task_1_t1701 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m37024_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m8959_gshared (TaskCompletionSource_1_t1674 * __this, int32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m8959(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1674 *, int32_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m8959_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m8980_gshared (TaskCompletionSource_1_t1674 * __this, AggregateException_t1669 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m8980(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1674 *, AggregateException_t1669 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m8980_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m37025_gshared (TaskCompletionSource_1_t1674 * __this, Exception_t468 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m37025(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1674 *, Exception_t468 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m37025_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m8981_gshared (TaskCompletionSource_1_t1674 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m8981(__this, method) (( bool (*) (TaskCompletionSource_1_t1674 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m8981_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m8957_gshared (TaskCompletionSource_1_t1674 * __this, int32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m8957(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1674 *, int32_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m8957_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m8956_gshared (TaskCompletionSource_1_t1674 * __this, AggregateException_t1669 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m8956(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1674 *, AggregateException_t1669 *, const MethodInfo*))TaskCompletionSource_1_SetException_m8956_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m37026_gshared (TaskCompletionSource_1_t1674 * __this, Exception_t468 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m37026(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1674 *, Exception_t468 *, const MethodInfo*))TaskCompletionSource_1_SetException_m37026_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m8445_gshared (TaskCompletionSource_1_t1674 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m8445(__this, method) (( void (*) (TaskCompletionSource_1_t1674 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m8445_gshared)(__this, method)
