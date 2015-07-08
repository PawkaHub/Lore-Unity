#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// HubGui/DemoBtn
struct DemoBtn_t373;
struct DemoBtn_t373_marshaled;

void DemoBtn_t373_marshal(const DemoBtn_t373& unmarshaled, DemoBtn_t373_marshaled& marshaled);
void DemoBtn_t373_marshal_back(const DemoBtn_t373_marshaled& marshaled, DemoBtn_t373& unmarshaled);
void DemoBtn_t373_marshal_cleanup(DemoBtn_t373_marshaled& marshaled);
