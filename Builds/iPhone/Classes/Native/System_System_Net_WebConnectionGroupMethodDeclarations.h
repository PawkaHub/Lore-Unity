#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebConnectionGroup
struct WebConnectionGroup_t3643;
// System.Collections.Queue
struct Queue_t2385;
// System.Net.ServicePoint
struct ServicePoint_t1357;
// System.String
struct String_t;
// System.Net.WebConnection
struct WebConnection_t3630;
// System.Net.HttpWebRequest
struct HttpWebRequest_t1266;

// System.Void System.Net.WebConnectionGroup::.ctor(System.Net.ServicePoint,System.String)
extern "C" void WebConnectionGroup__ctor_m15922 (WebConnectionGroup_t3643 * __this, ServicePoint_t1357 * ___sPoint, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::GetConnection(System.Net.HttpWebRequest)
extern "C" WebConnection_t3630 * WebConnectionGroup_GetConnection_m15923 (WebConnectionGroup_t3643 * __this, HttpWebRequest_t1266 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionGroup::PrepareSharingNtlm(System.Net.WebConnection,System.Net.HttpWebRequest)
extern "C" void WebConnectionGroup_PrepareSharingNtlm_m15924 (Object_t * __this /* static, unused */, WebConnection_t3630 * ___cnc, HttpWebRequest_t1266 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::CreateOrReuseConnection(System.Net.HttpWebRequest)
extern "C" WebConnection_t3630 * WebConnectionGroup_CreateOrReuseConnection_m15925 (WebConnectionGroup_t3643 * __this, HttpWebRequest_t1266 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Queue System.Net.WebConnectionGroup::get_Queue()
extern "C" Queue_t2385 * WebConnectionGroup_get_Queue_m15926 (WebConnectionGroup_t3643 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
