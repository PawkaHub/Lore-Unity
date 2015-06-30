#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.SocketUdpNativeDynamic
struct SocketUdpNativeDynamic_t3154;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t25;
// ExitGames.Client.Photon.PeerBase
struct PeerBase_t3125;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// ExitGames.Client.Photon.PhotonSocketError
#include "Photon3Unity3D_ExitGames_Client_Photon_PhotonSocketError.h"

// System.IntPtr ExitGames.Client.Photon.SocketUdpNativeDynamic::egconnect(System.String)
extern "C" IntPtr_t SocketUdpNativeDynamic_egconnect_m14256 (Object_t * __this /* static, unused */, String_t* ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ExitGames.Client.Photon.SocketUdpNativeDynamic::eggetState(System.IntPtr)
extern "C" uint8_t SocketUdpNativeDynamic_eggetState_m14257 (Object_t * __this /* static, unused */, IntPtr_t ___pConnectionHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketUdpNativeDynamic::egdisconnect(System.IntPtr)
extern "C" void SocketUdpNativeDynamic_egdisconnect_m14258 (Object_t * __this /* static, unused */, IntPtr_t ___pConnectionHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.SocketUdpNativeDynamic::egservice(System.IntPtr)
extern "C" int32_t SocketUdpNativeDynamic_egservice_m14259 (Object_t * __this /* static, unused */, IntPtr_t ___pConnectionHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.SocketUdpNativeDynamic::egsend(System.IntPtr,System.Byte[],System.Int32)
extern "C" int32_t SocketUdpNativeDynamic_egsend_m14260 (Object_t * __this /* static, unused */, IntPtr_t ___pConnectionHandler, ByteU5BU5D_t25* ___arr, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.SocketUdpNativeDynamic::egread(System.IntPtr,System.Byte[],System.Int32&)
extern "C" int32_t SocketUdpNativeDynamic_egread_m14261 (Object_t * __this /* static, unused */, IntPtr_t ___pConnectionHandler, ByteU5BU5D_t25* ___arr, int32_t* ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketUdpNativeDynamic::.ctor(ExitGames.Client.Photon.PeerBase)
extern "C" void SocketUdpNativeDynamic__ctor_m14262 (SocketUdpNativeDynamic_t3154 * __this, PeerBase_t3125 * ___npeer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.SocketUdpNativeDynamic::Connect()
extern "C" bool SocketUdpNativeDynamic_Connect_m14263 (SocketUdpNativeDynamic_t3154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.SocketUdpNativeDynamic::Disconnect()
extern "C" bool SocketUdpNativeDynamic_Disconnect_m14264 (SocketUdpNativeDynamic_t3154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketUdpNativeDynamic::Send(System.Byte[],System.Int32)
extern "C" int32_t SocketUdpNativeDynamic_Send_m14265 (SocketUdpNativeDynamic_t3154 * __this, ByteU5BU5D_t25* ___data, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketUdpNativeDynamic::DnsAndConnect()
extern "C" void SocketUdpNativeDynamic_DnsAndConnect_m14266 (SocketUdpNativeDynamic_t3154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketUdpNativeDynamic::ReceiveLoop()
extern "C" void SocketUdpNativeDynamic_ReceiveLoop_m14267 (SocketUdpNativeDynamic_t3154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketUdpNativeDynamic::.cctor()
extern "C" void SocketUdpNativeDynamic__cctor_m14268 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
