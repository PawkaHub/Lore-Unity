﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.UInt32
struct UInt32_t2022;
// System.IFormatProvider
struct IFormatProvider_t5318;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Exception
struct Exception_t496;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"

// System.Boolean System.UInt32::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" bool UInt32_System_IConvertible_ToBoolean_m18835 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.UInt32::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" uint8_t UInt32_System_IConvertible_ToByte_m18836 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.UInt32::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" uint16_t UInt32_System_IConvertible_ToChar_m18837 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.UInt32::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" DateTime_t1953  UInt32_System_IConvertible_ToDateTime_m18838 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.UInt32::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" Decimal_t2021  UInt32_System_IConvertible_ToDecimal_m18839 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.UInt32::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" double UInt32_System_IConvertible_ToDouble_m18840 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.UInt32::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" int16_t UInt32_System_IConvertible_ToInt16_m18841 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt32::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" int32_t UInt32_System_IConvertible_ToInt32_m18842 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.UInt32::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" int64_t UInt32_System_IConvertible_ToInt64_m18843 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.UInt32::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" int8_t UInt32_System_IConvertible_ToSByte_m18844 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.UInt32::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" float UInt32_System_IConvertible_ToSingle_m18845 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UInt32::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" Object_t * UInt32_System_IConvertible_ToType_m18846 (uint32_t* __this, Type_t * ___targetType, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.UInt32::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" uint16_t UInt32_System_IConvertible_ToUInt16_m18847 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.UInt32::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" uint32_t UInt32_System_IConvertible_ToUInt32_m18848 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.UInt32::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" uint64_t UInt32_System_IConvertible_ToUInt64_m18849 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt32::CompareTo(System.Object)
extern "C" int32_t UInt32_CompareTo_m18850 (uint32_t* __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt32::Equals(System.Object)
extern "C" bool UInt32_Equals_m18851 (uint32_t* __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt32::GetHashCode()
extern "C" int32_t UInt32_GetHashCode_m18852 (uint32_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.UInt32::CompareTo(System.UInt32)
extern "C" int32_t UInt32_CompareTo_m18853 (uint32_t* __this, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt32::Equals(System.UInt32)
extern "C" bool UInt32_Equals_m18854 (uint32_t* __this, uint32_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt32::Parse(System.String,System.Boolean,System.UInt32&,System.Exception&)
extern "C" bool UInt32_Parse_m18855 (Object_t * __this /* static, unused */, String_t* ___s, bool ___tryParse, uint32_t* ___result, Exception_t496 ** ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt32::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Boolean,System.UInt32&,System.Exception&)
extern "C" bool UInt32_Parse_m18856 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, bool ___tryParse, uint32_t* ___result, Exception_t496 ** ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.UInt32::Parse(System.String)
extern "C" uint32_t UInt32_Parse_m15344 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.UInt32::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C" uint32_t UInt32_Parse_m13269 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.UInt32::Parse(System.String,System.IFormatProvider)
extern "C" uint32_t UInt32_Parse_m18857 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt32::TryParse(System.String,System.UInt32&)
extern "C" bool UInt32_TryParse_m15461 (Object_t * __this /* static, unused */, String_t* ___s, uint32_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.UInt32::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.UInt32&)
extern "C" bool UInt32_TryParse_m18032 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, uint32_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt32::ToString()
extern "C" String_t* UInt32_ToString_m18029 (uint32_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt32::ToString(System.IFormatProvider)
extern "C" String_t* UInt32_ToString_m13266 (uint32_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt32::ToString(System.String)
extern "C" String_t* UInt32_ToString_m18858 (uint32_t* __this, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.UInt32::ToString(System.String,System.IFormatProvider)
extern "C" String_t* UInt32_ToString_m18859 (uint32_t* __this, String_t* ___format, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
