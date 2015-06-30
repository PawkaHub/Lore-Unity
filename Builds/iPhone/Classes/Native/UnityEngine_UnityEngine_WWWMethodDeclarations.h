#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WWW
struct WWW_t899;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t860;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t602;
// System.Byte[]
struct ByteU5BU5D_t25;
// UnityEngine.AudioClip
struct AudioClip_t261;
// UnityEngine.WWWForm
struct WWWForm_t2769;
// System.String[]
struct StringU5BU5D_t20;
// UnityEngine.AudioType
#include "UnityEngine_UnityEngine_AudioType.h"

// System.Void UnityEngine.WWW::.ctor(System.String)
extern "C" void WWW__ctor_m5487 (WWW_t899 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::.ctor(System.String,UnityEngine.WWWForm)
extern "C" void WWW__ctor_m12863 (WWW_t899 * __this, String_t* ___url, WWWForm_t2769 * ___form, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::.ctor(System.String,System.Byte[],System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" void WWW__ctor_m7638 (WWW_t899 * __this, String_t* ___url, ByteU5BU5D_t25* ___postData, Dictionary_2_t860 * ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Dispose()
extern "C" void WWW_Dispose_m12864 (WWW_t899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Finalize()
extern "C" void WWW_Finalize_m12865 (WWW_t899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::DestroyWWW(System.Boolean)
extern "C" void WWW_DestroyWWW_m12866 (WWW_t899 * __this, bool ___cancel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])
extern "C" void WWW_InitWWW_m12867 (WWW_t899 * __this, String_t* ___url, ByteU5BU5D_t25* ___postData, StringU5BU5D_t20* ___iHeaders, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::get_responseHeaders()
extern "C" Dictionary_2_t860 * WWW_get_responseHeaders_m12868 (WWW_t899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_responseHeadersString()
extern "C" String_t* WWW_get_responseHeadersString_m12869 (WWW_t899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_text()
extern "C" String_t* WWW_get_text_m7619 (WWW_t899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding UnityEngine.WWW::get_DefaultEncoding()
extern "C" Encoding_t602 * WWW_get_DefaultEncoding_m12870 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding UnityEngine.WWW::GetTextEncoder()
extern "C" Encoding_t602 * WWW_GetTextEncoder_m12871 (WWW_t899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWW::get_bytes()
extern "C" ByteU5BU5D_t25* WWW_get_bytes_m12872 (WWW_t899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_error()
extern "C" String_t* WWW_get_error_m7618 (WWW_t899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip UnityEngine.WWW::get_audioClip()
extern "C" AudioClip_t261 * WWW_get_audioClip_m5489 (WWW_t899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip UnityEngine.WWW::GetAudioClip(System.Boolean)
extern "C" AudioClip_t261 * WWW_GetAudioClip_m12873 (WWW_t899 * __this, bool ___threeD, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip UnityEngine.WWW::GetAudioClip(System.Boolean,System.Boolean)
extern "C" AudioClip_t261 * WWW_GetAudioClip_m12874 (WWW_t899 * __this, bool ___threeD, bool ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip UnityEngine.WWW::GetAudioClip(System.Boolean,System.Boolean,UnityEngine.AudioType)
extern "C" AudioClip_t261 * WWW_GetAudioClip_m12875 (WWW_t899 * __this, bool ___threeD, bool ___stream, int32_t ___audioType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioClip UnityEngine.WWW::GetAudioClipInternal(System.Boolean,System.Boolean,System.Boolean,UnityEngine.AudioType)
extern "C" AudioClip_t261 * WWW_GetAudioClipInternal_m12876 (WWW_t899 * __this, bool ___threeD, bool ___stream, bool ___compressed, int32_t ___audioType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWW::get_isDone()
extern "C" bool WWW_get_isDone_m5488 (WWW_t899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.WWW::get_progress()
extern "C" float WWW_get_progress_m7622 (WWW_t899 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.WWW::FlattenedHeadersFrom(System.Collections.Generic.Dictionary`2<System.String,System.String>)
extern "C" StringU5BU5D_t20* WWW_FlattenedHeadersFrom_m12877 (Object_t * __this /* static, unused */, Dictionary_2_t860 * ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::ParseHTTPHeaderString(System.String)
extern "C" Dictionary_2_t860 * WWW_ParseHTTPHeaderString_m12878 (Object_t * __this /* static, unused */, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
