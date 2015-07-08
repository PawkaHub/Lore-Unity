#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<AsyncVoid>
struct TaskCompletionSource_1_t336;
// System.Threading.Tasks.Task`1<AsyncVoid>
struct Task_1_t732;
// System.AggregateException
struct AggregateException_t727;
// System.Exception
struct Exception_t496;
// AsyncVoid
#include "AssemblyU2DCSharp_AsyncVoid.h"

// System.Void System.Threading.Tasks.TaskCompletionSource`1<AsyncVoid>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m3260_gshared (TaskCompletionSource_1_t336 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m3260(__this, method) (( void (*) (TaskCompletionSource_1_t336 *, const MethodInfo*))TaskCompletionSource_1__ctor_m3260_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<AsyncVoid>::get_Task()
extern "C" Task_1_t732 * TaskCompletionSource_1_get_Task_m3261_gshared (TaskCompletionSource_1_t336 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m3261(__this, method) (( Task_1_t732 * (*) (TaskCompletionSource_1_t336 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m3261_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<AsyncVoid>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m29162_gshared (TaskCompletionSource_1_t336 * __this, Task_1_t732 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m29162(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t336 *, Task_1_t732 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m29162_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<AsyncVoid>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m3247_gshared (TaskCompletionSource_1_t336 * __this, AsyncVoid_t350  ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m3247(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t336 *, AsyncVoid_t350 , const MethodInfo*))TaskCompletionSource_1_TrySetResult_m3247_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<AsyncVoid>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m3244_gshared (TaskCompletionSource_1_t336 * __this, AggregateException_t727 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m3244(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t336 *, AggregateException_t727 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m3244_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<AsyncVoid>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m3249_gshared (TaskCompletionSource_1_t336 * __this, Exception_t496 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m3249(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t336 *, Exception_t496 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m3249_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<AsyncVoid>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m3246_gshared (TaskCompletionSource_1_t336 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m3246(__this, method) (( bool (*) (TaskCompletionSource_1_t336 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m3246_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<AsyncVoid>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m3258_gshared (TaskCompletionSource_1_t336 * __this, AsyncVoid_t350  ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m3258(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t336 *, AsyncVoid_t350 , const MethodInfo*))TaskCompletionSource_1_SetResult_m3258_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<AsyncVoid>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m3256_gshared (TaskCompletionSource_1_t336 * __this, AggregateException_t727 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m3256(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t336 *, AggregateException_t727 *, const MethodInfo*))TaskCompletionSource_1_SetException_m3256_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<AsyncVoid>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m29163_gshared (TaskCompletionSource_1_t336 * __this, Exception_t496 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m29163(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t336 *, Exception_t496 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29163_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<AsyncVoid>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m3257_gshared (TaskCompletionSource_1_t336 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m3257(__this, method) (( void (*) (TaskCompletionSource_1_t336 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m3257_gshared)(__this, method)
