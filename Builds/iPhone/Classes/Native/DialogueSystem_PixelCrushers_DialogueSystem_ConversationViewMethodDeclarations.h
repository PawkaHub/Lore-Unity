#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.ConversationView/IsCancelKeyDownDelegate
struct IsCancelKeyDownDelegate_t872;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void PixelCrushers.DialogueSystem.ConversationView/IsCancelKeyDownDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void IsCancelKeyDownDelegate__ctor_m4143 (IsCancelKeyDownDelegate_t872 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationView/IsCancelKeyDownDelegate::Invoke()
extern "C" bool IsCancelKeyDownDelegate_Invoke_m4144 (IsCancelKeyDownDelegate_t872 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_IsCancelKeyDownDelegate_t872(Il2CppObject* delegate);
// System.IAsyncResult PixelCrushers.DialogueSystem.ConversationView/IsCancelKeyDownDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * IsCancelKeyDownDelegate_BeginInvoke_m4145 (IsCancelKeyDownDelegate_t872 * __this, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationView/IsCancelKeyDownDelegate::EndInvoke(System.IAsyncResult)
extern "C" bool IsCancelKeyDownDelegate_EndInvoke_m4146 (IsCancelKeyDownDelegate_t872 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
