#pragma once
#include <stdint.h>
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t5090;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// ExitGames.Client.Photon.ConnectionProtocol
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionProtocol.h"
// ExitGames.Client.Photon.PhotonSocketState
#include "Photon3Unity3D_ExitGames_Client_Photon_PhotonSocketState.h"
// ExitGames.Client.Photon.IPhotonSocket
struct  IPhotonSocket_t5093  : public Object_t
{
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.IPhotonSocket::peerBase
	PeerBase_t5090 * ___peerBase_0;
	// System.Boolean ExitGames.Client.Photon.IPhotonSocket::PollReceive
	bool ___PollReceive_1;
	// ExitGames.Client.Photon.ConnectionProtocol ExitGames.Client.Photon.IPhotonSocket::<Protocol>k__BackingField
	uint8_t ___U3CProtocolU3Ek__BackingField_2;
	// ExitGames.Client.Photon.PhotonSocketState ExitGames.Client.Photon.IPhotonSocket::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_3;
	// System.String ExitGames.Client.Photon.IPhotonSocket::<ServerAddress>k__BackingField
	String_t* ___U3CServerAddressU3Ek__BackingField_4;
	// System.Int32 ExitGames.Client.Photon.IPhotonSocket::<ServerPort>k__BackingField
	int32_t ___U3CServerPortU3Ek__BackingField_5;
};
