#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t808;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t344;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_t810;
// System.AggregateException
struct AggregateException_t727;

// System.Void System.Threading.Tasks.Task`1<System.Object>::.ctor()
extern "C" void Task_1__ctor_m28787_gshared (Task_1_t808 * __this, const MethodInfo* method);
#define Task_1__ctor_m28787(__this, method) (( void (*) (Task_1_t808 *, const MethodInfo*))Task_1__ctor_m28787_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Object>::get_Result()
extern "C" Object_t * Task_1_get_Result_m28788_gshared (Task_1_t808 * __this, const MethodInfo* method);
#define Task_1_get_Result_m28788(__this, method) (( Object_t * (*) (Task_1_t808 *, const MethodInfo*))Task_1_get_Result_m28788_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t344 * Task_1_ContinueWith_m28789_gshared (Task_1_t808 * __this, Action_1_t810 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m28789(__this, ___continuation, method) (( Task_t344 * (*) (Task_1_t808 *, Action_1_t810 *, const MethodInfo*))Task_1_ContinueWith_m28789_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Object>::RunContinuations()
extern "C" void Task_1_RunContinuations_m28790_gshared (Task_1_t808 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m28790(__this, method) (( void (*) (Task_1_t808 *, const MethodInfo*))Task_1_RunContinuations_m28790_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m28791_gshared (Task_1_t808 * __this, Object_t * ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m28791(__this, ___result, method) (( bool (*) (Task_1_t808 *, Object_t *, const MethodInfo*))Task_1_TrySetResult_m28791_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m28792_gshared (Task_1_t808 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m28792(__this, method) (( bool (*) (Task_1_t808 *, const MethodInfo*))Task_1_TrySetCanceled_m28792_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m28793_gshared (Task_1_t808 * __this, AggregateException_t727 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m28793(__this, ___exception, method) (( bool (*) (Task_1_t808 *, AggregateException_t727 *, const MethodInfo*))Task_1_TrySetException_m28793_gshared)(__this, ___exception, method)
