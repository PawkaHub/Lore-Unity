#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.SelectedUsableObjectDelegate
struct SelectedUsableObjectDelegate_t304;
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

// System.Void PixelCrushers.DialogueSystem.SelectedUsableObjectDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void SelectedUsableObjectDelegate__ctor_m2402 (SelectedUsableObjectDelegate_t304 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SelectedUsableObjectDelegate::Invoke(PixelCrushers.DialogueSystem.Usable)
extern "C" void SelectedUsableObjectDelegate_Invoke_m2403 (SelectedUsableObjectDelegate_t304 * __this, Usable_t279 * ___usable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_SelectedUsableObjectDelegate_t304(Il2CppObject* delegate, Usable_t279 * ___usable);
// System.IAsyncResult PixelCrushers.DialogueSystem.SelectedUsableObjectDelegate::BeginInvoke(PixelCrushers.DialogueSystem.Usable,System.AsyncCallback,System.Object)
extern "C" Object_t * SelectedUsableObjectDelegate_BeginInvoke_m2404 (SelectedUsableObjectDelegate_t304 * __this, Usable_t279 * ___usable, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.SelectedUsableObjectDelegate::EndInvoke(System.IAsyncResult)
extern "C" void SelectedUsableObjectDelegate_EndInvoke_m2405 (SelectedUsableObjectDelegate_t304 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
