﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.EnetChannel
struct EnetChannel_t5086;
// ExitGames.Client.Photon.NCommand
struct NCommand_t5094;

// System.Void ExitGames.Client.Photon.EnetChannel::.ctor(System.Byte,System.Int32)
extern "C" void EnetChannel__ctor_m18338 (EnetChannel_t5086 * __this, uint8_t ___channelNumber, int32_t ___commandBufferSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetChannel::ContainsUnreliableSequenceNumber(System.Int32)
extern "C" bool EnetChannel_ContainsUnreliableSequenceNumber_m18339 (EnetChannel_t5086 * __this, int32_t ___unreliableSequenceNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetChannel::ContainsReliableSequenceNumber(System.Int32)
extern "C" bool EnetChannel_ContainsReliableSequenceNumber_m18340 (EnetChannel_t5086 * __this, int32_t ___reliableSequenceNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.NCommand ExitGames.Client.Photon.EnetChannel::FetchReliableSequenceNumber(System.Int32)
extern "C" NCommand_t5094 * EnetChannel_FetchReliableSequenceNumber_m18341 (EnetChannel_t5086 * __this, int32_t ___reliableSequenceNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetChannel::clearAll()
extern "C" void EnetChannel_clearAll_m18342 (EnetChannel_t5086 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
