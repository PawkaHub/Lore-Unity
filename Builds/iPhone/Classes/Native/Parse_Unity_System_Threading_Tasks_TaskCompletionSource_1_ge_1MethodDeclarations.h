#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct TaskCompletionSource_1_t1505;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct Task_1_t1548;
// System.Tuple`2<System.Net.HttpStatusCode,System.String>
struct Tuple_2_t1595;
// System.AggregateException
struct AggregateException_t1516;
// System.Exception
struct Exception_t468;

// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::.ctor()
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_TaskCompletionSource_1_ge_0MethodDeclarations.h"
#define TaskCompletionSource_1__ctor_m7639(__this, method) (( void (*) (TaskCompletionSource_1_t1505 *, const MethodInfo*))TaskCompletionSource_1__ctor_m7334_gshared)(__this, method)
// System.Threading.Tasks.Task`1<T> System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::get_Task()
#define TaskCompletionSource_1_get_Task_m7623(__this, method) (( Task_1_t1548 * (*) (TaskCompletionSource_1_t1505 *, const MethodInfo*))TaskCompletionSource_1_get_Task_m7336_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::set_Task(System.Threading.Tasks.Task`1<T>)
#define TaskCompletionSource_1_set_Task_m36032(__this, ___value, method) (( void (*) (TaskCompletionSource_1_t1505 *, Task_1_t1548 *, const MethodInfo*))TaskCompletionSource_1_set_Task_m32984_gshared)(__this, ___value, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetResult(T)
#define TaskCompletionSource_1_TrySetResult_m7621(__this, ___result, method) (( bool (*) (TaskCompletionSource_1_t1505 *, Tuple_2_t1595 *, const MethodInfo*))TaskCompletionSource_1_TrySetResult_m32985_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetException(System.AggregateException)
#define TaskCompletionSource_1_TrySetException_m36033(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1505 *, AggregateException_t1516 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m32986_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetException(System.Exception)
#define TaskCompletionSource_1_TrySetException_m36034(__this, ___exception, method) (( bool (*) (TaskCompletionSource_1_t1505 *, Exception_t468 *, const MethodInfo*))TaskCompletionSource_1_TrySetException_m32987_gshared)(__this, ___exception, method)
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::TrySetCanceled()
#define TaskCompletionSource_1_TrySetCanceled_m7617(__this, method) (( bool (*) (TaskCompletionSource_1_t1505 *, const MethodInfo*))TaskCompletionSource_1_TrySetCanceled_m32988_gshared)(__this, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetResult(T)
#define TaskCompletionSource_1_SetResult_m36035(__this, ___result, method) (( void (*) (TaskCompletionSource_1_t1505 *, Tuple_2_t1595 *, const MethodInfo*))TaskCompletionSource_1_SetResult_m7625_gshared)(__this, ___result, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetException(System.AggregateException)
#define TaskCompletionSource_1_SetException_m36036(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1505 *, AggregateException_t1516 *, const MethodInfo*))TaskCompletionSource_1_SetException_m32989_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetException(System.Exception)
#define TaskCompletionSource_1_SetException_m36037(__this, ___exception, method) (( void (*) (TaskCompletionSource_1_t1505 *, Exception_t468 *, const MethodInfo*))TaskCompletionSource_1_SetException_m32990_gshared)(__this, ___exception, method)
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>::SetCanceled()
#define TaskCompletionSource_1_SetCanceled_m36038(__this, method) (( void (*) (TaskCompletionSource_1_t1505 *, const MethodInfo*))TaskCompletionSource_1_SetCanceled_m7335_gshared)(__this, method)
