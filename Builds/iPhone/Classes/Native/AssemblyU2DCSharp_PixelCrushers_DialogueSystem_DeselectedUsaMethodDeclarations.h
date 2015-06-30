#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.DeselectedUsableObjectDelegate
struct DeselectedUsableObjectDelegate_t305;
// System.Object
struct Object_t;
// PixelCrushers.DialogueSystem.Usable
struct Usable_t279;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void PixelCrushers.DialogueSystem.DeselectedUsableObjectDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void DeselectedUsableObjectDelegate__ctor_m2319 (DeselectedUsableObjectDelegate_t305 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DeselectedUsableObjectDelegate::Invoke(PixelCrushers.DialogueSystem.Usable)
extern "C" void DeselectedUsableObjectDelegate_Invoke_m2320 (DeselectedUsableObjectDelegate_t305 * __this, Usable_t279 * ___usable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_DeselectedUsableObjectDelegate_t305(Il2CppObject* delegate, Usable_t279 * ___usable);
// System.IAsyncResult PixelCrushers.DialogueSystem.DeselectedUsableObjectDelegate::BeginInvoke(PixelCrushers.DialogueSystem.Usable,System.AsyncCallback,System.Object)
extern "C" Object_t * DeselectedUsableObjectDelegate_BeginInvoke_m2321 (DeselectedUsableObjectDelegate_t305 * __this, Usable_t279 * ___usable, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DeselectedUsableObjectDelegate::EndInvoke(System.IAsyncResult)
extern "C" void DeselectedUsableObjectDelegate_EndInvoke_m2322 (DeselectedUsableObjectDelegate_t305 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
