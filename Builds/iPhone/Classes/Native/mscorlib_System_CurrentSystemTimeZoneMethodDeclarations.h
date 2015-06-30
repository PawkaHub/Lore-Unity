#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.CurrentSystemTimeZone
struct CurrentSystemTimeZone_t4331;
// System.Object
struct Object_t;
// System.Int64[]
struct Int64U5BU5D_t2413;
// System.String[]
struct StringU5BU5D_t20;
// System.Globalization.DaylightTime
struct DaylightTime_t3958;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.CurrentSystemTimeZone::.ctor()
extern "C" void CurrentSystemTimeZone__ctor_m21540 (CurrentSystemTimeZone_t4331 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::.ctor(System.Int64)
extern "C" void CurrentSystemTimeZone__ctor_m21541 (CurrentSystemTimeZone_t4331 * __this, int64_t ___lnow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void CurrentSystemTimeZone_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m21542 (CurrentSystemTimeZone_t4331 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.CurrentSystemTimeZone::GetTimeZoneData(System.Int32,System.Int64[]&,System.String[]&)
extern "C" bool CurrentSystemTimeZone_GetTimeZoneData_m21543 (Object_t * __this /* static, unused */, int32_t ___year, Int64U5BU5D_t2413** ___data, StringU5BU5D_t20** ___names, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightChanges(System.Int32)
extern "C" DaylightTime_t3958 * CurrentSystemTimeZone_GetDaylightChanges_m21544 (CurrentSystemTimeZone_t4331 * __this, int32_t ___year, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.CurrentSystemTimeZone::GetUtcOffset(System.DateTime)
extern "C" TimeSpan_t2672  CurrentSystemTimeZone_GetUtcOffset_m21545 (CurrentSystemTimeZone_t4331 * __this, DateTime_t1219  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::OnDeserialization(System.Globalization.DaylightTime)
extern "C" void CurrentSystemTimeZone_OnDeserialization_m21546 (CurrentSystemTimeZone_t4331 * __this, DaylightTime_t3958 * ___dlt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightTimeFromData(System.Int64[])
extern "C" DaylightTime_t3958 * CurrentSystemTimeZone_GetDaylightTimeFromData_m21547 (CurrentSystemTimeZone_t4331 * __this, Int64U5BU5D_t2413* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
