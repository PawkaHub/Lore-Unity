#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.DialogueEntrySpokenDelegate
struct DialogueEntrySpokenDelegate_t873;
// System.Object
struct Object_t;
// PixelCrushers.DialogueSystem.Subtitle
struct Subtitle_t552;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void PixelCrushers.DialogueSystem.DialogueEntrySpokenDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void DialogueEntrySpokenDelegate__ctor_m5215 (DialogueEntrySpokenDelegate_t873 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntrySpokenDelegate::Invoke(PixelCrushers.DialogueSystem.Subtitle)
extern "C" void DialogueEntrySpokenDelegate_Invoke_m5216 (DialogueEntrySpokenDelegate_t873 * __this, Subtitle_t552 * ___subtitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_DialogueEntrySpokenDelegate_t873(Il2CppObject* delegate, Subtitle_t552 * ___subtitle);
// System.IAsyncResult PixelCrushers.DialogueSystem.DialogueEntrySpokenDelegate::BeginInvoke(PixelCrushers.DialogueSystem.Subtitle,System.AsyncCallback,System.Object)
extern "C" Object_t * DialogueEntrySpokenDelegate_BeginInvoke_m5217 (DialogueEntrySpokenDelegate_t873 * __this, Subtitle_t552 * ___subtitle, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.DialogueEntrySpokenDelegate::EndInvoke(System.IAsyncResult)
extern "C" void DialogueEntrySpokenDelegate_EndInvoke_m5218 (DialogueEntrySpokenDelegate_t873 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
