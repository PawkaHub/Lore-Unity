#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.ConversationView/IsCancelKeyDownDelegate
struct IsCancelKeyDownDelegate_t1456;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void PixelCrushers.DialogueSystem.ConversationView/IsCancelKeyDownDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void IsCancelKeyDownDelegate__ctor_m6439 (IsCancelKeyDownDelegate_t1456 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationView/IsCancelKeyDownDelegate::Invoke()
extern "C" bool IsCancelKeyDownDelegate_Invoke_m6440 (IsCancelKeyDownDelegate_t1456 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_IsCancelKeyDownDelegate_t1456(Il2CppObject* delegate);
// System.IAsyncResult PixelCrushers.DialogueSystem.ConversationView/IsCancelKeyDownDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * IsCancelKeyDownDelegate_BeginInvoke_m6441 (IsCancelKeyDownDelegate_t1456 * __this, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.ConversationView/IsCancelKeyDownDelegate::EndInvoke(System.IAsyncResult)
extern "C" bool IsCancelKeyDownDelegate_EndInvoke_m6442 (IsCancelKeyDownDelegate_t1456 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
