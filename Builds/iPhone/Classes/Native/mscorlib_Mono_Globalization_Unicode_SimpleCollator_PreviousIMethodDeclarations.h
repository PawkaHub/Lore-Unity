#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Globalization.Unicode.SimpleCollator/PreviousInfo
struct PreviousInfo_t5191;
struct PreviousInfo_t5191_marshaled;

// System.Void Mono.Globalization.Unicode.SimpleCollator/PreviousInfo::.ctor(System.Boolean)
extern "C" void PreviousInfo__ctor_m19567 (PreviousInfo_t5191 * __this, bool ___dummy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void PreviousInfo_t5191_marshal(const PreviousInfo_t5191& unmarshaled, PreviousInfo_t5191_marshaled& marshaled);
void PreviousInfo_t5191_marshal_back(const PreviousInfo_t5191_marshaled& marshaled, PreviousInfo_t5191& unmarshaled);
void PreviousInfo_t5191_marshal_cleanup(PreviousInfo_t5191_marshaled& marshaled);
