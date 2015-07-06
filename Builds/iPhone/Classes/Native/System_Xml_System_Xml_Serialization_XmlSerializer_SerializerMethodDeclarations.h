#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlSerializer/SerializerData
struct SerializerData_t3776;
// System.Xml.Serialization.XmlSerializationReader
struct XmlSerializationReader_t3761;
// System.Xml.Serialization.XmlSerializationWriter
struct XmlSerializationWriter_t3772;

// System.Xml.Serialization.XmlSerializationReader System.Xml.Serialization.XmlSerializer/SerializerData::CreateReader()
extern "C" XmlSerializationReader_t3761 * SerializerData_CreateReader_m11548 (SerializerData_t3776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializationWriter System.Xml.Serialization.XmlSerializer/SerializerData::CreateWriter()
extern "C" XmlSerializationWriter_t3772 * SerializerData_CreateWriter_m11549 (SerializerData_t3776 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
