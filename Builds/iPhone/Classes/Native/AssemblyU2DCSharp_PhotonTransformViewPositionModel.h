#pragma once
#include <stdint.h>
// UnityEngine.AnimationCurve
struct AnimationCurve_t98;
struct AnimationCurve_t98_marshaled;
// System.Object
#include "mscorlib_System_Object.h"
// PhotonTransformViewPositionModel/InterpolateOptions
#include "AssemblyU2DCSharp_PhotonTransformViewPositionModel_Interpola.h"
// PhotonTransformViewPositionModel/ExtrapolateOptions
#include "AssemblyU2DCSharp_PhotonTransformViewPositionModel_Extrapola.h"
// PhotonTransformViewPositionModel
struct  PhotonTransformViewPositionModel_t489  : public Object_t
{
	// System.Boolean PhotonTransformViewPositionModel::SynchronizeEnabled
	bool ___SynchronizeEnabled_0;
	// System.Boolean PhotonTransformViewPositionModel::TeleportEnabled
	bool ___TeleportEnabled_1;
	// System.Single PhotonTransformViewPositionModel::TeleportIfDistanceGreaterThan
	float ___TeleportIfDistanceGreaterThan_2;
	// PhotonTransformViewPositionModel/InterpolateOptions PhotonTransformViewPositionModel::InterpolateOption
	int32_t ___InterpolateOption_3;
	// System.Single PhotonTransformViewPositionModel::InterpolateMoveTowardsSpeed
	float ___InterpolateMoveTowardsSpeed_4;
	// System.Single PhotonTransformViewPositionModel::InterpolateLerpSpeed
	float ___InterpolateLerpSpeed_5;
	// System.Single PhotonTransformViewPositionModel::InterpolateMoveTowardsAcceleration
	float ___InterpolateMoveTowardsAcceleration_6;
	// System.Single PhotonTransformViewPositionModel::InterpolateMoveTowardsDeceleration
	float ___InterpolateMoveTowardsDeceleration_7;
	// UnityEngine.AnimationCurve PhotonTransformViewPositionModel::InterpolateSpeedCurve
	AnimationCurve_t98 * ___InterpolateSpeedCurve_8;
	// PhotonTransformViewPositionModel/ExtrapolateOptions PhotonTransformViewPositionModel::ExtrapolateOption
	int32_t ___ExtrapolateOption_9;
	// System.Single PhotonTransformViewPositionModel::ExtrapolateSpeed
	float ___ExtrapolateSpeed_10;
	// System.Boolean PhotonTransformViewPositionModel::ExtrapolateIncludingRoundTripTime
	bool ___ExtrapolateIncludingRoundTripTime_11;
	// System.Int32 PhotonTransformViewPositionModel::ExtrapolateNumberOfStoredPositions
	int32_t ___ExtrapolateNumberOfStoredPositions_12;
	// System.Boolean PhotonTransformViewPositionModel::DrawErrorGizmo
	bool ___DrawErrorGizmo_13;
};
