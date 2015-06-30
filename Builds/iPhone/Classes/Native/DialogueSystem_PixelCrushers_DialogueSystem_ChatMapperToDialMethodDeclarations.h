#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.ChatMapperToDialogueDatabase
struct ChatMapperToDialogueDatabase_t845;
// PixelCrushers.DialogueSystem.DialogueDatabase
struct DialogueDatabase_t202;
// PixelCrushers.DialogueSystem.ChatMapper.ChatMapperProject
struct ChatMapperProject_t550;
// PixelCrushers.DialogueSystem.Conversation
struct Conversation_t793;

// PixelCrushers.DialogueSystem.DialogueDatabase PixelCrushers.DialogueSystem.ChatMapperToDialogueDatabase::ConvertToDialogueDatabase(PixelCrushers.DialogueSystem.ChatMapper.ChatMapperProject)
extern "C" DialogueDatabase_t202 * ChatMapperToDialogueDatabase_ConvertToDialogueDatabase_m3917 (Object_t * __this /* static, unused */, ChatMapperProject_t550 * ___chatMapperProject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ChatMapperToDialogueDatabase::ConvertProjectAttributes(PixelCrushers.DialogueSystem.ChatMapper.ChatMapperProject,PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void ChatMapperToDialogueDatabase_ConvertProjectAttributes_m3918 (Object_t * __this /* static, unused */, ChatMapperProject_t550 * ___chatMapperProject, DialogueDatabase_t202 * ___database, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ChatMapperToDialogueDatabase::ConvertActors(PixelCrushers.DialogueSystem.ChatMapper.ChatMapperProject,PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void ChatMapperToDialogueDatabase_ConvertActors_m3919 (Object_t * __this /* static, unused */, ChatMapperProject_t550 * ___chatMapperProject, DialogueDatabase_t202 * ___database, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ChatMapperToDialogueDatabase::ConvertItems(PixelCrushers.DialogueSystem.ChatMapper.ChatMapperProject,PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void ChatMapperToDialogueDatabase_ConvertItems_m3920 (Object_t * __this /* static, unused */, ChatMapperProject_t550 * ___chatMapperProject, DialogueDatabase_t202 * ___database, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ChatMapperToDialogueDatabase::ConvertLocations(PixelCrushers.DialogueSystem.ChatMapper.ChatMapperProject,PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void ChatMapperToDialogueDatabase_ConvertLocations_m3921 (Object_t * __this /* static, unused */, ChatMapperProject_t550 * ___chatMapperProject, DialogueDatabase_t202 * ___database, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ChatMapperToDialogueDatabase::ConvertVariables(PixelCrushers.DialogueSystem.ChatMapper.ChatMapperProject,PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void ChatMapperToDialogueDatabase_ConvertVariables_m3922 (Object_t * __this /* static, unused */, ChatMapperProject_t550 * ___chatMapperProject, DialogueDatabase_t202 * ___database, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ChatMapperToDialogueDatabase::ConvertConversations(PixelCrushers.DialogueSystem.ChatMapper.ChatMapperProject,PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void ChatMapperToDialogueDatabase_ConvertConversations_m3923 (Object_t * __this /* static, unused */, ChatMapperProject_t550 * ___chatMapperProject, DialogueDatabase_t202 * ___database, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ChatMapperToDialogueDatabase::SetConversationStartCutsceneToNone(PixelCrushers.DialogueSystem.Conversation)
extern "C" void ChatMapperToDialogueDatabase_SetConversationStartCutsceneToNone_m3924 (Object_t * __this /* static, unused */, Conversation_t793 * ___conversation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
