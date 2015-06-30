#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.NCommand
struct NCommand_t3129;
// ExitGames.Client.Photon.EnetPeer
struct EnetPeer_t3132;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.String
struct String_t;

// System.Void ExitGames.Client.Photon.NCommand::.ctor(ExitGames.Client.Photon.EnetPeer,System.Byte,System.Byte[],System.Byte)
extern "C" void NCommand__ctor_m14147 (NCommand_t3129 * __this, EnetPeer_t3132 * ___peer, uint8_t ___commandType, ByteU5BU5D_t25* ___payload, uint8_t ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.NCommand ExitGames.Client.Photon.NCommand::CreateAck(ExitGames.Client.Photon.EnetPeer,ExitGames.Client.Photon.NCommand,System.Int32)
extern "C" NCommand_t3129 * NCommand_CreateAck_m14148 (Object_t * __this /* static, unused */, EnetPeer_t3132 * ___peer, NCommand_t3129 * ___commandToAck, int32_t ___sentTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.NCommand::.ctor(ExitGames.Client.Photon.EnetPeer,System.Byte[],System.Int32&)
extern "C" void NCommand__ctor_m14149 (NCommand_t3129 * __this, EnetPeer_t3132 * ___peer, ByteU5BU5D_t25* ___inBuff, int32_t* ___readingOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.NCommand::Serialize()
extern "C" ByteU5BU5D_t25* NCommand_Serialize_m14150 (NCommand_t3129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.NCommand::CompareTo(ExitGames.Client.Photon.NCommand)
extern "C" int32_t NCommand_CompareTo_m14151 (NCommand_t3129 * __this, NCommand_t3129 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.NCommand::ToString()
extern "C" String_t* NCommand_ToString_m14152 (NCommand_t3129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
