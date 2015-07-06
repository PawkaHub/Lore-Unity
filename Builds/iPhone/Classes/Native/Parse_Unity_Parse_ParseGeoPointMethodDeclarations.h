#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Parse.ParseGeoPoint
struct ParseGeoPoint_t1579;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t1555;
// Parse.ParseGeoDistance
#include "Parse_Unity_Parse_ParseGeoDistance.h"
// Parse.ParseGeoPoint
#include "Parse_Unity_Parse_ParseGeoPoint.h"

// System.Void Parse.ParseGeoPoint::.ctor(System.Double,System.Double)
extern "C" void ParseGeoPoint__ctor_m7910 (ParseGeoPoint_t1579 * __this, double ___latitude, double ___longitude, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Parse.ParseGeoPoint::get_Latitude()
extern "C" double ParseGeoPoint_get_Latitude_m7911 (ParseGeoPoint_t1579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseGeoPoint::set_Latitude(System.Double)
extern "C" void ParseGeoPoint_set_Latitude_m7912 (ParseGeoPoint_t1579 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double Parse.ParseGeoPoint::get_Longitude()
extern "C" double ParseGeoPoint_get_Longitude_m7913 (ParseGeoPoint_t1579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Parse.ParseGeoPoint::set_Longitude(System.Double)
extern "C" void ParseGeoPoint_set_Longitude_m7914 (ParseGeoPoint_t1579 * __this, double ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Parse.ParseGeoDistance Parse.ParseGeoPoint::DistanceTo(Parse.ParseGeoPoint)
extern "C" ParseGeoDistance_t1578  ParseGeoPoint_DistanceTo_m7915 (ParseGeoPoint_t1579 * __this, ParseGeoPoint_t1579  ___point, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IDictionary`2<System.String,System.Object> Parse.ParseGeoPoint::ToJSON()
extern "C" Object_t* ParseGeoPoint_ToJSON_m7916 (ParseGeoPoint_t1579 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
