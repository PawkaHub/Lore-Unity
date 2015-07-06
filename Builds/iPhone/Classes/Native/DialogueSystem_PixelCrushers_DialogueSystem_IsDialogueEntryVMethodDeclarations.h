#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate
struct IsDialogueEntryValidDelegate_t1094;
// System.Object
struct Object_t;
// PixelCrushers.DialogueSystem.DialogueEntry
struct DialogueEntry_t1102;
// System.IAsyncResult
struct IAsyncResult_t448;
// System.AsyncCallback
struct AsyncCallback_t449;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void IsDialogueEntryValidDelegate__ctor_m7065 (IsDialogueEntryValidDelegate_t1094 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate::Invoke(PixelCrushers.DialogueSystem.DialogueEntry)
extern "C" bool IsDialogueEntryValidDelegate_Invoke_m7066 (IsDialogueEntryValidDelegate_t1094 * __this, DialogueEntry_t1102 * ___dialogueEntry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_IsDialogueEntryValidDelegate_t1094(Il2CppObject* delegate, DialogueEntry_t1102 * ___dialogueEntry);
// System.IAsyncResult PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate::BeginInvoke(PixelCrushers.DialogueSystem.DialogueEntry,System.AsyncCallback,System.Object)
extern "C" Object_t * IsDialogueEntryValidDelegate_BeginInvoke_m7067 (IsDialogueEntryValidDelegate_t1094 * __this, DialogueEntry_t1102 * ___dialogueEntry, AsyncCallback_t449 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate::EndInvoke(System.IAsyncResult)
extern "C" bool IsDialogueEntryValidDelegate_EndInvoke_m7068 (IsDialogueEntryValidDelegate_t1094 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
