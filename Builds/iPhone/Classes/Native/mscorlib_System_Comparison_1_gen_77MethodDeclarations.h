#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<PixelCrushers.DialogueSystem.Emphasis>
struct Comparison_1_t7036;
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

// System.Void System.Comparison`1<PixelCrushers.DialogueSystem.Emphasis>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m37482_gshared (Comparison_1_t7036 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m37482(__this, ___object, ___method, method) (( void (*) (Comparison_1_t7036 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m37482_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<PixelCrushers.DialogueSystem.Emphasis>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m37483_gshared (Comparison_1_t7036 * __this, Emphasis_t692  ___x, Emphasis_t692  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m37483(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t7036 *, Emphasis_t692 , Emphasis_t692 , const MethodInfo*))Comparison_1_Invoke_m37483_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<PixelCrushers.DialogueSystem.Emphasis>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m37484_gshared (Comparison_1_t7036 * __this, Emphasis_t692  ___x, Emphasis_t692  ___y, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m37484(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t7036 *, Emphasis_t692 , Emphasis_t692 , AsyncCallback_t477 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m37484_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<PixelCrushers.DialogueSystem.Emphasis>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m37485_gshared (Comparison_1_t7036 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m37485(__this, ___result, method) (( int32_t (*) (Comparison_1_t7036 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m37485_gshared)(__this, ___result, method)
