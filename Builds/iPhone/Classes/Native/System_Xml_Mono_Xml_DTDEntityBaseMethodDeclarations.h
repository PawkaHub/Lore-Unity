#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDEntityBase
struct DTDEntityBase_t3821;
// System.String
struct String_t;
// System.Xml.XmlResolver
struct XmlResolver_t3700;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3802;

// System.Void Mono.Xml.DTDEntityBase::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDEntityBase__ctor_m11821 (DTDEntityBase_t3821 * __this, DTDObjectModel_t3802 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Xml.DTDEntityBase::get_IsInvalid()
extern "C" bool DTDEntityBase_get_IsInvalid_m11822 (DTDEntityBase_t3821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityBase::set_LoadFailed(System.Boolean)
extern "C" void DTDEntityBase_set_LoadFailed_m11823 (DTDEntityBase_t3821 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityBase::get_Name()
extern "C" String_t* DTDEntityBase_get_Name_m11824 (DTDEntityBase_t3821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityBase::set_Name(System.String)
extern "C" void DTDEntityBase_set_Name_m11825 (DTDEntityBase_t3821 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityBase::get_PublicId()
extern "C" String_t* DTDEntityBase_get_PublicId_m11826 (DTDEntityBase_t3821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityBase::set_PublicId(System.String)
extern "C" void DTDEntityBase_set_PublicId_m11827 (DTDEntityBase_t3821 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityBase::get_SystemId()
extern "C" String_t* DTDEntityBase_get_SystemId_m11828 (DTDEntityBase_t3821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityBase::set_SystemId(System.String)
extern "C" void DTDEntityBase_set_SystemId_m11829 (DTDEntityBase_t3821 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityBase::get_LiteralEntityValue()
extern "C" String_t* DTDEntityBase_get_LiteralEntityValue_m11830 (DTDEntityBase_t3821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityBase::set_LiteralEntityValue(System.String)
extern "C" void DTDEntityBase_set_LiteralEntityValue_m11831 (DTDEntityBase_t3821 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityBase::get_ReplacementText()
extern "C" String_t* DTDEntityBase_get_ReplacementText_m11832 (DTDEntityBase_t3821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityBase::set_ReplacementText(System.String)
extern "C" void DTDEntityBase_set_ReplacementText_m11833 (DTDEntityBase_t3821 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityBase::set_XmlResolver(System.Xml.XmlResolver)
extern "C" void DTDEntityBase_set_XmlResolver_m11834 (DTDEntityBase_t3821 * __this, XmlResolver_t3700 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDEntityBase::get_ActualUri()
extern "C" String_t* DTDEntityBase_get_ActualUri_m11835 (DTDEntityBase_t3821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDEntityBase::Resolve()
extern "C" void DTDEntityBase_Resolve_m11836 (DTDEntityBase_t3821 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
