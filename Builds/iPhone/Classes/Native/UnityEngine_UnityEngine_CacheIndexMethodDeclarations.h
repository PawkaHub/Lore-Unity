#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t4744;
struct CacheIndex_t4744_marshaled;

void CacheIndex_t4744_marshal(const CacheIndex_t4744& unmarshaled, CacheIndex_t4744_marshaled& marshaled);
void CacheIndex_t4744_marshal_back(const CacheIndex_t4744_marshaled& marshaled, CacheIndex_t4744& unmarshaled);
void CacheIndex_t4744_marshal_cleanup(CacheIndex_t4744_marshaled& marshaled);
