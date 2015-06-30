#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int32>
struct TaskCompletionSource_1_t1521;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1543;
// System.AggregateException
struct AggregateException_t1516;
// System.Exception
struct Exception_t468;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m7329_gshared (TaskCompletionSource_1_t1521 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m7329(__this, method) (( void (*) (TaskCompletionSource_1_t1521 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7329_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::get_Task()
extern "C" Task_1_t1543 * TaskCompletionSource_1_get_Task_m7331_gshared (TaskCompletionSource_1_t1521 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m7331(__this, method) (( Task_1_t1543 * (*) (TaskCompletionSource_1_t1521 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7331_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m33037_gshared (TaskCompletionSource_1_t1521 * __this, Task_1_t1543 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m33037(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1521 *, Task_1_t1543 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m33037_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m7686_gshared (TaskCompletionSource_1_t1521 * __this, int32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m7686(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1521 *, int32_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m7686_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m7683_gshared (TaskCompletionSource_1_t1521 * __this, AggregateException_t1516 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m7683(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1521 *, AggregateException_t1516 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m7683_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m33038_gshared (TaskCompletionSource_1_t1521 * __this, Exception_t468 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m33038(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1521 *, Exception_t468 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m33038_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m7684_gshared (TaskCompletionSource_1_t1521 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m7684(__this, method) (( bool (*) (TaskCompletionSource_1_t1521 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m7684_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m7670_gshared (TaskCompletionSource_1_t1521 * __this, int32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m7670(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1521 *, int32_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m7670_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m7669_gshared (TaskCompletionSource_1_t1521 * __this, AggregateException_t1516 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m7669(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1521 *, AggregateException_t1516 *, const MethodInfo*))TaskCompletionSource_1_SetException_m7669_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m33039_gshared (TaskCompletionSource_1_t1521 * __this, Exception_t468 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m33039(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1521 *, Exception_t468 *, const MethodInfo*))TaskCompletionSource_1_SetException_m33039_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m7330_gshared (TaskCompletionSource_1_t1521 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m7330(__this, method) (( void (*) (TaskCompletionSource_1_t1521 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7330_gshared)(__this, method)
