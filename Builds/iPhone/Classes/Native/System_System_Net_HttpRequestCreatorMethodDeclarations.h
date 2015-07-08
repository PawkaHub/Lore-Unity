#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t4297;
// System.Net.WebRequest
struct WebRequest_t4184;
// System.Uri
struct Uri_t32;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m14139 (HttpRequestCreator_t4297 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t4184 * HttpRequestCreator_Create_m14140 (HttpRequestCreator_t4297 * __this, Uri_t32 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
