#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t1542;
// System.Threading.Tasks.Task
struct Task_t1418;
// System.Action`1<System.Threading.Tasks.Task`1<System.Boolean>>
struct Action_1_t5547;
// System.AggregateException
struct AggregateException_t1516;

// System.Void System.Threading.Tasks.Task`1<System.Boolean>::.ctor()
// System.Threading.Tasks.Task`1<System.Byte>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_10MethodDeclarations.h"
#define Task_1__ctor_m32996(__this, method) (( void (*) (Task_1_t1542 *, const MethodInfo*))Task_1__ctor_m32997_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Boolean>::get_Result()
#define Task_1_get_Result_m7345(__this, method) (( bool (*) (Task_1_t1542 *, const MethodInfo*))Task_1_get_Result_m32998_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Boolean>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m32999(__this, ___continuation, method) (( Task_t1418 * (*) (Task_1_t1542 *, Action_1_t5547 *, const MethodInfo*))Task_1_ContinueWith_m33000_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Boolean>::RunContinuations()
#define Task_1_RunContinuations_m33001(__this, method) (( void (*) (Task_1_t1542 *, const MethodInfo*))Task_1_RunContinuations_m33002_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetResult(T)
#define Task_1_TrySetResult_m33003(__this, ___result, method) (( bool (*) (Task_1_t1542 *, bool, const MethodInfo*))Task_1_TrySetResult_m33004_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetCanceled()
#define Task_1_TrySetCanceled_m33005(__this, method) (( bool (*) (Task_1_t1542 *, const MethodInfo*))Task_1_TrySetCanceled_m33006_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Boolean>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m33007(__this, ___exception, method) (( bool (*) (Task_1_t1542 *, AggregateException_t1516 *, const MethodInfo*))Task_1_TrySetException_m33008_gshared)(__this, ___exception, method)
