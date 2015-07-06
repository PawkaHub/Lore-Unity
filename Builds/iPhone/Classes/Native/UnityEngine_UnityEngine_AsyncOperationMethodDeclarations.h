#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t1270;
struct AsyncOperation_t1270_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m16772 (AsyncOperation_t1270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m16773 (AsyncOperation_t1270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m16774 (AsyncOperation_t1270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
extern "C" bool AsyncOperation_get_isDone_m7387 (AsyncOperation_t1270 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t1270_marshal(const AsyncOperation_t1270& unmarshaled, AsyncOperation_t1270_marshaled& marshaled);
void AsyncOperation_t1270_marshal_back(const AsyncOperation_t1270_marshaled& marshaled, AsyncOperation_t1270& unmarshaled);
void AsyncOperation_t1270_marshal_cleanup(AsyncOperation_t1270_marshaled& marshaled);
