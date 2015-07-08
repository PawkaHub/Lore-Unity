#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlSerializer/SerializerData
struct SerializerData_t4014;
// System.Xml.Serialization.XmlSerializationReader
struct XmlSerializationReader_t3999;
// System.Xml.Serialization.XmlSerializationWriter
struct XmlSerializationWriter_t4010;

// System.Xml.Serialization.XmlSerializationReader System.Xml.Serialization.XmlSerializer/SerializerData::CreateReader()
extern "C" XmlSerializationReader_t3999 * SerializerData_CreateReader_m11967 (SerializerData_t4014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializationWriter System.Xml.Serialization.XmlSerializer/SerializerData::CreateWriter()
extern "C" XmlSerializationWriter_t4010 * SerializerData_CreateWriter_m11968 (SerializerData_t4014 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
