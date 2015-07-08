#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDAttListDeclarationCollection
struct DTDAttListDeclarationCollection_t4043;
// Mono.Xml.DTDAttListDeclaration
struct DTDAttListDeclaration_t4058;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t4040;

// System.Void Mono.Xml.DTDAttListDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDAttListDeclarationCollection__ctor_m12190 (DTDAttListDeclarationCollection_t4043 * __this, DTDObjectModel_t4040 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDAttListDeclaration Mono.Xml.DTDAttListDeclarationCollection::get_Item(System.String)
extern "C" DTDAttListDeclaration_t4058 * DTDAttListDeclarationCollection_get_Item_m12191 (DTDAttListDeclarationCollection_t4043 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDAttListDeclarationCollection::Add(System.String,Mono.Xml.DTDAttListDeclaration)
extern "C" void DTDAttListDeclarationCollection_Add_m12192 (DTDAttListDeclarationCollection_t4043 * __this, String_t* ___name, DTDAttListDeclaration_t4058 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
