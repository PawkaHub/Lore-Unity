#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.TimeZoneInfo
struct TimeZoneInfo_t1854;
// System.String
struct String_t;
// System.TimeZoneInfo/AdjustmentRule[]
struct AdjustmentRuleU5BU5D_t3052;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3058;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule>
struct List_1_t3060;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String>
struct Dictionary_2_t3061;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>
struct Dictionary_2_t3062;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>>
struct List_1_t3063;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.TimeZoneInfo::.ctor(System.String,System.TimeSpan,System.String,System.String,System.String,System.TimeZoneInfo/AdjustmentRule[],System.Boolean)
extern "C" void TimeZoneInfo__ctor_m10004 (TimeZoneInfo_t1854 * __this, String_t* ___id, TimeSpan_t1746  ___baseUtcOffset, String_t* ___displayName, String_t* ___standardDisplayName, String_t* ___daylightDisplayName, AdjustmentRuleU5BU5D_t3052* ___adjustmentRules, bool ___disableDaylightSavingTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZoneInfo::.cctor()
extern "C" void TimeZoneInfo__cctor_m10005 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.TimeZoneInfo::get_BaseUtcOffset()
extern "C" TimeSpan_t1746  TimeZoneInfo_get_BaseUtcOffset_m10006 (TimeZoneInfo_t1854 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TimeZoneInfo::get_DisplayName()
extern "C" String_t* TimeZoneInfo_get_DisplayName_m10007 (TimeZoneInfo_t1854 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TimeZoneInfo::get_Id()
extern "C" String_t* TimeZoneInfo_get_Id_m10008 (TimeZoneInfo_t1854 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo System.TimeZoneInfo::get_Local()
extern "C" TimeZoneInfo_t1854 * TimeZoneInfo_get_Local_m8810 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TimeZoneInfo::get_StandardName()
extern "C" String_t* TimeZoneInfo_get_StandardName_m8811 (TimeZoneInfo_t1854 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TimeZoneInfo::get_TimeZoneDirectory()
extern "C" String_t* TimeZoneInfo_get_TimeZoneDirectory_m10009 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo System.TimeZoneInfo::CreateCustomTimeZone(System.String,System.TimeSpan,System.String,System.String)
extern "C" TimeZoneInfo_t1854 * TimeZoneInfo_CreateCustomTimeZone_m10010 (Object_t * __this /* static, unused */, String_t* ___id, TimeSpan_t1746  ___baseUtcOffset, String_t* ___displayName, String_t* ___standardDisplayName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo System.TimeZoneInfo::CreateCustomTimeZone(System.String,System.TimeSpan,System.String,System.String,System.String,System.TimeZoneInfo/AdjustmentRule[])
extern "C" TimeZoneInfo_t1854 * TimeZoneInfo_CreateCustomTimeZone_m10011 (Object_t * __this /* static, unused */, String_t* ___id, TimeSpan_t1746  ___baseUtcOffset, String_t* ___displayName, String_t* ___standardDisplayName, String_t* ___daylightDisplayName, AdjustmentRuleU5BU5D_t3052* ___adjustmentRules, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo System.TimeZoneInfo::CreateCustomTimeZone(System.String,System.TimeSpan,System.String,System.String,System.String,System.TimeZoneInfo/AdjustmentRule[],System.Boolean)
extern "C" TimeZoneInfo_t1854 * TimeZoneInfo_CreateCustomTimeZone_m10012 (Object_t * __this /* static, unused */, String_t* ___id, TimeSpan_t1746  ___baseUtcOffset, String_t* ___displayName, String_t* ___standardDisplayName, String_t* ___daylightDisplayName, AdjustmentRuleU5BU5D_t3052* ___adjustmentRules, bool ___disableDaylightSavingTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo::Equals(System.TimeZoneInfo)
extern "C" bool TimeZoneInfo_Equals_m10013 (TimeZoneInfo_t1854 * __this, TimeZoneInfo_t1854 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo System.TimeZoneInfo::FindSystemTimeZoneByFileName(System.String,System.String)
extern "C" TimeZoneInfo_t1854 * TimeZoneInfo_FindSystemTimeZoneByFileName_m10014 (Object_t * __this /* static, unused */, String_t* ___id, String_t* ___filepath, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo/AdjustmentRule[] System.TimeZoneInfo::GetAdjustmentRules()
extern "C" AdjustmentRuleU5BU5D_t3052* TimeZoneInfo_GetAdjustmentRules_m10015 (TimeZoneInfo_t1854 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeZoneInfo::GetHashCode()
extern "C" int32_t TimeZoneInfo_GetHashCode_m10016 (TimeZoneInfo_t1854 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZoneInfo::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TimeZoneInfo_GetObjectData_m10017 (TimeZoneInfo_t1854 * __this, SerializationInfo_t3058 * ___info, StreamingContext_t3059  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo::HasSameRules(System.TimeZoneInfo)
extern "C" bool TimeZoneInfo_HasSameRules_m10018 (TimeZoneInfo_t1854 * __this, TimeZoneInfo_t1854 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZoneInfo::OnDeserialization(System.Object)
extern "C" void TimeZoneInfo_OnDeserialization_m10019 (TimeZoneInfo_t1854 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.TimeZoneInfo::ToString()
extern "C" String_t* TimeZoneInfo_ToString_m10020 (TimeZoneInfo_t1854 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo::ValidTZFile(System.Byte[],System.Int32)
extern "C" bool TimeZoneInfo_ValidTZFile_m10021 (Object_t * __this /* static, unused */, ByteU5BU5D_t25* ___buffer, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeZoneInfo::SwapInt32(System.Int32)
extern "C" int32_t TimeZoneInfo_SwapInt32_m10022 (Object_t * __this /* static, unused */, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeZoneInfo::ReadBigEndianInt32(System.Byte[],System.Int32)
extern "C" int32_t TimeZoneInfo_ReadBigEndianInt32_m10023 (Object_t * __this /* static, unused */, ByteU5BU5D_t25* ___buffer, int32_t ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo System.TimeZoneInfo::ParseTZBuffer(System.String,System.Byte[],System.Int32)
extern "C" TimeZoneInfo_t1854 * TimeZoneInfo_ParseTZBuffer_m10024 (Object_t * __this /* static, unused */, String_t* ___id, ByteU5BU5D_t25* ___buffer, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule> System.TimeZoneInfo::ValidateRules(System.Collections.Generic.List`1<System.TimeZoneInfo/AdjustmentRule>)
extern "C" List_1_t3060 * TimeZoneInfo_ValidateRules_m10025 (Object_t * __this /* static, unused */, List_1_t3060 * ___adjustmentRules, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.String> System.TimeZoneInfo::ParseAbbreviations(System.Byte[],System.Int32,System.Int32)
extern "C" Dictionary_2_t3061 * TimeZoneInfo_ParseAbbreviations_m10026 (Object_t * __this /* static, unused */, ByteU5BU5D_t25* ___buffer, int32_t ___index, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType> System.TimeZoneInfo::ParseTimesTypes(System.Byte[],System.Int32,System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.String>)
extern "C" Dictionary_2_t3062 * TimeZoneInfo_ParseTimesTypes_m10027 (Object_t * __this /* static, unused */, ByteU5BU5D_t25* ___buffer, int32_t ___index, int32_t ___count, Dictionary_2_t3061 * ___abbreviations, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.TimeZoneInfo/TimeType>> System.TimeZoneInfo::ParseTransitions(System.Byte[],System.Int32,System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.TimeZoneInfo/TimeType>)
extern "C" List_1_t3063 * TimeZoneInfo_ParseTransitions_m10028 (Object_t * __this /* static, unused */, ByteU5BU5D_t25* ___buffer, int32_t ___index, int32_t ___count, Dictionary_2_t3062 * ___time_types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.TimeZoneInfo::DateTimeFromUnixTime(System.Int64)
extern "C" DateTime_t1705  TimeZoneInfo_DateTimeFromUnixTime_m10029 (Object_t * __this /* static, unused */, int64_t ___unix_time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
