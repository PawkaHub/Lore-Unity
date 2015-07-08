#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Int32>
struct TaskCompletionSource_1_t1923;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_t1949;
// System.AggregateException
struct AggregateException_t727;
// System.Exception
struct Exception_t496;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m8880_gshared (TaskCompletionSource_1_t1923 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m8880(__this, method) (( void (*) (TaskCompletionSource_1_t1923 *, const MethodInfo*))TaskCompletionSource_1__ctor_m8880_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::get_Task()
extern "C" Task_1_t1949 * TaskCompletionSource_1_get_Task_m8882_gshared (TaskCompletionSource_1_t1923 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m8882(__this, method) (( Task_1_t1949 * (*) (TaskCompletionSource_1_t1923 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m8882_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m29124_gshared (TaskCompletionSource_1_t1923 * __this, Task_1_t1949 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m29124(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1923 *, Task_1_t1949 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m29124_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m9388_gshared (TaskCompletionSource_1_t1923 * __this, int32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m9388(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1923 *, int32_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m9388_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m9409_gshared (TaskCompletionSource_1_t1923 * __this, AggregateException_t727 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m9409(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1923 *, AggregateException_t727 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m9409_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m29125_gshared (TaskCompletionSource_1_t1923 * __this, Exception_t496 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m29125(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1923 *, Exception_t496 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29125_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m9410_gshared (TaskCompletionSource_1_t1923 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m9410(__this, method) (( bool (*) (TaskCompletionSource_1_t1923 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m9410_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m9386_gshared (TaskCompletionSource_1_t1923 * __this, int32_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m9386(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1923 *, int32_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m9386_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m9385_gshared (TaskCompletionSource_1_t1923 * __this, AggregateException_t727 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m9385(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1923 *, AggregateException_t727 *, const MethodInfo*))TaskCompletionSource_1_SetException_m9385_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m29126_gshared (TaskCompletionSource_1_t1923 * __this, Exception_t496 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m29126(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1923 *, Exception_t496 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29126_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Int32>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m8881_gshared (TaskCompletionSource_1_t1923 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m8881(__this, method) (( void (*) (TaskCompletionSource_1_t1923 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m8881_gshared)(__this, method)
