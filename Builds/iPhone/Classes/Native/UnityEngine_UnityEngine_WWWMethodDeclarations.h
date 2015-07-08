#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WWW
struct WWW_t1483;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1444;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t680;
// System.Byte[]
struct ByteU5BU5D_t25;
// UnityEngine.AudioClip
struct AudioClip_t261;
// UnityEngine.WWWForm
struct WWWForm_t4742;
// System.String[]
struct StringU5BU5D_t20;
// UnityEngine.AudioType
#include "UnityEngine_UnityEngine_AudioType.h"

// System.Void UnityEngine.WWW::.ctor(System.String)
extern "C" void WWW__ctor_m7787 (WWW_t1483 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::.ctor(System.String,UnityEngine.WWWForm)
extern "C" void WWW__ctor_m17160 (WWW_t1483 * __this, String_t* ___url, WWWForm_t4742 * ___form, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::.ctor(System.String,System.Byte[],System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" void WWW__ctor_m9350 (WWW_t1483 * __this, String_t* ___url, ByteU5BU5D_t25* ___postData, Dictionary_2_t1444 * ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Dispose()
extern "C" void WWW_Dispose_m17161 (WWW_t1483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Finalize()
extern "C" void WWW_Finalize_m17162 (WWW_t1483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::DestroyWWW(System.Boolean)
extern "C" void WWW_DestroyWWW_m17163 (WWW_t1483 * __this, bool ___cancel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])
extern "C" void WWW_InitWWW_m17164 (WWW_t1483 * __this, String_t* ___url, ByteU5BU5D_t25* ___postData, StringU5BU5D_t20* ___iHeaders, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::EscapeURL(System.String)
extern "C" String_t* WWW_EscapeURL_m3756 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::EscapeURL(System.String,System.Text.Encoding)
extern "C" String_t* WWW_EscapeURL_m17165 (Object_t * __this /* static, unused */, String_t* ___s, Encoding_t680 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::get_responseHeaders()
extern "C" Dictionary_2_t1444 * WWW_get_responseHeaders_m17166 (WWW_t1483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_responseHeadersString()
extern "C" String_t* WWW_get_responseHeadersString_m17167 (WWW_t1483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_text()
extern "C" String_t* WWW_get_text_m9318 (WWW_t1483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding UnityEngine.WWW::get_DefaultEncoding()
extern "C" Encoding_t680 * WWW_get_DefaultEncoding_m17168 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding UnityEngine.WWW::GetTextEncoder()
extern "C" Encoding_t680 * WWW_GetTextEncoder_m17169 (WWW_t1483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWW::get_bytes()
extern "C" ByteU5BU5D_t25* WWW_get_bytes_m17170 (WWW_t1483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_error()
extern "C" String_t* WWW_get_error_m9317 (WWW_t1483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip UnityEngine.WWW::get_audioClip()
extern "C" AudioClip_t261 * WWW_get_audioClip_m7789 (WWW_t1483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip UnityEngine.WWW::GetAudioClip(System.Boolean)
extern "C" AudioClip_t261 * WWW_GetAudioClip_m17171 (WWW_t1483 * __this, bool ___threeD, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip UnityEngine.WWW::GetAudioClip(System.Boolean,System.Boolean)
extern "C" AudioClip_t261 * WWW_GetAudioClip_m17172 (WWW_t1483 * __this, bool ___threeD, bool ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip UnityEngine.WWW::GetAudioClip(System.Boolean,System.Boolean,UnityEngine.AudioType)
extern "C" AudioClip_t261 * WWW_GetAudioClip_m17173 (WWW_t1483 * __this, bool ___threeD, bool ___stream, int32_t ___audioType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip UnityEngine.WWW::GetAudioClipInternal(System.Boolean,System.Boolean,System.Boolean,UnityEngine.AudioType)
extern "C" AudioClip_t261 * WWW_GetAudioClipInternal_m17174 (WWW_t1483 * __this, bool ___threeD, bool ___stream, bool ___compressed, int32_t ___audioType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWW::get_isDone()
extern "C" bool WWW_get_isDone_m7788 (WWW_t1483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.WWW::get_progress()
extern "C" float WWW_get_progress_m9321 (WWW_t1483 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.WWW::FlattenedHeadersFrom(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" StringU5BU5D_t20* WWW_FlattenedHeadersFrom_m17175 (Object_t * __this /* static, unused */, Dictionary_2_t1444 * ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::ParseHTTPHeaderString(System.String)
extern "C" Dictionary_2_t1444 * WWW_ParseHTTPHeaderString_m17176 (Object_t * __this /* static, unused */, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
