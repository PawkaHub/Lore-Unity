#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlSerializationReaderInterpreter/ReaderCallbackInfo
struct ReaderCallbackInfo_t3766;
// System.Xml.Serialization.XmlSerializationReaderInterpreter
struct XmlSerializationReaderInterpreter_t3762;
// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t3765;
// System.Object
struct Object_t;

// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter/ReaderCallbackInfo::.ctor(System.Xml.Serialization.XmlSerializationReaderInterpreter,System.Xml.Serialization.XmlTypeMapping)
extern "C" void ReaderCallbackInfo__ctor_m11430 (ReaderCallbackInfo_t3766 * __this, XmlSerializationReaderInterpreter_t3762 * ___sri, XmlTypeMapping_t3765 * ___typeMap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter/ReaderCallbackInfo::ReadObject()
extern "C" Object_t * ReaderCallbackInfo_ReadObject_m11431 (ReaderCallbackInfo_t3766 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
