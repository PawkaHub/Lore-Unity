#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlSerializationReaderInterpreter/FixupCallbackInfo
struct FixupCallbackInfo_t2378;
// System.Xml.Serialization.XmlSerializationReaderInterpreter
struct XmlSerializationReaderInterpreter_t2376;
// System.Xml.Serialization.ClassMap
struct ClassMap_t2377;
// System.Object
struct Object_t;

// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter/FixupCallbackInfo::.ctor(System.Xml.Serialization.XmlSerializationReaderInterpreter,System.Xml.Serialization.ClassMap,System.Boolean)
extern "C" void FixupCallbackInfo__ctor_m10144 (FixupCallbackInfo_t2378 * __this, XmlSerializationReaderInterpreter_t2376 * ___sri, ClassMap_t2377 * ___map, bool ___isValueList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationReaderInterpreter/FixupCallbackInfo::FixupMembers(System.Object)
extern "C" void FixupCallbackInfo_FixupMembers_m10145 (FixupCallbackInfo_t2378 * __this, Object_t * ___fixup, const MethodInfo* method) IL2CPP_METHOD_ATTR;
