﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<PixelCrushers.DialogueSystem.Emphasis>
struct Predicate_1_t7033;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// PixelCrushers.DialogueSystem.Emphasis
#include "DialogueSystem_PixelCrushers_DialogueSystem_Emphasis.h"

// System.Void System.Predicate`1<PixelCrushers.DialogueSystem.Emphasis>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m37472_gshared (Predicate_1_t7033 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m37472(__this, ___object, ___method, method) (( void (*) (Predicate_1_t7033 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m37472_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<PixelCrushers.DialogueSystem.Emphasis>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m37473_gshared (Predicate_1_t7033 * __this, Emphasis_t692  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m37473(__this, ___obj, method) (( bool (*) (Predicate_1_t7033 *, Emphasis_t692 , const MethodInfo*))Predicate_1_Invoke_m37473_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<PixelCrushers.DialogueSystem.Emphasis>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m37474_gshared (Predicate_1_t7033 * __this, Emphasis_t692  ___obj, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m37474(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t7033 *, Emphasis_t692 , AsyncCallback_t477 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m37474_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<PixelCrushers.DialogueSystem.Emphasis>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m37475_gshared (Predicate_1_t7033 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m37475(__this, ___result, method) (( bool (*) (Predicate_1_t7033 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m37475_gshared)(__this, ___result, method)
