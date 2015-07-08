#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlSerializationReader/Fixup
struct Fixup_t3995;
// System.Xml.Serialization.XmlSerializationFixupCallback
struct XmlSerializationFixupCallback_t3994;
// System.String[]
struct StringU5BU5D_t20;
// System.Object
struct Object_t;

// System.Void System.Xml.Serialization.XmlSerializationReader/Fixup::.ctor(System.Object,System.Xml.Serialization.XmlSerializationFixupCallback,System.Int32)
extern "C" void Fixup__ctor_m11789 (Fixup_t3995 * __this, Object_t * ___o, XmlSerializationFixupCallback_t3994 * ___callback, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Xml.Serialization.XmlSerializationFixupCallback System.Xml.Serialization.XmlSerializationReader/Fixup::get_Callback()
extern "C" XmlSerializationFixupCallback_t3994 * Fixup_get_Callback_m11790 (Fixup_t3995 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Xml.Serialization.XmlSerializationReader/Fixup::get_Ids()
extern "C" StringU5BU5D_t20* Fixup_get_Ids_m11791 (Fixup_t3995 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Xml.Serialization.XmlSerializationReader/Fixup::get_Source()
extern "C" Object_t * Fixup_get_Source_m11792 (Fixup_t3995 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
