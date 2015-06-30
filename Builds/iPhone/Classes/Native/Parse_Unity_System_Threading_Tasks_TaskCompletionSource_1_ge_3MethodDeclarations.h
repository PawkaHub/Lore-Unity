#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Byte>
struct TaskCompletionSource_1_t5559;
// System.Threading.Tasks.Task`1<System.Byte>
struct Task_1_t1573;
// System.AggregateException
struct AggregateException_t1516;
// System.Exception
struct Exception_t468;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m33098_gshared (TaskCompletionSource_1_t5559 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m33098(__this, method) (( void (*) (TaskCompletionSource_1_t5559 *, const MethodInfo*))TaskCompletionSource_1__ctor_m33098_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::get_Task()
extern "C" Task_1_t1573 * TaskCompletionSource_1_get_Task_m33099_gshared (TaskCompletionSource_1_t5559 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m33099(__this, method) (( Task_1_t1573 * (*) (TaskCompletionSource_1_t5559 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m33099_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m33100_gshared (TaskCompletionSource_1_t5559 * __this, Task_1_t1573 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m33100(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t5559 *, Task_1_t1573 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m33100_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m33101_gshared (TaskCompletionSource_1_t5559 * __this, uint8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m33101(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t5559 *, uint8_t, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m33101_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m33102_gshared (TaskCompletionSource_1_t5559 * __this, AggregateException_t1516 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m33102(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t5559 *, AggregateException_t1516 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m33102_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m33103_gshared (TaskCompletionSource_1_t5559 * __this, Exception_t468 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m33103(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t5559 *, Exception_t468 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m33103_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m33104_gshared (TaskCompletionSource_1_t5559 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m33104(__this, method) (( bool (*) (TaskCompletionSource_1_t5559 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m33104_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m33105_gshared (TaskCompletionSource_1_t5559 * __this, uint8_t ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m33105(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t5559 *, uint8_t, const MethodInfo*))TaskCompletionSource_1_SetResult_m33105_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m33106_gshared (TaskCompletionSource_1_t5559 * __this, AggregateException_t1516 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m33106(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t5559 *, AggregateException_t1516 *, const MethodInfo*))TaskCompletionSource_1_SetException_m33106_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m33107_gshared (TaskCompletionSource_1_t5559 * __this, Exception_t468 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m33107(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t5559 *, Exception_t468 *, const MethodInfo*))TaskCompletionSource_1_SetException_m33107_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Byte>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m33108_gshared (TaskCompletionSource_1_t5559 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m33108(__this, method) (( void (*) (TaskCompletionSource_1_t5559 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m33108_gshared)(__this, method)
