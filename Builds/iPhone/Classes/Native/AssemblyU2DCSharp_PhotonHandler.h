#pragma once
#include <stdint.h>
// System.String
struct String_t;
// PhotonHandler
struct PhotonHandler_t474;
// System.Type
struct Type_t;
// Photon.MonoBehaviour
#include "AssemblyU2DCSharp_Photon_MonoBehaviour.h"
// CloudRegionCode
#include "AssemblyU2DCSharp_CloudRegionCode.h"
// PhotonHandler
struct  PhotonHandler_t474  : public MonoBehaviour_t357
{
	// System.Int32 PhotonHandler::updateInterval
	int32_t ___updateInterval_4;
	// System.Int32 PhotonHandler::updateIntervalOnSerialize
	int32_t ___updateIntervalOnSerialize_5;
	// System.Int32 PhotonHandler::nextSendTickCount
	int32_t ___nextSendTickCount_6;
	// System.Int32 PhotonHandler::nextSendTickCountOnSerialize
	int32_t ___nextSendTickCountOnSerialize_7;
};
struct PhotonHandler_t474_StaticFields{
	// PhotonHandler PhotonHandler::SP
	PhotonHandler_t474 * ___SP_3;
	// System.Boolean PhotonHandler::sendThreadShouldRun
	bool ___sendThreadShouldRun_8;
	// System.Boolean PhotonHandler::AppQuits
	bool ___AppQuits_9;
	// System.Type PhotonHandler::PingImplementation
	Type_t * ___PingImplementation_10;
	// CloudRegionCode PhotonHandler::BestRegionCodeCurrently
	int32_t ___BestRegionCodeCurrently_11;
};
