#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.DialogueDatabase
struct DialogueDatabase_t202;
// PixelCrushers.DialogueSystem.CharacterInfo
struct CharacterInfo_t628;
// System.Collections.Generic.Dictionary`2<System.Int32,PixelCrushers.DialogueSystem.CharacterInfo>
struct Dictionary_2_t1183;
// PixelCrushers.DialogueSystem.ConversationState
struct ConversationState_t1096;
// PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate
struct IsDialogueEntryValidDelegate_t1094;
// System.Object
#include "mscorlib_System_Object.h"
// PixelCrushers.DialogueSystem.EntrytagFormat
#include "DialogueSystem_PixelCrushers_DialogueSystem_EntrytagFormat.h"
// PixelCrushers.DialogueSystem.EmTag
#include "DialogueSystem_PixelCrushers_DialogueSystem_EmTag.h"
// PixelCrushers.DialogueSystem.ConversationModel
struct  ConversationModel_t1101  : public Object_t
{
	// PixelCrushers.DialogueSystem.DialogueDatabase PixelCrushers.DialogueSystem.ConversationModel::database
	DialogueDatabase_t202 * ___database_0;
	// PixelCrushers.DialogueSystem.CharacterInfo PixelCrushers.DialogueSystem.ConversationModel::actorInfo
	CharacterInfo_t628 * ___actorInfo_1;
	// PixelCrushers.DialogueSystem.CharacterInfo PixelCrushers.DialogueSystem.ConversationModel::conversantInfo
	CharacterInfo_t628 * ___conversantInfo_2;
	// System.Int32 PixelCrushers.DialogueSystem.ConversationModel::currentConversationID
	int32_t ___currentConversationID_3;
	// System.Boolean PixelCrushers.DialogueSystem.ConversationModel::allowLuaExceptions
	bool ___allowLuaExceptions_4;
	// System.Collections.Generic.Dictionary`2<System.Int32,PixelCrushers.DialogueSystem.CharacterInfo> PixelCrushers.DialogueSystem.ConversationModel::characterInfoCache
	Dictionary_2_t1183 * ___characterInfoCache_5;
	// PixelCrushers.DialogueSystem.EntrytagFormat PixelCrushers.DialogueSystem.ConversationModel::entrytagFormat
	int32_t ___entrytagFormat_6;
	// PixelCrushers.DialogueSystem.EmTag PixelCrushers.DialogueSystem.ConversationModel::emTagForOldResponses
	int32_t ___emTagForOldResponses_7;
	// PixelCrushers.DialogueSystem.ConversationState PixelCrushers.DialogueSystem.ConversationModel::<FirstState>k__BackingField
	ConversationState_t1096 * ___U3CFirstStateU3Ek__BackingField_8;
	// PixelCrushers.DialogueSystem.IsDialogueEntryValidDelegate PixelCrushers.DialogueSystem.ConversationModel::<IsDialogueEntryValid>k__BackingField
	IsDialogueEntryValidDelegate_t1094 * ___U3CIsDialogueEntryValidU3Ek__BackingField_9;
};
