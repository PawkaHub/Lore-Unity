#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.BarkHistory
struct BarkHistory_t1099;
// PixelCrushers.DialogueSystem.BarkOrder
#include "DialogueSystem_PixelCrushers_DialogueSystem_BarkOrder.h"

// System.Void PixelCrushers.DialogueSystem.BarkHistory::.ctor(PixelCrushers.DialogueSystem.BarkOrder)
extern "C" void BarkHistory__ctor_m5465 (BarkHistory_t1099 * __this, int32_t ___order, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 PixelCrushers.DialogueSystem.BarkHistory::GetNextIndex(System.Int32)
extern "C" int32_t BarkHistory_GetNextIndex_m5466 (BarkHistory_t1099 * __this, int32_t ___numEntries, const MethodInfo* method) IL2CPP_METHOD_ATTR;
