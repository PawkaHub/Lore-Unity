#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ParticlePlayground.PlaygroundSave
struct PlaygroundSave_t164;
// ParticlePlayground.PlaygroundParticlesC
struct PlaygroundParticlesC_t126;

// System.Void ParticlePlayground.PlaygroundSave::.ctor()
extern "C" void PlaygroundSave__ctor_m775 (PlaygroundSave_t164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.PlaygroundSave::IsLoading()
extern "C" bool PlaygroundSave_IsLoading_m776 (PlaygroundSave_t164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ParticlePlayground.PlaygroundSave::IsSaving()
extern "C" bool PlaygroundSave_IsSaving_m777 (PlaygroundSave_t164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundSave::Load(ParticlePlayground.PlaygroundParticlesC)
extern "C" void PlaygroundSave_Load_m778 (PlaygroundSave_t164 * __this, PlaygroundParticlesC_t126 * ___loadTo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ParticlePlayground.PlaygroundSave::Save(ParticlePlayground.PlaygroundParticlesC)
extern "C" void PlaygroundSave_Save_m779 (PlaygroundSave_t164 * __this, PlaygroundParticlesC_t126 * ___playgroundParticles, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// ParticlePlayground.PlaygroundSave ParticlePlayground.PlaygroundSave::Clone()
extern "C" PlaygroundSave_t164 * PlaygroundSave_Clone_m780 (PlaygroundSave_t164 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
