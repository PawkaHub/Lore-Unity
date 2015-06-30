#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Byte>
struct Task_1_t1573;
// System.Threading.Tasks.Task
struct Task_t1418;
// System.Action`1<System.Threading.Tasks.Task`1<System.Byte>>
struct Action_1_t5545;
// System.AggregateException
struct AggregateException_t1516;

// System.Void System.Threading.Tasks.Task`1<System.Byte>::.ctor()
extern "C" void Task_1__ctor_m32997_gshared (Task_1_t1573 * __this, const MethodInfo* method);
#define Task_1__ctor_m32997(__this, method) (( void (*) (Task_1_t1573 *, const MethodInfo*))Task_1__ctor_m32997_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Byte>::get_Result()
extern "C" uint8_t Task_1_get_Result_m32998_gshared (Task_1_t1573 * __this, const MethodInfo* method);
#define Task_1_get_Result_m32998(__this, method) (( uint8_t (*) (Task_1_t1573 *, const MethodInfo*))Task_1_get_Result_m32998_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Byte>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1418 * Task_1_ContinueWith_m33000_gshared (Task_1_t1573 * __this, Action_1_t5545 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m33000(__this, ___continuation, method) (( Task_t1418 * (*) (Task_1_t1573 *, Action_1_t5545 *, const MethodInfo*))Task_1_ContinueWith_m33000_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Byte>::RunContinuations()
extern "C" void Task_1_RunContinuations_m33002_gshared (Task_1_t1573 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m33002(__this, method) (( void (*) (Task_1_t1573 *, const MethodInfo*))Task_1_RunContinuations_m33002_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m33004_gshared (Task_1_t1573 * __this, uint8_t ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m33004(__this, ___result, method) (( bool (*) (Task_1_t1573 *, uint8_t, const MethodInfo*))Task_1_TrySetResult_m33004_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m33006_gshared (Task_1_t1573 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m33006(__this, method) (( bool (*) (Task_1_t1573 *, const MethodInfo*))Task_1_TrySetCanceled_m33006_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Byte>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m33008_gshared (Task_1_t1573 * __this, AggregateException_t1516 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m33008(__this, ___exception, method) (( bool (*) (Task_1_t1573 *, AggregateException_t1516 *, const MethodInfo*))Task_1_TrySetException_m33008_gshared)(__this, ___exception, method)
