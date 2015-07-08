#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ExitGames.Client.Photon.SupportClass
struct SupportClass_t747;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.Collections.Generic.List`1<System.Reflection.MethodInfo>
struct List_1_t761;
// System.Type
struct Type_t;
// System.Func`1<System.Boolean>
struct Func_1_t325;
// System.Exception
struct Exception_t496;
// System.IO.TextWriter
struct TextWriter_t3796;
// System.String
struct String_t;
// System.Collections.IDictionary
struct IDictionary_t634;

// System.UInt32 ExitGames.Client.Photon.SupportClass::CalculateCrc(System.Byte[],System.Int32)
extern "C" uint32_t SupportClass_CalculateCrc_m18563 (Object_t * __this /* static, unused */, ByteU5BU5D_t25* ___buffer, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Reflection.MethodInfo> ExitGames.Client.Photon.SupportClass::GetMethods(System.Type,System.Type)
extern "C" List_1_t761 * SupportClass_GetMethods_m3460 (Object_t * __this /* static, unused */, Type_t * ___type, Type_t * ___attribute, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.SupportClass::GetTickCount()
extern "C" int32_t SupportClass_GetTickCount_m18564 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SupportClass::CallInBackground(System.Func`1<System.Boolean>)
extern "C" void SupportClass_CallInBackground_m3487 (Object_t * __this /* static, unused */, Func_1_t325 * ___myThread, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SupportClass::CallInBackground(System.Func`1<System.Boolean>,System.Int32)
extern "C" void SupportClass_CallInBackground_m18565 (Object_t * __this /* static, unused */, Func_1_t325 * ___myThread, int32_t ___millisecondsInterval, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SupportClass::WriteStackTrace(System.Exception,System.IO.TextWriter)
extern "C" void SupportClass_WriteStackTrace_m18566 (Object_t * __this /* static, unused */, Exception_t496 * ___throwable, TextWriter_t3796 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SupportClass::WriteStackTrace(System.Exception)
extern "C" void SupportClass_WriteStackTrace_m18567 (Object_t * __this /* static, unused */, Exception_t496 * ___throwable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.SupportClass::DictionaryToString(System.Collections.IDictionary)
extern "C" String_t* SupportClass_DictionaryToString_m3459 (Object_t * __this /* static, unused */, Object_t * ___dictionary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ExitGames.Client.Photon.SupportClass::DictionaryToString(System.Collections.IDictionary,System.Boolean)
extern "C" String_t* SupportClass_DictionaryToString_m3411 (Object_t * __this /* static, unused */, Object_t * ___dictionary, bool ___includeTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ExitGames.Client.Photon.SupportClass::.cctor()
extern "C" void SupportClass__cctor_m18568 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ExitGames.Client.Photon.SupportClass::<.cctor>b__3()
extern "C" int32_t SupportClass_U3C_cctorU3Eb__3_m18569 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
