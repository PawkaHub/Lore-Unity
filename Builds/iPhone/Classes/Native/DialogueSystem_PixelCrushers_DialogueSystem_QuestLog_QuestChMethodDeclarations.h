﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.QuestLog/QuestChangedDelegate
struct QuestChangedDelegate_t931;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// PixelCrushers.DialogueSystem.QuestState
#include "DialogueSystem_PixelCrushers_DialogueSystem_QuestState.h"

// System.Void PixelCrushers.DialogueSystem.QuestLog/QuestChangedDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void QuestChangedDelegate__ctor_m4448 (QuestChangedDelegate_t931 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog/QuestChangedDelegate::Invoke(System.String,PixelCrushers.DialogueSystem.QuestState)
extern "C" void QuestChangedDelegate_Invoke_m4449 (QuestChangedDelegate_t931 * __this, String_t* ___title, int32_t ___newState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String
#include "mscorlib_System_String.h"
extern "C" void pinvoke_delegate_wrapper_QuestChangedDelegate_t931(Il2CppObject* delegate, String_t* ___title, int32_t ___newState);
// System.IAsyncResult PixelCrushers.DialogueSystem.QuestLog/QuestChangedDelegate::BeginInvoke(System.String,PixelCrushers.DialogueSystem.QuestState,System.AsyncCallback,System.Object)
extern "C" Object_t * QuestChangedDelegate_BeginInvoke_m4450 (QuestChangedDelegate_t931 * __this, String_t* ___title, int32_t ___newState, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.QuestLog/QuestChangedDelegate::EndInvoke(System.IAsyncResult)
extern "C" void QuestChangedDelegate_EndInvoke_m4451 (QuestChangedDelegate_t931 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;