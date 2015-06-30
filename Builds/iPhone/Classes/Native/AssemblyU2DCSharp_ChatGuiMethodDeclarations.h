#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ChatGui
struct ChatGui_t338;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t20;
// System.Boolean[]
struct BooleanU5BU5D_t31;
// System.Object[]
struct ObjectU5BU5D_t21;
// System.Object
struct Object_t;
// ExitGames.Client.Photon.DebugLevel
#include "Photon3Unity3D_ExitGames_Client_Photon_DebugLevel.h"
// ExitGames.Client.Photon.Chat.ChatState
#include "AssemblyU2DCSharpU2Dfirstpass_ExitGames_Client_Photon_Chat_C_1.h"

// System.Void ChatGui::.ctor()
extern "C" void ChatGui__ctor_m1277 (ChatGui_t338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::.cctor()
extern "C" void ChatGui__cctor_m1278 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ChatGui::get_UserName()
extern "C" String_t* ChatGui_get_UserName_m1279 (ChatGui_t338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::set_UserName(System.String)
extern "C" void ChatGui_set_UserName_m1280 (ChatGui_t338 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::Start()
extern "C" void ChatGui_Start_m1281 (ChatGui_t338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnApplicationQuit()
extern "C" void ChatGui_OnApplicationQuit_m1282 (ChatGui_t338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::Update()
extern "C" void ChatGui_Update_m1283 (ChatGui_t338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnGUI()
extern "C" void ChatGui_OnGUI_m1284 (ChatGui_t338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::GuiSendsMsg()
extern "C" void ChatGui_GuiSendsMsg_m1285 (ChatGui_t338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::PostHelpToCurrentChannel()
extern "C" void ChatGui_PostHelpToCurrentChannel_m1286 (ChatGui_t338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnConnected()
extern "C" void ChatGui_OnConnected_m1287 (ChatGui_t338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::DebugReturn(ExitGames.Client.Photon.DebugLevel,System.String)
extern "C" void ChatGui_DebugReturn_m1288 (ChatGui_t338 * __this, uint8_t ___level, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnDisconnected()
extern "C" void ChatGui_OnDisconnected_m1289 (ChatGui_t338 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnChatStateChange(ExitGames.Client.Photon.Chat.ChatState)
extern "C" void ChatGui_OnChatStateChange_m1290 (ChatGui_t338 * __this, int32_t ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnSubscribed(System.String[],System.Boolean[])
extern "C" void ChatGui_OnSubscribed_m1291 (ChatGui_t338 * __this, StringU5BU5D_t20* ___channels, BooleanU5BU5D_t31* ___results, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnUnsubscribed(System.String[])
extern "C" void ChatGui_OnUnsubscribed_m1292 (ChatGui_t338 * __this, StringU5BU5D_t20* ___channels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnGetMessages(System.String,System.String[],System.Object[])
extern "C" void ChatGui_OnGetMessages_m1293 (ChatGui_t338 * __this, String_t* ___channelName, StringU5BU5D_t20* ___senders, ObjectU5BU5D_t21* ___messages, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnPrivateMessage(System.String,System.Object,System.String)
extern "C" void ChatGui_OnPrivateMessage_m1294 (ChatGui_t338 * __this, String_t* ___sender, Object_t * ___message, String_t* ___channelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ChatGui::OnStatusUpdate(System.String,System.Int32,System.Boolean,System.Object)
extern "C" void ChatGui_OnStatusUpdate_m1295 (ChatGui_t338 * __this, String_t* ___user, int32_t ___status, bool ___gotMessage, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
