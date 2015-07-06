#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<PixelCrushers.DialogueSystem.Emphasis>
struct Predicate_1_t6702;
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

// System.Void System.Predicate`1<PixelCrushers.DialogueSystem.Emphasis>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m36023_gshared (Predicate_1_t6702 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m36023(__this, ___object, ___method, method) (( void (*) (Predicate_1_t6702 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m36023_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<PixelCrushers.DialogueSystem.Emphasis>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m36024_gshared (Predicate_1_t6702 * __this, Emphasis_t636  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m36024(__this, ___obj, method) (( bool (*) (Predicate_1_t6702 *, Emphasis_t636 , const MethodInfo*))Predicate_1_Invoke_m36024_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<PixelCrushers.DialogueSystem.Emphasis>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m36025_gshared (Predicate_1_t6702 * __this, Emphasis_t636  ___obj, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m36025(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t6702 *, Emphasis_t636 , AsyncCallback_t449 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m36025_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<PixelCrushers.DialogueSystem.Emphasis>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m36026_gshared (Predicate_1_t6702 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m36026(__this, ___result, method) (( bool (*) (Predicate_1_t6702 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m36026_gshared)(__this, ___result, method)
