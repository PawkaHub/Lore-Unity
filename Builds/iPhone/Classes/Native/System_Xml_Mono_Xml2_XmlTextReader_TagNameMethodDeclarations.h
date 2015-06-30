#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Xml2.XmlTextReader/TagName
struct TagName_t2510;
struct TagName_t2510_marshaled;
// System.String
struct String_t;

// System.Void Mono.Xml2.XmlTextReader/TagName::.ctor(System.String,System.String,System.String)
extern "C" void TagName__ctor_m11190 (TagName_t2510 * __this, String_t* ___n, String_t* ___l, String_t* ___p, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void TagName_t2510_marshal(const TagName_t2510& unmarshaled, TagName_t2510_marshaled& marshaled);
void TagName_t2510_marshal_back(const TagName_t2510_marshaled& marshaled, TagName_t2510& unmarshaled);
void TagName_t2510_marshal_cleanup(TagName_t2510_marshaled& marshaled);
