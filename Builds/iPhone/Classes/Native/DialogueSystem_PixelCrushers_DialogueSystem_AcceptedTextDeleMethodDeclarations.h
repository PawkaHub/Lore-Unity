﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.AcceptedTextDelegate
struct AcceptedTextDelegate_t248;
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

// System.Void PixelCrushers.DialogueSystem.AcceptedTextDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void AcceptedTextDelegate__ctor_m3762 (AcceptedTextDelegate_t248 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.AcceptedTextDelegate::Invoke(System.String)
extern "C" void AcceptedTextDelegate_Invoke_m7521 (AcceptedTextDelegate_t248 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String
#include "mscorlib_System_String.h"
extern "C" void pinvoke_delegate_wrapper_AcceptedTextDelegate_t248(Il2CppObject* delegate, String_t* ___text);
// System.IAsyncResult PixelCrushers.DialogueSystem.AcceptedTextDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * AcceptedTextDelegate_BeginInvoke_m7522 (AcceptedTextDelegate_t248 * __this, String_t* ___text, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.AcceptedTextDelegate::EndInvoke(System.IAsyncResult)
extern "C" void AcceptedTextDelegate_EndInvoke_m7523 (AcceptedTextDelegate_t248 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
