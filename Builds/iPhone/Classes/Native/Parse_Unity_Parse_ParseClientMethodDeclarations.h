#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseClient
struct ParseClient_t1817;
// System.Uri
struct Uri_t32;
// System.String
struct String_t;
// System.Version
struct Version_t1963;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t1810;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t1954;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>>
struct Task_1_t1951;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>
struct IList_1_t1964;
// System.IO.Stream
struct Stream_t1751;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>>
struct Task_1_t1965;
// System.IProgress`1<Parse.ParseUploadProgressEventArgs>
struct IProgress_1_t1828;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t1756;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t729;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t1809;
// <>f__AnonymousType2`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>
struct U3CU3Ef__AnonymousType2_2_t1966;
// System.Nullable`1<System.Guid>
#include "mscorlib_System_Nullable_1_gen.h"
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Threading.CancellationToken
#include "Parse_Unity_System_Threading_CancellationToken.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Uri Parse.ParseClient::get_HostName()
extern "C" Uri_t32 * ParseClient_get_HostName_m8259 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseClient::set_HostName(System.Uri)
extern "C" void ParseClient_set_HostName_m8260 (Object_t * __this /* static, unused */, Uri_t32 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseClient::get_MasterKey()
extern "C" String_t* ParseClient_get_MasterKey_m8261 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseClient::set_MasterKey(System.String)
extern "C" void ParseClient_set_MasterKey_m8262 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseClient::get_ApplicationId()
extern "C" String_t* ParseClient_get_ApplicationId_m8263 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseClient::set_ApplicationId(System.String)
extern "C" void ParseClient_set_ApplicationId_m8264 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseClient::get_WindowsKey()
extern "C" String_t* ParseClient_get_WindowsKey_m8265 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseClient::set_WindowsKey(System.String)
extern "C" void ParseClient_set_WindowsKey_m8266 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseClient::.cctor()
extern "C" void ParseClient__cctor_m8267 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Parse.ParseClient::GetParseType(System.String)
extern "C" Type_t * ParseClient_GetParseType_m8268 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version Parse.ParseClient::get_Version()
extern "C" Version_t1963 * ParseClient_get_Version_m8269 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseClient::Initialize(System.String,System.String)
extern "C" void ParseClient_Initialize_m8270 (Object_t * __this /* static, unused */, String_t* ___applicationId, String_t* ___dotnetKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Nullable`1<System.Guid> Parse.ParseClient::get_InstallationId()
extern "C" Nullable_1_t1818  ParseClient_get_InstallationId_m8271 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseClient::set_InstallationId(System.Nullable`1<System.Guid>)
extern "C" void ParseClient_set_InstallationId_m8272 (Object_t * __this /* static, unused */, Nullable_1_t1818  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.ParseClient::Decode(System.Object)
extern "C" Object_t * ParseClient_Decode_m8273 (Object_t * __this /* static, unused */, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime Parse.ParseClient::ParseDate(System.String)
extern "C" DateTime_t1953  ParseClient_ParseDate_m8274 (Object_t * __this /* static, unused */, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseClient::IsContainerObject(System.Object)
extern "C" bool ParseClient_IsContainerObject_m8275 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.ParseClient::MaybeEncodeJSONObject(System.Object,System.Boolean)
extern "C" Object_t * ParseClient_MaybeEncodeJSONObject_m8276 (Object_t * __this /* static, unused */, Object_t * ___value, bool ___allowParseObjects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseClient::EncodeJSONObject(System.Object,System.Boolean)
extern "C" Object_t* ParseClient_EncodeJSONObject_m8277 (Object_t * __this /* static, unused */, Object_t * ___value, bool ___allowParseObjects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.ParseClient::EncodeJSONArray(System.Collections.Generic.IList`1<System.Object>,System.Boolean)
extern "C" Object_t * ParseClient_EncodeJSONArray_m8278 (Object_t * __this /* static, unused */, Object_t* ___list, bool ___allowParseObjects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.String>> Parse.ParseClient::RequestAsync(System.Uri,System.String,System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>,System.IO.Stream,System.String,System.Threading.CancellationToken)
extern "C" Task_1_t1951 * ParseClient_RequestAsync_m8279 (Object_t * __this /* static, unused */, Uri_t32 * ___uri, String_t* ___method, Object_t* ___headers, Stream_t1751 * ___data, String_t* ___contentType, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>> Parse.ParseClient::RequestAsync(System.String,System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
extern "C" Task_1_t1965 * ParseClient_RequestAsync_m8280 (Object_t * __this /* static, unused */, String_t* ___method, String_t* ___relativeUri, String_t* ___sessionToken, Object_t* ___data, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>> Parse.ParseClient::RequestAsync(System.String,System.Uri,System.String,System.Collections.Generic.IDictionary`2<System.String,System.Object>,System.Threading.CancellationToken)
extern "C" Task_1_t1965 * ParseClient_RequestAsync_m8281 (Object_t * __this /* static, unused */, String_t* ___method, Uri_t32 * ___relativeUri, String_t* ___sessionToken, Object_t* ___data, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Tasks.Task`1<System.Tuple`2<System.Net.HttpStatusCode,System.Collections.Generic.IDictionary`2<System.String,System.Object>>> Parse.ParseClient::UploadAsync(System.Uri,System.String,System.String,System.IO.Stream,System.IProgress`1<Parse.ParseUploadProgressEventArgs>,System.Threading.CancellationToken)
extern "C" Task_1_t1965 * ParseClient_UploadAsync_m8282 (Object_t * __this /* static, unused */, Uri_t32 * ___relativeUri, String_t* ___sessionToken, String_t* ___contentType, Stream_t1751 * ___data, Object_t* ___progress, CancellationToken_t1753  ___cancellationToken, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type Parse.ParseClient::GetInterfaceType(System.Type,System.Type)
extern "C" Type_t * ParseClient_GetInterfaceType_m8283 (Object_t * __this /* static, unused */, Type_t * ___objType, Type_t * ___genericInterfaceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseClient::BuildQueryString(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" String_t* ParseClient_BuildQueryString_m8284 (Object_t * __this /* static, unused */, Object_t* ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.String> Parse.ParseClient::DecodeQueryString(System.String)
extern "C" Object_t* ParseClient_DecodeQueryString_m8285 (Object_t * __this /* static, unused */, String_t* ___queryString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Parse.ParseClient::IsValidType(System.Object)
extern "C" bool ParseClient_IsValidType_m8286 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseClient::DeserializeJsonString(System.String)
extern "C" Object_t* ParseClient_DeserializeJsonString_m8287 (Object_t * __this /* static, unused */, String_t* ___jsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseClient::SerializeJsonString(System.Collections.Generic.IDictionary`2<System.String,System.Object>)
extern "C" String_t* ParseClient_SerializeJsonString_m8288 (Object_t * __this /* static, unused */, Object_t* ___jsonData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseClient::get_ApplicationSettings()
extern "C" Object_t* ParseClient_get_ApplicationSettings_m8289 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseClient::ClearInMemoryInstallation()
extern "C" void ParseClient_ClearInMemoryInstallation_m8290 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Object> Parse.ParseClient::DeepTraversal(System.Object,System.Boolean,System.Boolean)
extern "C" Object_t* ParseClient_DeepTraversal_m8291 (Object_t * __this /* static, unused */, Object_t * ___root, bool ___traverseParseObjects, bool ___yieldRoot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Object> Parse.ParseClient::DeepTraversalInternal(System.Object,System.Boolean,System.Collections.Generic.ICollection`1<System.Object>)
extern "C" Object_t* ParseClient_DeepTraversalInternal_m8292 (Object_t * __this /* static, unused */, Object_t * ___root, bool ___traverseParseObjects, Object_t* ___seen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Parse.ParseClient::<Decode>b__0(System.Object)
extern "C" Object_t * ParseClient_U3CDecodeU3Eb__0_m8293 (Object_t * __this /* static, unused */, Object_t * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// <>f__AnonymousType2`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String> Parse.ParseClient::<BuildQueryString>b__f(System.Collections.Generic.KeyValuePair`2<System.String,System.Object>)
extern "C" U3CU3Ef__AnonymousType2_2_t1966 * ParseClient_U3CBuildQueryStringU3Eb__f_m8294 (Object_t * __this /* static, unused */, KeyValuePair_2_t1962  ___pair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Parse.ParseClient::<BuildQueryString>b__10(<>f__AnonymousType2`2<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>,System.String>)
extern "C" String_t* ParseClient_U3CBuildQueryStringU3Eb__10_m8295 (Object_t * __this /* static, unused */, U3CU3Ef__AnonymousType2_2_t1966 * ___U3CU3Eh__TransparentIdentifiere, const MethodInfo* method) IL2CPP_METHOD_ATTR;
