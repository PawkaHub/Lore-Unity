#pragma once
#include <stdint.h>
// UnityEngine.Transform
struct Transform_t54;
// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand
#include "DialogueSystem_PixelCrushers_DialogueSystem_SequencerCommand.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandZoom2D
struct  SequencerCommandZoom2D_t914  : public SequencerCommand_t209
{
	// UnityEngine.Transform PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandZoom2D::subject
	Transform_t54 * ___subject_7;
	// UnityEngine.Vector3 PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandZoom2D::targetPosition
	Vector3_t53  ___targetPosition_8;
	// UnityEngine.Vector3 PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandZoom2D::originalPosition
	Vector3_t53  ___originalPosition_9;
	// System.Single PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandZoom2D::targetSize
	float ___targetSize_10;
	// System.Single PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandZoom2D::originalSize
	float ___originalSize_11;
	// System.Single PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandZoom2D::duration
	float ___duration_12;
	// System.Single PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandZoom2D::startTime
	float ___startTime_13;
	// System.Single PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommandZoom2D::endTime
	float ___endTime_14;
};
