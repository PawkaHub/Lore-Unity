#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t2771;
struct CacheIndex_t2771_marshaled;

void CacheIndex_t2771_marshal(const CacheIndex_t2771& unmarshaled, CacheIndex_t2771_marshaled& marshaled);
void CacheIndex_t2771_marshal_back(const CacheIndex_t2771_marshaled& marshaled, CacheIndex_t2771& unmarshaled);
void CacheIndex_t2771_marshal_cleanup(CacheIndex_t2771_marshaled& marshaled);
