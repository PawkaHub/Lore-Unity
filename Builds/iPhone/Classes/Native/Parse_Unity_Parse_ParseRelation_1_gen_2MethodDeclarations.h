#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseRelation`1<System.Object>
struct ParseRelation_1_t1654;
// Parse.ParseObject
struct ParseObject_t1427;
// System.String
struct String_t;

// System.Void Parse.ParseRelation`1<System.Object>::.ctor(Parse.ParseObject,System.String)
extern "C" void ParseRelation_1__ctor_m35100_gshared (ParseRelation_1_t1654 * __this, ParseObject_t1427 * ___parent, String_t* ___key, const MethodInfo* method);
#define ParseRelation_1__ctor_m35100(__this, ___parent, ___key, method) (( void (*) (ParseRelation_1_t1654 *, ParseObject_t1427 *, String_t*, const MethodInfo*))ParseRelation_1__ctor_m35100_gshared)(__this, ___parent, ___key, method)
// System.Void Parse.ParseRelation`1<System.Object>::.ctor(Parse.ParseObject,System.String,System.String)
extern "C" void ParseRelation_1__ctor_m35101_gshared (ParseRelation_1_t1654 * __this, ParseObject_t1427 * ___parent, String_t* ___key, String_t* ___targetClassName, const MethodInfo* method);
#define ParseRelation_1__ctor_m35101(__this, ___parent, ___key, ___targetClassName, method) (( void (*) (ParseRelation_1_t1654 *, ParseObject_t1427 *, String_t*, String_t*, const MethodInfo*))ParseRelation_1__ctor_m35101_gshared)(__this, ___parent, ___key, ___targetClassName, method)
