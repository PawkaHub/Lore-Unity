﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Single
struct Single_t583;
// System.IFormatProvider
struct IFormatProvider_t3990;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"
// System.TypeCode
#include "mscorlib_System_TypeCode.h"

// System.Boolean System.Single::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" bool Single_System_IConvertible_ToBoolean_m17389 (float* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Single::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" uint8_t Single_System_IConvertible_ToByte_m17390 (float* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Single::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" uint16_t Single_System_IConvertible_ToChar_m17391 (float* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Single::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" DateTime_t1219  Single_System_IConvertible_ToDateTime_m17392 (float* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Single::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" Decimal_t2541  Single_System_IConvertible_ToDecimal_m17393 (float* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Single::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" double Single_System_IConvertible_ToDouble_m17394 (float* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Single::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" int16_t Single_System_IConvertible_ToInt16_m17395 (float* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Single::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" int32_t Single_System_IConvertible_ToInt32_m17396 (float* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Single::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" int64_t Single_System_IConvertible_ToInt64_m17397 (float* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Single::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" int8_t Single_System_IConvertible_ToSByte_m17398 (float* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Single::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" float Single_System_IConvertible_ToSingle_m17399 (float* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Single::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" Object_t * Single_System_IConvertible_ToType_m17400 (float* __this, Type_t * ___targetType, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Single::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" uint16_t Single_System_IConvertible_ToUInt16_m17401 (float* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Single::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" uint32_t Single_System_IConvertible_ToUInt32_m17402 (float* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Single::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" uint64_t Single_System_IConvertible_ToUInt64_m17403 (float* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Single::CompareTo(System.Object)
extern "C" int32_t Single_CompareTo_m17404 (float* __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Single::Equals(System.Object)
extern "C" bool Single_Equals_m17405 (float* __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Single::CompareTo(System.Single)
extern "C" int32_t Single_CompareTo_m9259 (float* __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Single::Equals(System.Single)
extern "C" bool Single_Equals_m13710 (float* __this, float ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Single::GetHashCode()
extern "C" int32_t Single_GetHashCode_m13693 (float* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Single::IsInfinity(System.Single)
extern "C" bool Single_IsInfinity_m17406 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Single::IsNaN(System.Single)
extern "C" bool Single_IsNaN_m3080 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Single::IsNegativeInfinity(System.Single)
extern "C" bool Single_IsNegativeInfinity_m11551 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Single::IsPositiveInfinity(System.Single)
extern "C" bool Single_IsPositiveInfinity_m11552 (Object_t * __this /* static, unused */, float ___f, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Single::Parse(System.String,System.IFormatProvider)
extern "C" float Single_Parse_m17407 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Single::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C" float Single_Parse_m11541 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Single::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Single&)
extern "C" bool Single_TryParse_m17408 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, float* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Single::TryParse(System.String,System.Single&)
extern "C" bool Single_TryParse_m5441 (Object_t * __this /* static, unused */, String_t* ___s, float* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Single::ToString()
extern "C" String_t* Single_ToString_m5350 (float* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Single::ToString(System.IFormatProvider)
extern "C" String_t* Single_ToString_m13743 (float* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Single::ToString(System.String)
extern "C" String_t* Single_ToString_m3024 (float* __this, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Single::ToString(System.String,System.IFormatProvider)
extern "C" String_t* Single_ToString_m11553 (float* __this, String_t* ___format, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Single::GetTypeCode()
extern "C" int32_t Single_GetTypeCode_m17409 (float* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
