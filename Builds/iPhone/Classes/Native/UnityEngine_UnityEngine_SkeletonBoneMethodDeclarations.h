#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t4544;
struct SkeletonBone_t4544_marshaled;

void SkeletonBone_t4544_marshal(const SkeletonBone_t4544& unmarshaled, SkeletonBone_t4544_marshaled& marshaled);
void SkeletonBone_t4544_marshal_back(const SkeletonBone_t4544_marshaled& marshaled, SkeletonBone_t4544& unmarshaled);
void SkeletonBone_t4544_marshal_cleanup(SkeletonBone_t4544_marshaled& marshaled);
