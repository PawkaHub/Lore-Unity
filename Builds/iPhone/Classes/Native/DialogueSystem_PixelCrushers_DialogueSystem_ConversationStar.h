#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.Condition
struct Condition_t203;
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.DialogueDatabase
struct DialogueDatabase_t202;
// PixelCrushers.DialogueSystem.DialogueEventStarter
#include "DialogueSystem_PixelCrushers_DialogueSystem_DialogueEventSta.h"
// PixelCrushers.DialogueSystem.ConversationStarter
struct  ConversationStarter_t1325  : public DialogueEventStarter_t1321
{
	// System.String PixelCrushers.DialogueSystem.ConversationStarter::conversation
	String_t* ___conversation_3;
	// PixelCrushers.DialogueSystem.Condition PixelCrushers.DialogueSystem.ConversationStarter::condition
	Condition_t203 * ___condition_4;
	// System.Boolean PixelCrushers.DialogueSystem.ConversationStarter::skipIfNoValidEntries
	bool ___skipIfNoValidEntries_5;
	// UnityEngine.Transform PixelCrushers.DialogueSystem.ConversationStarter::conversant
	Transform_t54 * ___conversant_6;
	// System.Boolean PixelCrushers.DialogueSystem.ConversationStarter::tryingToStart
	bool ___tryingToStart_7;
	// System.Boolean PixelCrushers.DialogueSystem.ConversationStarter::useConversationTitlePicker
	bool ___useConversationTitlePicker_8;
	// PixelCrushers.DialogueSystem.DialogueDatabase PixelCrushers.DialogueSystem.ConversationStarter::selectedDatabase
	DialogueDatabase_t202 * ___selectedDatabase_9;
};
