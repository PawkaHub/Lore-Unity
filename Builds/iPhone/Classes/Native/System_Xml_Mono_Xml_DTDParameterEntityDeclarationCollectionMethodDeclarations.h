#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDParameterEntityDeclarationCollection
struct DTDParameterEntityDeclarationCollection_t4044;
// Mono.Xml.DTDParameterEntityDeclaration
struct DTDParameterEntityDeclaration_t4062;
// System.String
struct String_t;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t4040;

// System.Void Mono.Xml.DTDParameterEntityDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDParameterEntityDeclarationCollection__ctor_m12273 (DTDParameterEntityDeclarationCollection_t4044 * __this, DTDObjectModel_t4040 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Xml.DTDParameterEntityDeclaration Mono.Xml.DTDParameterEntityDeclarationCollection::get_Item(System.String)
extern "C" DTDParameterEntityDeclaration_t4062 * DTDParameterEntityDeclarationCollection_get_Item_m12274 (DTDParameterEntityDeclarationCollection_t4044 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDParameterEntityDeclarationCollection::Add(System.String,Mono.Xml.DTDParameterEntityDeclaration)
extern "C" void DTDParameterEntityDeclarationCollection_Add_m12275 (DTDParameterEntityDeclarationCollection_t4044 * __this, String_t* ___name, DTDParameterEntityDeclaration_t4062 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
