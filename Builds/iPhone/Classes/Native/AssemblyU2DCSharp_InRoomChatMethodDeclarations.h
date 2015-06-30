#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// InRoomChat
struct InRoomChat_t502;
// System.String
struct String_t;
// PhotonMessageInfo
struct PhotonMessageInfo_t435;

// System.Void InRoomChat::.ctor()
extern "C" void InRoomChat__ctor_m2160 (InRoomChat_t502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomChat::.cctor()
extern "C" void InRoomChat__cctor_m2161 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomChat::Start()
extern "C" void InRoomChat_Start_m2162 (InRoomChat_t502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomChat::OnGUI()
extern "C" void InRoomChat_OnGUI_m2163 (InRoomChat_t502 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomChat::Chat(System.String,PhotonMessageInfo)
extern "C" void InRoomChat_Chat_m2164 (InRoomChat_t502 * __this, String_t* ___newLine, PhotonMessageInfo_t435 * ___mi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void InRoomChat::AddLine(System.String)
extern "C" void InRoomChat_AddLine_m2165 (InRoomChat_t502 * __this, String_t* ___newLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
