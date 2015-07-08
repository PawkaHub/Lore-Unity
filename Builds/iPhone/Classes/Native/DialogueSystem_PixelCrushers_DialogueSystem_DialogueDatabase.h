#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PixelCrushers.DialogueSystem.EmphasisSetting[]
struct EmphasisSettingU5BU5D_t689;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Actor>
struct List_1_t1396;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item>
struct List_1_t1397;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location>
struct List_1_t1398;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Variable>
struct List_1_t1399;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Conversation>
struct List_1_t1400;
// PixelCrushers.DialogueSystem.DialogueDatabase/SyncInfo
struct SyncInfo_t1378;
// System.Predicate`1<PixelCrushers.DialogueSystem.Actor>
struct Predicate_1_t1401;
// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObject.h"
// PixelCrushers.DialogueSystem.DialogueDatabase
struct  DialogueDatabase_t202  : public ScriptableObject_t501
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
	EmphasisSettingU5BU5D_t689* ___emphasisSettings_8;
	// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Actor> PixelCrushers.DialogueSystem.DialogueDatabase::actors
	List_1_t1396 * ___actors_9;
	// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Item> PixelCrushers.DialogueSystem.DialogueDatabase::items
	List_1_t1397 * ___items_10;
	// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Location> PixelCrushers.DialogueSystem.DialogueDatabase::locations
	List_1_t1398 * ___locations_11;
	// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Variable> PixelCrushers.DialogueSystem.DialogueDatabase::variables
	List_1_t1399 * ___variables_12;
	// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.Conversation> PixelCrushers.DialogueSystem.DialogueDatabase::conversations
	List_1_t1400 * ___conversations_13;
	// PixelCrushers.DialogueSystem.DialogueDatabase/SyncInfo PixelCrushers.DialogueSystem.DialogueDatabase::syncInfo
	SyncInfo_t1378 * ___syncInfo_14;
};
struct DialogueDatabase_t202_StaticFields{
	// System.Predicate`1<PixelCrushers.DialogueSystem.Actor> PixelCrushers.DialogueSystem.DialogueDatabase::<>f__am$cacheB
	Predicate_1_t1401 * ___U3CU3Ef__amU24cacheB_15;
};
