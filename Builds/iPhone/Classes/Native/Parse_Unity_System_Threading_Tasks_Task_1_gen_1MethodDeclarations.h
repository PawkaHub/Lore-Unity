﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t1544;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t1418;
// System.Action`1<System.Threading.Tasks.Task`1<System.String>>
struct Action_1_t1664;
// System.AggregateException
struct AggregateException_t1516;

// System.Void System.Threading.Tasks.Task`1<System.String>::.ctor()
// System.Threading.Tasks.Task`1<System.Object>
#include "Parse_Unity_System_Threading_Tasks_Task_1_gen_2MethodDeclarations.h"
#define Task_1__ctor_m32950(__this, method) (( void (*) (Task_1_t1544 *, const MethodInfo*))Task_1__ctor_m32951_gshared)(__this, method)
// T System.Threading.Tasks.Task`1<System.String>::get_Result()
#define Task_1_get_Result_m7624(__this, method) (( String_t* (*) (Task_1_t1544 *, const MethodInfo*))Task_1_get_Result_m32952_gshared)(__this, method)
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.String>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<T>>)
#define Task_1_ContinueWith_m32953(__this, ___continuation, method) (( Task_t1418 * (*) (Task_1_t1544 *, Action_1_t1664 *, const MethodInfo*))Task_1_ContinueWith_m32954_gshared)(__this, ___continuation, method)
// System.Void System.Threading.Tasks.Task`1<System.String>::RunContinuations()
#define Task_1_RunContinuations_m32955(__this, method) (( void (*) (Task_1_t1544 *, const MethodInfo*))Task_1_RunContinuations_m32956_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.String>::TrySetResult(T)
#define Task_1_TrySetResult_m32957(__this, ___result, method) (( bool (*) (Task_1_t1544 *, String_t*, const MethodInfo*))Task_1_TrySetResult_m32958_gshared)(__this, ___result, method)
// System.Boolean System.Threading.Tasks.Task`1<System.String>::TrySetCanceled()
#define Task_1_TrySetCanceled_m32959(__this, method) (( bool (*) (Task_1_t1544 *, const MethodInfo*))Task_1_TrySetCanceled_m32960_gshared)(__this, method)
// System.Boolean System.Threading.Tasks.Task`1<System.String>::TrySetException(System.AggregateException)
#define Task_1_TrySetException_m32961(__this, ___exception, method) (( bool (*) (Task_1_t1544 *, AggregateException_t1516 *, const MethodInfo*))Task_1_TrySetException_m32962_gshared)(__this, ___exception, method)