#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t720;
// System.Threading.Tasks.Task
struct Task_t344;
// System.Action`1<System.Threading.Tasks.Task`1<System.Boolean>>
struct Action_1_t7099;
// System.AggregateException
struct AggregateException_t727;

// System.Void System.Threading.Tasks.Task`1<System.Boolean>::.ctor()
// System.Threading.Tasks.Task`1<System.Byte>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_17MethodDeclarations.h"
#define Task_1__ctor_m28588(__this, method) (( void (*) (Task_1_t720 *, const MethodInfo*))Task_1__ctor_m28562_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Boolean>::get_Result()
#define Task_1_get_Result_m8920(__this, method) (( bool (*) (Task_1_t720 *, const MethodInfo*))Task_1_get_Result_m28563_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Boolean>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m28589(__this, ___continuation, method) (( Task_t344 * (*) (Task_1_t720 *, Action_1_t7099 *, const MethodInfo*))Task_1_ContinueWith_m28564_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Boolean>::RunContinuations()
#define Task_1_RunContinuations_m28590(__this, method) (( void (*) (Task_1_t720 *, const MethodInfo*))Task_1_RunContinuations_m28565_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetResult(T)
#define Task_1_TrySetResult_m28591(__this, ___result, method) (( bool (*) (Task_1_t720 *, bool, const MethodInfo*))Task_1_TrySetResult_m28566_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetCanceled()
#define Task_1_TrySetCanceled_m28592(__this, method) (( bool (*) (Task_1_t720 *, const MethodInfo*))Task_1_TrySetCanceled_m28567_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m28593(__this, ___exception, method) (( bool (*) (Task_1_t720 *, AggregateException_t727 *, const MethodInfo*))Task_1_TrySetException_m28568_gshared)(__this, ___exception, method)
