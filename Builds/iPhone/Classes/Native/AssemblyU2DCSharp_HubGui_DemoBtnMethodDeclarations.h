#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// HubGui/DemoBtn
struct DemoBtn_t345;
struct DemoBtn_t345_marshaled;

void DemoBtn_t345_marshal(const DemoBtn_t345& unmarshaled, DemoBtn_t345_marshaled& marshaled);
void DemoBtn_t345_marshal_back(const DemoBtn_t345_marshaled& marshaled, DemoBtn_t345& unmarshaled);
void DemoBtn_t345_marshal_cleanup(DemoBtn_t345_marshaled& marshaled);
