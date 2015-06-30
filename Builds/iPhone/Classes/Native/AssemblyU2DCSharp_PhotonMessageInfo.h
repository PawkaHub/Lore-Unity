#pragma once
#include <stdint.h>
// PhotonPlayer
struct PhotonPlayer_t432;
// PhotonView
struct PhotonView_t325;
// System.Object
#include "mscorlib_System_Object.h"
// PhotonMessageInfo
struct  PhotonMessageInfo_t435  : public Object_t
{
	// System.Int32 PhotonMessageInfo::timeInt
	int32_t ___timeInt_0;
	// PhotonPlayer PhotonMessageInfo::sender
	PhotonPlayer_t432 * ___sender_1;
	// PhotonView PhotonMessageInfo::photonView
	PhotonView_t325 * ___photonView_2;
};
