#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDElementDeclaration
struct DTDElementDeclaration_t3818;
// System.String
struct String_t;
// Mono.Xml.DTDContentModel
struct DTDContentModel_t3817;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t3802;

// System.Void Mono.Xml.DTDElementDeclaration::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDElementDeclaration__ctor_m11800 (DTDElementDeclaration_t3818 * __this, DTDObjectModel_t3802 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Xml.DTDElementDeclaration::get_Name()
extern "C" String_t* DTDElementDeclaration_get_Name_m11801 (DTDElementDeclaration_t3818 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDElementDeclaration::set_Name(System.String)
extern "C" void DTDElementDeclaration_set_Name_m11802 (DTDElementDeclaration_t3818 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDElementDeclaration::set_IsEmpty(System.Boolean)
extern "C" void DTDElementDeclaration_set_IsEmpty_m11803 (DTDElementDeclaration_t3818 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDElementDeclaration::set_IsAny(System.Boolean)
extern "C" void DTDElementDeclaration_set_IsAny_m11804 (DTDElementDeclaration_t3818 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDElementDeclaration::set_IsMixedContent(System.Boolean)
extern "C" void DTDElementDeclaration_set_IsMixedContent_m11805 (DTDElementDeclaration_t3818 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDContentModel Mono.Xml.DTDElementDeclaration::get_ContentModel()
extern "C" DTDContentModel_t3817 * DTDElementDeclaration_get_ContentModel_m11806 (DTDElementDeclaration_t3818 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
