#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t1508;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1554;
// System.Object
struct Object_t;
// System.AggregateException
struct AggregateException_t1516;
// System.Exception
struct Exception_t468;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m7334_gshared (TaskCompletionSource_1_t1508 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m7334(__this, method) (( void (*) (TaskCompletionSource_1_t1508 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7334_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
extern "C" Task_1_t1554 * TaskCompletionSource_1_get_Task_m7336_gshared (TaskCompletionSource_1_t1508 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m7336(__this, method) (( Task_1_t1554 * (*) (TaskCompletionSource_1_t1508 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7336_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m32984_gshared (TaskCompletionSource_1_t1508 * __this, Task_1_t1554 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m32984(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1508 *, Task_1_t1554 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m32984_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m32985_gshared (TaskCompletionSource_1_t1508 * __this, Object_t * ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m32985(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1508 *, Object_t *, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m32985_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m32986_gshared (TaskCompletionSource_1_t1508 * __this, AggregateException_t1516 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m32986(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1508 *, AggregateException_t1516 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m32986_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m32987_gshared (TaskCompletionSource_1_t1508 * __this, Exception_t468 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m32987(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1508 *, Exception_t468 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m32987_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m32988_gshared (TaskCompletionSource_1_t1508 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m32988(__this, method) (( bool (*) (TaskCompletionSource_1_t1508 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m32988_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m7625_gshared (TaskCompletionSource_1_t1508 * __this, Object_t * ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m7625(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1508 *, Object_t *, const MethodInfo*))TaskCompletionSource_1_SetResult_m7625_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m32989_gshared (TaskCompletionSource_1_t1508 * __this, AggregateException_t1516 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m32989(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1508 *, AggregateException_t1516 *, const MethodInfo*))TaskCompletionSource_1_SetException_m32989_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m32990_gshared (TaskCompletionSource_1_t1508 * __this, Exception_t468 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m32990(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1508 *, Exception_t468 *, const MethodInfo*))TaskCompletionSource_1_SetException_m32990_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m7335_gshared (TaskCompletionSource_1_t1508 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m7335(__this, method) (( void (*) (TaskCompletionSource_1_t1508 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7335_gshared)(__this, method)
