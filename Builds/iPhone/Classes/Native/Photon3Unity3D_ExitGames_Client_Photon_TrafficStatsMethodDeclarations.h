#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t692;
// System.String
struct String_t;

// System.Int32 ExitGames.Client.Photon.TrafficStats::get_PackageHeaderSize()
extern "C" int32_t TrafficStats_get_PackageHeaderSize_m14329 (TrafficStats_t692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_PackageHeaderSize(System.Int32)
extern "C" void TrafficStats_set_PackageHeaderSize_m14330 (TrafficStats_t692 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ReliableCommandCount()
extern "C" int32_t TrafficStats_get_ReliableCommandCount_m14331 (TrafficStats_t692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_ReliableCommandCount(System.Int32)
extern "C" void TrafficStats_set_ReliableCommandCount_m14332 (TrafficStats_t692 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_UnreliableCommandCount()
extern "C" int32_t TrafficStats_get_UnreliableCommandCount_m14333 (TrafficStats_t692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_UnreliableCommandCount(System.Int32)
extern "C" void TrafficStats_set_UnreliableCommandCount_m14334 (TrafficStats_t692 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_FragmentCommandCount()
extern "C" int32_t TrafficStats_get_FragmentCommandCount_m14335 (TrafficStats_t692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_FragmentCommandCount(System.Int32)
extern "C" void TrafficStats_set_FragmentCommandCount_m14336 (TrafficStats_t692 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ControlCommandCount()
extern "C" int32_t TrafficStats_get_ControlCommandCount_m14337 (TrafficStats_t692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_ControlCommandCount(System.Int32)
extern "C" void TrafficStats_set_ControlCommandCount_m14338 (TrafficStats_t692 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalPacketCount()
extern "C" int32_t TrafficStats_get_TotalPacketCount_m14339 (TrafficStats_t692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_TotalPacketCount(System.Int32)
extern "C" void TrafficStats_set_TotalPacketCount_m14340 (TrafficStats_t692 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalCommandsInPackets()
extern "C" int32_t TrafficStats_get_TotalCommandsInPackets_m14341 (TrafficStats_t692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_TotalCommandsInPackets(System.Int32)
extern "C" void TrafficStats_set_TotalCommandsInPackets_m14342 (TrafficStats_t692 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ReliableCommandBytes()
extern "C" int32_t TrafficStats_get_ReliableCommandBytes_m14343 (TrafficStats_t692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_ReliableCommandBytes(System.Int32)
extern "C" void TrafficStats_set_ReliableCommandBytes_m14344 (TrafficStats_t692 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_UnreliableCommandBytes()
extern "C" int32_t TrafficStats_get_UnreliableCommandBytes_m14345 (TrafficStats_t692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_UnreliableCommandBytes(System.Int32)
extern "C" void TrafficStats_set_UnreliableCommandBytes_m14346 (TrafficStats_t692 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_FragmentCommandBytes()
extern "C" int32_t TrafficStats_get_FragmentCommandBytes_m14347 (TrafficStats_t692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_FragmentCommandBytes(System.Int32)
extern "C" void TrafficStats_set_FragmentCommandBytes_m14348 (TrafficStats_t692 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ControlCommandBytes()
extern "C" int32_t TrafficStats_get_ControlCommandBytes_m14349 (TrafficStats_t692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_ControlCommandBytes(System.Int32)
extern "C" void TrafficStats_set_ControlCommandBytes_m14350 (TrafficStats_t692 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::.ctor(System.Int32)
extern "C" void TrafficStats__ctor_m14351 (TrafficStats_t692 * __this, int32_t ___packageHeaderSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalCommandBytes()
extern "C" int32_t TrafficStats_get_TotalCommandBytes_m14352 (TrafficStats_t692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalPacketBytes()
extern "C" int32_t TrafficStats_get_TotalPacketBytes_m14353 (TrafficStats_t692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_TimestampOfLastAck(System.Int32)
extern "C" void TrafficStats_set_TimestampOfLastAck_m14354 (TrafficStats_t692 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_TimestampOfLastReliableCommand(System.Int32)
extern "C" void TrafficStats_set_TimestampOfLastReliableCommand_m14355 (TrafficStats_t692 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::CountControlCommand(System.Int32)
extern "C" void TrafficStats_CountControlCommand_m14356 (TrafficStats_t692 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::CountReliableOpCommand(System.Int32)
extern "C" void TrafficStats_CountReliableOpCommand_m14357 (TrafficStats_t692 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::CountUnreliableOpCommand(System.Int32)
extern "C" void TrafficStats_CountUnreliableOpCommand_m14358 (TrafficStats_t692 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::CountFragmentOpCommand(System.Int32)
extern "C" void TrafficStats_CountFragmentOpCommand_m14359 (TrafficStats_t692 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.TrafficStats::ToString()
extern "C" String_t* TrafficStats_ToString_m14360 (TrafficStats_t692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
