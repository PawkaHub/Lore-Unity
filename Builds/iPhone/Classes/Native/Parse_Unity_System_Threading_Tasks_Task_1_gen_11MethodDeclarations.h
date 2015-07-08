#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<Parse.ParseObject>
struct Task_1_t1970;
// Parse.ParseObject
struct ParseObject_t596;
// System.Threading.Tasks.Task
struct Task_t344;
// System.Action`1<System.Threading.Tasks.Task`1<Parse.ParseObject>>
struct Action_1_t7286;
// System.AggregateException
struct AggregateException_t727;

// System.Void System.Threading.Tasks.Task`1<Parse.ParseObject>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_4MethodDeclarations.h"
#define Task_1__ctor_m40332(__this, method) (( void (*) (Task_1_t1970 *, const MethodInfo*))Task_1__ctor_m28787_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<Parse.ParseObject>::get_Result()
#define Task_1_get_Result_m9308(__this, method) (( ParseObject_t596 * (*) (Task_1_t1970 *, const MethodInfo*))Task_1_get_Result_m28788_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Parse.ParseObject>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m40333(__this, ___continuation, method) (( Task_t344 * (*) (Task_1_t1970 *, Action_1_t7286 *, const MethodInfo*))Task_1_ContinueWith_m28789_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<Parse.ParseObject>::RunContinuations()
#define Task_1_RunContinuations_m40334(__this, method) (( void (*) (Task_1_t1970 *, const MethodInfo*))Task_1_RunContinuations_m28790_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseObject>::TrySetResult(T)
#define Task_1_TrySetResult_m40335(__this, ___result, method) (( bool (*) (Task_1_t1970 *, ParseObject_t596 *, const MethodInfo*))Task_1_TrySetResult_m28791_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseObject>::TrySetCanceled()
#define Task_1_TrySetCanceled_m40336(__this, method) (( bool (*) (Task_1_t1970 *, const MethodInfo*))Task_1_TrySetCanceled_m28792_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<Parse.ParseObject>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m40337(__this, ___exception, method) (( bool (*) (Task_1_t1970 *, AggregateException_t727 *, const MethodInfo*))Task_1_TrySetException_m28793_gshared)(__this, ___exception, method)
