#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.Chat.ChatClient
struct ChatClient_t8;
// System.String
struct String_t;
// ExitGames.Client.Photon.Chat.AuthenticationValues
struct AuthenticationValues_t7;
// ExitGames.Client.Photon.Chat.IChatClientListener
struct IChatClientListener_t5;
// ExitGames.Client.Photon.EventData
struct EventData_t22;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t23;
// System.String[]
struct StringU5BU5D_t20;
// System.Object
struct Object_t;
// ExitGames.Client.Photon.Chat.ChatChannel
struct ChatChannel_t3;
// ExitGames.Client.Photon.Chat.ChatState
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Chat_C_1.h"
// ExitGames.Client.Photon.Chat.ChatDisconnectCause
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Chat_C_2.h"
// ExitGames.Client.Photon.DebugLevel
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel.h"
// ExitGames.Client.Photon.ConnectionProtocol
#include "Photon3Unity3D_ExitGames_Client_Photon_ConnectionProtocol.h"
// ExitGames.Client.Photon.StatusCode
#include "Photon3Unity3D_ExitGames_Client_Photon_StatusCode.h"

// System.Void ExitGames.Client.Photon.Chat.ChatClient::.ctor(ExitGames.Client.Photon.Chat.IChatClientListener,ExitGames.Client.Photon.ConnectionProtocol)
extern "C" void ChatClient__ctor_m7 (ChatClient_t8 * __this, Object_t * ___listener, uint8_t ___protocol, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
extern "C" void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_DebugReturn_m8 (ChatClient_t8 * __this, uint8_t ___level, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.OnEvent(ExitGames.Client.Photon.EventData)
extern "C" void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnEvent_m9 (ChatClient_t8 * __this, EventData_t22 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.OnOperationResponse(ExitGames.Client.Photon.OperationResponse)
extern "C" void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnOperationResponse_m10 (ChatClient_t8 * __this, OperationResponse_t23 * ___operationResponse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::ExitGames.Client.Photon.IPhotonPeerListener.OnStatusChanged(ExitGames.Client.Photon.StatusCode)
extern "C" void ChatClient_ExitGames_Client_Photon_IPhotonPeerListener_OnStatusChanged_m11 (ChatClient_t8 * __this, int32_t ___statusCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_NameServerAddress()
extern "C" String_t* ChatClient_get_NameServerAddress_m12 (ChatClient_t8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_NameServerAddress(System.String)
extern "C" void ChatClient_set_NameServerAddress_m13 (ChatClient_t8 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_FrontendAddress()
extern "C" String_t* ChatClient_get_FrontendAddress_m14 (ChatClient_t8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_FrontendAddress(System.String)
extern "C" void ChatClient_set_FrontendAddress_m15 (ChatClient_t8 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_ChatRegion()
extern "C" String_t* ChatClient_get_ChatRegion_m16 (ChatClient_t8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_ChatRegion(System.String)
extern "C" void ChatClient_set_ChatRegion_m17 (ChatClient_t8 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Chat.ChatState ExitGames.Client.Photon.Chat.ChatClient::get_State()
extern "C" int32_t ChatClient_get_State_m18 (ChatClient_t8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_State(ExitGames.Client.Photon.Chat.ChatState)
extern "C" void ChatClient_set_State_m19 (ChatClient_t8 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Chat.ChatDisconnectCause ExitGames.Client.Photon.Chat.ChatClient::get_DisconnectedCause()
extern "C" int32_t ChatClient_get_DisconnectedCause_m20 (ChatClient_t8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_DisconnectedCause(ExitGames.Client.Photon.Chat.ChatDisconnectCause)
extern "C" void ChatClient_set_DisconnectedCause_m21 (ChatClient_t8 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::get_CanChat()
extern "C" bool ChatClient_get_CanChat_m22 (ChatClient_t8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::get_HasPeer()
extern "C" bool ChatClient_get_HasPeer_m23 (ChatClient_t8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_AppVersion()
extern "C" String_t* ChatClient_get_AppVersion_m24 (ChatClient_t8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_AppVersion(System.String)
extern "C" void ChatClient_set_AppVersion_m25 (ChatClient_t8 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_AppId()
extern "C" String_t* ChatClient_get_AppId_m26 (ChatClient_t8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_AppId(System.String)
extern "C" void ChatClient_set_AppId_m27 (ChatClient_t8 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Chat.AuthenticationValues ExitGames.Client.Photon.Chat.ChatClient::get_AuthValues()
extern "C" AuthenticationValues_t7 * ChatClient_get_AuthValues_m28 (ChatClient_t8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_AuthValues(ExitGames.Client.Photon.Chat.AuthenticationValues)
extern "C" void ChatClient_set_AuthValues_m29 (ChatClient_t8 * __this, AuthenticationValues_t7 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::get_UserId()
extern "C" String_t* ChatClient_get_UserId_m30 (ChatClient_t8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_UserId(System.String)
extern "C" void ChatClient_set_UserId_m31 (ChatClient_t8 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::Connect(System.String,System.String,ExitGames.Client.Photon.Chat.AuthenticationValues)
extern "C" bool ChatClient_Connect_m32 (ChatClient_t8 * __this, String_t* ___appId, String_t* ___appVersion, AuthenticationValues_t7 * ___authValues, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::Service()
extern "C" void ChatClient_Service_m33 (ChatClient_t8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::Disconnect()
extern "C" void ChatClient_Disconnect_m34 (ChatClient_t8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::StopThread()
extern "C" void ChatClient_StopThread_m35 (ChatClient_t8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::Subscribe(System.String[])
extern "C" bool ChatClient_Subscribe_m36 (ChatClient_t8 * __this, StringU5BU5D_t20* ___channels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::Subscribe(System.String[],System.Int32)
extern "C" bool ChatClient_Subscribe_m37 (ChatClient_t8 * __this, StringU5BU5D_t20* ___channels, int32_t ___messagesFromHistory, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::Unsubscribe(System.String[])
extern "C" bool ChatClient_Unsubscribe_m38 (ChatClient_t8 * __this, StringU5BU5D_t20* ___channels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::PublishMessage(System.String,System.Object)
extern "C" bool ChatClient_PublishMessage_m39 (ChatClient_t8 * __this, String_t* ___channelName, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SendPrivateMessage(System.String,System.Object)
extern "C" bool ChatClient_SendPrivateMessage_m40 (ChatClient_t8 * __this, String_t* ___target, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SendPrivateMessage(System.String,System.Object,System.Boolean)
extern "C" bool ChatClient_SendPrivateMessage_m41 (ChatClient_t8 * __this, String_t* ___target, Object_t * ___message, bool ___encrypt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object,System.Boolean)
extern "C" bool ChatClient_SetOnlineStatus_m42 (ChatClient_t8 * __this, int32_t ___status, Object_t * ___message, bool ___skipMessage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SetOnlineStatus(System.Int32)
extern "C" bool ChatClient_SetOnlineStatus_m43 (ChatClient_t8 * __this, int32_t ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SetOnlineStatus(System.Int32,System.Object)
extern "C" bool ChatClient_SetOnlineStatus_m44 (ChatClient_t8 * __this, int32_t ___status, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::AddFriends(System.String[])
extern "C" bool ChatClient_AddFriends_m45 (ChatClient_t8 * __this, StringU5BU5D_t20* ___friends, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::RemoveFriends(System.String[])
extern "C" bool ChatClient_RemoveFriends_m46 (ChatClient_t8 * __this, StringU5BU5D_t20* ___friends, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Chat.ChatClient::GetPrivateChannelNameByUser(System.String)
extern "C" String_t* ChatClient_GetPrivateChannelNameByUser_m47 (ChatClient_t8 * __this, String_t* ___userName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::TryGetChannel(System.String,System.Boolean,ExitGames.Client.Photon.Chat.ChatChannel&)
extern "C" bool ChatClient_TryGetChannel_m48 (ChatClient_t8 * __this, String_t* ___channelName, bool ___isPrivate, ChatChannel_t3 ** ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::SendAcksOnly()
extern "C" void ChatClient_SendAcksOnly_m49 (ChatClient_t8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::set_DebugOut(ExitGames.Client.Photon.DebugLevel)
extern "C" void ChatClient_set_DebugOut_m50 (ChatClient_t8 * __this, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.DebugLevel ExitGames.Client.Photon.Chat.ChatClient::get_DebugOut()
extern "C" uint8_t ChatClient_get_DebugOut_m51 (ChatClient_t8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::SendChannelOperation(System.String[],System.Byte,System.Int32)
extern "C" bool ChatClient_SendChannelOperation_m52 (ChatClient_t8 * __this, StringU5BU5D_t20* ___channels, uint8_t ___operation, int32_t ___historyLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandlePrivateMessageEvent(ExitGames.Client.Photon.EventData)
extern "C" void ChatClient_HandlePrivateMessageEvent_m53 (ChatClient_t8 * __this, EventData_t22 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandleChatMessagesEvent(ExitGames.Client.Photon.EventData)
extern "C" void ChatClient_HandleChatMessagesEvent_m54 (ChatClient_t8 * __this, EventData_t22 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandleSubscribeEvent(ExitGames.Client.Photon.EventData)
extern "C" void ChatClient_HandleSubscribeEvent_m55 (ChatClient_t8 * __this, EventData_t22 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandleUnsubscribeEvent(ExitGames.Client.Photon.EventData)
extern "C" void ChatClient_HandleUnsubscribeEvent_m56 (ChatClient_t8 * __this, EventData_t22 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandleAuthResponse(ExitGames.Client.Photon.OperationResponse)
extern "C" void ChatClient_HandleAuthResponse_m57 (ChatClient_t8 * __this, OperationResponse_t23 * ___operationResponse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::HandleStatusUpdate(ExitGames.Client.Photon.EventData)
extern "C" void ChatClient_HandleStatusUpdate_m58 (ChatClient_t8 * __this, EventData_t22 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatClient::ConnectToFrontEnd()
extern "C" void ChatClient_ConnectToFrontEnd_m59 (ChatClient_t8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatClient::AuthenticateOnFrontEnd()
extern "C" bool ChatClient_AuthenticateOnFrontEnd_m60 (ChatClient_t8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
