#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml2.XmlTextReader/DtdInputStateStack
struct DtdInputStateStack_t4136;
// Mono.Xml2.XmlTextReader/DtdInputState
#include "System_Xml_Mono_Xml2_XmlTextReader_DtdInputState.h"

// System.Void Mono.Xml2.XmlTextReader/DtdInputStateStack::.ctor()
extern "C" void DtdInputStateStack__ctor_m12896 (DtdInputStateStack_t4136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml2.XmlTextReader/DtdInputState Mono.Xml2.XmlTextReader/DtdInputStateStack::Peek()
extern "C" int32_t DtdInputStateStack_Peek_m12897 (DtdInputStateStack_t4136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml2.XmlTextReader/DtdInputState Mono.Xml2.XmlTextReader/DtdInputStateStack::Pop()
extern "C" int32_t DtdInputStateStack_Pop_m12898 (DtdInputStateStack_t4136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml2.XmlTextReader/DtdInputStateStack::Push(Mono.Xml2.XmlTextReader/DtdInputState)
extern "C" void DtdInputStateStack_Push_m12899 (DtdInputStateStack_t4136 * __this, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
