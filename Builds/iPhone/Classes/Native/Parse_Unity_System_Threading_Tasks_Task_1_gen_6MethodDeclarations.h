#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>>
struct Task_1_t1618;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1551;
// System.Threading.Tasks.Task
struct Task_t1418;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>>>
struct Action_1_t6849;
// System.AggregateException
struct AggregateException_t1516;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m35177(__this, method) (( void (*) (Task_1_t1618 *, const MethodInfo*))Task_1__ctor_m32951_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>>::get_Result()
#define Task_1_get_Result_m35178(__this, method) (( Task_1_t1551 * (*) (Task_1_t1618 *, const MethodInfo*))Task_1_get_Result_m32952_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m35179(__this, ___continuation, method) (( Task_t1418 * (*) (Task_1_t1618 *, Action_1_t6849 *, const MethodInfo*))Task_1_ContinueWith_m32954_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>>::RunContinuations()
#define Task_1_RunContinuations_m35180(__this, method) (( void (*) (Task_1_t1618 *, const MethodInfo*))Task_1_RunContinuations_m32956_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>>::TrySetResult(T)
#define Task_1_TrySetResult_m35181(__this, ___result, method) (( bool (*) (Task_1_t1618 *, Task_1_t1551 *, const MethodInfo*))Task_1_TrySetResult_m32958_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m35182(__this, method) (( bool (*) (Task_1_t1618 *, const MethodInfo*))Task_1_TrySetCanceled_m32960_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m35183(__this, ___exception, method) (( bool (*) (Task_1_t1618 *, AggregateException_t1516 *, const MethodInfo*))Task_1_TrySetException_m32962_gshared)(__this, ___exception, method)
