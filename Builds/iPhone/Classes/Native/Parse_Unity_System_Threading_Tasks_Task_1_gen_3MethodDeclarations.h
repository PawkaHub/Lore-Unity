#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t1950;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t344;
// System.Action`1<System.Threading.Tasks.Task`1<System.String>>
struct Action_1_t2120;
// System.AggregateException
struct AggregateException_t727;

// System.Void System.Threading.Tasks.Task`1<System.String>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_4MethodDeclarations.h"
#define Task_1__ctor_m38379(__this, method) (( void (*) (Task_1_t1950 *, const MethodInfo*))Task_1__ctor_m28787_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.String>::get_Result()
#define Task_1_get_Result_m9323(__this, method) (( String_t* (*) (Task_1_t1950 *, const MethodInfo*))Task_1_get_Result_m28788_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.String>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m38380(__this, ___continuation, method) (( Task_t344 * (*) (Task_1_t1950 *, Action_1_t2120 *, const MethodInfo*))Task_1_ContinueWith_m28789_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.String>::RunContinuations()
#define Task_1_RunContinuations_m38381(__this, method) (( void (*) (Task_1_t1950 *, const MethodInfo*))Task_1_RunContinuations_m28790_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.String>::TrySetResult(T)
#define Task_1_TrySetResult_m38382(__this, ___result, method) (( bool (*) (Task_1_t1950 *, String_t*, const MethodInfo*))Task_1_TrySetResult_m28791_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.String>::TrySetCanceled()
#define Task_1_TrySetCanceled_m38383(__this, method) (( bool (*) (Task_1_t1950 *, const MethodInfo*))Task_1_TrySetCanceled_m28792_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.String>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m38384(__this, ___exception, method) (( bool (*) (Task_1_t1950 *, AggregateException_t727 *, const MethodInfo*))Task_1_TrySetException_m28793_gshared)(__this, ___exception, method)
