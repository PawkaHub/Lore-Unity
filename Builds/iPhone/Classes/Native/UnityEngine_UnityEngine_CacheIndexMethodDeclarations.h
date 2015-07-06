#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t4506;
struct CacheIndex_t4506_marshaled;

void CacheIndex_t4506_marshal(const CacheIndex_t4506& unmarshaled, CacheIndex_t4506_marshaled& marshaled);
void CacheIndex_t4506_marshal_back(const CacheIndex_t4506_marshaled& marshaled, CacheIndex_t4506& unmarshaled);
void CacheIndex_t4506_marshal_cleanup(CacheIndex_t4506_marshaled& marshaled);
