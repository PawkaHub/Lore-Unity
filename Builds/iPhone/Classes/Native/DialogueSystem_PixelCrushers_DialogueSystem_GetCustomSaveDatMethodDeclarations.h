#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.GetCustomSaveDataDelegate
struct GetCustomSaveDataDelegate_t1535;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void PixelCrushers.DialogueSystem.GetCustomSaveDataDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void GetCustomSaveDataDelegate__ctor_m7524 (GetCustomSaveDataDelegate_t1535 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.GetCustomSaveDataDelegate::Invoke()
extern "C" String_t* GetCustomSaveDataDelegate_Invoke_m7525 (GetCustomSaveDataDelegate_t1535 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String
#include "mscorlib_System_String.h"
extern "C" String_t* pinvoke_delegate_wrapper_GetCustomSaveDataDelegate_t1535(Il2CppObject* delegate);
// System.IAsyncResult PixelCrushers.DialogueSystem.GetCustomSaveDataDelegate::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * GetCustomSaveDataDelegate_BeginInvoke_m7526 (GetCustomSaveDataDelegate_t1535 * __this, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.GetCustomSaveDataDelegate::EndInvoke(System.IAsyncResult)
extern "C" String_t* GetCustomSaveDataDelegate_EndInvoke_m7527 (GetCustomSaveDataDelegate_t1535 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
