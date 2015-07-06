#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.NCommand
struct NCommand_t4856;
// ExitGames.Client.Photon.EnetPeer
struct EnetPeer_t4859;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.String
struct String_t;

// System.Void ExitGames.Client.Photon.NCommand::.ctor(ExitGames.Client.Photon.EnetPeer,System.Byte,System.Byte[],System.Byte)
extern "C" void NCommand__ctor_m18017 (NCommand_t4856 * __this, EnetPeer_t4859 * ___peer, uint8_t ___commandType, ByteU5BU5D_t25* ___payload, uint8_t ___channel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.NCommand ExitGames.Client.Photon.NCommand::CreateAck(ExitGames.Client.Photon.EnetPeer,ExitGames.Client.Photon.NCommand,System.Int32)
extern "C" NCommand_t4856 * NCommand_CreateAck_m18018 (Object_t * __this /* static, unused */, EnetPeer_t4859 * ___peer, NCommand_t4856 * ___commandToAck, int32_t ___sentTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.NCommand::.ctor(ExitGames.Client.Photon.EnetPeer,System.Byte[],System.Int32&)
extern "C" void NCommand__ctor_m18019 (NCommand_t4856 * __this, EnetPeer_t4859 * ___peer, ByteU5BU5D_t25* ___inBuff, int32_t* ___readingOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.NCommand::Serialize()
extern "C" ByteU5BU5D_t25* NCommand_Serialize_m18020 (NCommand_t4856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.NCommand::CompareTo(ExitGames.Client.Photon.NCommand)
extern "C" int32_t NCommand_CompareTo_m18021 (NCommand_t4856 * __this, NCommand_t4856 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.NCommand::ToString()
extern "C" String_t* NCommand_ToString_m18022 (NCommand_t4856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
