#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t54;
// UnityEngine.Texture2D
struct Texture2D_t90;
// System.Object
#include "mscorlib_System_Object.h"
// PixelCrushers.DialogueSystem.CharacterType
#include "DialogueSystem_PixelCrushers_DialogueSystem_CharacterType.h"
// PixelCrushers.DialogueSystem.CharacterInfo
struct  CharacterInfo_t685  : public Object_t
{
	// System.Int32 PixelCrushers.DialogueSystem.CharacterInfo::id
	int32_t ___id_0;
	// System.String PixelCrushers.DialogueSystem.CharacterInfo::nameInDatabase
	String_t* ___nameInDatabase_1;
	// PixelCrushers.DialogueSystem.CharacterType PixelCrushers.DialogueSystem.CharacterInfo::characterType
	int32_t ___characterType_2;
	// UnityEngine.Transform PixelCrushers.DialogueSystem.CharacterInfo::transform
	Transform_t54 * ___transform_3;
	// UnityEngine.Texture2D PixelCrushers.DialogueSystem.CharacterInfo::portrait
	Texture2D_t90 * ___portrait_4;
	// System.String PixelCrushers.DialogueSystem.CharacterInfo::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_5;
};
