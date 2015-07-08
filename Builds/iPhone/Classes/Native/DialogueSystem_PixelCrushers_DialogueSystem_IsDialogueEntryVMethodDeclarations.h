#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate
struct IsDialogueEntryValidDelegate_t1353;
// System.Object
struct Object_t;
// PixelCrushers.DialogueSystem.DialogueEntry
struct DialogueEntry_t1361;
// System.IAsyncResult
struct IAsyncResult_t476;
// System.AsyncCallback
struct AsyncCallback_t477;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate::.ctor(System.Object,System.IntPtr)
extern "C" void IsDialogueEntryValidDelegate__ctor_m7513 (IsDialogueEntryValidDelegate_t1353 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate::Invoke(PixelCrushers.DialogueSystem.DialogueEntry)
extern "C" bool IsDialogueEntryValidDelegate_Invoke_m7514 (IsDialogueEntryValidDelegate_t1353 * __this, DialogueEntry_t1361 * ___dialogueEntry, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" bool pinvoke_delegate_wrapper_IsDialogueEntryValidDelegate_t1353(Il2CppObject* delegate, DialogueEntry_t1361 * ___dialogueEntry);
// System.IAsyncResult PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate::BeginInvoke(PixelCrushers.DialogueSystem.DialogueEntry,System.AsyncCallback,System.Object)
extern "C" Object_t * IsDialogueEntryValidDelegate_BeginInvoke_m7515 (IsDialogueEntryValidDelegate_t1353 * __this, DialogueEntry_t1361 * ___dialogueEntry, AsyncCallback_t477 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate::EndInvoke(System.IAsyncResult)
extern "C" bool IsDialogueEntryValidDelegate_EndInvoke_m7516 (IsDialogueEntryValidDelegate_t1353 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
