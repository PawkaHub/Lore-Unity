#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.TrafficStats
struct TrafficStats_t709;
// System.String
struct String_t;

// System.Int32 ExitGames.Client.Photon.TrafficStats::get_PackageHeaderSize()
extern "C" int32_t TrafficStats_get_PackageHeaderSize_m18205 (TrafficStats_t709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_PackageHeaderSize(System.Int32)
extern "C" void TrafficStats_set_PackageHeaderSize_m18206 (TrafficStats_t709 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ReliableCommandCount()
extern "C" int32_t TrafficStats_get_ReliableCommandCount_m18207 (TrafficStats_t709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_ReliableCommandCount(System.Int32)
extern "C" void TrafficStats_set_ReliableCommandCount_m18208 (TrafficStats_t709 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_UnreliableCommandCount()
extern "C" int32_t TrafficStats_get_UnreliableCommandCount_m18209 (TrafficStats_t709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_UnreliableCommandCount(System.Int32)
extern "C" void TrafficStats_set_UnreliableCommandCount_m18210 (TrafficStats_t709 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_FragmentCommandCount()
extern "C" int32_t TrafficStats_get_FragmentCommandCount_m18211 (TrafficStats_t709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_FragmentCommandCount(System.Int32)
extern "C" void TrafficStats_set_FragmentCommandCount_m18212 (TrafficStats_t709 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ControlCommandCount()
extern "C" int32_t TrafficStats_get_ControlCommandCount_m18213 (TrafficStats_t709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_ControlCommandCount(System.Int32)
extern "C" void TrafficStats_set_ControlCommandCount_m18214 (TrafficStats_t709 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalPacketCount()
extern "C" int32_t TrafficStats_get_TotalPacketCount_m18215 (TrafficStats_t709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_TotalPacketCount(System.Int32)
extern "C" void TrafficStats_set_TotalPacketCount_m18216 (TrafficStats_t709 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalCommandsInPackets()
extern "C" int32_t TrafficStats_get_TotalCommandsInPackets_m18217 (TrafficStats_t709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_TotalCommandsInPackets(System.Int32)
extern "C" void TrafficStats_set_TotalCommandsInPackets_m18218 (TrafficStats_t709 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ReliableCommandBytes()
extern "C" int32_t TrafficStats_get_ReliableCommandBytes_m18219 (TrafficStats_t709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_ReliableCommandBytes(System.Int32)
extern "C" void TrafficStats_set_ReliableCommandBytes_m18220 (TrafficStats_t709 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_UnreliableCommandBytes()
extern "C" int32_t TrafficStats_get_UnreliableCommandBytes_m18221 (TrafficStats_t709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_UnreliableCommandBytes(System.Int32)
extern "C" void TrafficStats_set_UnreliableCommandBytes_m18222 (TrafficStats_t709 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_FragmentCommandBytes()
extern "C" int32_t TrafficStats_get_FragmentCommandBytes_m18223 (TrafficStats_t709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_FragmentCommandBytes(System.Int32)
extern "C" void TrafficStats_set_FragmentCommandBytes_m18224 (TrafficStats_t709 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_ControlCommandBytes()
extern "C" int32_t TrafficStats_get_ControlCommandBytes_m18225 (TrafficStats_t709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_ControlCommandBytes(System.Int32)
extern "C" void TrafficStats_set_ControlCommandBytes_m18226 (TrafficStats_t709 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::.ctor(System.Int32)
extern "C" void TrafficStats__ctor_m18227 (TrafficStats_t709 * __this, int32_t ___packageHeaderSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalCommandBytes()
extern "C" int32_t TrafficStats_get_TotalCommandBytes_m18228 (TrafficStats_t709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.TrafficStats::get_TotalPacketBytes()
extern "C" int32_t TrafficStats_get_TotalPacketBytes_m18229 (TrafficStats_t709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_TimestampOfLastAck(System.Int32)
extern "C" void TrafficStats_set_TimestampOfLastAck_m18230 (TrafficStats_t709 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::set_TimestampOfLastReliableCommand(System.Int32)
extern "C" void TrafficStats_set_TimestampOfLastReliableCommand_m18231 (TrafficStats_t709 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::CountControlCommand(System.Int32)
extern "C" void TrafficStats_CountControlCommand_m18232 (TrafficStats_t709 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::CountReliableOpCommand(System.Int32)
extern "C" void TrafficStats_CountReliableOpCommand_m18233 (TrafficStats_t709 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::CountUnreliableOpCommand(System.Int32)
extern "C" void TrafficStats_CountUnreliableOpCommand_m18234 (TrafficStats_t709 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.TrafficStats::CountFragmentOpCommand(System.Int32)
extern "C" void TrafficStats_CountFragmentOpCommand_m18235 (TrafficStats_t709 * __this, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.TrafficStats::ToString()
extern "C" String_t* TrafficStats_ToString_m18236 (TrafficStats_t709 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
