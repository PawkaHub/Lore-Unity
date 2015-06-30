#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.SerializationSource
struct SerializationSource_t2329;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t562;

// System.Void System.Xml.Serialization.SerializationSource::.ctor(System.String,System.Type[])
extern "C" void SerializationSource__ctor_m9901 (SerializationSource_t2329 * __this, String_t* ___namspace, TypeU5BU5D_t562* ___includedTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.SerializationSource::BaseEquals(System.Xml.Serialization.SerializationSource)
extern "C" bool SerializationSource_BaseEquals_m9902 (SerializationSource_t2329 * __this, SerializationSource_t2329 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Xml.Serialization.SerializationSource::get_CanBeGenerated()
extern "C" bool SerializationSource_get_CanBeGenerated_m9903 (SerializationSource_t2329 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.SerializationSource::set_CanBeGenerated(System.Boolean)
extern "C" void SerializationSource_set_CanBeGenerated_m9904 (SerializationSource_t2329 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
