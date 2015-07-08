﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.Color32>
struct Predicate_1_t6371;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void System.Predicate`1<UnityEngine.Color32>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m26822_gshared (Predicate_1_t6371 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m26822(__this, ___object, ___method, method) (( void (*) (Predicate_1_t6371 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m26822_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Color32>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m26823_gshared (Predicate_1_t6371 * __this, Color32_t89  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m26823(__this, ___obj, method) (( bool (*) (Predicate_1_t6371 *, Color32_t89 , const MethodInfo*))Predicate_1_Invoke_m26823_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Color32>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m26824_gshared (Predicate_1_t6371 * __this, Color32_t89  ___obj, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m26824(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t6371 *, Color32_t89 , AsyncCallback_t477 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m26824_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Color32>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m26825_gshared (Predicate_1_t6371 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m26825(__this, ___result, method) (( bool (*) (Predicate_1_t6371 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m26825_gshared)(__this, ___result, method)
