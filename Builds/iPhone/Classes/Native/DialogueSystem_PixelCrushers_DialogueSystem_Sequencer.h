#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.Camera
struct Camera_t356;
// UnityEngine.Transform
struct Transform_t54;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand>
struct List_1_t1212;
// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>
struct List_1_t1210;
// UnityEngine.GameObject
struct GameObject_t49;
// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t1213;
// System.Action
struct Action_t250;
// System.Predicate`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand>
struct Predicate_1_t1214;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// PixelCrushers.DialogueSystem.Sequencer
struct  Sequencer_t618  : public MonoBehaviour_t47
{
	// System.Boolean PixelCrushers.DialogueSystem.Sequencer::disableInternalSequencerCommands
	bool ___disableInternalSequencerCommands_4;
	// System.Boolean PixelCrushers.DialogueSystem.Sequencer::hasCameraControl
	bool ___hasCameraControl_5;
	// UnityEngine.Camera PixelCrushers.DialogueSystem.Sequencer::originalCamera
	Camera_t356 * ___originalCamera_6;
	// UnityEngine.Vector3 PixelCrushers.DialogueSystem.Sequencer::originalCameraPosition
	Vector3_t53  ___originalCameraPosition_7;
	// UnityEngine.Quaternion PixelCrushers.DialogueSystem.Sequencer::originalCameraRotation
	Quaternion_t69  ___originalCameraRotation_8;
	// System.Single PixelCrushers.DialogueSystem.Sequencer::originalOrthographicSize
	float ___originalOrthographicSize_9;
	// UnityEngine.Transform PixelCrushers.DialogueSystem.Sequencer::speaker
	Transform_t54 * ___speaker_10;
	// UnityEngine.Transform PixelCrushers.DialogueSystem.Sequencer::listener
	Transform_t54 * ___listener_11;
	// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.QueuedSequencerCommand> PixelCrushers.DialogueSystem.Sequencer::queuedCommands
	List_1_t1212 * ___queuedCommands_12;
	// System.Collections.Generic.List`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand> PixelCrushers.DialogueSystem.Sequencer::activeCommands
	List_1_t1210 * ___activeCommands_13;
	// System.Boolean PixelCrushers.DialogueSystem.Sequencer::informParticipants
	bool ___informParticipants_14;
	// System.Boolean PixelCrushers.DialogueSystem.Sequencer::closeWhenFinished
	bool ___closeWhenFinished_15;
	// UnityEngine.Camera PixelCrushers.DialogueSystem.Sequencer::sequencerCameraSource
	Camera_t356 * ___sequencerCameraSource_16;
	// UnityEngine.Camera PixelCrushers.DialogueSystem.Sequencer::sequencerCamera
	Camera_t356 * ___sequencerCamera_17;
	// UnityEngine.GameObject PixelCrushers.DialogueSystem.Sequencer::alternateSequencerCameraObject
	GameObject_t49 * ___alternateSequencerCameraObject_18;
	// UnityEngine.GameObject PixelCrushers.DialogueSystem.Sequencer::cameraAngles
	GameObject_t49 * ___cameraAngles_19;
	// System.Boolean PixelCrushers.DialogueSystem.Sequencer::isUsingMainCamera
	bool ___isUsingMainCamera_20;
	// System.Boolean PixelCrushers.DialogueSystem.Sequencer::isPlaying
	bool ___isPlaying_21;
	// System.Action PixelCrushers.DialogueSystem.Sequencer::FinishedSequenceHandler
	Action_t250 * ___FinishedSequenceHandler_23;
	// System.String PixelCrushers.DialogueSystem.Sequencer::<entrytag>k__BackingField
	String_t* ___U3CentrytagU3Ek__BackingField_24;
};
struct Sequencer_t618_StaticFields{
	// System.Collections.Generic.Dictionary`2<System.String,System.Type> PixelCrushers.DialogueSystem.Sequencer::cachedComponentTypes
	Dictionary_2_t1213 * ___cachedComponentTypes_22;
	// System.Predicate`1<PixelCrushers.DialogueSystem.SequencerCommands.SequencerCommand> PixelCrushers.DialogueSystem.Sequencer::<>f__am$cache15
	Predicate_1_t1214 * ___U3CU3Ef__amU24cache15_25;
};
