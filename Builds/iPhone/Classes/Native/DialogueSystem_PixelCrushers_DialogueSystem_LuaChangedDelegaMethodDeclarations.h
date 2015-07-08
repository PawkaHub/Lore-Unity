﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.LuaChangedDelegate
struct LuaChangedDelegate_t807;
// System.Object
struct Object_t;
// PixelCrushers.DialogueSystem.LuaWatchItem
struct LuaWatchItem_t640;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// PixelCrushers.DialogueSystem.Lua/Result
#include "DialogueSystem_PixelCrushers_DialogueSystem_Lua_Result.h"

// System.Void PixelCrushers.DialogueSystem.LuaChangedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void LuaChangedDelegate__ctor_m3766 (LuaChangedDelegate_t807 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LuaChangedDelegate::Invoke(PixelCrushers.DialogueSystem.LuaWatchItem,PixelCrushers.DialogueSystem.Lua/Result)
extern "C" void LuaChangedDelegate_Invoke_m7510 (LuaChangedDelegate_t807 * __this, LuaWatchItem_t640 * ___luaWatchItem, Result_t641  ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_LuaChangedDelegate_t807(Il2CppObject* delegate, LuaWatchItem_t640 * ___luaWatchItem, Result_t641  ___newValue);
// System.IAsyncResult PixelCrushers.DialogueSystem.LuaChangedDelegate::BeginInvoke(PixelCrushers.DialogueSystem.LuaWatchItem,PixelCrushers.DialogueSystem.Lua/Result,System.AsyncCallback,System.Object)
extern "C" Object_t * LuaChangedDelegate_BeginInvoke_m7511 (LuaChangedDelegate_t807 * __this, LuaWatchItem_t640 * ___luaWatchItem, Result_t641  ___newValue, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.LuaChangedDelegate::EndInvoke(System.IAsyncResult)
extern "C" void LuaChangedDelegate_EndInvoke_m7512 (LuaChangedDelegate_t807 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
