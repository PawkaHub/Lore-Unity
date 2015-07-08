#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t1912;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t808;
// System.Object
struct Object_t;
// System.AggregateException
struct AggregateException_t727;
// System.Exception
struct Exception_t496;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
extern "C" void TaskCompletionSource_1__ctor_m8885_gshared (TaskCompletionSource_1_t1912 * __this, const MethodInfo* method);
#define TaskCompletionSource_1__ctor_m8885(__this, method) (( void (*) (TaskCompletionSource_1_t1912 *, const MethodInfo*))TaskCompletionSource_1__ctor_m8885_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
extern "C" Task_1_t808 * TaskCompletionSource_1_get_Task_m8887_gshared (TaskCompletionSource_1_t1912 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_get_Task_m8887(__this, method) (( Task_1_t808 * (*) (TaskCompletionSource_1_t1912 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m8887_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::set_Task(System.Threading.Tasks.Task`1<T>)
extern "C" void TaskCompletionSource_1_set_Task_m29037_gshared (TaskCompletionSource_1_t1912 * __this, Task_1_t808 * ___value, const MethodInfo* method);
#define TaskCompletionSource_1_set_Task_m29037(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1912 *, Task_1_t808 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m29037_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetResult(T)
extern "C" bool TaskCompletionSource_1_TrySetResult_m29038_gshared (TaskCompletionSource_1_t1912 * __this, Object_t * ___result, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetResult_m29038(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1912 *, Object_t *, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m29038_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.AggregateException)
extern "C" bool TaskCompletionSource_1_TrySetException_m29039_gshared (TaskCompletionSource_1_t1912 * __this, AggregateException_t727 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m29039(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1912 *, AggregateException_t727 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29039_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.Exception)
extern "C" bool TaskCompletionSource_1_TrySetException_m29040_gshared (TaskCompletionSource_1_t1912 * __this, Exception_t496 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetException_m29040(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1912 *, Exception_t496 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m29040_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetCanceled()
extern "C" bool TaskCompletionSource_1_TrySetCanceled_m29041_gshared (TaskCompletionSource_1_t1912 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_TrySetCanceled_m29041(__this, method) (( bool (*) (TaskCompletionSource_1_t1912 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m29041_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(T)
extern "C" void TaskCompletionSource_1_SetResult_m9324_gshared (TaskCompletionSource_1_t1912 * __this, Object_t * ___result, const MethodInfo* method);
#define TaskCompletionSource_1_SetResult_m9324(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1912 *, Object_t *, const MethodInfo*))TaskCompletionSource_1_SetResult_m9324_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.AggregateException)
extern "C" void TaskCompletionSource_1_SetException_m29042_gshared (TaskCompletionSource_1_t1912 * __this, AggregateException_t727 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m29042(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1912 *, AggregateException_t727 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29042_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.Exception)
extern "C" void TaskCompletionSource_1_SetException_m29043_gshared (TaskCompletionSource_1_t1912 * __this, Exception_t496 * ___exception, const MethodInfo* method);
#define TaskCompletionSource_1_SetException_m29043(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1912 *, Exception_t496 *, const MethodInfo*))TaskCompletionSource_1_SetException_m29043_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetCanceled()
extern "C" void TaskCompletionSource_1_SetCanceled_m8886_gshared (TaskCompletionSource_1_t1912 * __this, const MethodInfo* method);
#define TaskCompletionSource_1_SetCanceled_m8886(__this, method) (( void (*) (TaskCompletionSource_1_t1912 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m8886_gshared)(__this, method)
