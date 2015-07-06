#pragma once
#include <stdint.h>
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t4852;
// System.Object
struct Object_t;
// System.Object
#include "mscorlib_System_Object.h"
// ExitGames.Client.Photon.PhotonPeer
struct  PhotonPeer_t14  : public Object_t
{
	// ExitGames.Client.Photon.PeerBase ExitGames.Client.Photon.PhotonPeer::peerBase
	PeerBase_t4852 * ___peerBase_1;
	// System.Object ExitGames.Client.Photon.PhotonPeer::SendOutgoingLockObject
	Object_t * ___SendOutgoingLockObject_2;
	// System.Object ExitGames.Client.Photon.PhotonPeer::DispatchLockObject
	Object_t * ___DispatchLockObject_3;
	// System.Object ExitGames.Client.Photon.PhotonPeer::EnqueueLock
	Object_t * ___EnqueueLock_4;
};
