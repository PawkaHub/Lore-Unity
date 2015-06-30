#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
struct PreviousInfo_t3863;
struct PreviousInfo_t3863_marshaled;

// System.Void Mono.Globalization.Unicode.SimpleCollator/PreviousInfo::.ctor(System.Boolean)
extern "C" void PreviousInfo__ctor_m17865 (PreviousInfo_t3863 * __this, bool ___dummy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void PreviousInfo_t3863_marshal(const PreviousInfo_t3863& unmarshaled, PreviousInfo_t3863_marshaled& marshaled);
void PreviousInfo_t3863_marshal_back(const PreviousInfo_t3863_marshaled& marshaled, PreviousInfo_t3863& unmarshaled);
void PreviousInfo_t3863_marshal_cleanup(PreviousInfo_t3863_marshaled& marshaled);
