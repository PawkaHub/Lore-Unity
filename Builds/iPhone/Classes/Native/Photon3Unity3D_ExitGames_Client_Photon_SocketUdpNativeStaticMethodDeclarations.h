#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.SocketUdpNativeStatic
struct SocketUdpNativeStatic_t662;
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

// System.IntPtr ExitGames.Client.Photon.SocketUdpNativeStatic::egconnect(System.String)
extern "C" IntPtr_t SocketUdpNativeStatic_egconnect_m14269 (Object_t * __this /* static, unused */, String_t* ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ExitGames.Client.Photon.SocketUdpNativeStatic::eggetState(System.IntPtr)
extern "C" uint8_t SocketUdpNativeStatic_eggetState_m14270 (Object_t * __this /* static, unused */, IntPtr_t ___pConnectionHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketUdpNativeStatic::egdisconnect(System.IntPtr)
extern "C" void SocketUdpNativeStatic_egdisconnect_m14271 (Object_t * __this /* static, unused */, IntPtr_t ___pConnectionHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.SocketUdpNativeStatic::egservice(System.IntPtr)
extern "C" int32_t SocketUdpNativeStatic_egservice_m14272 (Object_t * __this /* static, unused */, IntPtr_t ___pConnectionHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.SocketUdpNativeStatic::egsend(System.IntPtr,System.Byte[],System.Int32)
extern "C" int32_t SocketUdpNativeStatic_egsend_m14273 (Object_t * __this /* static, unused */, IntPtr_t ___pConnectionHandler, ByteU5BU5D_t25* ___arr, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.SocketUdpNativeStatic::egread(System.IntPtr,System.Byte[],System.Int32&)
extern "C" int32_t SocketUdpNativeStatic_egread_m14274 (Object_t * __this /* static, unused */, IntPtr_t ___pConnectionHandler, ByteU5BU5D_t25* ___arr, int32_t* ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketUdpNativeStatic::.ctor(ExitGames.Client.Photon.PeerBase)
extern "C" void SocketUdpNativeStatic__ctor_m14275 (SocketUdpNativeStatic_t662 * __this, PeerBase_t3125 * ___npeer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.SocketUdpNativeStatic::Connect()
extern "C" bool SocketUdpNativeStatic_Connect_m14276 (SocketUdpNativeStatic_t662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.SocketUdpNativeStatic::Disconnect()
extern "C" bool SocketUdpNativeStatic_Disconnect_m14277 (SocketUdpNativeStatic_t662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.PhotonSocketError ExitGames.Client.Photon.SocketUdpNativeStatic::Send(System.Byte[],System.Int32)
extern "C" int32_t SocketUdpNativeStatic_Send_m14278 (SocketUdpNativeStatic_t662 * __this, ByteU5BU5D_t25* ___data, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketUdpNativeStatic::DnsAndConnect()
extern "C" void SocketUdpNativeStatic_DnsAndConnect_m14279 (SocketUdpNativeStatic_t662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketUdpNativeStatic::ReceiveLoop()
extern "C" void SocketUdpNativeStatic_ReceiveLoop_m14280 (SocketUdpNativeStatic_t662 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SocketUdpNativeStatic::.cctor()
extern "C" void SocketUdpNativeStatic__cctor_m14281 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
