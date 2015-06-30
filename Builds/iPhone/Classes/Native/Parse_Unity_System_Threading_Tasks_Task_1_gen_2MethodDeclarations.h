#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t1554;
// System.Object
struct Object_t;
// System.Threading.Tasks.Task
struct Task_t1418;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_t1607;
// System.AggregateException
struct AggregateException_t1516;

// System.Void System.Threading.Tasks.Task`1<System.Object>::.ctor()
extern "C" void Task_1__ctor_m32951_gshared (Task_1_t1554 * __this, const MethodInfo* method);
#define Task_1__ctor_m32951(__this, method) (( void (*) (Task_1_t1554 *, const MethodInfo*))Task_1__ctor_m32951_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.Object>::get_Result()
extern "C" Object_t * Task_1_get_Result_m32952_gshared (Task_1_t1554 * __this, const MethodInfo* method);
#define Task_1_get_Result_m32952(__this, method) (( Object_t * (*) (Task_1_t1554 *, const MethodInfo*))Task_1_get_Result_m32952_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
extern "C" Task_t1418 * Task_1_ContinueWith_m32954_gshared (Task_1_t1554 * __this, Action_1_t1607 * ___continuation, const MethodInfo* method);
#define Task_1_ContinueWith_m32954(__this, ___continuation, method) (( Task_t1418 * (*) (Task_1_t1554 *, Action_1_t1607 *, const MethodInfo*))Task_1_ContinueWith_m32954_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.Object>::RunContinuations()
extern "C" void Task_1_RunContinuations_m32956_gshared (Task_1_t1554 * __this, const MethodInfo* method);
#define Task_1_RunContinuations_m32956(__this, method) (( void (*) (Task_1_t1554 *, const MethodInfo*))Task_1_RunContinuations_m32956_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetResult(T)
extern "C" bool Task_1_TrySetResult_m32958_gshared (Task_1_t1554 * __this, Object_t * ___result, const MethodInfo* method);
#define Task_1_TrySetResult_m32958(__this, ___result, method) (( bool (*) (Task_1_t1554 *, Object_t *, const MethodInfo*))Task_1_TrySetResult_m32958_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetCanceled()
extern "C" bool Task_1_TrySetCanceled_m32960_gshared (Task_1_t1554 * __this, const MethodInfo* method);
#define Task_1_TrySetCanceled_m32960(__this, method) (( bool (*) (Task_1_t1554 *, const MethodInfo*))Task_1_TrySetCanceled_m32960_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.Object>::TrySetException(System.AggregateException)
extern "C" bool Task_1_TrySetException_m32962_gshared (Task_1_t1554 * __this, AggregateException_t1516 * ___exception, const MethodInfo* method);
#define Task_1_TrySetException_m32962(__this, ___exception, method) (( bool (*) (Task_1_t1554 *, AggregateException_t1516 *, const MethodInfo*))Task_1_TrySetException_m32962_gshared)(__this, ___exception, method)
