#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PhotonPingManager
struct PhotonPingManager_t470;
// Region
struct Region_t471;
// System.Collections.IEnumerator
struct IEnumerator_t74;
// System.String
struct String_t;

// System.Void PhotonPingManager::.ctor()
extern "C" void PhotonPingManager__ctor_m2075 (PhotonPingManager_t470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PhotonPingManager::.cctor()
extern "C" void PhotonPingManager__cctor_m2076 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Region PhotonPingManager::get_BestRegion()
extern "C" Region_t471 * PhotonPingManager_get_BestRegion_m2077 (PhotonPingManager_t470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PhotonPingManager::get_Done()
extern "C" bool PhotonPingManager_get_Done_m2078 (PhotonPingManager_t470 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator PhotonPingManager::PingSocket(Region)
extern "C" Object_t * PhotonPingManager_PingSocket_m2079 (PhotonPingManager_t470 * __this, Region_t471 * ___region, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String PhotonPingManager::ResolveHost(System.String)
extern "C" String_t* PhotonPingManager_ResolveHost_m2080 (Object_t * __this /* static, unused */, String_t* ___hostName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
