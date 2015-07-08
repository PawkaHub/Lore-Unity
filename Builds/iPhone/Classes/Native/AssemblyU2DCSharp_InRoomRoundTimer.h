#pragma once
#include <stdint.h>
// System.String
struct String_t;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// InRoomRoundTimer
struct  InRoomRoundTimer_t530  : public MonoBehaviour_t47
{
	// System.Int32 InRoomRoundTimer::SecondsPerTurn
	int32_t ___SecondsPerTurn_3;
	// System.Double InRoomRoundTimer::StartTime
	double ___StartTime_4;
	// UnityEngine.Rect InRoomRoundTimer::TextPos
	Rect_t201  ___TextPos_5;
	// System.Boolean InRoomRoundTimer::startRoundWhenTimeIsSynced
	bool ___startRoundWhenTimeIsSynced_6;
};
