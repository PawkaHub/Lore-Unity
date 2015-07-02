﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<PixelCrushers.DialogueSystem.Emphasis>
struct Comparison_1_t5471;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// PixelCrushers.DialogueSystem.Emphasis
#include "DialogueSystem_PixelCrushers_DialogueSystem_Emphasis.h"

// System.Void System.Comparison`1<PixelCrushers.DialogueSystem.Emphasis>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m32033_gshared (Comparison_1_t5471 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m32033(__this, ___object, ___method, method) (( void (*) (Comparison_1_t5471 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m32033_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<PixelCrushers.DialogueSystem.Emphasis>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m32034_gshared (Comparison_1_t5471 * __this, Emphasis_t615  ___x, Emphasis_t615  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m32034(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t5471 *, Emphasis_t615 , Emphasis_t615 , const MethodInfo*))Comparison_1_Invoke_m32034_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<PixelCrushers.DialogueSystem.Emphasis>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m32035_gshared (Comparison_1_t5471 * __this, Emphasis_t615  ___x, Emphasis_t615  ___y, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m32035(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t5471 *, Emphasis_t615 , Emphasis_t615 , AsyncCallback_t449 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m32035_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<PixelCrushers.DialogueSystem.Emphasis>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m32036_gshared (Comparison_1_t5471 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m32036(__this, ___result, method) (( int32_t (*) (Comparison_1_t5471 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m32036_gshared)(__this, ___result, method)