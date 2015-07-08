#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>
struct Task_1_t1952;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t1810;
// System.Threading.Tasks.Task
struct Task_t344;
// System.Action`1<System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Action_1_t7159;
// System.AggregateException
struct AggregateException_t727;

// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_4MethodDeclarations.h"
#define Task_1__ctor_m39044(__this, method) (( void (*) (Task_1_t1952 *, const MethodInfo*))Task_1__ctor_m28787_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::get_Result()
#define Task_1_get_Result_m9278(__this, method) (( Object_t* (*) (Task_1_t1952 *, const MethodInfo*))Task_1_get_Result_m28788_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m39045(__this, ___continuation, method) (( Task_t344 * (*) (Task_1_t1952 *, Action_1_t7159 *, const MethodInfo*))Task_1_ContinueWith_m28789_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::RunContinuations()
#define Task_1_RunContinuations_m39046(__this, method) (( void (*) (Task_1_t1952 *, const MethodInfo*))Task_1_RunContinuations_m28790_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::TrySetResult(T)
#define Task_1_TrySetResult_m39047(__this, ___result, method) (( bool (*) (Task_1_t1952 *, Object_t*, const MethodInfo*))Task_1_TrySetResult_m28791_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m39048(__this, method) (( bool (*) (Task_1_t1952 *, const MethodInfo*))Task_1_TrySetCanceled_m28792_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Collections.Generic.IDictionary`2<System.String,System.Object>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m39049(__this, ___exception, method) (( bool (*) (Task_1_t1952 *, AggregateException_t727 *, const MethodInfo*))Task_1_TrySetException_m28793_gshared)(__this, ___exception, method)
