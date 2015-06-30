#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.EnetPeer
struct EnetPeer_t3132;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t28;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>
struct Queue_1_t3120;
// ExitGames.Client.Photon.NCommand
struct NCommand_t3129;
// ExitGames.Client.Photon.PeerBase/EgMessageType
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase_EgMessageTyp.h"

// System.Void ExitGames.Client.Photon.EnetPeer::.ctor()
extern "C" void EnetPeer__ctor_m14100 (EnetPeer_t3132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::InitPeerBase()
extern "C" void EnetPeer_InitPeerBase_m14101 (EnetPeer_t3132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::Connect(System.String,System.String)
extern "C" bool EnetPeer_Connect_m14102 (EnetPeer_t3132 * __this, String_t* ___ipport, String_t* ___appID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::Disconnect()
extern "C" void EnetPeer_Disconnect_m14103 (EnetPeer_t3132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::StopConnection()
extern "C" void EnetPeer_StopConnection_m14104 (EnetPeer_t3132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::FetchServerTimestamp()
extern "C" void EnetPeer_FetchServerTimestamp_m14105 (EnetPeer_t3132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::DispatchIncomingCommands()
extern "C" bool EnetPeer_DispatchIncomingCommands_m14106 (EnetPeer_t3132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::SendAcksOnly()
extern "C" bool EnetPeer_SendAcksOnly_m14107 (EnetPeer_t3132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::SendOutgoingCommands()
extern "C" bool EnetPeer_SendOutgoingCommands_m14108 (EnetPeer_t3132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::AreReliableCommandsInTransit()
extern "C" bool EnetPeer_AreReliableCommandsInTransit_m14109 (EnetPeer_t3132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::EnqueueOperation(System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Byte,System.Boolean,System.Byte,System.Boolean,ExitGames.Client.Photon.PeerBase/EgMessageType)
extern "C" bool EnetPeer_EnqueueOperation_m14110 (EnetPeer_t3132 * __this, Dictionary_2_t28 * ___parameters, uint8_t ___opCode, bool ___sendReliable, uint8_t ___channelId, bool ___encrypt, uint8_t ___messageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::CreateAndEnqueueCommand(System.Byte,System.Byte[],System.Byte)
extern "C" bool EnetPeer_CreateAndEnqueueCommand_m14111 (EnetPeer_t3132 * __this, uint8_t ___commandType, ByteU5BU5D_t25* ___payload, uint8_t ___channelNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.EnetPeer::SerializeOperationToMessage(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.PeerBase/EgMessageType,System.Boolean)
extern "C" ByteU5BU5D_t25* EnetPeer_SerializeOperationToMessage_m14112 (EnetPeer_t3132 * __this, uint8_t ___opc, Dictionary_2_t28 * ___parameters, uint8_t ___messageType, bool ___encrypt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.EnetPeer::SerializeToBuffer(System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>)
extern "C" int32_t EnetPeer_SerializeToBuffer_m14113 (EnetPeer_t3132 * __this, Queue_1_t3120 * ___commandList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::SendData(System.Byte[],System.Int32)
extern "C" void EnetPeer_SendData_m14114 (EnetPeer_t3132 * __this, ByteU5BU5D_t25* ___data, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::QueueSentCommand(ExitGames.Client.Photon.NCommand)
extern "C" void EnetPeer_QueueSentCommand_m14115 (EnetPeer_t3132 * __this, NCommand_t3129 * ___command, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::QueueOutgoingReliableCommand(ExitGames.Client.Photon.NCommand)
extern "C" void EnetPeer_QueueOutgoingReliableCommand_m14116 (EnetPeer_t3132 * __this, NCommand_t3129 * ___command, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::QueueOutgoingUnreliableCommand(ExitGames.Client.Photon.NCommand)
extern "C" void EnetPeer_QueueOutgoingUnreliableCommand_m14117 (EnetPeer_t3132 * __this, NCommand_t3129 * ___command, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::QueueOutgoingAcknowledgement(ExitGames.Client.Photon.NCommand)
extern "C" void EnetPeer_QueueOutgoingAcknowledgement_m14118 (EnetPeer_t3132 * __this, NCommand_t3129 * ___command, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::ReceiveIncomingCommands(System.Byte[],System.Int32)
extern "C" void EnetPeer_ReceiveIncomingCommands_m14119 (EnetPeer_t3132 * __this, ByteU5BU5D_t25* ___inBuff, int32_t ___dataLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::ExecuteCommand(ExitGames.Client.Photon.NCommand)
extern "C" bool EnetPeer_ExecuteCommand_m14120 (EnetPeer_t3132 * __this, NCommand_t3129 * ___command, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::QueueIncomingCommand(ExitGames.Client.Photon.NCommand)
extern "C" bool EnetPeer_QueueIncomingCommand_m14121 (EnetPeer_t3132 * __this, NCommand_t3129 * ___command, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.NCommand ExitGames.Client.Photon.EnetPeer::RemoveSentReliableCommand(System.Int32,System.Int32)
extern "C" NCommand_t3129 * EnetPeer_RemoveSentReliableCommand_m14122 (EnetPeer_t3132 * __this, int32_t ___ackReceivedReliableSequenceNumber, int32_t ___ackReceivedChannel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::<ExecuteCommand>b__13()
extern "C" void EnetPeer_U3CExecuteCommandU3Eb__13_m14123 (EnetPeer_t3132 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::.cctor()
extern "C" void EnetPeer__cctor_m14124 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
