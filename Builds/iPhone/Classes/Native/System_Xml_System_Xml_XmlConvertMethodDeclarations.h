#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlConvert
struct XmlConvert_t4089;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.IO.TextWriter
struct TextWriter_t3796;
// System.String[]
struct StringU5BU5D_t20;
// System.Char[]
struct CharU5BU5D_t583;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Xml.XmlDateTimeSerializationMode
#include "System_Xml_System_Xml_XmlDateTimeSerializationMode.h"
// System.Globalization.DateTimeStyles
#include "mscorlib_System_Globalization_DateTimeStyles.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Xml.XmlConvert::.cctor()
extern "C" void XmlConvert__cctor_m12409 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::TryDecoding(System.String)
extern "C" String_t* XmlConvert_TryDecoding_m12410 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::DecodeName(System.String)
extern "C" String_t* XmlConvert_DecodeName_m12411 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::EncodeLocalName(System.String)
extern "C" String_t* XmlConvert_EncodeLocalName_m12412 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlConvert::IsInvalid(System.Char,System.Boolean)
extern "C" bool XmlConvert_IsInvalid_m12413 (Object_t * __this /* static, unused */, uint16_t ___c, bool ___firstOnlyLetter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::EncodeName(System.String,System.Boolean)
extern "C" String_t* XmlConvert_EncodeName_m12414 (Object_t * __this /* static, unused */, String_t* ___name, bool ___nmtoken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::EncodeName(System.String)
extern "C" String_t* XmlConvert_EncodeName_m12415 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlConvert::ToBoolean(System.String)
extern "C" bool XmlConvert_ToBoolean_m12416 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToBinHexString(System.Byte[])
extern "C" String_t* XmlConvert_ToBinHexString_m12417 (Object_t * __this /* static, unused */, ByteU5BU5D_t25* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlConvert::WriteBinHex(System.Byte[],System.Int32,System.Int32,System.IO.TextWriter)
extern "C" void XmlConvert_WriteBinHex_m12418 (Object_t * __this /* static, unused */, ByteU5BU5D_t25* ___buffer, int32_t ___index, int32_t ___count, TextWriter_t3796 * ___w, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Xml.XmlConvert::ToByte(System.String)
extern "C" uint8_t XmlConvert_ToByte_m12419 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Xml.XmlConvert::ToDateTime(System.String,System.Xml.XmlDateTimeSerializationMode)
extern "C" DateTime_t1953  XmlConvert_ToDateTime_m12420 (Object_t * __this /* static, unused */, String_t* ___value, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Xml.XmlConvert::ToDateTime(System.String,System.String[])
extern "C" DateTime_t1953  XmlConvert_ToDateTime_m12421 (Object_t * __this /* static, unused */, String_t* ___s, StringU5BU5D_t20* ___formats, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Xml.XmlConvert::ToDateTime(System.String,System.String[],System.Globalization.DateTimeStyles)
extern "C" DateTime_t1953  XmlConvert_ToDateTime_m12422 (Object_t * __this /* static, unused */, String_t* ___s, StringU5BU5D_t20* ___formats, int32_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Xml.XmlConvert::ToDecimal(System.String)
extern "C" Decimal_t2021  XmlConvert_ToDecimal_m12423 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Xml.XmlConvert::ToDouble(System.String)
extern "C" double XmlConvert_ToDouble_m12424 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Xml.XmlConvert::TryParseStringFloatConstants(System.String)
extern "C" float XmlConvert_TryParseStringFloatConstants_m12425 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.XmlConvert::TryParseStringConstant(System.String,System.String,System.Int32,System.Int32)
extern "C" bool XmlConvert_TryParseStringConstant_m12426 (Object_t * __this /* static, unused */, String_t* ___format, String_t* ___s, int32_t ___start, int32_t ___end, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Xml.XmlConvert::ToGuid(System.String)
extern "C" Guid_t1979  XmlConvert_ToGuid_m12427 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Xml.XmlConvert::ToInt16(System.String)
extern "C" int16_t XmlConvert_ToInt16_m12428 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlConvert::ToInt32(System.String)
extern "C" int32_t XmlConvert_ToInt32_m12429 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Xml.XmlConvert::ToInt64(System.String)
extern "C" int64_t XmlConvert_ToInt64_m12430 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Xml.XmlConvert::ToSByte(System.String)
extern "C" int8_t XmlConvert_ToSByte_m12431 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Xml.XmlConvert::ToSingle(System.String)
extern "C" float XmlConvert_ToSingle_m12432 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.Guid)
extern "C" String_t* XmlConvert_ToString_m12433 (Object_t * __this /* static, unused */, Guid_t1979  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.Int32)
extern "C" String_t* XmlConvert_ToString_m12434 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.Int16)
extern "C" String_t* XmlConvert_ToString_m12435 (Object_t * __this /* static, unused */, int16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.Byte)
extern "C" String_t* XmlConvert_ToString_m12436 (Object_t * __this /* static, unused */, uint8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.Int64)
extern "C" String_t* XmlConvert_ToString_m12437 (Object_t * __this /* static, unused */, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.Boolean)
extern "C" String_t* XmlConvert_ToString_m12438 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.SByte)
extern "C" String_t* XmlConvert_ToString_m12439 (Object_t * __this /* static, unused */, int8_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.Decimal)
extern "C" String_t* XmlConvert_ToString_m12440 (Object_t * __this /* static, unused */, Decimal_t2021  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.UInt64)
extern "C" String_t* XmlConvert_ToString_m12441 (Object_t * __this /* static, unused */, uint64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.Double)
extern "C" String_t* XmlConvert_ToString_m12442 (Object_t * __this /* static, unused */, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.Single)
extern "C" String_t* XmlConvert_ToString_m12443 (Object_t * __this /* static, unused */, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.UInt32)
extern "C" String_t* XmlConvert_ToString_m12444 (Object_t * __this /* static, unused */, uint32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.UInt16)
extern "C" String_t* XmlConvert_ToString_m12445 (Object_t * __this /* static, unused */, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::ToString(System.DateTime,System.Xml.XmlDateTimeSerializationMode)
extern "C" String_t* XmlConvert_ToString_m12446 (Object_t * __this /* static, unused */, DateTime_t1953  ___value, int32_t ___mode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Xml.XmlConvert::ToUInt16(System.String)
extern "C" uint16_t XmlConvert_ToUInt16_m12447 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Xml.XmlConvert::ToUInt32(System.String)
extern "C" uint32_t XmlConvert_ToUInt32_m12448 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Xml.XmlConvert::ToUInt64(System.String)
extern "C" uint64_t XmlConvert_ToUInt64_m12449 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlConvert::VerifyName(System.String)
extern "C" String_t* XmlConvert_VerifyName_m12450 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Xml.XmlConvert::FromBinHexString(System.String)
extern "C" ByteU5BU5D_t25* XmlConvert_FromBinHexString_m12451 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Xml.XmlConvert::FromBinHexString(System.Char[],System.Int32,System.Int32,System.Byte[])
extern "C" int32_t XmlConvert_FromBinHexString_m12452 (Object_t * __this /* static, unused */, CharU5BU5D_t583* ___chars, int32_t ___offset, int32_t ___charLength, ByteU5BU5D_t25* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
