﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t4786;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Font/FontTextureRebuildCallback::.ctor(System.Object,System.IntPtr)
extern "C" void FontTextureRebuildCallback__ctor_m17493 (FontTextureRebuildCallback_t4786 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font/FontTextureRebuildCallback::Invoke()
extern "C" void FontTextureRebuildCallback_Invoke_m17494 (FontTextureRebuildCallback_t4786 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_FontTextureRebuildCallback_t4786(Il2CppObject* delegate);
// System.IAsyncResult UnityEngine.Font/FontTextureRebuildCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * FontTextureRebuildCallback_BeginInvoke_m17495 (FontTextureRebuildCallback_t4786 * __this, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font/FontTextureRebuildCallback::EndInvoke(System.IAsyncResult)
extern "C" void FontTextureRebuildCallback_EndInvoke_m17496 (FontTextureRebuildCallback_t4786 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
