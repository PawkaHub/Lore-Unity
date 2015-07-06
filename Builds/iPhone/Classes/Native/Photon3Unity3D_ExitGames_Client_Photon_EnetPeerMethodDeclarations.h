#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.EnetPeer
struct EnetPeer_t4859;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t28;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>
struct Queue_1_t4847;
// ExitGames.Client.Photon.NCommand
struct NCommand_t4856;
// ExitGames.Client.Photon.PeerBase/EgMessageType
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase_EgMessageTyp.h"

// System.Void ExitGames.Client.Photon.EnetPeer::.ctor()
extern "C" void EnetPeer__ctor_m17968 (EnetPeer_t4859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::InitPeerBase()
extern "C" void EnetPeer_InitPeerBase_m17969 (EnetPeer_t4859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::Connect(System.String,System.String)
extern "C" bool EnetPeer_Connect_m17970 (EnetPeer_t4859 * __this, String_t* ___ipport, String_t* ___appID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::Disconnect()
extern "C" void EnetPeer_Disconnect_m17971 (EnetPeer_t4859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::StopConnection()
extern "C" void EnetPeer_StopConnection_m17972 (EnetPeer_t4859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::FetchServerTimestamp()
extern "C" void EnetPeer_FetchServerTimestamp_m17973 (EnetPeer_t4859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::DispatchIncomingCommands()
extern "C" bool EnetPeer_DispatchIncomingCommands_m17974 (EnetPeer_t4859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::SendAcksOnly()
extern "C" bool EnetPeer_SendAcksOnly_m17975 (EnetPeer_t4859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::SendOutgoingCommands()
extern "C" bool EnetPeer_SendOutgoingCommands_m17976 (EnetPeer_t4859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::AreReliableCommandsInTransit()
extern "C" bool EnetPeer_AreReliableCommandsInTransit_m17977 (EnetPeer_t4859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::EnqueueOperation(System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Byte,System.Boolean,System.Byte,System.Boolean,ExitGames.Client.Photon.PeerBase/EgMessageType)
extern "C" bool EnetPeer_EnqueueOperation_m17978 (EnetPeer_t4859 * __this, Dictionary_2_t28 * ___parameters, uint8_t ___opCode, bool ___sendReliable, uint8_t ___channelId, bool ___encrypt, uint8_t ___messageType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::CreateAndEnqueueCommand(System.Byte,System.Byte[],System.Byte)
extern "C" bool EnetPeer_CreateAndEnqueueCommand_m17979 (EnetPeer_t4859 * __this, uint8_t ___commandType, ByteU5BU5D_t25* ___payload, uint8_t ___channelNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.EnetPeer::SerializeOperationToMessage(System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,ExitGames.Client.Photon.PeerBase/EgMessageType,System.Boolean)
extern "C" ByteU5BU5D_t25* EnetPeer_SerializeOperationToMessage_m17980 (EnetPeer_t4859 * __this, uint8_t ___opc, Dictionary_2_t28 * ___parameters, uint8_t ___messageType, bool ___encrypt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.EnetPeer::SerializeToBuffer(System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>)
extern "C" int32_t EnetPeer_SerializeToBuffer_m17981 (EnetPeer_t4859 * __this, Queue_1_t4847 * ___commandList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::SendData(System.Byte[],System.Int32)
extern "C" void EnetPeer_SendData_m17982 (EnetPeer_t4859 * __this, ByteU5BU5D_t25* ___data, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::QueueSentCommand(ExitGames.Client.Photon.NCommand)
extern "C" void EnetPeer_QueueSentCommand_m17983 (EnetPeer_t4859 * __this, NCommand_t4856 * ___command, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::QueueOutgoingReliableCommand(ExitGames.Client.Photon.NCommand)
extern "C" void EnetPeer_QueueOutgoingReliableCommand_m17984 (EnetPeer_t4859 * __this, NCommand_t4856 * ___command, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::QueueOutgoingUnreliableCommand(ExitGames.Client.Photon.NCommand)
extern "C" void EnetPeer_QueueOutgoingUnreliableCommand_m17985 (EnetPeer_t4859 * __this, NCommand_t4856 * ___command, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::QueueOutgoingAcknowledgement(ExitGames.Client.Photon.NCommand)
extern "C" void EnetPeer_QueueOutgoingAcknowledgement_m17986 (EnetPeer_t4859 * __this, NCommand_t4856 * ___command, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::ReceiveIncomingCommands(System.Byte[],System.Int32)
extern "C" void EnetPeer_ReceiveIncomingCommands_m17987 (EnetPeer_t4859 * __this, ByteU5BU5D_t25* ___inBuff, int32_t ___dataLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::ExecuteCommand(ExitGames.Client.Photon.NCommand)
extern "C" bool EnetPeer_ExecuteCommand_m17988 (EnetPeer_t4859 * __this, NCommand_t4856 * ___command, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.EnetPeer::QueueIncomingCommand(ExitGames.Client.Photon.NCommand)
extern "C" bool EnetPeer_QueueIncomingCommand_m17989 (EnetPeer_t4859 * __this, NCommand_t4856 * ___command, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.NCommand ExitGames.Client.Photon.EnetPeer::RemoveSentReliableCommand(System.Int32,System.Int32)
extern "C" NCommand_t4856 * EnetPeer_RemoveSentReliableCommand_m17990 (EnetPeer_t4859 * __this, int32_t ___ackReceivedReliableSequenceNumber, int32_t ___ackReceivedChannel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::<ExecuteCommand>b__13()
extern "C" void EnetPeer_U3CExecuteCommandU3Eb__13_m17991 (EnetPeer_t4859 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.EnetPeer::.cctor()
extern "C" void EnetPeer__cctor_m17992 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
