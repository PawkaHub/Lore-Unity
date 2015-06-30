#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Byte>>
struct Task_1_t5564;
// System.Threading.Tasks.Task`1<System.Byte>
struct Task_1_t1573;
// System.Threading.Tasks.Task
struct Task_t1418;
// System.Action`1<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Byte>>>
struct Action_1_t5565;
// System.AggregateException
struct AggregateException_t1516;

// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Byte>>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m33153(__this, method) (( void (*) (Task_1_t5564 *, const MethodInfo*))Task_1__ctor_m32951_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Byte>>::get_Result()
#define Task_1_get_Result_m33154(__this, method) (( Task_1_t1573 * (*) (Task_1_t5564 *, const MethodInfo*))Task_1_get_Result_m32952_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Byte>>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m33155(__this, ___continuation, method) (( Task_t1418 * (*) (Task_1_t5564 *, Action_1_t5565 *, const MethodInfo*))Task_1_ContinueWith_m32954_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Byte>>::RunContinuations()
#define Task_1_RunContinuations_m33156(__this, method) (( void (*) (Task_1_t5564 *, const MethodInfo*))Task_1_RunContinuations_m32956_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Byte>>::TrySetResult(T)
#define Task_1_TrySetResult_m33157(__this, ___result, method) (( bool (*) (Task_1_t5564 *, Task_1_t1573 *, const MethodInfo*))Task_1_TrySetResult_m32958_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Byte>>::TrySetCanceled()
#define Task_1_TrySetCanceled_m33158(__this, method) (( bool (*) (Task_1_t5564 *, const MethodInfo*))Task_1_TrySetCanceled_m32960_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Byte>>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m33159(__this, ___exception, method) (( bool (*) (Task_1_t5564 *, AggregateException_t1516 *, const MethodInfo*))Task_1_TrySetException_m32962_gshared)(__this, ___exception, method)
