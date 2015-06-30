#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlSerializationReaderInterpreter/ReaderCallbackInfo
struct ReaderCallbackInfo_t2380;
// System.Xml.Serialization.XmlSerializationReaderInterpreter
struct XmlSerializationReaderInterpreter_t2376;
// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t2379;
// System.Object
struct Object_t;

// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter/ReaderCallbackInfo::.ctor(System.Xml.Serialization.XmlSerializationReaderInterpreter,System.Xml.Serialization.XmlTypeMapping)
extern "C" void ReaderCallbackInfo__ctor_m10146 (ReaderCallbackInfo_t2380 * __this, XmlSerializationReaderInterpreter_t2376 * ___sri, XmlTypeMapping_t2379 * ___typeMap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReaderInterpreter/ReaderCallbackInfo::ReadObject()
extern "C" Object_t * ReaderCallbackInfo_ReadObject_m10147 (ReaderCallbackInfo_t2380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
