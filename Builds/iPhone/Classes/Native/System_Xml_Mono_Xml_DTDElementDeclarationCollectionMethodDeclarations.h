#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml.DTDElementDeclarationCollection
struct DTDElementDeclarationCollection_t2418;
// Mono.Xml.DTDObjectModel
struct DTDObjectModel_t2416;
// System.String
struct String_t;
// Mono.Xml.DTDElementDeclaration
struct DTDElementDeclaration_t2432;

// System.Void Mono.Xml.DTDElementDeclarationCollection::.ctor(Mono.Xml.DTDObjectModel)
extern "C" void DTDElementDeclarationCollection__ctor_m10484 (DTDElementDeclarationCollection_t2418 * __this, DTDObjectModel_t2416 * ___root, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Xml.DTDElementDeclarationCollection::Add(System.String,Mono.Xml.DTDElementDeclaration)
extern "C" void DTDElementDeclarationCollection_Add_m10485 (DTDElementDeclarationCollection_t2418 * __this, String_t* ___name, DTDElementDeclaration_t2432 * ___decl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
