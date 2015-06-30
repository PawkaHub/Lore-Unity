#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlSerializationWriterInterpreter/CallbackInfo
struct CallbackInfo_t2388;
// System.Xml.Serialization.XmlSerializationWriterInterpreter
struct XmlSerializationWriterInterpreter_t2387;
// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t2379;
// System.Object
struct Object_t;

// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter/CallbackInfo::.ctor(System.Xml.Serialization.XmlSerializationWriterInterpreter,System.Xml.Serialization.XmlTypeMapping)
extern "C" void CallbackInfo__ctor_m10236 (CallbackInfo_t2388 * __this, XmlSerializationWriterInterpreter_t2387 * ___swi, XmlTypeMapping_t2379 * ___typeMap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter/CallbackInfo::WriteObject(System.Object)
extern "C" void CallbackInfo_WriteObject_m10237 (CallbackInfo_t2388 * __this, Object_t * ___ob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter/CallbackInfo::WriteEnum(System.Object)
extern "C" void CallbackInfo_WriteEnum_m10238 (CallbackInfo_t2388 * __this, Object_t * ___ob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
