#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.Link
struct Link_t806;
// PixelCrushers.DialogueSystem.ChatMapper.Link
struct Link_t842;

// System.Void PixelCrushers.DialogueSystem.Link::.ctor()
extern "C" void Link__ctor_m3891 (Link_t806 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Link::.ctor(PixelCrushers.DialogueSystem.ChatMapper.Link)
extern "C" void Link__ctor_m3892 (Link_t806 * __this, Link_t842 * ___chatMapperLink, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Link::.ctor(PixelCrushers.DialogueSystem.Link)
extern "C" void Link__ctor_m3893 (Link_t806 * __this, Link_t806 * ___sourceLink, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.Link::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" void Link__ctor_m3894 (Link_t806 * __this, int32_t ___originConversationID, int32_t ___originDialogueID, int32_t ___destinationConversationID, int32_t ___destinationDialogueID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
