#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.ConversationLogger
struct ConversationLogger_t286;
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.Subtitle
struct Subtitle_t570;
// System.String
struct String_t;

// System.Void PixelCrushers.DialogueSystem.ConversationLogger::.ctor()
extern "C" void ConversationLogger__ctor_m1093 (ConversationLogger_t286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationLogger::OnConversationStart(UnityEngine.Transform)
extern "C" void ConversationLogger_OnConversationStart_m1094 (ConversationLogger_t286 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationLogger::OnConversationLine(PixelCrushers.DialogueSystem.Subtitle)
extern "C" void ConversationLogger_OnConversationLine_m1095 (ConversationLogger_t286 * __this, Subtitle_t570 * ___subtitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ConversationLogger::OnConversationEnd(UnityEngine.Transform)
extern "C" void ConversationLogger_OnConversationEnd_m1096 (ConversationLogger_t286 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.ConversationLogger::GetActorName(UnityEngine.Transform)
extern "C" String_t* ConversationLogger_GetActorName_m1097 (ConversationLogger_t286 * __this, Transform_t54 * ___actor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PixelCrushers.DialogueSystem.ConversationLogger::GetActorColor(PixelCrushers.DialogueSystem.Subtitle)
extern "C" String_t* ConversationLogger_GetActorColor_m1098 (ConversationLogger_t286 * __this, Subtitle_t570 * ___subtitle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
