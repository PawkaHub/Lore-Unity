#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WWWForm
struct WWWForm_t4742;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1444;
// System.Byte[]
struct ByteU5BU5D_t25;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t680;

// System.Void UnityEngine.WWWForm::.ctor()
extern "C" void WWWForm__ctor_m17177 (WWWForm_t4742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String)
extern "C" void WWWForm_AddField_m17178 (WWWForm_t4742 * __this, String_t* ___fieldName, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.String,System.Text.Encoding)
extern "C" void WWWForm_AddField_m17179 (WWWForm_t4742 * __this, String_t* ___fieldName, String_t* ___value, Encoding_t680 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWWForm::AddField(System.String,System.Int32)
extern "C" void WWWForm_AddField_m17180 (WWWForm_t4742 * __this, String_t* ___fieldName, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWWForm::get_headers()
extern "C" Dictionary_2_t1444 * WWWForm_get_headers_m17181 (WWWForm_t4742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWWForm::get_data()
extern "C" ByteU5BU5D_t25* WWWForm_get_data_m17182 (WWWForm_t4742 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
