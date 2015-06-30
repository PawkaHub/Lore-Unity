#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.SupportClass
struct SupportClass_t659;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.Collections.Generic.List`1<System.Reflection.MethodInfo>
struct List_1_t675;
// System.Type
struct Type_t;
// System.Func`1<System.Boolean>
struct Func_1_t685;
// System.Exception
struct Exception_t468;
// System.IO.TextWriter
struct TextWriter_t2521;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t560;

// System.UInt32 ExitGames.Client.Photon.SupportClass::CalculateCrc(System.Byte[],System.Int32)
extern "C" uint32_t SupportClass_CalculateCrc_m14290 (Object_t * __this /* static, unused */, ByteU5BU5D_t25* ___buffer, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Reflection.MethodInfo> ExitGames.Client.Photon.SupportClass::GetMethods(System.Type,System.Type)
extern "C" List_1_t675 * SupportClass_GetMethods_m3146 (Object_t * __this /* static, unused */, Type_t * ___type, Type_t * ___attribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.SupportClass::GetTickCount()
extern "C" int32_t SupportClass_GetTickCount_m14291 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SupportClass::CallInBackground(System.Func`1<System.Boolean>)
extern "C" void SupportClass_CallInBackground_m3173 (Object_t * __this /* static, unused */, Func_1_t685 * ___myThread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SupportClass::CallInBackground(System.Func`1<System.Boolean>,System.Int32)
extern "C" void SupportClass_CallInBackground_m14292 (Object_t * __this /* static, unused */, Func_1_t685 * ___myThread, int32_t ___millisecondsInterval, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SupportClass::WriteStackTrace(System.Exception,System.IO.TextWriter)
extern "C" void SupportClass_WriteStackTrace_m14293 (Object_t * __this /* static, unused */, Exception_t468 * ___throwable, TextWriter_t2521 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SupportClass::WriteStackTrace(System.Exception)
extern "C" void SupportClass_WriteStackTrace_m14294 (Object_t * __this /* static, unused */, Exception_t468 * ___throwable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.SupportClass::DictionaryToString(System.Collections.IDictionary)
extern "C" String_t* SupportClass_DictionaryToString_m3145 (Object_t * __this /* static, unused */, Object_t * ___dictionary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.SupportClass::DictionaryToString(System.Collections.IDictionary,System.Boolean)
extern "C" String_t* SupportClass_DictionaryToString_m3095 (Object_t * __this /* static, unused */, Object_t * ___dictionary, bool ___includeTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SupportClass::.cctor()
extern "C" void SupportClass__cctor_m14295 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.SupportClass::<.cctor>b__3()
extern "C" int32_t SupportClass_U3C_cctorU3Eb__3_m14296 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
