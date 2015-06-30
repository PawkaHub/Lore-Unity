#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseGeoPoint
struct ParseGeoPoint_t1445;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t1430;

// System.Void Parse.ParseGeoPoint::.ctor(System.Double,System.Double)
extern "C" void ParseGeoPoint__ctor_m6965 (ParseGeoPoint_t1445 * __this, double ___latitude, double ___longitude, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Parse.ParseGeoPoint::get_Latitude()
extern "C" double ParseGeoPoint_get_Latitude_m6966 (ParseGeoPoint_t1445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseGeoPoint::set_Latitude(System.Double)
extern "C" void ParseGeoPoint_set_Latitude_m6967 (ParseGeoPoint_t1445 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Parse.ParseGeoPoint::get_Longitude()
extern "C" double ParseGeoPoint_get_Longitude_m6968 (ParseGeoPoint_t1445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseGeoPoint::set_Longitude(System.Double)
extern "C" void ParseGeoPoint_set_Longitude_m6969 (ParseGeoPoint_t1445 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseGeoPoint::ToJSON()
extern "C" Object_t* ParseGeoPoint_ToJSON_m6970 (ParseGeoPoint_t1445 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
