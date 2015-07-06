#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t1661;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1723;
// System.Object
struct Object_t;
// System.AggregateException
struct AggregateException_t1669;
// System.Exception
struct Exception_t468;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m8449_gshared (TaskCompletionSource_1_t1661 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m8449(__this, method) (( void (*) (TaskCompletionSource_1_t1661 *, const MethodInfo*))TaskCompletionSource_1__ctor_m8449_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
extern "C" Task_1_t1723 * TaskCompletionSource_1_get_Task_m8451_gshared (TaskCompletionSource_1_t1661 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m8451(__this, method) (( Task_1_t1723 * (*) (TaskCompletionSource_1_t1661 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m8451_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m36970_gshared (TaskCompletionSource_1_t1661 * __this, Task_1_t1723 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m36970(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1661 *, Task_1_t1723 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m36970_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m36971_gshared (TaskCompletionSource_1_t1661 * __this, Object_t * ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m36971(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1661 *, Object_t *, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m36971_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m36972_gshared (TaskCompletionSource_1_t1661 * __this, AggregateException_t1669 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m36972(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1661 *, AggregateException_t1669 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m36972_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m36973_gshared (TaskCompletionSource_1_t1661 * __this, Exception_t468 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m36973(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1661 *, Exception_t468 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m36973_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m36974_gshared (TaskCompletionSource_1_t1661 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m36974(__this, method) (( bool (*) (TaskCompletionSource_1_t1661 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m36974_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m8894_gshared (TaskCompletionSource_1_t1661 * __this, Object_t * ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m8894(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1661 *, Object_t *, const MethodInfo*))TaskCompletionSource_1_SetResult_m8894_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m36975_gshared (TaskCompletionSource_1_t1661 * __this, AggregateException_t1669 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m36975(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1661 *, AggregateException_t1669 *, const MethodInfo*))TaskCompletionSource_1_SetException_m36975_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m36976_gshared (TaskCompletionSource_1_t1661 * __this, Exception_t468 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m36976(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1661 *, Exception_t468 *, const MethodInfo*))TaskCompletionSource_1_SetException_m36976_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m8450_gshared (TaskCompletionSource_1_t1661 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m8450(__this, method) (( void (*) (TaskCompletionSource_1_t1661 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m8450_gshared)(__this, method)
