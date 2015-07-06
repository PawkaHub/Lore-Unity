#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t4606;
struct GcScoreData_t4606_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t4618;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t4618 * GcScoreData_ToScore_m17365 (GcScoreData_t4606 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t4606_marshal(const GcScoreData_t4606& unmarshaled, GcScoreData_t4606_marshaled& marshaled);
void GcScoreData_t4606_marshal_back(const GcScoreData_t4606_marshaled& marshaled, GcScoreData_t4606& unmarshaled);
void GcScoreData_t4606_marshal_cleanup(GcScoreData_t4606_marshaled& marshaled);
