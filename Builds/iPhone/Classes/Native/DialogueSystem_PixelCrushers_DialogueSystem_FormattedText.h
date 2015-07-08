#pragma once
#include <stdint.h>
// PixelCrushers.DialogueSystem.FormattedText
struct FormattedText_t625;
// PixelCrushers.DialogueSystem.Emphasis[]
struct EmphasisU5BU5D_t691;
// System.String
struct String_t;
// System.Text.RegularExpressions.MatchEvaluator
struct MatchEvaluator_t1451;
// System.Object
#include "mscorlib_System_Object.h"
// PixelCrushers.DialogueSystem.FormattedText
struct  FormattedText_t625  : public Object_t
{
	// System.String PixelCrushers.DialogueSystem.FormattedText::<text>k__BackingField
	String_t* ___U3CtextU3Ek__BackingField_4;
	// PixelCrushers.DialogueSystem.Emphasis[] PixelCrushers.DialogueSystem.FormattedText::<emphases>k__BackingField
	EmphasisU5BU5D_t691* ___U3CemphasesU3Ek__BackingField_5;
	// System.Boolean PixelCrushers.DialogueSystem.FormattedText::<italic>k__BackingField
	bool ___U3CitalicU3Ek__BackingField_6;
	// System.Int32 PixelCrushers.DialogueSystem.FormattedText::<position>k__BackingField
	int32_t ___U3CpositionU3Ek__BackingField_7;
	// System.Boolean PixelCrushers.DialogueSystem.FormattedText::<forceMenu>k__BackingField
	bool ___U3CforceMenuU3Ek__BackingField_8;
	// System.Int32 PixelCrushers.DialogueSystem.FormattedText::<pic>k__BackingField
	int32_t ___U3CpicU3Ek__BackingField_9;
	// System.Int32 PixelCrushers.DialogueSystem.FormattedText::<picActor>k__BackingField
	int32_t ___U3CpicActorU3Ek__BackingField_10;
	// System.Int32 PixelCrushers.DialogueSystem.FormattedText::<picConversant>k__BackingField
	int32_t ___U3CpicConversantU3Ek__BackingField_11;
	// System.String PixelCrushers.DialogueSystem.FormattedText::<variableInputPrompt>k__BackingField
	String_t* ___U3CvariableInputPromptU3Ek__BackingField_12;
};
struct FormattedText_t625_StaticFields{
	// PixelCrushers.DialogueSystem.FormattedText PixelCrushers.DialogueSystem.FormattedText::empty
	FormattedText_t625 * ___empty_2;
	// PixelCrushers.DialogueSystem.Emphasis[] PixelCrushers.DialogueSystem.FormattedText::noEmphases
	EmphasisU5BU5D_t691* ___noEmphases_3;
	// System.Text.RegularExpressions.MatchEvaluator PixelCrushers.DialogueSystem.FormattedText::<>f__am$cacheB
	MatchEvaluator_t1451 * ___U3CU3Ef__amU24cacheB_13;
	// System.Text.RegularExpressions.MatchEvaluator PixelCrushers.DialogueSystem.FormattedText::<>f__am$cacheC
	MatchEvaluator_t1451 * ___U3CU3Ef__amU24cacheC_14;
};
