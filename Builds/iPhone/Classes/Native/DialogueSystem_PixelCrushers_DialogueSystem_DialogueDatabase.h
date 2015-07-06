#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.EmphasisSetting[]
struct EmphasisSettingU5BU5D_t632;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Actor>
struct List_1_t1137;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>
struct List_1_t1138;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>
struct List_1_t1139;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Variable>
struct List_1_t1140;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Conversation>
struct List_1_t1141;
// PixelCrushers.DialogueSystem.DialogueDatabase/SyncInfo
struct SyncInfo_t1119;
// System.Predicate`1<PixelCrushers.DialogueSystem.Actor>
struct Predicate_1_t1142;
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObject.h"
// PixelCrushers.DialogueSystem.DialogueDatabase
struct  DialogueDatabase_t202  : public ScriptableObject_t474
{
	// System.String PixelCrushers.DialogueSystem.DialogueDatabase::version
	String_t* ___version_4;
	// System.String PixelCrushers.DialogueSystem.DialogueDatabase::author
	String_t* ___author_5;
	// System.String PixelCrushers.DialogueSystem.DialogueDatabase::description
	String_t* ___description_6;
	// System.String PixelCrushers.DialogueSystem.DialogueDatabase::globalUserScript
	String_t* ___globalUserScript_7;
	// PixelCrushers.DialogueSystem.EmphasisSetting[] PixelCrushers.DialogueSystem.DialogueDatabase::emphasisSettings
	EmphasisSettingU5BU5D_t632* ___emphasisSettings_8;
	// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Actor> PixelCrushers.DialogueSystem.DialogueDatabase::actors
	List_1_t1137 * ___actors_9;
	// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item> PixelCrushers.DialogueSystem.DialogueDatabase::items
	List_1_t1138 * ___items_10;
	// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location> PixelCrushers.DialogueSystem.DialogueDatabase::locations
	List_1_t1139 * ___locations_11;
	// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Variable> PixelCrushers.DialogueSystem.DialogueDatabase::variables
	List_1_t1140 * ___variables_12;
	// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Conversation> PixelCrushers.DialogueSystem.DialogueDatabase::conversations
	List_1_t1141 * ___conversations_13;
	// PixelCrushers.DialogueSystem.DialogueDatabase/SyncInfo PixelCrushers.DialogueSystem.DialogueDatabase::syncInfo
	SyncInfo_t1119 * ___syncInfo_14;
};
struct DialogueDatabase_t202_StaticFields{
	// System.Predicate`1<PixelCrushers.DialogueSystem.Actor> PixelCrushers.DialogueSystem.DialogueDatabase::<>f__am$cacheB
	Predicate_1_t1142 * ___U3CU3Ef__amU24cacheB_15;
};
