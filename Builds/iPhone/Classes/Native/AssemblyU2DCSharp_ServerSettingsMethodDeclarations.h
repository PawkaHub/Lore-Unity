﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ServerSettings
struct ServerSettings_t452;
// System.String
struct String_t;
// CloudRegionCode
#include "AssemblyU2DCSharp_CloudRegionCode.h"

// System.Void ServerSettings::.ctor()
extern "C" void ServerSettings__ctor_m2079 (ServerSettings_t452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerSettings::UseCloudBestRegion(System.String)
extern "C" void ServerSettings_UseCloudBestRegion_m2080 (ServerSettings_t452 * __this, String_t* ___cloudAppid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerSettings::UseCloud(System.String)
extern "C" void ServerSettings_UseCloud_m2081 (ServerSettings_t452 * __this, String_t* ___cloudAppid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerSettings::UseCloud(System.String,CloudRegionCode)
extern "C" void ServerSettings_UseCloud_m2082 (ServerSettings_t452 * __this, String_t* ___cloudAppid, int32_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ServerSettings::UseMyServer(System.String,System.Int32,System.String)
extern "C" void ServerSettings_UseMyServer_m2083 (ServerSettings_t452 * __this, String_t* ___serverAddress, int32_t ___serverPort, String_t* ___application, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String ServerSettings::ToString()
extern "C" String_t* ServerSettings_ToString_m2084 (ServerSettings_t452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;