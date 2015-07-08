#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseRelation`1<System.Object>
struct ParseRelation_1_t2098;
// Parse.ParseQuery`1<System.Object>
struct ParseQuery_1_t2095;
// Parse.ParseObject
struct ParseObject_t596;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void Parse.ParseRelation`1<System.Object>::.ctor(Parse.ParseObject,System.String)
extern "C" void ParseRelation_1__ctor_m41268_gshared (ParseRelation_1_t2098 * __this, ParseObject_t596 * ___parent, String_t* ___key, const MethodInfo* method);
#define ParseRelation_1__ctor_m41268(__this, ___parent, ___key, method) (( void (*) (ParseRelation_1_t2098 *, ParseObject_t596 *, String_t*, const MethodInfo*))ParseRelation_1__ctor_m41268_gshared)(__this, ___parent, ___key, method)
// System.Void Parse.ParseRelation`1<System.Object>::.ctor(Parse.ParseObject,System.String,System.String)
extern "C" void ParseRelation_1__ctor_m41269_gshared (ParseRelation_1_t2098 * __this, ParseObject_t596 * ___parent, String_t* ___key, String_t* ___targetClassName, const MethodInfo* method);
#define ParseRelation_1__ctor_m41269(__this, ___parent, ___key, ___targetClassName, method) (( void (*) (ParseRelation_1_t2098 *, ParseObject_t596 *, String_t*, String_t*, const MethodInfo*))ParseRelation_1__ctor_m41269_gshared)(__this, ___parent, ___key, ___targetClassName, method)
// System.Void Parse.ParseRelation`1<System.Object>::Add(T)
extern "C" void ParseRelation_1_Add_m41270_gshared (ParseRelation_1_t2098 * __this, Object_t * ___obj, const MethodInfo* method);
#define ParseRelation_1_Add_m41270(__this, ___obj, method) (( void (*) (ParseRelation_1_t2098 *, Object_t *, const MethodInfo*))ParseRelation_1_Add_m41270_gshared)(__this, ___obj, method)
// System.Void Parse.ParseRelation`1<System.Object>::Remove(T)
extern "C" void ParseRelation_1_Remove_m41271_gshared (ParseRelation_1_t2098 * __this, Object_t * ___obj, const MethodInfo* method);
#define ParseRelation_1_Remove_m41271(__this, ___obj, method) (( void (*) (ParseRelation_1_t2098 *, Object_t *, const MethodInfo*))ParseRelation_1_Remove_m41271_gshared)(__this, ___obj, method)
// Parse.ParseQuery`1<T> Parse.ParseRelation`1<System.Object>::get_Query()
extern "C" ParseQuery_1_t2095 * ParseRelation_1_get_Query_m41272_gshared (ParseRelation_1_t2098 * __this, const MethodInfo* method);
#define ParseRelation_1_get_Query_m41272(__this, method) (( ParseQuery_1_t2095 * (*) (ParseRelation_1_t2098 *, const MethodInfo*))ParseRelation_1_get_Query_m41272_gshared)(__this, method)
