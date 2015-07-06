#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.SelectedResponseEventArgs
struct SelectedResponseEventArgs_t1201;
// PixelCrushers.DialogueSystem.DialogueEntry
struct DialogueEntry_t1102;
// PixelCrushers.DialogueSystem.Response
struct Response_t235;

// System.Void PixelCrushers.DialogueSystem.SelectedResponseEventArgs::.ctor(PixelCrushers.DialogueSystem.Response)
extern "C" void SelectedResponseEventArgs__ctor_m6028 (SelectedResponseEventArgs_t1201 * __this, Response_t235 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// PixelCrushers.DialogueSystem.DialogueEntry PixelCrushers.DialogueSystem.SelectedResponseEventArgs::get_DestinationEntry()
extern "C" DialogueEntry_t1102 * SelectedResponseEventArgs_get_DestinationEntry_m6029 (SelectedResponseEventArgs_t1201 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
