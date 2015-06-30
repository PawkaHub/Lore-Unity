#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Consolation.Console/Log
struct Log_t536;
struct Log_t536_marshaled;

void Log_t536_marshal(const Log_t536& unmarshaled, Log_t536_marshaled& marshaled);
void Log_t536_marshal_back(const Log_t536_marshaled& marshaled, Log_t536& unmarshaled);
void Log_t536_marshal_cleanup(Log_t536_marshaled& marshaled);
