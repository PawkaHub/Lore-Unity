#pragma once
#include <stdint.h>
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.Object
#include "mscorlib_System_Object.h"
// ExitGames.Client.Photon.PhotonPing
struct  PhotonPing_t494  : public Object_t
{
	// System.String ExitGames.Client.Photon.PhotonPing::DebugString
	String_t* ___DebugString_0;
	// System.Boolean ExitGames.Client.Photon.PhotonPing::Successful
	bool ___Successful_1;
	// System.Boolean ExitGames.Client.Photon.PhotonPing::GotResult
	bool ___GotResult_2;
	// System.Int32 ExitGames.Client.Photon.PhotonPing::PingLength
	int32_t ___PingLength_3;
	// System.Byte[] ExitGames.Client.Photon.PhotonPing::PingBytes
	ByteU5BU5D_t25* ___PingBytes_4;
	// System.Byte ExitGames.Client.Photon.PhotonPing::PingId
	uint8_t ___PingId_5;
};
