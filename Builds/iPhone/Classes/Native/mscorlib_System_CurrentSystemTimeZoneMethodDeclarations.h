#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.CurrentSystemTimeZone
struct CurrentSystemTimeZone_t5660;
// System.Object
struct Object_t;
// System.Int64[]
struct Int64U5BU5D_t4037;
// System.String[]
struct StringU5BU5D_t20;
// System.Globalization.DaylightTime
struct DaylightTime_t5286;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.CurrentSystemTimeZone::.ctor()
extern "C" void CurrentSystemTimeZone__ctor_m23282 (CurrentSystemTimeZone_t5660 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::.ctor(System.Int64)
extern "C" void CurrentSystemTimeZone__ctor_m23283 (CurrentSystemTimeZone_t5660 * __this, int64_t ___lnow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void CurrentSystemTimeZone_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m23284 (CurrentSystemTimeZone_t5660 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.CurrentSystemTimeZone::GetTimeZoneData(System.Int32,System.Int64[]&,System.String[]&)
extern "C" bool CurrentSystemTimeZone_GetTimeZoneData_m23285 (Object_t * __this /* static, unused */, int32_t ___year, Int64U5BU5D_t4037** ___data, StringU5BU5D_t20** ___names, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightChanges(System.Int32)
extern "C" DaylightTime_t5286 * CurrentSystemTimeZone_GetDaylightChanges_m23286 (CurrentSystemTimeZone_t5660 * __this, int32_t ___year, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.CurrentSystemTimeZone::GetUtcOffset(System.DateTime)
extern "C" TimeSpan_t629  CurrentSystemTimeZone_GetUtcOffset_m23287 (CurrentSystemTimeZone_t5660 * __this, DateTime_t1953  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::OnDeserialization(System.Globalization.DaylightTime)
extern "C" void CurrentSystemTimeZone_OnDeserialization_m23288 (CurrentSystemTimeZone_t5660 * __this, DaylightTime_t5286 * ___dlt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightTimeFromData(System.Int64[])
extern "C" DaylightTime_t5286 * CurrentSystemTimeZone_GetDaylightTimeFromData_m23289 (CurrentSystemTimeZone_t5660 * __this, Int64U5BU5D_t4037* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
