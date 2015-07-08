#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PixelCrushers.DialogueSystem.ChatMapperToDialogueDatabase
struct ChatMapperToDialogueDatabase_t1429;
// PixelCrushers.DialogueSystem.DialogueDatabase
struct DialogueDatabase_t202;
// PixelCrushers.DialogueSystem.ChatMapper.ChatMapperProject
struct ChatMapperProject_t621;
// PixelCrushers.DialogueSystem.Conversation
struct Conversation_t1377;

// PixelCrushers.DialogueSystem.DialogueDatabase PixelCrushers.DialogueSystem.ChatMapperToDialogueDatabase::ConvertToDialogueDatabase(PixelCrushers.DialogueSystem.ChatMapper.ChatMapperProject)
extern "C" DialogueDatabase_t202 * ChatMapperToDialogueDatabase_ConvertToDialogueDatabase_m6214 (Object_t * __this /* static, unused */, ChatMapperProject_t621 * ___chatMapperProject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ChatMapperToDialogueDatabase::ConvertProjectAttributes(PixelCrushers.DialogueSystem.ChatMapper.ChatMapperProject,PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void ChatMapperToDialogueDatabase_ConvertProjectAttributes_m6215 (Object_t * __this /* static, unused */, ChatMapperProject_t621 * ___chatMapperProject, DialogueDatabase_t202 * ___database, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ChatMapperToDialogueDatabase::ConvertActors(PixelCrushers.DialogueSystem.ChatMapper.ChatMapperProject,PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void ChatMapperToDialogueDatabase_ConvertActors_m6216 (Object_t * __this /* static, unused */, ChatMapperProject_t621 * ___chatMapperProject, DialogueDatabase_t202 * ___database, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ChatMapperToDialogueDatabase::ConvertItems(PixelCrushers.DialogueSystem.ChatMapper.ChatMapperProject,PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void ChatMapperToDialogueDatabase_ConvertItems_m6217 (Object_t * __this /* static, unused */, ChatMapperProject_t621 * ___chatMapperProject, DialogueDatabase_t202 * ___database, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ChatMapperToDialogueDatabase::ConvertLocations(PixelCrushers.DialogueSystem.ChatMapper.ChatMapperProject,PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void ChatMapperToDialogueDatabase_ConvertLocations_m6218 (Object_t * __this /* static, unused */, ChatMapperProject_t621 * ___chatMapperProject, DialogueDatabase_t202 * ___database, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ChatMapperToDialogueDatabase::ConvertVariables(PixelCrushers.DialogueSystem.ChatMapper.ChatMapperProject,PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void ChatMapperToDialogueDatabase_ConvertVariables_m6219 (Object_t * __this /* static, unused */, ChatMapperProject_t621 * ___chatMapperProject, DialogueDatabase_t202 * ___database, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ChatMapperToDialogueDatabase::ConvertConversations(PixelCrushers.DialogueSystem.ChatMapper.ChatMapperProject,PixelCrushers.DialogueSystem.DialogueDatabase)
extern "C" void ChatMapperToDialogueDatabase_ConvertConversations_m6220 (Object_t * __this /* static, unused */, ChatMapperProject_t621 * ___chatMapperProject, DialogueDatabase_t202 * ___database, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PixelCrushers.DialogueSystem.ChatMapperToDialogueDatabase::SetConversationStartCutsceneToNone(PixelCrushers.DialogueSystem.Conversation)
extern "C" void ChatMapperToDialogueDatabase_SetConversationStartCutsceneToNone_m6221 (Object_t * __this /* static, unused */, Conversation_t1377 * ___conversation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
