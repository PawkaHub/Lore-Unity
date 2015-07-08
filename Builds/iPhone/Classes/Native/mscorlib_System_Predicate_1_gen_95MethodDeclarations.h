﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<System.Double>
struct Predicate_1_t7839;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<System.Double>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m47929_gshared (Predicate_1_t7839 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m47929(__this, ___object, ___method, method) (( void (*) (Predicate_1_t7839 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m47929_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Double>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m47930_gshared (Predicate_1_t7839 * __this, double ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m47930(__this, ___obj, method) (( bool (*) (Predicate_1_t7839 *, double, const MethodInfo*))Predicate_1_Invoke_m47930_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Double>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m47931_gshared (Predicate_1_t7839 * __this, double ___obj, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m47931(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t7839 *, double, AsyncCallback_t477 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m47931_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Double>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m47932_gshared (Predicate_1_t7839 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m47932(__this, ___result, method) (( bool (*) (Predicate_1_t7839 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m47932_gshared)(__this, ___result, method)
