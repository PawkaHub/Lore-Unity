#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.Chat.ChatPeer
struct ChatPeer_t6;
// System.String
struct String_t;
// ExitGames.Client.Photon.IPhotonPeerListener
struct IPhotonPeerListener_t24;
// ExitGames.Client.Photon.Chat.AuthenticationValues
struct AuthenticationValues_t7;
// ExitGames.Client.Photon.ConnectionProtocol
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionProtocol.h"

// System.Void ExitGames.Client.Photon.Chat.ChatPeer::.ctor(ExitGames.Client.Photon.IPhotonPeerListener,ExitGames.Client.Photon.ConnectionProtocol)
extern "C" void ChatPeer__ctor_m64 (ChatPeer_t6 * __this, Object_t * ___listener, uint8_t ___protocol, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatPeer::.cctor()
extern "C" void ChatPeer__cctor_m65 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatPeer::get_NameServerAddress()
extern "C" String_t* ChatPeer_get_NameServerAddress_m66 (ChatPeer_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatPeer::get_IsProtocolSecure()
extern "C" bool ChatPeer_get_IsProtocolSecure_m67 (ChatPeer_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatPeer::GetNameServerAddress()
extern "C" String_t* ChatPeer_GetNameServerAddress_m68 (ChatPeer_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatPeer::Connect()
extern "C" bool ChatPeer_Connect_m69 (ChatPeer_t6 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatPeer::AuthenticateOnNameServer(System.String,System.String,System.String,ExitGames.Client.Photon.Chat.AuthenticationValues)
extern "C" bool ChatPeer_AuthenticateOnNameServer_m70 (ChatPeer_t6 * __this, String_t* ___appId, String_t* ___appVersion, String_t* ___region, AuthenticationValues_t7 * ___authValues, const MethodInfo* method) IL2CPP_METHOD_ATTR;
