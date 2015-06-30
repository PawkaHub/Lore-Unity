#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlSerializer/SerializerData
struct SerializerData_t2390;
// System.Xml.Serialization.XmlSerializationReader
struct XmlSerializationReader_t2375;
// System.Xml.Serialization.XmlSerializationWriter
struct XmlSerializationWriter_t2386;

// System.Xml.Serialization.XmlSerializationReader System.Xml.Serialization.XmlSerializer/SerializerData::CreateReader()
extern "C" XmlSerializationReader_t2375 * SerializerData_CreateReader_m10264 (SerializerData_t2390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializationWriter System.Xml.Serialization.XmlSerializer/SerializerData::CreateWriter()
extern "C" XmlSerializationWriter_t2386 * SerializerData_CreateWriter_m10265 (SerializerData_t2390 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
