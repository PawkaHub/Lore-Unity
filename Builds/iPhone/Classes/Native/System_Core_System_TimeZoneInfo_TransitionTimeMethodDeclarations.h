﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.TimeZoneInfo/TransitionTime
struct TransitionTime_t3288;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3296;
// System.Object
struct Object_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.TimeZoneInfo/TransitionTime
#include "System_Core_System_TimeZoneInfo_TransitionTime.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.TimeZoneInfo/TransitionTime::.ctor(System.DateTime,System.Int32,System.Int32)
extern "C" void TransitionTime__ctor_m10412 (TransitionTime_t3288 * __this, DateTime_t1953  ___timeOfDay, int32_t ___month, int32_t ___day, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZoneInfo/TransitionTime::.ctor(System.DateTime,System.Int32)
extern "C" void TransitionTime__ctor_m10413 (TransitionTime_t3288 * __this, DateTime_t1953  ___timeOfDay, int32_t ___month, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeZoneInfo/TransitionTime System.TimeZoneInfo/TransitionTime::CreateFixedDateRule(System.DateTime,System.Int32,System.Int32)
extern "C" TransitionTime_t3288  TransitionTime_CreateFixedDateRule_m10414 (Object_t * __this /* static, unused */, DateTime_t1953  ___timeOfDay, int32_t ___month, int32_t ___day, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZoneInfo/TransitionTime::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TransitionTime_GetObjectData_m10415 (TransitionTime_t3288 * __this, SerializationInfo_t3296 * ___info, StreamingContext_t3297  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo/TransitionTime::Equals(System.Object)
extern "C" bool TransitionTime_Equals_m10416 (TransitionTime_t3288 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo/TransitionTime::Equals(System.TimeZoneInfo/TransitionTime)
extern "C" bool TransitionTime_Equals_m10417 (TransitionTime_t3288 * __this, TransitionTime_t3288  ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.TimeZoneInfo/TransitionTime::GetHashCode()
extern "C" int32_t TransitionTime_GetHashCode_m10418 (TransitionTime_t3288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.TimeZoneInfo/TransitionTime::OnDeserialization(System.Object)
extern "C" void TransitionTime_OnDeserialization_m10419 (TransitionTime_t3288 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo/TransitionTime::op_Equality(System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
extern "C" bool TransitionTime_op_Equality_m10420 (Object_t * __this /* static, unused */, TransitionTime_t3288  ___t1, TransitionTime_t3288  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.TimeZoneInfo/TransitionTime::op_Inequality(System.TimeZoneInfo/TransitionTime,System.TimeZoneInfo/TransitionTime)
extern "C" bool TransitionTime_op_Inequality_m10421 (Object_t * __this /* static, unused */, TransitionTime_t3288  ___t1, TransitionTime_t3288  ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
