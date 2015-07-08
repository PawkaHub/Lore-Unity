#pragma once
#include <stdint.h>
// PhotonPlayer
struct PhotonPlayer_t460;
// PhotonView
struct PhotonView_t353;
// System.Object
#include "mscorlib_System_Object.h"
// PhotonMessageInfo
struct  PhotonMessageInfo_t463  : public Object_t
{
	// System.Int32 PhotonMessageInfo::timeInt
	int32_t ___timeInt_0;
	// PhotonPlayer PhotonMessageInfo::sender
	PhotonPlayer_t460 * ___sender_1;
	// PhotonView PhotonMessageInfo::photonView
	PhotonView_t353 * ___photonView_2;
};
