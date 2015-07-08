#pragma once
#include <stdint.h>
// System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.EnetChannel>
struct Dictionary_2_t5101;
// System.Collections.Generic.List`1<ExitGames.Client.Photon.NCommand>
struct List_1_t5102;
// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand>
struct Queue_1_t5085;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.Collections.Generic.Queue`1<System.Int32>
struct Queue_1_t5103;
// ExitGames.Client.Photon.PeerBase
#include "Photon3Unity3D_ExitGames_Client_Photon_PeerBase.h"
// ExitGames.Client.Photon.EnetPeer
struct  EnetPeer_t5097  : public PeerBase_t5090
{
	// System.Collections.Generic.Dictionary`2<System.Byte,ExitGames.Client.Photon.EnetChannel> ExitGames.Client.Photon.EnetPeer::channels
	Dictionary_2_t5101 * ___channels_66;
	// System.Collections.Generic.List`1<ExitGames.Client.Photon.NCommand> ExitGames.Client.Photon.EnetPeer::sentReliableCommands
	List_1_t5102 * ___sentReliableCommands_67;
	// System.Collections.Generic.Queue`1<ExitGames.Client.Photon.NCommand> ExitGames.Client.Photon.EnetPeer::outgoingAcknowledgementsList
	Queue_1_t5085 * ___outgoingAcknowledgementsList_68;
	// System.Int32 ExitGames.Client.Photon.EnetPeer::windowSize
	int32_t ___windowSize_69;
	// System.Byte ExitGames.Client.Photon.EnetPeer::udpCommandCount
	uint8_t ___udpCommandCount_70;
	// System.Byte[] ExitGames.Client.Photon.EnetPeer::udpBuffer
	ByteU5BU5D_t25* ___udpBuffer_71;
	// System.Int32 ExitGames.Client.Photon.EnetPeer::udpBufferIndex
	int32_t ___udpBufferIndex_72;
	// System.Int32 ExitGames.Client.Photon.EnetPeer::challenge
	int32_t ___challenge_73;
	// System.Int32 ExitGames.Client.Photon.EnetPeer::reliableCommandsRepeated
	int32_t ___reliableCommandsRepeated_74;
	// System.Int32 ExitGames.Client.Photon.EnetPeer::reliableCommandsSent
	int32_t ___reliableCommandsSent_75;
	// System.Int32 ExitGames.Client.Photon.EnetPeer::serverSentTime
	int32_t ___serverSentTime_76;
	// System.Byte[] ExitGames.Client.Photon.EnetPeer::initData
	ByteU5BU5D_t25* ___initData_79;
	// System.Collections.Generic.Queue`1<System.Int32> ExitGames.Client.Photon.EnetPeer::commandsToRemove
	Queue_1_t5103 * ___commandsToRemove_80;
};
struct EnetPeer_t5097_StaticFields{
	// System.Byte[] ExitGames.Client.Photon.EnetPeer::udpHeader0xF3
	ByteU5BU5D_t25* ___udpHeader0xF3_77;
	// System.Byte[] ExitGames.Client.Photon.EnetPeer::messageHeader
	ByteU5BU5D_t25* ___messageHeader_78;
};
