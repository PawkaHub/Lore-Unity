#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.Chat.ChatChannel
struct ChatChannel_t3;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.String[]
struct StringU5BU5D_t20;
// System.Object[]
struct ObjectU5BU5D_t21;

// System.Void ExitGames.Client.Photon.Chat.ChatChannel::.ctor(System.String)
extern "C" void ChatChannel__ctor_m0 (ChatChannel_t3 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Chat.ChatChannel::get_IsPrivate()
extern "C" bool ChatChannel_get_IsPrivate_m1 (ChatChannel_t3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatChannel::set_IsPrivate(System.Boolean)
extern "C" void ChatChannel_set_IsPrivate_m2 (ChatChannel_t3 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.Chat.ChatChannel::get_MessageCount()
extern "C" int32_t ChatChannel_get_MessageCount_m3 (ChatChannel_t3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatChannel::Add(System.String,System.Object)
extern "C" void ChatChannel_Add_m4 (ChatChannel_t3 * __this, String_t* ___sender, Object_t * ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatChannel::Add(System.String[],System.Object[])
extern "C" void ChatChannel_Add_m5 (ChatChannel_t3 * __this, StringU5BU5D_t20* ___senders, ObjectU5BU5D_t21* ___messages, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Chat.ChatChannel::ClearMessages()
extern "C" void ChatChannel_ClearMessages_m6 (ChatChannel_t3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
