#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>
struct Task_1_t1530;
// System.Threading.Tasks.Task
struct Task_t1418;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>>
struct Action_1_t1680;
// System.AggregateException
struct AggregateException_t1516;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m33813(__this, method) (( void (*) (Task_1_t1530 *, const MethodInfo*))Task_1__ctor_m32951_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::get_Result()
#define Task_1_get_Result_m7685(__this, method) (( Task_t1418 * (*) (Task_1_t1530 *, const MethodInfo*))Task_1_get_Result_m32952_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m7688(__this, ___continuation, method) (( Task_t1418 * (*) (Task_1_t1530 *, Action_1_t1680 *, const MethodInfo*))Task_1_ContinueWith_m32954_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::RunContinuations()
#define Task_1_RunContinuations_m33814(__this, method) (( void (*) (Task_1_t1530 *, const MethodInfo*))Task_1_RunContinuations_m32956_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::TrySetResult(T)
#define Task_1_TrySetResult_m33815(__this, ___result, method) (( bool (*) (Task_1_t1530 *, Task_t1418 *, const MethodInfo*))Task_1_TrySetResult_m32958_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::TrySetCanceled()
#define Task_1_TrySetCanceled_m33816(__this, method) (( bool (*) (Task_1_t1530 *, const MethodInfo*))Task_1_TrySetCanceled_m32960_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m33817(__this, ___exception, method) (( bool (*) (Task_1_t1530 *, AggregateException_t1516 *, const MethodInfo*))Task_1_TrySetException_m32962_gshared)(__this, ___exception, method)
