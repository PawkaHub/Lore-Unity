#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhotonPingManager
struct PhotonPingManager_t442;
// Region
struct Region_t443;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.String
struct String_t;

// System.Void PhotonPingManager::.ctor()
extern "C" void PhotonPingManager__ctor_m2029 (PhotonPingManager_t442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPingManager::.cctor()
extern "C" void PhotonPingManager__cctor_m2030 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Region PhotonPingManager::get_BestRegion()
extern "C" Region_t443 * PhotonPingManager_get_BestRegion_m2031 (PhotonPingManager_t442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonPingManager::get_Done()
extern "C" bool PhotonPingManager_get_Done_m2032 (PhotonPingManager_t442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PhotonPingManager::PingSocket(Region)
extern "C" Object_t * PhotonPingManager_PingSocket_m2033 (PhotonPingManager_t442 * __this, Region_t443 * ___region, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonPingManager::ResolveHost(System.String)
extern "C" String_t* PhotonPingManager_ResolveHost_m2034 (Object_t * __this /* static, unused */, String_t* ___hostName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
