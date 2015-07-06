#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<PixelCrushers.DialogueSystem.DialogueEntry>
struct Predicate_1_t1117;
// System.Object
struct Object_t;
// PixelCrushers.DialogueSystem.DialogueEntry
struct DialogueEntry_t1102;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<PixelCrushers.DialogueSystem.DialogueEntry>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_17MethodDeclarations.h"
#define Predicate_1__ctor_m7135(__this, ___object, ___method, method) (( void (*) (Predicate_1_t1117 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m23999_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<PixelCrushers.DialogueSystem.DialogueEntry>::Invoke(T)
#define Predicate_1_Invoke_m33865(__this, ___obj, method) (( bool (*) (Predicate_1_t1117 *, DialogueEntry_t1102 *, const MethodInfo*))Predicate_1_Invoke_m24000_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<PixelCrushers.DialogueSystem.DialogueEntry>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m33866(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t1117 *, DialogueEntry_t1102 *, AsyncCallback_t449 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m24001_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<PixelCrushers.DialogueSystem.DialogueEntry>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m33867(__this, ___result, method) (( bool (*) (Predicate_1_t1117 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m24002_gshared)(__this, ___result, method)
