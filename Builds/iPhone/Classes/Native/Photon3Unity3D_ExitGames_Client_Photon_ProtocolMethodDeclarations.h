#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.Protocol
struct Protocol_t657;
// System.Type
struct Type_t;
// ExitGames.Client.Photon.SerializeStreamMethod
struct SerializeStreamMethod_t655;
// ExitGames.Client.Photon.DeserializeStreamMethod
struct DeserializeStreamMethod_t656;
// System.IO.MemoryStream
struct MemoryStream_t558;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// ExitGames.Client.Photon.OperationRequest
struct OperationRequest_t3146;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object>
struct Dictionary_2_t28;
// ExitGames.Client.Photon.OperationResponse
struct OperationResponse_t23;
// ExitGames.Client.Photon.EventData
struct EventData_t22;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t119;
// System.Object[]
struct ObjectU5BU5D_t21;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t436;
// System.Collections.IDictionary
struct IDictionary_t560;
// System.String[]
struct StringU5BU5D_t20;
// ExitGames.Client.Photon.GpType
#include "Photon3Unity3D_ExitGames_Client_Photon_GpType.h"

// System.Boolean ExitGames.Client.Photon.Protocol::TryRegisterType(System.Type,System.Byte,ExitGames.Client.Photon.SerializeStreamMethod,ExitGames.Client.Photon.DeserializeStreamMethod)
extern "C" bool Protocol_TryRegisterType_m14202 (Object_t * __this /* static, unused */, Type_t * ___type, uint8_t ___typeCode, SerializeStreamMethod_t655 * ___serializeFunction, DeserializeStreamMethod_t656 * ___deserializeFunction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Protocol::SerializeCustom(System.IO.MemoryStream,System.Object)
extern "C" bool Protocol_SerializeCustom_m14203 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___dout, Object_t * ___serObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.Protocol::DeserializeCustom(System.IO.MemoryStream,System.Byte)
extern "C" Object_t * Protocol_DeserializeCustom_m14204 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___din, uint8_t ___customTypeCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ExitGames.Client.Photon.Protocol::GetTypeOfCode(System.Byte)
extern "C" Type_t * Protocol_GetTypeOfCode_m14205 (Object_t * __this /* static, unused */, uint8_t ___typeCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.GpType ExitGames.Client.Photon.Protocol::GetCodeOfType(System.Type)
extern "C" uint8_t Protocol_GetCodeOfType_m14206 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array ExitGames.Client.Photon.Protocol::CreateArrayByType(System.Byte,System.Int16)
extern "C" Array_t * Protocol_CreateArrayByType_m14207 (Object_t * __this /* static, unused */, uint8_t ___arrayType, int16_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeOperationRequest(System.IO.MemoryStream,ExitGames.Client.Photon.OperationRequest,System.Boolean)
extern "C" void Protocol_SerializeOperationRequest_m14208 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___memStream, OperationRequest_t3146 * ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeOperationRequest(System.IO.MemoryStream,System.Byte,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>,System.Boolean)
extern "C" void Protocol_SerializeOperationRequest_m14209 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___memStream, uint8_t ___operationCode, Dictionary_2_t28 * ___parameters, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.OperationRequest ExitGames.Client.Photon.Protocol::DeserializeOperationRequest(System.IO.MemoryStream)
extern "C" OperationRequest_t3146 * Protocol_DeserializeOperationRequest_m14210 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeOperationResponse(System.IO.MemoryStream,ExitGames.Client.Photon.OperationResponse,System.Boolean)
extern "C" void Protocol_SerializeOperationResponse_m14211 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___memStream, OperationResponse_t23 * ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.OperationResponse ExitGames.Client.Photon.Protocol::DeserializeOperationResponse(System.IO.MemoryStream)
extern "C" OperationResponse_t23 * Protocol_DeserializeOperationResponse_m14212 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___memoryStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeEventData(System.IO.MemoryStream,ExitGames.Client.Photon.EventData,System.Boolean)
extern "C" void Protocol_SerializeEventData_m14213 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___memStream, EventData_t22 * ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.EventData ExitGames.Client.Photon.Protocol::DeserializeEventData(System.IO.MemoryStream)
extern "C" EventData_t22 * Protocol_DeserializeEventData_m14214 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeParameterTable(System.IO.MemoryStream,System.Collections.Generic.Dictionary`2<System.Byte,System.Object>)
extern "C" void Protocol_SerializeParameterTable_m14215 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___memStream, Dictionary_2_t28 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.Byte,System.Object> ExitGames.Client.Photon.Protocol::DeserializeParameterTable(System.IO.MemoryStream)
extern "C" Dictionary_2_t28 * Protocol_DeserializeParameterTable_m14216 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___memoryStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Serialize(System.IO.MemoryStream,System.Object,System.Boolean)
extern "C" void Protocol_Serialize_m14217 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___dout, Object_t * ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeByte(System.IO.MemoryStream,System.Byte,System.Boolean)
extern "C" void Protocol_SerializeByte_m14218 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___dout, uint8_t ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeBoolean(System.IO.MemoryStream,System.Boolean,System.Boolean)
extern "C" void Protocol_SerializeBoolean_m14219 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___dout, bool ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeShort(System.IO.MemoryStream,System.Int16,System.Boolean)
extern "C" void Protocol_SerializeShort_m14220 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___dout, int16_t ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Serialize(System.Int16,System.Byte[],System.Int32&)
extern "C" void Protocol_Serialize_m14221 (Object_t * __this /* static, unused */, int16_t ___value, ByteU5BU5D_t25* ___target, int32_t* ___targetOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeInteger(System.IO.MemoryStream,System.Int32,System.Boolean)
extern "C" void Protocol_SerializeInteger_m14222 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___dout, int32_t ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Serialize(System.Int32,System.Byte[],System.Int32&)
extern "C" void Protocol_Serialize_m3088 (Object_t * __this /* static, unused */, int32_t ___value, ByteU5BU5D_t25* ___target, int32_t* ___targetOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeLong(System.IO.MemoryStream,System.Int64,System.Boolean)
extern "C" void Protocol_SerializeLong_m14223 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___dout, int64_t ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeFloat(System.IO.MemoryStream,System.Single,System.Boolean)
extern "C" void Protocol_SerializeFloat_m14224 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___dout, float ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Serialize(System.Single,System.Byte[],System.Int32&)
extern "C" void Protocol_Serialize_m3086 (Object_t * __this /* static, unused */, float ___value, ByteU5BU5D_t25* ___target, int32_t* ___targetOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeDouble(System.IO.MemoryStream,System.Double,System.Boolean)
extern "C" void Protocol_SerializeDouble_m14225 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___dout, double ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeString(System.IO.MemoryStream,System.String,System.Boolean)
extern "C" void Protocol_SerializeString_m14226 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___dout, String_t* ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeArray(System.IO.MemoryStream,System.Array,System.Boolean)
extern "C" void Protocol_SerializeArray_m14227 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___dout, Array_t * ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeByteArray(System.IO.MemoryStream,System.Byte[],System.Boolean)
extern "C" void Protocol_SerializeByteArray_m14228 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___dout, ByteU5BU5D_t25* ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeIntArrayOptimized(System.IO.MemoryStream,System.Int32[],System.Boolean)
extern "C" void Protocol_SerializeIntArrayOptimized_m14229 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___inWriter, Int32U5BU5D_t119* ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeObjectArray(System.IO.MemoryStream,System.Object[],System.Boolean)
extern "C" void Protocol_SerializeObjectArray_m14230 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___dout, ObjectU5BU5D_t21* ___objects, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeHashTable(System.IO.MemoryStream,ExitGames.Client.Photon.Hashtable,System.Boolean)
extern "C" void Protocol_SerializeHashTable_m14231 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___dout, Hashtable_t436 * ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeDictionary(System.IO.MemoryStream,System.Collections.IDictionary,System.Boolean)
extern "C" void Protocol_SerializeDictionary_m14232 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___dout, Object_t * ___serObject, bool ___setType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeDictionaryHeader(System.IO.MemoryStream,System.Type)
extern "C" void Protocol_SerializeDictionaryHeader_m14233 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___writer, Type_t * ___dictType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeDictionaryHeader(System.IO.MemoryStream,System.Object,System.Boolean&,System.Boolean&)
extern "C" void Protocol_SerializeDictionaryHeader_m14234 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___writer, Object_t * ___dict, bool* ___setKeyType, bool* ___setValueType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::SerializeDictionaryElements(System.IO.MemoryStream,System.Object,System.Boolean,System.Boolean)
extern "C" void Protocol_SerializeDictionaryElements_m14235 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___writer, Object_t * ___dict, bool ___setKeyType, bool ___setValueType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object ExitGames.Client.Photon.Protocol::Deserialize(System.IO.MemoryStream,System.Byte)
extern "C" Object_t * Protocol_Deserialize_m14236 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___din, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte ExitGames.Client.Photon.Protocol::DeserializeByte(System.IO.MemoryStream)
extern "C" uint8_t Protocol_DeserializeByte_m14237 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Protocol::DeserializeBoolean(System.IO.MemoryStream)
extern "C" bool Protocol_DeserializeBoolean_m14238 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 ExitGames.Client.Photon.Protocol::DeserializeShort(System.IO.MemoryStream)
extern "C" int16_t Protocol_DeserializeShort_m14239 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Deserialize(System.Int16&,System.Byte[],System.Int32&)
extern "C" void Protocol_Deserialize_m14240 (Object_t * __this /* static, unused */, int16_t* ___value, ByteU5BU5D_t25* ___source, int32_t* ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.Protocol::DeserializeInteger(System.IO.MemoryStream)
extern "C" int32_t Protocol_DeserializeInteger_m14241 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Deserialize(System.Int32&,System.Byte[],System.Int32&)
extern "C" void Protocol_Deserialize_m3089 (Object_t * __this /* static, unused */, int32_t* ___value, ByteU5BU5D_t25* ___source, int32_t* ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 ExitGames.Client.Photon.Protocol::DeserializeLong(System.IO.MemoryStream)
extern "C" int64_t Protocol_DeserializeLong_m14242 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ExitGames.Client.Photon.Protocol::DeserializeFloat(System.IO.MemoryStream)
extern "C" float Protocol_DeserializeFloat_m14243 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::Deserialize(System.Single&,System.Byte[],System.Int32&)
extern "C" void Protocol_Deserialize_m3087 (Object_t * __this /* static, unused */, float* ___value, ByteU5BU5D_t25* ___source, int32_t* ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double ExitGames.Client.Photon.Protocol::DeserializeDouble(System.IO.MemoryStream)
extern "C" double Protocol_DeserializeDouble_m14244 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.Protocol::DeserializeString(System.IO.MemoryStream)
extern "C" String_t* Protocol_DeserializeString_m14245 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array ExitGames.Client.Photon.Protocol::DeserializeArray(System.IO.MemoryStream)
extern "C" Array_t * Protocol_DeserializeArray_m14246 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] ExitGames.Client.Photon.Protocol::DeserializeByteArray(System.IO.MemoryStream)
extern "C" ByteU5BU5D_t25* Protocol_DeserializeByteArray_m14247 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] ExitGames.Client.Photon.Protocol::DeserializeIntArray(System.IO.MemoryStream)
extern "C" Int32U5BU5D_t119* Protocol_DeserializeIntArray_m14248 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] ExitGames.Client.Photon.Protocol::DeserializeStringArray(System.IO.MemoryStream)
extern "C" StringU5BU5D_t20* Protocol_DeserializeStringArray_m14249 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] ExitGames.Client.Photon.Protocol::DeserializeObjectArray(System.IO.MemoryStream)
extern "C" ObjectU5BU5D_t21* Protocol_DeserializeObjectArray_m14250 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ExitGames.Client.Photon.Hashtable ExitGames.Client.Photon.Protocol::DeserializeHashTable(System.IO.MemoryStream)
extern "C" Hashtable_t436 * Protocol_DeserializeHashTable_m14251 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary ExitGames.Client.Photon.Protocol::DeserializeDictionary(System.IO.MemoryStream)
extern "C" Object_t * Protocol_DeserializeDictionary_m14252 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___din, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ExitGames.Client.Photon.Protocol::DeserializeDictionaryArray(System.IO.MemoryStream,System.Int16,System.Array&)
extern "C" bool Protocol_DeserializeDictionaryArray_m14253 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___din, int16_t ___size, Array_t ** ___arrayResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type ExitGames.Client.Photon.Protocol::DeserializeDictionaryType(System.IO.MemoryStream,System.Byte&,System.Byte&)
extern "C" Type_t * Protocol_DeserializeDictionaryType_m14254 (Object_t * __this /* static, unused */, MemoryStream_t558 * ___reader, uint8_t* ___keyTypeCode, uint8_t* ___valTypeCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.Protocol::.cctor()
extern "C" void Protocol__cctor_m14255 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
