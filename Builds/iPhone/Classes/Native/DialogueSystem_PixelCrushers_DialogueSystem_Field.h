#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Collections.Generic.List`1<System.String>
struct List_1_t1;
// System.Object
#include "mscorlib_System_Object.h"
// PixelCrushers.DialogueSystem.FieldType
#include "DialogueSystem_PixelCrushers_DialogueSystem_FieldType.h"
// PixelCrushers.DialogueSystem.Field
struct  Field_t1147  : public Object_t
{
	// System.String PixelCrushers.DialogueSystem.Field::title
	String_t* ___title_0;
	// System.String PixelCrushers.DialogueSystem.Field::value
	String_t* ___value_1;
	// PixelCrushers.DialogueSystem.FieldType PixelCrushers.DialogueSystem.Field::type
	int32_t ___type_2;
	// System.String PixelCrushers.DialogueSystem.Field::typeString
	String_t* ___typeString_3;
};
struct Field_t1147_StaticFields{
	// System.Collections.Generic.List`1<System.String> PixelCrushers.DialogueSystem.Field::filenameFields
	List_1_t1 * ___filenameFields_4;
};
